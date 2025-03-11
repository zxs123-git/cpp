#include <iostream>
using  namespace std;



int main()
{
    //开辟堆区空间
    int *p1=new int;//未进行初始化
    delete p1;
    int *p2=new int(10);
    delete p2;    
  
    int *p3=new int[10];
     int *p4=new int[10]{1,2,3,4,5,6,7
     delete[] p3 ;,8,9,10};
        delete[] p4;
        //new失败 抛异常
        //
        //底层机制
        //1.operator new 不是new的重载
    
    return 0;
}