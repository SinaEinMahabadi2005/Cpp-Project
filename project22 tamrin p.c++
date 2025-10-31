#include<iostream>
#include<string.h>
using namespace std ;
struct date
{
int y , m , d ;
};
struct employee
{
    int id ;
char fname[100] ;
char lname[150] ;
float salaries ;
date bd ;
date es ;
};
//با توجه به ساختار کارمند برنامه ای بنویسید که اطلاعات ان کارمند را از ورودی دریافت کند
int main(){
int n ;
employee a[100] ;
cout<<"Please enter the number of employees:" ;
cin>>n ;
//employee*a=new employee[n] ;
//if(!a)
//return 0 ;
for (int i = 0; i < n; i++)
{
    cout<<endl<<"Please enter the national code of employee "<<i+1<<" :";
cin>>a[i].id ;
cout<<endl<<"Please enter the first name of employee "<<i+1<<" :";
cin>>a[i].fname ;
cout<<endl<<"Please enter the last name of employee "<<i+1<<" :";
cin>>a[i].lname ;
cout<<endl<<"Please enter the salaries of employee "<<i+1<<" :";
cin>>a[i].salaries ;
cout<<endl<<"Please enter the Date of birth of employee "<<i+1<<" :";
cin>>a[i].bd.y>>a[i].bd.m>>a[i].bd.d ;
cout<<endl<<"Please enter the Date of employment of employee "<<i+1<<" :";
cin>>a[i].es.y>>a[i].es.m>>a[i].es.d ;
}
//تعداد کارمند هایی که حقوق انها بیش از یک مقدار است را محاسبه و چاپ کنید
int t=0 ;
float x ;
cout<<endl<<"Please enter the salary assessment amount :" ;
cin>>x ;
for (int i = 0; i < n; i++)
    if(a[i].salaries >= x)
    t++ ;
cout<<endl<<"The number of people whose salaries exceed a certain limit :"<<t ;
//تعداد کارمند هایی که در فصل بهار متولد شده اند محاسبه و چاپ کنید
t=0 ;
for (int i = 0; i < n; i++)
if(a[i].bd.m >= 1 && a[i].bd.m <= 3)
t++ ;
cout<<endl<<"Number of employees born in spring:"<<t ;
//اطلاعات کارمند با بالاترین حقوق محاسبه و چاپ کند
employee max ;
max=a[0] ;
for (int i = 0; i < n; i++)
if(a[i].salaries > max.salaries)
max=a[i] ;
cout<<endl<<"id number :"<<max.id<<endl<<"name:"<<max.fname<<endl<<"last name :"<<max.lname ;
cout<<endl<<"salaries:"<<max.salaries ;
cout<<endl<<"birthday:"<<max.bd.y<<max.bd.m<<max.bd.d ;
cout<<endl<<"Recruitment:"<<max.es.y<<max.es.m<<max.es.d ;
//تعداد کارمندانی که نام و نام خانوادگی انها با حرف یکسان شروع می شود را محاسبه و چاپ کنید
t=0 ;
for (int i = 0; i < n; i++)
if (a[i].fname[0] == a[i].lname[0])
t++ ;
cout<<endl<<"Number of employees whose first and last names start with the same letter :"<<t ;
//میانگین حقوق کلیه کارمندان را محاسبه و چاپ کنید
float sum=0 ;
for (int i = 0; i < n; i++)
sum=sum+a[i].salaries ;
cout<<endl<<"avg:"<<sum/n ;
//تعداد کارمندانی که حرف اخر نام و نام خانوادگی انها یکسان است را مشخص و چاپ کنید
t=0 ;
for (int i = 0; i < n; i++)
if(a[i].fname[strlen(a[i].fname)-1] == a[i].lname[strlen(a[i].lname)-1])
t++ ;
cout<<"Number of employees whose last name and last name are the same :"<<t ;
//تعداد کارمندانی که طول نام و نام خانوادگی انها یکسان است مشخص کنید و چاپ کنید
t=0 ;
for (int i = 0; i < n; i++)
if(strlen(a[i].fname) ==  strlen(a[i].lname))
t++ ;
cout<<"Number of employees whose first and last names are the same length :"<<t ;
//اطلاعات کارمند با بیشترین سابقه را چاپ کنید
employee min=a[0] ;
for (int i = 0; i < n; i++)
if(a[i].es.y < min.es.y){
    min=a[i] ;
    if(a[i].es.y == min.es.y)
    if(a[i].es.m < min.es.m)
    min=a[i] ;
    if(a[i].es.m == min.es.m)
    if(a[i].es.d < min.es.d)
    min=a[i] ;
}
cout<<endl<<"Print the information of the employee with the most experience :" ;
cout<<endl<<"id number :"<<min.id<<endl<<"name:"<<min.fname<<endl<<"last name :"<<min.lname ;
cout<<endl<<"salaries:"<<min.salaries ;
cout<<endl<<"birthday:"<<min.bd.y<<min.bd.m<<min.bd.d ;
cout<<endl<<"Recruitment:"<<min.es.y<<min.es.m<<min.es.d ;
    return 0 ;
}