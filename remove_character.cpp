#include<iostream>
#include<string>

int main(){
    std::string str1;
    std::getline(std::cin,str1);
    std::cout<<str1<<std::endl;
    while(true){
        if(str1[0] ==' '){
            str1.erase(0,1);
        }
        else{
            break;
        }
    }
    while(true){
        if(str1[str1.size()-1] == ' '){
            str1.erase(str1.size()-1,1);
        }
        else{
            break;;
        }
    }
    for(int i=0;i<str1.size()-1;i++){
        if(str1[i] == ' ' && str1[i+1] == ' '){
            str1.erase(i,1);
            i--;
        }
    }
    std::cout<<str1<<std::endl;
    return 0;
}