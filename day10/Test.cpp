#include <iostream>
#include<assert.h>
using namespace std;
#define N 100;
class A
{
public:
    A(int a)
    {
        cout << "A()" << endl;
    }
    ~A()
    {
        cout << "~A()" << endl;
    }
private:
    int m_a;
};
//写一个磨具 代码逻辑不变 泛型编程
//not call the template function 
//实际上是编译器帮我们写的函数
template<typename T>
void Swap(T& left,T& right)
     {
         T temp=left;
         left=right;
         right=temp;
     }
    template<typename T>
    //临时变量具有常性
    //权限放大
    //自动推演实例化
    T Add(const T& left,const T& right)
    {
        return left+right;
    }
    //显示实例化
template <typename T>
class array()
{
    public:
    T& operator[](size_t index)
    {
        assert(index<N);
        return _a[index];
    }
    private:
     T _a[N];
}
int main()
{
    //定位new replace 
    // malloc 不会初始化
    A* p3=(A*)malloc(sizeof(A));
    //定位new 对p3指向的内存使用构造函数
    //内存池初始化 
    new(p3)A(1);
    //池化技术 内存池 提高效率 频繁的申请释放内存
    //线程池 连接池
     // new/malloc 都是找的堆类似于一个井
     // 内存池类似于一个蓄水池
     //1.malloc 需要强转化 失败返回空
     //2. new 捕获异常
     //3.内存泄漏是指针丢了找不到 一块内存不用了 还没有释放 别人没法用
     char *p1=new char[1024*1024*1024*1024*1024];
     //内存泄漏 慢慢泄漏最恐怖 导致卡死
     //1事前预防 智能指针 2事后检测 内存泄漏检测工具
     
     //模版函数 活字硬刷术

        int a=10;
        int b=20;
        Swap(a,b);
        double c,d;
        cout<<a<<" "<<b<<endl;
        c=1.2;
        d=2.3;
        Swap(c,d);
        cout<<c<<" "<<d<<endl;
        char e='a';
        char f='b';
        Swap(e,f);
        cout<<e<<" "<<f<<endl;
        //Swap(x,c)/x是int c是char
        //T不明确
        int xa=10;
        int xb=20;
        double xaa=11.1;
        double xbb=22.2;
        //推演报错
        //强制转化
        cout<<Add(xa,(int)xaa)<<endl;
        cout<<Add<double>(xaa,xbb)<<endl;
        array<int> arr;
        for(int i=0;i<10;i++)
        {
            arr[i]=i;
        }
        for(int i=0;i<10;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    return 0;
}