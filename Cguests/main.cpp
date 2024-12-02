#include "iostream"
#include "vector"
#include "string"
#include <algorithm>


int main(){

    std::vector<std::string> stroka(1000);
    std::string word;

    while(std::getline(std::cin, word))
        stroka.push_back(word);

    std::sort(stroka.rbegin(), stroka.rend());

    for(size_t i = 0; i != stroka.size(); ++i)
        std::cout << stroka[i] << "\n";
}

