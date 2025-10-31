//قسمت یک:برنامه ای بنویسید که ان عدد از کاربر دریافت کند سپس کلیه اعداد را چاپ کند
#include<iostream>
using namespace std ;
int main()
{
    int n ;
    int a[100] ;
    cout<<"please enter n :" ;
    cin>>n ;
    cout<<"please enter your nembers:" ;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i] ;
    }
    cout<<"number is:" ;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ' ;
    }
    cout<<endl ;
    //قسمت دوم: حداکثر و حداقل ان عدد را محاسبه و چاپ کند
    int max , min ;
    max=min=a[0] ;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max=a[i] ;
        }
        if (a[i] < min)
        {
            min=a[i] ;
        }
    }
    cout<<"max is :"<<max<<endl<<"min is:"<<min<<endl ;
    //قسمت سوم:مجموع میانگین و حاصل ضرب اعداد را محاسبه و چاپ کند
    int sum , mul ;
    sum=0 ;
    mul=1 ;
for (int i = 0; i < n; i++)
{
    sum=sum+a[i] ;
    mul=mul*a[i] ;
}
cout<<"sum is :"<<sum<<endl<<"mul is :"<<mul<<endl<<"avrage is :"<<sum/n<<endl ;

//قسمت چهارم: ارایه را از انتها به ابتدا چاپ کند
cout<<"n invers:" ;
for (int i =n-1; i >= 0; i--)
{
    cout<<a[i]<<' ' ;

}
cout<<endl ;
//قسمت پنجم: یک عدد از کاربر دریافت کند و مشخص کند ایا ذر ارایه وجود دارد یا خیر
int v ;
bool f=false ;
cout<<"please enter your number for search :" ;
cin>> v ;
for (int i = 0; i < n; i++)
{
    if (a[i]== v)
    {
        f=true ;
    }
}
cout<<"search is :"<<boolalpha<<f<<endl ;
//قسمت ششم:تعداد و میانگین اعداد فرد و مضارب پنج موجود در ارایه را محاسبه و چاپ کنید
int sumf , ph ;
sumf=ph=0 ;
for (int i = 0; i < n; i++)
{
if (a[i] % 2 != 0)
{
    sumf=sumf+a[i] ;
    ph++ ;
}
}
cout<<"odd number is:"<<ph<<endl<<"avrage odd  :"<<sumf/ph<<endl ;
cout<<" mul 5 is :" ;
for (int i = 0; i < n; i++)
{
    if (a[i] % 5 == 0)
    {
        cout<<a[i]<<' ' ;
    }
}
cout<<endl ;
//قسمت هفتم: عناصر زوج موجود در ارایه را چاپ کنید

cout<<"even  is :" ;
for (int i = 0; i < n; i++)
{
    if (a[i] % 2== 0)
    {
        cout<<a[i]<<' ' ;
    }
}
cout<<endl ;
//قسمت هشتم: یک عدد از کاربر دریافت کند و مشخص کنید چند بار در ارایه تکرار شده است
int repetion , repeat  ;
cout<<"enter the number you want to find the number of times it occurs :" ;
cin>>repeat ;
for (int i = 0; i < n; i++)
{
    if (a[i]== repeat)
    {
        repetion++ ;
    }
}
cout<<"repeat in arrye :"<<repetion<<endl ;
cout<<"Good luck buddy" ;
return 0 ;
}






