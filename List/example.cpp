#include<iostream>
#include<list>

int main(){
    std::list<int> myList;
    myList.push_back(100);
    myList.push_back(200);
    myList.push_front(300);
    for(auto it = myList.begin();it!= myList.end();++it){
        std::cout<<*it<<" ";
    }
    return 0;
}