    //تابعی بنویسید که نمرات دانشجویان را دریافت و مشخص کند چه تعداد پاس کرده اند و میانگین کلاس چند است و سپس فراخوانی کند
    #include<iostream>
using namespace std ;
void univercity(int a[] , int n , int & pass , int & avg){
    int sum ;
    pass= 0 ;
    sum = 0 ;
    for (int i = 0; i < n; i++){
    if (a[i] > 10)
    pass++ ;
    sum=sum+a[i] ; }
    avg=(sum/n) ;}
    int main(){
        int a[100] , n , pass , avg ;
        int t ;
        cout<<"number of class :"<<endl ;
        cin>>t ;
        for (int i = 1; i <= t; i++){
            cout<<endl<<"number of students class"<<i<<':'<<endl ;
        cin>> n ;
        cout<<endl<<"scores of student in class"<<i<<':'<<endl ;
        for (int j = 0; j < n; j++)
        cin>>a[j] ;
        univercity(a , n , pass , avg) ;
        cout<<"number pass in the class"<<i<<':'<<pass<<endl<<"avg in the class"<<i<<':'<<avg<<endl ;}
    }