1. Go to the official Python website (https://www.python.org/) and download the latest version of Python.

Once the download is complete, run the installer and follow the instructions to complete the installation process.

After installation, open IDLE (Integrated Development and Learning Environment), which is a default Python editor.

In IDLE, you can work in two modes: scripting mode and interactive mode.

In scripting mode, you can write and execute a group of statements as a
script. You can create a new script by selecting "File" -> "New File" in
IDLE, then write your Python code, save it with a .py extension, and run
it by selecting "Run" -> "Run Module" or by pressing F5.

In interactive mode, you can execute Python statements one at a time and
see the results immediately. You can access the interactive mode by
selecting "File" -> "New Window" in IDLE, then typing Python statements
and pressing "Enter" to execute them.

The main difference between scripting and interactive modes is that in
scripting mode, you write a complete program and execute it, while in
interactive mode, you execute statements one at a time and see the
results immediately.

Interactive mode is useful for testing small pieces of code or exploring
the capabilities of Python, while scripting mode is useful for writing
larger programs.

2. a) print("Hello Everyone !!!")
   b) print("Hello")
      print("world")
   c)print("1 Hello\n\tWorld")
   d)print("Ayuish's date of birth is 14\\07\\2002")

3.  x = "Hello"
print(x)

4. num = 10
pi = 3.14
name = "Ruder pratap"
is_student = True

print("The value of num is:", num)
print("The value of pi is:", pi)
print("The value of name is:", name)
print("The value of is_student is:", is_student)

5. a = "ruder"8
   b = "pratap"

  full_name = a + " " + b

  print("My name is:", full_name)

6. first_name = "George"
   last_name = "Washington"
   nickname = "woody"

  print(first_name, "(", nickname, ")", last_name)

7. name = "Ayuish Yadav"
   sap_id = 500111780
   dob = "14 July 2002"
   address = "Rewari (Haryana)"
   pincode = 123401
   programme = "CSE"
   semester = 2

   print("NAME :", name)
   print("SAP ID :", sap_id)
   print("DATE OF BIRTH :", dob)
   print("ADDRESS :", address)
   print("Pincode :", pincode)
   print("Programme :", programme)
   print("Semester :", semester)



PRACTICAL NO. 2


1. x = 9
   y = 7
   z = 0

   z = x + y
   print("Addition Result:", z)

   z = x * y
   print("Multiplication Result:", z)

   z = x / y
   print("Division Result:", z)

   z = x - y
   print("Subtraction Result:", z)

2. radius = float(input("Enter the radius of the circle: "))

   area = 3.14 * radius ** 2

   print("The area of the circle is:", area)


3. x = 4
   y = 3

   result = (x + y) * (x + y)

   print("Result:", result)

4. leg1 = float(input("Enter the length of the first leg: "))
   leg2 = float(input("Enter the length of the second leg: "))

   hypotenuse = (leg1 ** 2 + leg2 ** 2) ** 0.5

   print("The length of the hypotenuse is:", hypotenuse)

5. principal = float(input("Enter the principal amount: "))
   rate = float(input("Enter the rate of interest: "))
   time = float(input("Enter the time period (in years): "))

   simple_interest = (principal * rate * time) / 100

   print("The simple interest is:", simple_interest)

6. import math

   a = float(input("Enter the length of side a: "))
   b = float(input("Enter the length of side b: "))
   c = float(input("Enter the length of side c: "))

   s = (a + b + c) / 2

   area = math.sqrt(s * (s - a) * (s - b) * (s - c))

   print("The area of the triangle is:", area)

7.  seconds = int(input("Enter the number of seconds: "))

    hours = seconds // 3600
    seconds %= 3600
    minutes = seconds // 60
    seconds %= 60

    print("The duration is: {} hours, {} minutes, and {} seconds".format(hours, minutes, seconds))

8.  a = float(input("Enter the first number: "))
    b = float(input("Enter the second number: "))

    a = a + b
    b = a - b
    a = a - b

    print("After swapping, the first number is:", a)
    print("After swapping, the second number is:", b)

9.  n = int(input("Enter the value of n: "))

   sum = (n * (n + 1)) // 2

   print("The sum of the first", n, "natural numbers is:", sum)

