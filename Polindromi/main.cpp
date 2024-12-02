#include "iostream"
#include "string"

int main(){
    std::string stroka;
    std::getline(std::cin, stroka);
    int count = 0;


    if(stroka.empty())
        std::cout << "YES\n";
    else if(1){
            for(size_t i = 0; i != stroka.size(); ++i){
                if(stroka[i] == ' ')
                    stroka.erase(i, 1);
            }
            for(size_t i = 0; i != stroka.size(); ++i){
                if(stroka[i] == stroka[stroka.size() - i-1]){
                    count++;
                }
                else
                    break;
            }
            if(count == stroka.size())
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }

}
