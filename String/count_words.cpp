#include<iostream>
#include<string>

int main(){
    std::string str;
    std::getline(std::cin,str);
    std::cout<<str<<std::endl;
    int count = 0;
    // std::cout<<"The number of words in string are : "<<std::count(str.begin(),str.end(),' ')+1<<std::endl;
    for(int i=0;i<str.size()-1;i++){
        if(str[i] == ' '){
            count++;
        }
    }
    std::cout<<"The number of words in string are : "<<count+1;
    return 0;
}