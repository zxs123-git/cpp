#include<iostream>

using namespace std;

class Date{
    int _day;
    int _month;
    int _year;
    public:
    //default value should be provided in the declaration,not in the definition
    Date(int day=1,int month=1,int year=2000);
    void PrintDate();
    int GetMonthDays(int year,int month);
    //destructor is used to release the resourcesg
    
    //operator overloading 
    //use to operate the object like a normal variable
    //custom types
     Date operator +(int days);
     //d1=d2
     //链式赋值
     //use the reference can not call construtor 
     Date& operator =(const Date &d);
    };
    //constructor also can check the validity of initailization
Date::Date(int day,int month,int year){
   
    if(year>=1&&(month>=1&&month<=12)&&(day>=1&&day<=GetMonthDays(year,month)))
    {
        _day=day;
        _month=month;
        _year=year;
    }
    else
    {   
        cout<<"Invalid date,Become default value"<<endl;
        _day=1;
        _month=1;
        _year=2000;
    }
    //需要区分左右
    

}
//d1=d2 need return this pointer
//out of the function scope,the object still exist we can use the reference 
//const Date & is also can be allowed 
//Date& can be used to ++,
//Lvalues can be modified
Date& Date::operator=(const Date &d){
    _day=d._day;
    _month=d._month;
    _year=d._year; 
    //
    //return d this is a error 
    //
    return *this; 
}
//print the current date
void Date::PrintDate(){
    cout<<_day<<"/"<<_month<<"/"<<_year<<endl;
}

int Date::GetMonthDays(int year,int month)
{
    static int MonthDaysArr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(month==2&&(year%4==0&&year%100!=0||year%400==0))
    {
        return 29;
    }
    else
    {
        return MonthDaysArr[month];
    }
}
Date Date::operator+(int days)
{
    //the meaning of the operatot overloading is  for readablity of the code
    //d5+100 //d5.operator+(100,*this)
    //warning : you should not creat a new operator,you can rewrite the existing operator
    //only use to rewrite the existing operator in the custom type
    //parameter(参数)
    //return value(返回值)w
    //几个操作数几个参数
    //some of operator can not be overloaded
    //1. .*(operator )  2. :: 3. ?: 4. sizeof 5. typeid 6. .
}
 void Test01()
{
    Date d1(1,40,2000);
    d1.PrintDate();
    // d3(d2);//copy constructor 
    //d1=d2;//assignment overloading 
    //the difference is that the copy constructor is used to initialize the object, and the assignment operator is used to assign the value to the object
} 
void TestAssign(){
    Date d1(10,10,2010);
    Date d2(20,12,2011);
    d2=d1;
    Date d3;
    d2.PrintDate();
    d3=d2=d1;
   d3.PrintDate();
}
int main()
{
    TestAssign();
    return 0;
}