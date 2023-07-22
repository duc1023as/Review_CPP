#include<iostream>
#include<vector>

int main(){
    int length;
    std::cin>>length;
    std::vector<int> vec(length);
    std::vector<std::vector<int>> vec1;
    for(int i=0;i<vec.size();i++){
        std::cin>>vec[i];
    }
    std::cout<<"Vector 1 chieu\n";
    for(int i:vec){
        std::cout<<i<<" ";
    }
    std::cout<<std::endl;
    for(int i=0;i<2;i++){
        std::vector<int> temp(2);
        for(int j=0;j<2;j++){
            std::cin>>temp[j];
        }
        vec1.push_back(temp);
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            std::cout<<vec1[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}