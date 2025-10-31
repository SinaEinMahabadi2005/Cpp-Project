//تابعی بنویسیدکه یک رشته دریافت کند و تعداد یک حرف دریافتی از کاربر را در ان شمارش و بازگرداند و فراخوانی کند
#include<iostream>
#include<string.h>
using namespace std ;
int name(  char a[],  char x){
    int t=0 ;
for (int i = 0; i < strlen(a); i++)
{
    if(a[i]==x)
    t++ ;
}
return t ;
}
int main(){
    char a[100] ;
    char x ;
    cout<<"please enter your name :" ;
    cin>>a ;
    cout<<"please enter your char for search :" ;
    cin>>x ;
   cout<< name(a ,x) ;
   return 0 ;
}
