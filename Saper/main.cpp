#include <iostream> //как считать из консоли цифры через пробел, код написан не до конца
#include <string>
#include <vector>
#include <sstream>

int main(){
    std::string stroka;
    std::getline(std::cin, stroka);

    std::vector <int> strochka(3);
    std::istringstream elem (stroka);

    for(int i = 0; i < 3; i++)
        elem >> strochka[i];

    std::vector <std::vector<int>> mina(strochka[0], std::vector<int>(strochka[1]));
    int j = 0;


    while(j < strochka[2]){
        std::getline(std::cin, stroka);
        std::istringstream elem (stroka);
        for(int k = 0; k < 2; k++)
            elem >> mina[k][j];
        j++;
    }


}
