#include<iostream>
#include<set>

int main(){
    std::set<int> set1; //default is ins
    // std::set<int,std::greater<int>> set1; des
    set1.insert(60);
    set1.insert(90);
    set1.insert(90);
    set1.insert(1200);
    for(auto &i:set1){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    return 0;
}