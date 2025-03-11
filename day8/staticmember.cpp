#include<iostream>
using namespace std;
//N is the number of calling constructor or copy constructor
// static area
//we should avoid use the  variable N in the global 
class A
{
    
    int _a;
    static int N;
    public:
    
      A(int a=0)
      :_a(a)
      {
        //call constructor  N++
        ++N;
      }

    //static member function
    // there is no this pointer so we can use (A::GetN())
    //break the encapsulation
     static int GetN()
      {
        //_a++;this is a error ,static member function can not access the non-static member variable
          return N;
      }
      
      A(const A&a)
      :_a(a._a)
      {
        //call copy constructor  N++
        ++N;
      }
     
      void print()
      {
          cout<<_a<<endl;
      }

};
int A::N=0;//the initialization of definition of static member variable
int main()
{
A  aa1(1);//aa1 locate in stack
A aaa(2);
 A aa3=aa1;
 //public static member variable can be called by class name
 //cout<<A::N<<endl;
// cout<<aa1.N<<endl;
//A* ptr=nullptr;
//cout<<ptr->N<<endl;//beacuse the variable in the static area,can be called by this way
//cout<<aa1.GetN()<<endl;   
cout<<A::GetN()<<endl;
return 0;
}
//1.global static 
//2.local static
//3.static member variable: share with all object,属于类

