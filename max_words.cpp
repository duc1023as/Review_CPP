#include<iostream>
#include<string>

int main(){
    std::string str;
    std::getline(std::cin,str);
    std::cout<<str<<std::endl;
    int max_length = 0;
    int count_length = 0;
    int position;
    for(int i=0;i<str.size()-1;i++){
        if(str[i] != ' '){
            count_length ++;
        }
        else{
            if(max_length < count_length){
                max_length = count_length;
                position = i;
                count_length = 0;
            }
            continue;
        }
    }
    std::cout<<"Max length is: "<<max_length<<std::endl;
    for(int i=position-max_length;i<position;i++){
        std::cout<<str[i];
    }
    std::cout<<std::endl;
    return 0;
}