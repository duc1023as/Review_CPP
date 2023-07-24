#include<iostream>
#include<bitset>

int main(){
    std::bitset<4> myBitset(8);
    std::cout<<myBitset<<"\n";
    myBitset.set(1);
    std::cout<<myBitset;
    return 0;
}