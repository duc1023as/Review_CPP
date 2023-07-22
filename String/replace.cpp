#include<iostream>
#include<string>

int main(){
    std::string str;
    std::getline(std::cin,str);
    char c[10];
    std::cin.getline(c,10);
    std::cout<<str<<std::endl;
    std::cout<<c<<std::endl;
    for(int i=0;i<str.size()-1;i++){
        if(str[i] == c[0]){
            str[i] = 'x';
        }
    }
    std::cout<<str<<std::endl;
    return 0;
}