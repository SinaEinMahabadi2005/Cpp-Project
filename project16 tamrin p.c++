//تابعی بنویسید که ان کارکتر دریافت کند تعداد نقطه را محاسبه کند و تمامی علامت تعجب هارا به علامت سوال تبدیل کند.تابعی بنویسید که میزان بارندگی در ان روز را دریافت کند و میانگین بارش و حداکثر میزان بارندگی را مشخص کند و در چه روزی کمترین میزان بارش را داشته است و هر دو برنامه را فراخوانی کنید
#include<iostream>
using namespace std ;
int dot(char a[] , int n){
   int dot=0 ;
   for (int i = 0; i < n; i++)
   {
   if (a[i]=='.')
   {
          dot++ ;
   }
   if (a[i]=='!')
   {
         a[i]='?' ;
   }
   }
   return dot ;
}
void rainy(int b[] , int nn , int & rainyavg, int & rainymax , int  & minday){
    int min=b[0] ;
     int sum=0 ;
     rainymax=b[0] ;
    for (int i = 0; i < nn; i++){
       sum=sum+b[i] ;
if (rainymax < b[i])
{
    rainymax=b[i] ;
}
if (min > b[i])
{
    minday=(i+1) ;
}
    }
    rainyavg=sum/nn ;
}
void print(char a[] , int n){
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ' ;
    }
    
}
int main(){
    char a[100] ;
    int n ;
    cout<<"Please enter the number of characters :" ;
    cin>>n ;
    cout<<endl<<"Please enter the characters :" ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i] ;
    }
    cout<<"Number of dots in received characters:"<<dot(a , n)<<endl ;
    cout<<"Replacing exclamation marks and question marks in entered characters :"<<endl ;
    print(a , n) ;
       int b[100] ;
       int nn ,rainyavg , rainymax , minday ;
       cout<<endl<<"Please enter the number of days:" ;
       cin>>nn ;
       cout<<endl<<"Please enter the rainfall amount:" ;
       for (int i = 0; i < n; i++)
       {
           cin>>b[i] ;
       }
       rainy(b , nn , rainyavg , rainymax , minday) ;
       cout<<"Average rainfall on the days entered:"<<rainyavg<<endl<<"Maximum amount of precipitation :"<<rainymax<<endl<<"The day when the least precipitation occurred :"<<minday ;
       return 0 ;
    
}