#include<iostream>
using namespace std;
//the function of explicit
//可以不让进行类型转换
//隐式类型转换转换的作用
//void pushback(const String &s)
//pushback(s1);
//pushback(s2);
//pushback("hello")//
class Date{
    int _day;
    int _month;
    int _year;
    public:
  /* explicit  Date(int day=1,int month=1,int year=2000)
    {
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
    } */
   Date(int year,int month,int day)
   : _year(year)
   , _month(month)
   , _day(day)
   {}
    int GetMonthDays(int year,int month)
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
    void PrintDate()
    {
        cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
    }
};

int main()
{ 
    //临时变量具有常数性质
    //int i=0
    //double d=i;
    //const double& rd=i;
    Date d1(1,1,2022);
    //单参数
    //隐式类型转换 implicit data type conversion
   // Date d2=2022;//Date d2=Date(2022); now compiler optimization
    d1.PrintDate();
    //
   // Date d2={1,2,3};
    //等价于 Date d2(1,2,3);
  return 0;
}