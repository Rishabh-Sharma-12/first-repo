import java.io.DataInputStream;
import java.util.Scanner;
import java.util.Arrays;
/*class practice{
public static void main(String args[]){

System.out.println("hello");
int numberi=0;
double numberf=0.92;

System.out.println("screen display");
int m;
m=(int)System.in.read("Enter the value of m");
system.out.println("m"+ numberi++);
for(int i=0;i<=10;i++){
    System.out.println(m+"x"+i+ "="+(i*m));
}

}

*/
/*
class pattern{  
    public static void main(String args[]){
        System.out.println("partten");
        for(int i=0;i<10;i++){
            for(int j=0;j<i;j++){
                System.out.print( i +"\t");
            }
        System.out.println();
        }
    }
}
*/
/* 
class arthematic_operations{
    public static void main (String args[]){
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        System.out.println("m="+m);
        System.out.println("n="+n);
        System.out.println("m++="+(m++));
        System.out.println("++m="+(++m));
        System.out.println("n++ ="+n++);
        System.out.println("++n="+(++n));
    }
}*/
/* 
class if_else1{ 
    public static void min(String args[]){
        Scanner fuc=new Scanner(System.in);
        int flag=0;
        int m[]={1,2,3,4,5,6};
        int n=fuc.nextInt();
        for(int i=0;i<=len(m)+1;i++){
            if(m[i]==n){
                flag++;
                System.out.println("Element Found");
            }
        }
    if(flag==0){
        System.out.println("element not found");
    }
    }
}
*/
/* 
class practice{
public static void main(String argd[])
{
int arr[][]={{1,4},{7,1}};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
        System.out.print(arr[i][j]);        
        }
    System.out.print("\n");
    }    
} 
}
*/
class practice{
    //simple intrest
    public static void main(String args[])
    {
        
        double principle;
        double rate;
        double time;
        float si;
      
        principle=10000;
        rate=9;
        time=2;
        
        si=(principle*rate*time)/100;
        System.out.println("the SI of principle"+principle+"and rate"+rate+"% is"+si);
    
    
    }
}