#include<iostream>
using namespace std ;
//تابعی بنویسید که ان عدد دریافت کند و انها را چاپ کند
void print(int a[] , int n){
    for (int i = 0; i < n; i++)
        cout<<a[i]<<' ' ;}
        //تابعی بنویسید که ان عدد دریافت کند و حداقل اعداد را بازگرداند
        int min(int a[] , int n){
            int m=a[0] ;
            for (int i = 0; i < n; i++)
            if(m>  a[i])
            m=a[i] ;
            return m ;  }
            //تابعی بنویسید که ان عدد دریافت کند و حداکثر را بازگرداند
            int max(int a[] , int n){
                int m=a[0] ;
            for (int i = 0; i < n; i++)
            if(m< a[i])
            m=a[i] ;
            return m ;  }
            //تابعی بنویسید که ان عدد دریافت کند ومجموعات را باز گرداند
            int sum(int a[] , int n){
                int m=0;
            for (int i = 0; i < n; i++)
        m=m+a[i];
            return m ;  }
            //تایعی بنویسید که ان عدد دریافت کند و میانگین اعداد را بازگرداند
            int avg(int a[] , int n){
return sum( a, n)/n ;}   
            //تابعی بنویسید که ان عدد دریافت کند و حداقل و حداکثر را باز گرداند
            void minmax(int a[] , int n , int & c , int & d){
                c= min(a , n);
                d=max( a ,n) ;}
                /*int minmax(int a[] , int n , int & c){
                c=min(a , n);
                return max( a, n) ;}*/       
                //تابعی بنویسید که ان عدد دریافت کند و حاصل ضرب انها را بازگرداند
                int mul(int a[] , int n){
                    int m=1;
                    for (int i = 0; i < n; i++)
                m=m*a[i];
                    return m ;   }       
                    //تابعی بنویسید که ان عدد دریافت کند سپس یک عدد دیگر دریافت کند و مشخص کند در بین اعداد وجود دارد یا خیر
                    bool search( int a[] , int n , int x){
                        bool f=false ;
                        for (int i = 0; i < n; i++)
            if( x==a[i])
            f=true;
            return  f; }     
            //تابعی بنویسید که ان عدد دریافت کند و عدد اخر را دو برابر کند
            void two(int a[] , int n) {
                a[n-1]=2*a[n-1]; }
                //تابعی بنویسید که ان عدد دریافت کندو عدد را قرینه کند
                void symmetry(int a[] ,int n){
                    for (int i = 0; i < n; i++)
                    a[i]=a[i]*-1 ;   }
                    int main(){
                        int a[100] ;
                        int n ;
                        cout<<"please enter your n :"<<endl ; ;
                        cin>>n ;
                        cout<<"please enter your number"<<endl ; ;
                        for (int i = 0; i < n; i++)
                cin>>a[i] ;
                cout<<"numbers is :" ;
                print( a , n) ;
                cout<<endl<<"min is :" ;
               cout<< min( a , n) ;
               cout<<endl<<"max is :" ;
               cout<< max( a , n) ;
               cout<<endl<<"sum is :" ;
               cout<<sum(a , n) ;
               cout<<endl<<"avg is :" ;
                cout<<avg(a , n) ;
                cout<<endl ;
                int c , d ;
                minmax(a , n , c , d) ;
                cout<<"min is :"<<c<<' '<<"max is :"<<d ;
                cout<<endl<<"mul is :" ;
                cout<<mul(a , n) ;
                bool f ;
                int x ;
                cout<<endl<<"please enter nuber of search:";
                cin>>x ;
                f=search(a , n , x) ;
                cout<<"awnser is :" ;
                if (f==true)
                cout<<"founded";
                else
                cout<<"not found" ;  
                cout<<endl<<"finish number * 2 =" ;              
                two(a , n) ;
                print(a , n);
                cout<<endl<<"symmetry numbers is: " ;
                symmetry(a , n);
                print(a , n) ;
                return 0 ;  }

