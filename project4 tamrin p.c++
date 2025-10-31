//تابعی بنویسید که دو عدد ای و بی را دریافت کند و حاصل ای به توان بی را محاسبه کند و سپس برنامه ای بنویسید که تابع فوق را فراخوانی کند
#include<iostream>
#include<math.h>
using namespace std ;
float power(int a, int b)
{
    float p=1 ;
    if( b > 0)
    {
for (int i = 0; i < b; i++)
{
p=p*a ;
}
    }
    if (b < 0)
    {
        for (int i = 0; i > b; i--)
        {
        p=p*a ;
        }
        p=(1/p) ;
    }
    
return p ;
}
int main() 
{
    cout<<"please enter your nembers:" ;
    int a, b ;
    cin>>a>>b ;
    cout<<"power is:" ;
    cout<<power(a , b) ;
    return 0 ;
}
