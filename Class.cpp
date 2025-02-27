#include <iostream>
// 修正拼写错误
using namespace std;
//c语言里面只有属性没有方法，类中c++里面有属性和方法
//访问限定符（access specifier）：public, private, protected
//申明和定义分离方便阅读
//Declaration and definition separation for better readability
class Stack
{
        public:
        //scope(域)
        int *a;//declaration of a variable does not allocate space,but definition of a variable allocate space
        int top;
        int capacity;
//element in private can be accessed by public
// Default(默认) access specifier is private 
// struct Default access specifier is public
    public:
        void init(int N=4);
        void push(int x);
}; 
void Stack::init(int N){
    capacity=N;
    a=new int[N];
    top=-1;
}
int main()
{
        //不是实例化的对象 这是一个类型
    Stack::top;
    //only object can be accessed
    
    return 0;
}