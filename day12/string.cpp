#include<iostream>
#include<string>
using namespace std;
//iterators like a pointer
void test()
{
    string s1("1234");
    //iterators generally way of the accessment  
    string::iterator it1=s1.begin();
    while(it1!=s1.end())
    {
        cout<<*it1<<endl;
        ++it1;
    }
//reverse_iterator rit 
string::reverse_iterator rit =s1.rbegin();//auto is also ok
while(rit!=s1.rend())

{
    cout<<*rit<<" ";
    //reverse-iterator is also double plus(++)
    ++rit;
}
//const iterator
}
void Print(const string& s)
{
    
     //if the parameters is const,you need the const iterator 
     string::const_iterator it=s.begin();
     while(it!=s.end())
     {
        //support traverse,but could not be written  
        cout<<*it<<" ";
        ++it;//const is used to  protect the information of pointing ,so const it (wrong) 
     }
     //auto
     string::const_reverse_iterator crit=s.rbegin();
     while(crit!=s.rend())
     {
        cout<<*crit<<" ";
        ++crit;
     }
}
void test_string4()
{
    string s("hello world");
    cout<<s.size()<<endl;
    cout<<s.length()<<endl; 
    s.clear();
    //space optimization make the capacity and size as the same
    s.shrink_to_fit();
}
void test_string5()
{
    string s("1");
    //capacity(vaild characters not include '\0')
    size_t sz=s.capacity();
    cout<<sz<<endl;
    cout<<endl;
    for(int i=0;i<1000;i++)
    {
        s.push_back('x');
        if(sz!=s.capacity())
        {
            sz=s.capacity();
            cout<<s.capacity();
            cout<<endl;
        }
    }
    //reserve used to change capacity 提前用reserve控制好空间大小减少扩容
    //resize change the length to the n
    s.reserve();
}
void test_string6()
{
    string s1("hello world");
    //1.小于11 
    s1.resize(5);
    cout<<s1.size()<<endl;
    cout<<s1.capacity()<<endl;
    cout<<s1<<endl;
    string s2("hello world");
    //2.大于11 
    s2.resize(15,'x');//没有插入就是空字符 插入就是补到15
    cout<<s2.size()<<endl;
    cout<<s2.capacity()<<endl;
    cout<<s2<<endl;
    string s3("hello world");
    //3.小于11 
    s3.resize(1000,'x');//也可以扩容+插入数据
    cout<<s3.size()<<endl;
    cout<<s3.capacity()<<endl;
    cout<<s3<<endl;

}
void string_test7()
{
    string s1("hello world");
    s1.push_back('!');
    s1.push_back('!');
    string s2("xxxxx");
    s1.append(s2);
    s2+='!';
}
int main()
{
    //1.only read only const 
    //2.only write only non-const
    //3.write and read const+non-const
  //  string s1="1234";
    //test();
   // Print(s1);
    //test_string5();
   // test_string6();
    string_test7();    
return 0;
}