//برنامه ای بنویسید که ان عدد از کاربر دریافت کند و مجموع مضارب پنج و میانگین اعداد زوج محاسبه و چاپ کند
#include<iostream>
using namespace std ;
int main() 
{
    int n , summul5 , sum , x , z;
    sum=summul5=0 ;
    cout<<"enter n:" ;
    cin>>n ;
    cout<<"enter numbers:" ;
    for (int i = 0; i < n; i++)
    {
        cin>> x ;
        if (x%5==0)
        {
            summul5=summul5+x ;
        }
        if (x%2==0)
        {
            sum=sum+x ;
            z++ ;
        }
    }
    cout<<"mul5 is:"<<summul5<<endl<<"avg is:"<<sum/z ;
    return 0 ;
}