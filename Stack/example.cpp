#include<iostream>
#include<stack>

int main(){
    std::stack<int> stack1;
    stack1.push(100);
    stack1.push(50);
    stack1.push(200);
    std::cout<<stack1.top()<<std::endl;
    stack1.pop();
    std::cout<<stack1.top();
    return 0;
}