//تابعی بنویسید که ان عدد اعشاری دریافت کند به تمام اعداد یک مقدار مشخص تعیین شده توسط کاربر اضافه کند و سپس مشخص کند میانگین ارایه چقدر تغییر کرده است و سپس فراخوانی کنید )با اشارهگر و حافظه پویا
#include<iostream>
using namespace std ;
 float sina(float * a , int n ,float x){
    int sum=0 ;
    int avg1 ;
    int avg2 ;
    int avgt ;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i] ;
    }
avg1=sum/n ;
sum=0 ;
for (int i = 0; i < n; i++)
a[i]=a[i]+x ;
for (int i = 0; i < n; i++)
    {
        sum=sum+a[i] ;
    }
    avg2=sum/n ;
avgt=(avg2-avg1) ;
return avgt ;
 }
 int main(){
    int n ;
    float x ;
    cout<<"Enter the number of houses you want to build:" ;
    cin>>n ;
    float*a=new float [n] ;
    if(!a)
    return 0 ;
    cout<<endl<<"Enter the amount you want to add:" ;
    cin>>x ;
    cout<<endl<<"please enter your numbers:" ;
    for (int i = 0; i < n; i++)
    cin>>a[i] ;
    cout<<"The amount of change in the average presentation:" ;
    cout<<sina(a , n , x) ;
delete [] a ;
return 0 ;
 }