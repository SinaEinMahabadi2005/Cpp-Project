//برنامه ای بنویسید که تعدادی عدد از کاربر دریافت کند تا زمانی که عدد منفی وارد شود سپس مجموع کلی اعداد و میانگین اعداد فرد را محاسبه و چاپ نماید.
#include<iostream>
using namespace std ;
int main()
{
    int x , sum ,avg , f ;
    sum=avg=0 ;
    cout<<"please enter your numbers:" ;
    cin>>x ;
while (x>0)
{
    sum=sum+x ;
    if (x % 2 != 0)
    {
        avg=avg+x ;
        f++ ;
    }
    cin>>x ;
}
if(f> 0)
{
cout<<"avg is:"<<avg/f<<endl ;
}
cout<<"sum is :"<<sum<<endl ;
return 0;

}
