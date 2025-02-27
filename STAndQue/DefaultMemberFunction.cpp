#include<iostream>
using namespace std;
//default member function
//if we do not define these functions, c++ will define them for us
//if we define any one of them,cpp will not generate the these functions
//based on the requirement
//some of classes,we should define these functions
//some of classes,we should not define these functions
//1.constructor : help us to initalize the object(sometimes,we may forget to initalize the object)
//2.destructor : help us to release the memory(we usually forget to release the memory)
 class Date
{
    //n 
    int _day=1;
    int _month=1;
    int _year=2020;//this is not a initialization, this is a default value
    //int *a=nullptr;
    //int *a=(int*)malloc(sizeof(int)*4);
    public:
    //the function of constructor is to initalize the object
    Date(int day=1,int month=1,int year=2000)
    {
        
        _day=day;
        _month=month;
        _year=year;
    }
    //we must be use the reference
    //否则会无限递归
    Date( const Date &d)//why we should use const
    //beacuse we should avoid the (_day=d._day)condition
    {
        _year=d._year;
        _month=d._month;
        _day=d._day;
    }
    void print()
    {
        cout<<_day<<"/"<<_month<<"/"<<_year<<endl;
    }
}; 
int main()
{
    //Date d1(1,1,2000);
    //Parameterless constructor can not be called like this
    //Date d2();
    //d1.print();
    // copy constructor 
    //copy a d1 object
    Date d1(1,1,20000);
    Date d2(d1);//copy constructor:copy initialization
    //copy constructor is also an overloading of the constructor
   d2.print();
    return 0;
}