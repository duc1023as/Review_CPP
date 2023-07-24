#include<iostream>
#include<map>
#include<string>

int main(){
    std::map<std::string,int> map1;
    map1.insert(std::pair<std::string,int>("Zero",0));
    map1.insert(std::make_pair("One",1));
    for(auto it = map1.begin();it != map1.end();++it){
        std::cout<<"Key: "<<it->first<<" Value: "<<it->second<<std::endl;
    }
    if(map1.find("One") != map1.end()){
        std::cout<<"Has a key: ONE\n";
    }
    if(map1.count("Zero")>0){
        std::cout<<"Has a key: ZERO\n";
    }
    return 0;
}