10.  def print_truth_table(operator):
    print("x\ty\tx {} y".format(operator.__name__))
    print("-" * 22)
    for x in [0, 1]:
        for y in [0, 1]:
            result = operator(x, y)
            print("{}\t{}\t{}".format(x, y, result))

   print("Truth table for the bitwise AND operator (&):")
   print_truth_table(lambda x, y: x & y)
   print()

   print("Truth table for the bitwise OR operator (|):")
   print_truth_table(lambda x, y: x | y)
   print()

   print("Truth table for the bitwise XOR operator (^):")
   print_truth_table(lambda x, y: x ^ y)

11. num = int(input("Enter the number: "))
   shift = int(input("Enter the shift amount: "))

   left_shift = num << shift
   right_shift = num >> shift

   print("The left shift value of", num, "by", shift, "bits is:", left_shift)
   print("The right shift value of", num, "by", shift, "bits is:", right_shift)

12. sequence = (10, 20, 56, 78, 89)

   num = int(input("Enter a number: "))

   if num in sequence:
        print(num, "is in the sequence.")
   else:
        print(num, "is not in the sequence.")

13. string = input("Enter a string: ")
    char = input("Enter a character: ")

    if char in string:
        print(char, "is in the string.")
    else:
        print(char, "is not in the string.")



PRACTICAL NO.3



1. num = int(input("Enter a number: "))

   if num % 3 == 0 and num % 5 == 0:
       print(num, "is divisible by both 3 and 5.")
   else:
       print(num, "is not divisible by both 3 and 5.")

2. num = int(input("Enter a number: "))

   if num % 5 == 0:
       print(num, "is a multiple of 5.")
   else:
       print(num, "is not a multiple of 5.")

3. num1 = float(input("Enter the first number: "))
   num2 = float(input("Enter the second number: "))

   if num1 > num2:
       print(num1, "is the greatest.")
   elif num2 > num1:
       print(num2, "is the greatest.")
   else:
       print("Numbers are equal.")

4. num1 = float(input("Enter the first number: "))
   num2 = float(input("Enter the second number: "))
   num3 = float(input("Enter the third number: "))

   if num1 > num2 and num1 > num3:
       print(num1, "is the greatest.")
   elif num2 > num1 and num2 > num3:
       print(num2, "is the greatest.")
   else:
       print(num3, "is the greatest.")

5. import math

a = float(input("Enter the coefficient of x^2: "))
b = float(input("Enter the coefficient of x: "))
c = float(input("Enter the constant term: "))

discriminant = b**2 - 4*a*c

if discriminant > 0:
    root1 = (-b + math.sqrt(discriminant)) / (2*a)
    root2 = (-b - math.sqrt(discriminant)) / (2*a)
    print("The quadratic equation has two real roots:")
    print("Root 1:", root1)
    print("Root 2:", root2)
elif discriminant == 0:
    root = -b / (2*a)
    print("The quadratic equation has one real root:")
    print("Root:", root)
else:
    print("The quadratic equation has no real roots.")


6.  year = int(input("Enter a year: "))

if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
    print(year, "is a leap year.")
else:
    print(year, "is not a leap year.")


7. date = input("Enter a date in the format dd/mm/yyyy: ")

day, month, year = map(int, date.split('/'))

if month in [4, 6, 9, 11]:
    days_in_month = 30
elif month == 2:
    if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
        days_in_month = 29
    else:
        days_in_month = 28
else:
    days_in_month = 31

if day == days_in_month:
    day = 1
    if month == 12:
        month = 1
        year += 1
    else:
        month += 1
else:
    day += 1

next_date = '{:02d}/{:02d}/{:04d}'.format(day, month, year)
print("The next date is:", next_date)


8.   name = input("Enter student name: ")
roll_number = input("Enter roll number: ")
sapid = input("Enter SAP ID: ")
sem = input("Enter semester number: ")
course = input("Enter course name: ")
subject_marks = {}

for i in range(5):
    subject = input("Enter subject name: ")
    marks = int(input("Enter marks for {}: ".format(subject)))
    subject_marks[subject] = marks

total_marks = sum(subject_marks.values())
percentage = round((total_marks / 500) * 100, 2)

cgpa = round(percentage / 10, 1)

if cgpa < 3.5:
    grade = "F"
elif cgpa < 5.1:
    grade = "C+"
elif cgpa < 6.1:
    grade = "B"
elif cgpa < 7.1:
    grade = "B+"
elif cgpa < 8.1:
    grade = "A"
