//تابعی بنویسید که دو عدد دریافت کند و تساوی دو عدد و عدد بزرگ تر را بازگرداند و فراخوانی کند
#include<iostream>
using namespace std ;
bool exp1(int x , int y , int & z)
{
    bool f=false ;
    
    if (x > y)
    {
        z= x ;
    
    }
    else
    {
        z= y ;

    }
     if (x== y)
    {
    
     return f=true ;
    }
    else
    {
        
       return f;
    }
}
int main() 
{
    bool f ;
    int x, y , z  ;
cin>>x>>y ;
 f=exp1(x , y , z) ;
cout<<boolalpha<<f<<endl<<z ;

return 0 ;
}