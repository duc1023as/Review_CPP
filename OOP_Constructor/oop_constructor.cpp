#include<iostream>
#include<cstdint>
#include<string>

class RGBA {
public:
    using Channel = std::uint8_t;

private:
    Channel m_red {};
    Channel m_green {};
    Channel m_blue {};
    Channel m_alpha {};
    const int m_level;

public:
    RGBA(Channel red = 0,Channel green = 0,Channel blue = 0, Channel alpha = 255):
        m_red{red},m_green{green},m_blue{blue},m_alpha{alpha},m_level{123}
    {

    }
    void print(){
        std::cout<<"R:"<<static_cast<int>(m_red)<<" G:"<<static_cast<int>(m_green)<<" B:"
        <<static_cast<int>(m_blue)<<" A:"<<static_cast<int>(m_alpha)<<" L:"<<static_cast<int>(m_level)<<std::endl;
    }
};

int main(){
    RGBA color1 {41,45,46,255};
    color1.print();

    return 0;
}