//تابعی بنویسید که دو کارکتر و دو عدد دریافت کند گر دو کارکتر برابر بودند جمع اعداد در غیر این صورت حاصل  ضرب اعداد را بازگرداند و فراخوانی کند
#include<iostream>
using namespace std ;
int exp(char a , char b ,int c , int d)
{
    if (a==b)
    {
    return c+d ;
    }
    else
    {
        return c*d ;
    }
    
}
int main()
{
    char a , b ;
    int c , d ;
    cin>>a>>b>>c>>d ;
    cout<<exp(a , b , c , d) ;
    return 0 ;
}

