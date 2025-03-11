#include <iostream>
#include <vector>
using namespace std;
//typedef可维护性
int Add(int left,int right)
{
    return left + right;
}

template <typename T>
T Add(T left,T right)
{
    return left + right;
}
//类模版
template <typename T>//type的缩写 T
//类模板不可以推演实例化
//类模板没有推演时机
//显示实例化
class Stack {
    private:
        int elements; // 使用vector来存储栈元素
    
    public:
        // 构造函数
        Stack() {}
    
        // 压栈操作
        void push(int value) {
            elements.push_back(value);
        }
    
        // 出栈操作
        void pop() {
            if (!elements.empty()) {
                elements.pop_back();
            } else {
                throw std::out_of_range("Stack is empty");
            }
        }
    
        // 获取栈顶元素
        int top() const {
            if (!elements.empty()) {
                return elements.back();
            } else {
                throw std::out_of_range("Stack is empty");
            }
        }
    
        // 检查栈是否为空
        bool isEmpty() const {
            return elements.empty();
        }
    
        // 获取栈的大小
        size_t size() const {
            return elements.size();
        }
    };
int main()
{
    //类模板不具有推理机会 只能自己实例化
    //同一个类模板实例化出来的
    //模版参数不同，他们就是不同的类型

  Stack<double> st1;
  Stack<int> st2;
}

