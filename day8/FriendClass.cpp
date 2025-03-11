#include <iostream>
using namespace std;
//内部类
//类似于加盟挂靠
class A
{

    private:
    int _a;
public: //b天生就是a的友元类
    class B
    {
        int _b;
        //友元类可以访问私有成员
        void foo(const A&a)
        {
            cout<<a._a<<endl;
        }
    };
};
//匿名对象场景2
//A F()
//{
// return A(10);}
int main()
{
    A a;
    A aa1;
    //匿名对象 出了声明周期当前这一行就会被释放
    A();
    A(3);
    //应用场景
    //匿名对象 只为了调用一个函数
    //A().foo)();
    return 0;
}