#include<iostream>
#include<string>

int main(){
    std::string str1;
    std::getline(std::cin,str1);
    std::cout<<str1<<std::endl;
    std::string result;
    int mid = str1.size()/2;
    for(int i=0;i<mid;i++){
        if(str1[i] != str1[str1.size()-1-i]){
            std::cout<<"asymmetrical"<<std::endl;
            return 0;
        }
    }
    std::cout<<"semetric"<<std::endl;
    return 0;
}