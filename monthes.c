#include<Stdio.h>
int main(){
    int c[30],a[30]={
3484,
3404,
3319,
2984,
2736,
2720,
2620,
2321,
921,
1057,
964,
1343,
973,
888,
258,
550,
237,
4547,
4217,
4118,
3775,
3469,
3021,
2941,
3070,
2925,
2985,
2430,
2260
};
for(int i=0;i<=30;i++){
    for(int j=1;j<=29;j+++){
        c[i]=a[i]-a[j];
    }
}
for(int i=0;i<=30;i++){
printf("%d\n",c[i]);
}
}