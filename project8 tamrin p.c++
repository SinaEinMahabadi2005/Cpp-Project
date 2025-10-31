//تابعی بنویسید که طول و عرض مستطیل را دریافت کند و محیط و مساحت ان را بازگرداند و برنامه ای بنویسید که تابع فوق را فراخوانی کند
#include<iostream>
using namespace std ;
int compute1(int x , int y , int & p)
{
    p=(x+x+y+y) ;
    return x*y ;
}
// void compute2(int x , int y , int & p , int & s)
// {
//     p=x+x+y+y ;
//     s=x*y ;
// }
int main()
{
    int x , y , p , s ;
    cin>>x>>y ;
     s=compute1(x , y , p) ;
    cout<<s<<p ;
    // compute2(x , y , p , s) ;
    // cout<<p<<s ;
    return 0 ;
}