elif cgpa < 9.1:
    grade = "A+"
else:
    grade = "O (Outstanding)"

print("\nGrade Sheet")
print("Name: {}".format(name))
print("Roll Number: {}".format(roll_number))
print("SAP ID: {}".format(sapid))
print("Semester: {}".format(sem))
print("Course: {}".format(course))
print("Subject\t\tMarks")
for subject, marks in subject_marks.items():
    print("{}\t\t{}".format(subject, marks))
print("Total\t\t{}".format(total_marks))
print("Percentage\t{}%".format(percentage))
print("CGPA\t\t{}".format(cgpa))
print("Grade\t\t{}".format(grade))




PRACTICAL NO.4


1. num = int(input("Enter a number: "))
factorial = 1

if num < 0:
    print("Factorial cannot be found for negative numbers")
elif num == 0:
    print("Factorial of 0 is 1")
else:
    for i in range(1, num + 1):
        factorial *= i
    print("Factorial of", num, "is", factorial)

2. num = int(input("Enter a number: "))
sum = 0
temp = num
n = len(str(num))

while temp > 0:
    digit = temp % 10
    sum += digit ** n
    temp //= 10

if num == sum:
    print(num, "is an Armstrong number")
else:
    print(num, "is not an Armstrong number")


3. n = int(input("Enter the number of terms: "))

a, b = 0, 1

if n <= 0:
    print("Invalid input")
elif n == 1:
    print(a)
else:
    print("Fibonacci series:")
    print(a, b, end=" ")
    for i in range(2, n):
        c = a + b
        print(c, end=" ")
        a = b
        b = c

4. num = int(input("Enter a number: "))

if num > 1:
    for i in range(2, num):
        if (num % i) == 0:
            print(num, "is not a prime number")
            break
    else:
        print(num, "is a prime number")
else:
    print(num, "is not a prime number")


5. num = input("Enter a number: ")

if num == num[::-1]:
    print(num, "is a palindrome number")
else:
    print(num, "is not a palindrome number")

6. num = int(input("Enter a number: "))
sum = 0

while num > 0:
    digit = num % 10
    sum += digit
    num //= 10

print("The sum of digits is:", sum)


7. count = 0

for i in range(1, 101):
    if i % 5 == 0 or i % 7 == 0:
        print(i)
        count += 1

print("Total count:", count)


8.  string = "Ruder pratap"
upper_string = string.upper()

print("Original string:", string)
print("String in upper case:", upper_string)


9. for i in range(2, 101):
    prime = True
    for j in range(2, i):
        if i % j == 0:
            prime = False
            break
    if prime:
        print(i)
10.  num = int(input("Enter a number: "))

for i in range(1, 11):
    print(num, "*", i, "=", num*i)




PRACTICAL NO.5


1.  string = input("Enter a string: ")
count = 0

for char in string:
    if char.isupper():
        count += 1
        
print("Number of capital letters in the string:", count)


2. string = input("Enter a string: ")
vowels = "aeiouAEIOU"
count = 0

for char in string:
    if char in vowels:
        count += 1

print("Total number of vowels in the string:", count)

3. sentence = input("Enter a sentence: ")

words = sentence.split()

for word in words:
    print(word)

4. string = input("Enter a string: ")
substring = input("Enter a substring: ")

count = 0
start = 0

while True:
    index = string.find(substring, start)
    if index == -1:
        break
    count += 1
    start = index + 1

print("The substring", substring, "occurs", count, "times in the string", string)


5. str_input = input("Enter a string: ")
str_input = str_input.lower()
alphabet_count = {}

for char in str_input:
    if char.isalpha():
        if char in alphabet_count:
            alphabet_count[char] += 1
        else:
            alphabet_count[char] = 1

for key, value in alphabet_count.items():
    print(key, ":", value)

6. sentence = input("Enter a sentence: ")

words = sentence.lower().split()
num_unique_words = len(set(words))

print("Number of unique words:", num_unique_words)

7. n = int(input("Enter the number of fruits: "))

s1 = set()
print("Enter", n, "fruits for set s1:")
for i in range(n):
    s1.add(input())

s2 = set()
print("Enter", n, "fruits for set s2:")
for i in range(n):
    s2.add(input())

common_fruits = s1.intersection(s2)
print("Fruits which are in both sets s1 and s2:", common_fruits)

