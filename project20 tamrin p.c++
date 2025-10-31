//Pooya برای اطلاعات یک کتاب شامل نام کتاب و نام نویسنده و قیمت و تعداد صفحات و سال چاپ و نام انتشارات تعریف کند و سپس برنامهای بنویسید که اطلعت یک کتاب را از ورودی دریافت و چاپ کند
#include<iostream>
using namespace std ;
struct book
{
char name [100] ;
char writername[100] ;
int price ;
int page ;
int year ;
char Publicationname[100] ;
};
int main(){
    book *f=NULL;
    f=new book ;
    if(!f)
    return 0 ;
    cin>>f->name>>f->writername>>f->price>>f->page>>f->year>>f->Publicationname ;
    cout<<"The name of the book :"<<f->name<<endl<<"Name of the author :"<<f->writername<<endl<<"price :"<<f->price<<endl<<"number of page : " <<f->page<<endl<<"year of publication :"<<f->year<<endl<<"Publication name :"<<f->Publicationname ;
    delete f ;
return 0 ;
}
