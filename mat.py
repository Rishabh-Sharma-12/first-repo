import pandas as pd
import matplotlib.pyplot as plt

df = pd.read_csv('sample_FileB5.csv')
df = df[df['PubYear'].isin(range(2010, 2016))]

country_counts = df.groupby('Country of Research organization')['PubYear'].count().sort_values(ascending=False)

top_countries = country_counts.head(5).index.tolist()

result_df = pd.DataFrame(columns=['Year'] + top_countries)

for year in range(2010, 2016):
    year_df = df[(df['PubYear'] == year) & (df['Country of Research organization'].isin(top_countries))]

    country_counts = year_df.groupby('Country of Research organization')['PubYear'].count()

    total_count = country_counts.sum()
    row = [year] + [(count/total_count)*100 for count in country_counts]
    result_df.loc[len(result_df)] = row

result_df.set_index('Year', inplace=True)
result_df.plot(kind='bar', stacked=True, title='Top 5 Productive Countries by Publication Share (2010-2015)', figsize=(10, 6))
plt.xlabel('Year')
plt.ylabel('Publication Share (%)')
plt.show()
"""
import pandas as pd
import matplotlib.pyplot as plt
count2010=0
count2011=0
count2012=0
count2013=0
count2014=0
count2015=0
df = pd.read_csv('Sample_FileB5.csv', low_memory=False)
s=df['PubYear']
for i in s:
    if(i==2010):
        count2010+=1
    elif(i==2011):
        count2011+=1
    if(i==2012):
        count2012+=1
    elif(i==2013):
        count2013+=1
    if(i==2014):
        count2014+=1
    elif(i==2015):
        count2015+=1
print("publications in 2010",count2010)
print("publications in 2011",count2011)
print("publications in 2012",count2012)
print("publications in 2013",count2013)
print("publications in 2014",count2014)
print("publications in 2015",count2015)
Tp=[count2010,count2011,count2012,count2013,count2014,count2015]

series  = pd.Series(Tp, index=("2010", "2011", "2012", "2013","2014","2015"));

series.plot.line(title="Publications");

plt.show(block=True);
"""