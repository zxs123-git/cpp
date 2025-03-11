#include <iostream>
using    namespace std;
//初始化要调用构造函数
class sum
{
    public:
    sum()
    {
        _ret+=_i;
        _i++;
    }
    static int GetRet()
    {
        return _ret;
    }
    private:
     static  int _i;
     static  int _ret;
};
int sum::_i=0;
int sum::_ret=0;
class soulution
{
   public:
     int sum_solution(int n){
        sum arr[n];
     }
};
 int main()
 {
   int n=100;
   soulution s;
   s.sum_solution(n);
   cout<<sum::GetRet()<<endl;

    return 0;
 }