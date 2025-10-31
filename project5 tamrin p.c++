//تابعی بنویسید که دو کارکتر دریافت کند و مشخص کند ایا باهم برابر هستند یا خیر و سپس برنامه ای بنویسید که تابع فوق را هشت بار فراخوانی کند
#include<iostream>
using namespace std ;
bool exp2(char a , char b)
{
    bool f=false ;
    if (a==b)
    {
        return f=true ;
    }
    else
     {
        return f ;

    }
}
int main() 
{
    cout<<"please enter your characters:" ;
    char a ,b ;
    cin>>a>>b ;
cout<<"awnser is:" ;
    cout<<boolalpha<<exp2(a , b) ;
    return 0 ;
}