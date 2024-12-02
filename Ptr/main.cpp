#include <iostream>
#include <vector>

int main(){
    std::string i = "abc";
    const size_t m = 10;
    const size_t n = 6;
    std::vector<char> v(m);
    for (auto& row : v) {  // обычная ссылка
        row.resize(n, 'b');
    }

    for(const char& row : v){
        std::cout << row;
        std::cout << "\n";
    }
}


