#include<iostream>
#include<string>

int main(){
    std::string str1,result;
    std::cout<<"Please enter a string"<<std::endl;
    std::getline(std::cin,str1);
    std::cout<<str1<<std::endl;
    for(int i=str1.size()-1;i>=0;i--){
        result.push_back(str1[i]);
    }
    std::cout<<result<<std::endl;
    return 0;
}