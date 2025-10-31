//تابعی بنویسید که ان کارکتر دریافت کند و جای نقطه و علامت تعجب را عوض کند و سپس فراخوانی کند 
#include<iostream>
using namespace std ;
void sina(char a[] , int n ){
    for (int i = 0; i < n; i++){
        if (a[i]=='!')
              a[i] = '.';
              else
        if (a[i] == '.')
            a[i] = '!' ; }} 

            void print( char a[] , int n){
                for (int i = 0; i < n; i++)
                      cout<< a[i] ;  }
                      int main(){
                        int n ;
                        char a[100] ;
                        cout<<"please enter nmber of charcter :" ;
                        cin>>n ;
                        for (int i = 0; i < n; i++)
                                cin>>a[i] ;
                              sina(a , n) ;
                              cout<<"new is :" ;
                              print(a , n);
                              return 0 ;}