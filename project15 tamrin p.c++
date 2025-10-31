//تابعی بنویسید که ان کارکتر دریافت کند تعداد حروف بزرگ ای بی سی دی ای اف جی را بشمارد - تابعی بنویسید که ان عدد اعشاری دریافت کندمیانگین و میانگین اعداد مثبت را باز گرداند و تمام اعداد منفی را قرینه کند
#include<iostream>
using namespace std ;
void count(char a[] , int n , int & A , int  & B , int & C ){
    A=B=C=0 ;
    for (int i = 0; i < n; i++)
    {
      switch (a[i])
      {
      case 'A': A++ ;
      break;
      case 'B' : B++ ;
      break;
      case 'C': C++ ;
      break;
    
      }
    }
}
void count1(char a[] , int n , int & D , int  & E , int & F ,int & G ){
    D=E=F=G=0 ;
    for (int i = 0; i < n; i++)
    {
      switch (a[i])
      {
      case 'D': D++ ;
      break;
      case 'E' : E++ ;
      break;
      case 'F': F++ ;
      break;
      case 'G': G++ ;
      break;
      }
    }
}

void number(float w[] , int n , float & avg , float & avgp ){
    avg=avgp=0 ;
    for (int i = 0; i < n; i++)
    {
       avg=avg+w[i] ;
       if (w[i]>0)
       {
       avgp=avgp+w[i] ;
       }
       w[i]=w[i]*-1 ;
    }
   avg=avg/n ;
   avgp=avgp/n ; 
}
void print( float w[] , int n){
    for (int i = 0; i < n; i++) 
            cout<<w[i] ;
}
int main(){
    int n,A,B,C ,D , E , F , G;
    char a[1000] ;
    cout<<"Please enter the number of characters :" ;
    cin>>n ;
    cout<<"Please enter the letters to count :" ;
    for (int i = 0; i < n; i++)
    cin>>a[i] ;
    count(a , n ,A , B ,C);
    cout<<"Number of letters A in entered numbers :"<<A<<endl<<"Number of letters B in entered numbers :"<<B<<endl<<"Number of letters C in entered numbers :"<<C<<endl ;
count1(a , n , D , E , F , G) ;
cout<<"Number of letters D in entered numbers :"<<D<<endl<<"Number of letters E in entered numbers :"<<E<<endl<<"Number of letters F in entered numbers :"<<F<<endl<<"Number of letters G in entered numbers :"<<G<<endl ;
float w[1000] ;
float avg , avgp ;
cout<<"Please enter the number of numbers to calculate the average :" ; 
cin>>n ;
cout<<"Please enter the numbers to calculate the average :" ;
for (int i = 0; i < n; i++)
cin>>w[i] ;
number(w , n ,avg , avgp) ;
cout<<"Average of the numbers entered:"<<avg<<endl<<"Average of positive numbers entered:"<<avgp<<endl ;
cout<<"Numbers after symmetry :" ;
print(w , n) ;
return 0 ;
}