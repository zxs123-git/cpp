#include <iostream>
#include<string>
using namespace std;
//dynamically  growing character  array
//
/* template <class T>
class basic_string 
{
private:
   T* _str;
   size_t _size;
   size_t _capacity;
} 
typedef basic_string<char>(utf-8) string;   // only type coulde be redefine 
*/
void test_test1()
{
   string s1;//basic_string<char> s1;non-parameterized constructor
   string s2("shenzehn city");
   s2+="shenzhen";
   cout<<s2<<endl;
   
   string s3="shenzhen";//single parameterized constructor support implicit conversion
string s4(10,'a');//two parameterized constructor 


}
void test_test2()
{
   string s1("shenzhen");
   //traverse string 
   //1.[]+index
   for(size_t i=0;i<s1.size();i++)
   {
     cout<<s1[i]<<endl;//opearator [](size_t index)
   }
   //2.auto + for_each
   for(auto&ch :s1)
   {
      ch--;
   }
   cout<<s1<<endl;
}
 int main()
 {
   
    //test_test1();
    test_test2();
    return 0;
 }