#include <iostream>
using namespace std;
struct date
{
    int y, m, d;
};
struct student
{
    int id;
    char fname[100];
    char lname[150];
    float avg;
    int kh;
    float list[100];
    int p;
    date bd;
};
// تابعی بنویسید که اطلاعات یک دانشجو را تایپ کند
void print(student a)
{
    cout << a.id << a.fname << a.lname << a.avg << a.kh;
    for (int i = 0; i < a.kh; i++)
        cout << a.list[i];
    cout << a.p;
    cout << a.bd.y << a.bd.m << a.bd.d;
}
// برنامه ای بنویسید که اطلاعات یک دانشجو دریافت وچاپ کند
int main()
{
    // student a ;
    //  cin>>a.id>>a.fname>>a.lname>>a.avg>>a.kh ;
    //      for (int i = 0; i < a.kh ; i++)
    //          cin>>a.list[i] ;
    // cin>>a.p ;
    //      cin>>a.bd.y>>a.bd.m>>a.bd.d ;
    //         print(a) ;
    // با استفاده از ساختار و تابع همین سوال اطلاعات ان دانشجو دریافت و چاپ کنید
    student a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id >> a[i].fname >> a[i].lname >> a[i].avg >> a[i].kh;
        for (int j = 0; j < a[i].kh; j++)
            cin >> a[i].list[j];
        cin >> a[i].p;
        cin >> a[i].bd.y >> a[i].bd.m >> a[i].bd.d;
    }
    //     for (int i = 0; i < n ; i++){
    //         cout<<a[i].id<<a[i].fname<<a[i].lname<<a[i].avg<<a[i].kh ;
    // for (int j = 0; j < a[i].kh ; j++)
    //     cout<<a[i].list[j] ;
    //     cout<<a[i].p ;
    //     cout<<a[i].bd.y<<a[i].bd.m<<a[i].bd.d ;
    for (int i = 0; i < n; i++)
        print(a[i]);
    // تعداد نمره دروسی که بالای 17 هستند را محاسبه و چاپ کنید
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < a[i].kh; j++)
            if (a[i].list[j] > 17)
                t++;
    }
    cout << t;
    // برای هر دانشجو میانگین را حساب کنید و در صورتی که با معدل همخوانی ندارد پیغامی در صورت یکسان نبودن چاپ کند یا در صورت عدم تطابق میانگین را با معدل بروزرسانی کنید
    // یا  در صورت عدم تطابق اطلاع رسانی شود و در صورت تایید کاربر بروزرسانی شود
    float newavg = 0;
    float sum = 0;
    char c[30];
    for (int i = 0; i < n; i++)
    {
        newavg = 0;
        sum = 0;
        for (int j = 0; j < a[i].kh; j++)
            sum = sum + a[i].list[j];
        newavg = sum / a[i].kh;
        if (newavg != a[i].avg)
        {
            // الف
            cout << "The calculated average does not match the grade point average";
            // ب
            a[i].avg = newavg;
            // ج
            cout << "The calculated average does not match the grade point average";
            cout << "Do you want your grade to be updated?";
            cin >> c;
            if (c == "yes")
                a[i].avg = newavg;
            else
                cout << "Good luck";
        }
    }
    // اطلاعات دانشجو با بیشترین تعداد واحد پاس شده را محاسبه و چاپ کنید
    student max = a[0];
    for (int i = 0; i < n; i++)
        if (a[i].p > max.p)
            max = a[i];
    print(max);
    return 0;
}