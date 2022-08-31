#include <iostream>
#include <cstdint>

std::string lcs(std::string a_S, std::string a_R);

int main(int argc, char** argv)
{
    std::cout << lcs("ATTCGGTTA", "TAGTGATG") << std::endl;

    return EXIT_SUCCESS;
}

uint16_t coordToIndex(uint16_t a_row, uint16_t a_col, uint16_t a_rowLen)
{
    return a_row + a_col * a_rowLen;
}

std::string lcs(std::string a_S, std::string a_R)
{
    uint8_t* dp_matrix = new uint8_t[a_S.length() * a_R.length()];
    
    dp_matrix[coordToIndex(0, 0, a_R.length())] = 0;
    
    
    
    delete[] dp_matrix;
    return "";
}
