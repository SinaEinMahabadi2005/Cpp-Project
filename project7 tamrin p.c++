//برنامه ای بنویسید که نمرات دانشجویان کلاس را دریافت کند و میانگین نمرات و تعداد افتاده ها و تعداد نمرات الف را محاسبه و چاپ کند و چه نمره ای به تمام نمرات اضافه شو تا تمام دانشجویان درس را پاس کنند
#include<iostream>
using namespace std ;
int main()
{
    int a[100] ;
    int sum , fallen , scoreA , n , min , pass ;
    sum=fallen=scoreA=0 ;
    cout<<"please enter the number of students:" ;
    cin>>n ;
    cout<<"please enter the scores:" ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i] ;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 10)
        {
            fallen++ ;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 17)
        {
            scoreA++ ;
        }
    }
    min=a[0] ;
    for (int i = 0; i < n; i++)
    {
       if (a[i] < min)
       {
        min=a[i] ;
       }
    }
    pass=(10- min) ;
    cout<<"avg in the class is:"<<sum/n<<endl<<"fallen in the class is:"<<fallen<<endl<<"score A in the class is:"<<scoreA<<endl<<"pass score:"<<pass ;
    return 0 ;
}