unique_fruits_s1 = s1.difference(s2)
print("Fruits only in s1 but not in s2:", unique_fruits_s1)

total_fruits = len(s1) + len(s2)
print("Count of all fruits from s1 and s2:", total_fruits)

8.  S1 = {"Red", "yellow", "orange", "blue"}
S2 = {"violet", "blue", "purple"}

print("S1 = ", S1)
print("S2 = ", S2)

print("Union of S1 and S2:", S1.union(S2))

print("Intersection of S1 and S2:", S1.intersection(S2))

print("Difference of S1 and S2:", S1.difference(S2))

print("Symmetric difference of S1 and S2:", S1.symmetric_difference(S2))

print("Is S2 a subset of S1?", S2.issubset(S1))
print("Is S1 a superset of S2?", S1.issuperset(S2))



PRACTICAL NO.6



1.Scan n values in range 0-3 and print the number of times each value has occurred.
n = int(input("Enter the number of values you want to scan: "))

count = [0, 0, 0, 0]

for i in range(n):
    num = int(input("Enter a value between 0 and 3: "))
    count[num] += 1

print("Occurrences of 0:", count[0])
print("Occurrences of 1:", count[1])
print("Occurrences of 2:", count[2])
print("Occurrences of 3:", count[3])

2.Create a tuple to store n numeric values and find average of all values.
n = int(input("Enter the number of values to store in the tuple: "))

values = ()

for i in range(n):
    value = float(input("Enter a numeric value: "))
    values += (value,)

average = sum(values) / len(values)

print("The average of the values is:", average)

3.WAP to input a list of scores for N students in a list data type. Find the score of the runner-upand print the output.
N = int(input("Enter the number of students: "))

scores = []

for i in range(N):
    score = int(input("Enter the score of student {}: ".format(i+1)))
    scores.append(score)

scores.sort(reverse=True)

runner_up_score = 0
for score in scores:
    if score < max(scores):
        runner_up_score = score
        break

print("The score of the runner-up is:", runner_up_score)

4.Create a dictionary of n persons where key is name and value is city.
a) Display all names b) Display all city names c) Display student name and city of all students. d) Count number of students in each city
n = int(input("Enter the number of persons: "))

persons = {}

for i in range(n):
    name = input("Enter the name of person {}: ".format(i+1))
    city = input("Enter the city of person {}: ".format(i+1))
    persons[name] = city

print("All names:")
for name in persons.keys():
    print(name)

print("\nAll city names:")
for city in persons.values():
    print(city)

print("\nStudent name and city of all students:")
for name, city in persons.items():
    print(name, "lives in", city)

city_counts = {}
for city in persons.values():
    if city in city_counts:
        city_counts[city] += 1
    else:
        city_counts[city] = 1
print("\nNumber of students in each city:")
for city, count in city_counts.items():
    print(city, ":", count)

5. Store details of n movies in a dictionary by taking input from the user. Each movie must storedetails like name, year, director name, production cost, collection made (earning) & perform the following :-
a) print all movie detailsb) display name of movies released before 2015c) print movies that made a profit.d) print movies directed by a particular director
n = int(input("Enter the number of movies: "))
movies = {}

for i in range(n):
    name = input("Enter movie name: ")
    year = int(input("Enter year of release: "))
    director = input("Enter director name: ")
    cost = float(input("Enter production cost: "))
    earnings = float(input("Enter collection made: "))
    movies[name] = {'year': year, 'director': director, 'cost': cost, 'earnings': earnings}

print("All movie details:")
for name, details in movies.items():
    print(name, details)

print("Movies released before 2015:")
for name, details in movies.items():
    if details['year'] < 2015:
        print(name)

print("Movies that made a profit:")
for name, details in movies.items():
    if details['earnings'] > details['cost']:
        print(name)

director = input("Enter director name to search: ")
print(f"Movies directed by {director}:")
for name, details in movies.items():
    if details['director'] == director:
        print(name)






PRACTICAL NO.7



1.
def find_max_min(seq):
    max_num = seq[0]
    min_num = seq[0]
    
    for num in seq:
        if num > max_num:
            max_num = num
        if num < min_num:
            min_num = num
            
    return (max_num, min_num)
seq = [1, 3, 5, 2, 4, 6]
max_num, min_num = find_max_min(seq)
print("Maximum number:", max_num)
print("Minimum number:", min_num)


