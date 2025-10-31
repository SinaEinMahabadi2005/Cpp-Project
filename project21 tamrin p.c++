#include<iostream>
using namespace std ;
//ساختاری برای نگه داری اطلاعات یک کارمند شامل نام و نام خانوادگی و میزان حقوق و کد ملی تعریف کنید
struct employee
{
    int id ;
char fname[100] ;
char lname[150] ;
float salaries ;
};
//تابعی بنویسید که اطلاعات یک کارمند را دریافت و چاپ کند
void print( employee a){
    cout<<endl<<"id number :"<<a.id<<endl<<"first name :"<<a.fname<<endl<<"last name :"<<a.lname<<endl<<"salaries :"<<a.salaries<<endl ;
}
//تابعی بنویسید میزان مشخصی به حقوق اضافه کند
void add(employee & a , float m){
    a.salaries=a.salaries+m ;
}
//تابعی بنویسید که ایا حقوق کارمند از یک مقدار مشخص بیشتر است یا خیر
bool check(employee a , float z){
    if(a.salaries>=z)
    return true ;
    else 
    return false ;
}
//تابعس بنویسید که حرف اول نام خانوادگی را با حرف اول نام جابه جا کند
void changen(employee a ){
    a.fname[0]=a.lname[0] ;
}
//تابعی بنویسید که اطلاعات یک کارمند را دریافت کند و حقوق ان را مجدد دریافت کند
void change(employee * a){
    cin>>a->salaries ;
}
//برنامه ای بنویسید که توابع فوق را فراخوانی کند
int main(){
    employee a ;
    cout<<"please enter id number:" ;
    cin>>a.id ;
    cout<<endl<<"please enter  first name :" ;
    cin>>a.fname ;
    cout<<endl<<"please enter last name :" ;
    cin>>a.lname ;
    cout<<endl<<"please enter salaries :" ;
    cin>>a.salaries ;
    cout<<endl<<"information:" ;
    print(a) ;
    float m ;
    cout<<endl<<"Enter the amount you want to add to your salary :" ;
    cin>>m ;
    add(a , m) ;
    cout<<endl<<"new information :" ;
    print(a) ;
    float z ;
    cout<<endl<<"Enter the amount to compare :" ;
    cin>>z ;
    if(check(a , z))
    cout<<endl<<"Bishtar" ;
    else
    cout<<endl<<"kamter" ;
    changen(a) ;
    cout<<endl<<"new information :" ;
    print(a) ;

    cout<<endl<<"Re-enter the salary amount:" ;
    change(&a) ;
    cout<<endl<<"new information" ;
    print(a) ;
    return 0 ;
}