//تابعی بنویسید که ان عدد دریافت کند و تعداد اعداد زوج و فرد را بازگرداند , و فراخوانی کند
#include<iostream>
using namespace std ;
void sina(int a[] ,int n , int & f , int & z){
    f=0 ;
    z=0;
    for (int i = 0; i < n; i++){
    if (a[i] % 2 == 1)
    f++ ;
    if(a[i] % 2 == 0)
    z++ ;}}
    int main(){
        int a[100] , n , f , z ;
        cout<<"please enter your n:"<<endl ;
        cin>>n ;
cout<<"please enter your number :" <<endl;
        for (int i = 0; i < n; i++)
        cin>>a[i] ;
        sina(a , n , f  , z) ;
        cout<<"odd nember :"<<f<<"   even number :"<<z ;
        return 0 ;  }