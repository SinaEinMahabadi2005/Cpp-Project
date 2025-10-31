//تابعی بنویسید که دو عدد و دو حرف دریافت کند و در صورتی که دو حرف برابر باشد عدد اول را به تعداد عدد دوم چاپ کند در غیر این صورت برعکس عدد دوم را به تعداد عدد اول چاپ کندو سپس برنامه ای بنویسید که تابع فوق را فراخوانی کند
#include<iostream>
using namespace std ;
void exp3(int a ,int b, char c ,char d)
{
    if (c==d)
    {
    for (int i = 0; i < b; i++)
    {
        cout<<a ;
    }
    }
    if (c!=d)
    {
    for (int i = 0; i < a; i++)
    {
        cout<<b ;
    }
    }
}
int main()
{
    cout<<"please enter your numbers and characters:" ;
    int a ,b ;
    char c , d ;
    cin>>a>>b>>c>>d ;
    cout<<"awnser is:" ;
    exp3(a,b,c,d) ;
    return 0 ;

}
