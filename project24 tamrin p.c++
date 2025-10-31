// ساختاری برای نگهداری اطلاعات یک کلاس درس شامل نام درس ونام استاد و لیست نمرات وتعداد دانشجو وتاریخ امتحان طراحی کنید
#include <iostream>
using namespace std;
struct date
{
    int y, m, d;
};
struct class1
{
    char name[100];
    char teacher[150];
    int number;
    float list[100];
    date th;
};

// تابعی که اطلاعات یک کلاس را دریافت و چاپ کند
void print(class1 a)
{
    cout << endl
         << a.name << endl
         << a.teacher << endl
         << a.number << endl;
    for (int i = 0; i < a.number; i++)
        cout << a.list[i];
    cout << endl
         << a.th.y << endl
         << a.th.m << endl
         << a.th.d;
}
// برنامه ای بنویسید که ان کلاس دریافت کند و تعداد کلاس هایی که بالای 20 دانشجو و تاریخ امتحان انها امسال است را چاپ کند
int main()
{
    class1 a[100];
    int n;
    cin >> n;
    int t = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].teacher >> a[i].number;
        for (int j = 0; j < a[i].number; j++)
            cin >> a[i].list[j];
        cin >> a[i].th.y >> a[i].th.m >> a[i].th.d;
    }
    for (int i = 0; i < n; i++)
        if (a[i].number > 20 && a[i].th.y == 1404)
            t++;
    cout << t;
    // اطلاعات کلاس با بیشترین دانشجو و میانگین نمرات محاسبه و چاپ کند
    class1 max = a[0];
    float summax = 0;
    float avgmax;
    float sum = 0;
    float avg;
    for (int i = 0; i < max.number; i++)
        summax = summax + max.list[i];
    avgmax = summax / max.number;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        avg = 0;
        for (int j = 0; j < a[i].number; j++)
            sum = sum + a[i].list[j];
        avg = sum / a[i].number;
        if (a[i].number > max.number && avg > avgmax)
        {
            max = a[i];
            avgmax = avg;
        }
    }
    print(max);
    // تعداد کلاسایی که حرف اول نام درس و نام استاد یکی است را چاپ کنید
    t = 0;
    for (int i = 0; i < n; i++)
        if (a[i].name[0] == a[i].teacher[0])
            t++;
    cout << t;
}