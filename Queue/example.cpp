#include<iostream>
#include<queue>

int main(){
    std::queue<int> queue1;
    queue1.push(40);
    queue1.push(150);
    queue1.push(540);
    std::cout<<queue1.front()<<std::endl;
    queue1.pop();
    std::cout<<queue1.front();
    return 0;
}