2.
def sum_of_cubes(n):
    sum = 0
    for i in range(1, n):
        sum += i**3
    return sum
n = 5
result = sum_of_cubes(n)
print("The sum of the cubes of all positive integers smaller than", n, "is:", result)

3. 
def print_numbers(n):
    if n > 1:
        print_numbers(n-1)
    print(n)

4.
def fibonacci(n):
    if n <= 0:
        return []
    elif n == 1:
        return [0]
    elif n == 2:
        return [0, 1]
    else:
        fib_seq = fibonacci(n-1)
        fib_seq.append(fib_seq[-1] + fib_seq[-2])
        return fib_seq
n = 10
fib_seq = fibonacci(n)
print("The Fibonacci sequence up to", n, "terms is:", fib_seq)

5
cone_volume = lambda r,h: (1/3) * 3.14159 * r**2 * h
radius = 5
height = 10
volume = cone_volume(radius, height)
print("The volume of a cone with radius", radius, "and height", height, "is", volume)

6.
max_min_tuple = lambda lst: (max(lst), min(lst))
numbers = [10, 6, 8, 90, 12, 56]
max_min = max_min_tuple(numbers)
print("The maximum and minimum values in the list", numbers, "are", max_min)

7.
a. Keyword Argument
def print_info(name, age, city='Unknown'):
    print("Name:", name)
    print("Age:", age)
    print("City:", city)

print_info(name='John', age=30, city='New York')
b. Default Argument
def greet(name, greeting='Hello'):
    print(greeting, name)

greet('John')

greet('Jane', 'Hi')
c. Variable length argument
def multiply(*args):
    result = 1
    for arg in args:
        result *= arg
    return result

print(multiply(2, 3))
print(multiply(2, 3, 4))



PRACTICAL NO. 8

1]a.
with open('name.txt', 'r') as file:
    count = len(file.readlines())
print(count)
b.
with open('name.txt', 'r') as file:
    names = file.readlines()

count = 0
for name in names:
    if name[0].lower() in ['a', 'e', 'i', 'o', 'u']:
        count += 1

print(count)
c.
with open('name.txt', 'r') as file:
    names = file.readlines()

count = 0
for name in names:
    if name[0].lower() in ['a', 'e', 'i', 'o', 'u']:
        count += 1

print(count)
2]a.
with open('numbers.txt', 'r') as file:
    numbers = [int(x) for x in file.readlines()]

max_num = max(numbers)
print(max_num)
b.
with open('numbers.txt', 'r') as file:
    numbers = [int(x) for x in file.readlines()]

average = sum(numbers) / len(numbers)
print(average)
c.
with open('numbers.txt', 'r') as file:
    numbers = [int(x) for x in file.readlines()]

count = 0
for num in numbers:
    if num > 100:
        count += 1

print(count)
3]a.
with open('city.txt', 'r') as file:
    cities = file.readlines()

for city in cities:
    name, population, area = city.split()
    print(name, population, area)
b.
with open('city.txt', 'r') as file:
    cities = file.readlines()

for city in cities:
    name, population, area = city.split()
    if float(population) > 10:
    print(name)
c.
try:
    with open("city.txt", "r") as file:
        total_area = 0

        for line in file:
            components = line.strip().split()
            
            area = float(components[2])

            total_area += area

        print("Sum of areas of all cities:", total_area)
except FileNotFoundError:
    print("File not found.")

4.   try:
    n = int(input("Enter the number of test cases: "))
    for i in range(n):
        a, b = map(int, input("Enter two space-separated values of a and b: ").split())
        print(a // b)
except ValueError:
    print("Invalid input. Please enter integers only.")
except ZeroDivisionError:
    print("Division by zero is not allowed.")

5.  a.FileNotFoundError: Raised when a file does not exist or cannot be found.
b.PermissionError: Raised when you do not have sufficient permissions to access a file.
c.IOError: Raised when an input/output operation fails.
d.ValueError: Raised when an invalid value is encountered.
e.TypeError: Raised when an operation or function is applied to an object of inappropriate type.
f.UnicodeDecodeError: Raised when there is an error decoding a Unicode-encoded file.
g.EOFError: Raised when there is an attempt to read past the end of a file.
h.KeyboardInterrupt: Raised when the user interrupts the program by pressing the interrupt key.

        


