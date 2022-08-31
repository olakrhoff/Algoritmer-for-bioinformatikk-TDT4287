#include <iostream>
#include <stdint.h>

std::string lcs(std::string a_S, std::string a_R);

int main(int argc, char** argv)
{
    std::cout << lcs("ATTCGGTTA", "TAGTGATG") << std::endl;

    return 0;
}


std::string lcs(std::string a_S, std::string a_R)
{
    uint8_t* dp_matrix = new uint8_t[a_S.length() * a_R.length()];
    

    return "";
}
