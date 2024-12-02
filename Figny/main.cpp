/*#include <vector>

int main(){
    std:: vector <std:: vector <int>> matrix(4, std::vector <int> (6));
    std:: size_t razmer = matrix.size(); //вернет 4
}*/
/*
#include <string>
#include <vector>
#include <iostream>

std::string CommonPrefix(const std::vector<std::string>& words){
    std:: string prefix = "";
    size_t length = words[0].length();

    if(words.empty())
        return {};

    for(size_t i = 1; i != words.size(); ++i)
        if(words[i].length() < length)
            length = words[i].length();

    for(size_t j = 0; j < length; j++){
        char letter = words[0][j];
        size_t counter_word = 0;
        for(const auto& word : words){
            if(word[j] != letter)
                return prefix;
            else {
                counter_word++;
                if(counter_word == words.size()){
                    prefix += letter;
                    counter_word = 0;
                }
            }

        }

    }
    return prefix;
}

int main(){
    std::vector<std::string> mat(3);
    mat = {
        "apple",
        "cppicot",
        "application"
    };
    std:: cout << CommonPrefix(mat);
}
*/
/*
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> Split(const std::string& str, char delimiter){
    std::vector<std::string> split;
    if(str.empty())
        return split;

    size_t k = 0;
    for(size_t i = 0; i != str.size(); ++i){
        if(str[i] == delimiter){
            split.push_back(str.substr(k, i-k));
            k = i + 1;
        }
    }
    split.push_back(str.substr(k));
    return split;
}
#include <string>
#include <vector>
#include <iostream>
std::vector<std::string> Split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    size_t i = 0;
    for (size_t j = 0; j != str.size(); ++j) {
        if (str[j] == delimiter) {
            result.push_back(str.substr(i, j - i));
            i = j + 1;
        }
    }
    result.push_back(str.substr(i));
    return result;
}

int main(){

    std::string r = "What_is_your___name?";
    for(const auto& elem : Split(r, '_'))
        std:: cout << elem << "\n";
}*/

/*
#include <vector>
#include <string>
#include <iostream>

std::string Join(const std::vector<std::string>& tokens, char delimiter){
    std::string stroka;

    if(tokens.empty())
        return {};
    for(const auto& word : tokens){
        stroka += word;
        stroka += delimiter;
    }
    stroka.erase(stroka.size() - 1, 1);
    return stroka;
}

int main(){

    std::vector<std::string> r(4);
    r = {
        "What",
        "is",
        "your",
        "name?"
    };

    std:: cout << Join(r, '_') << "\n";
}*/

/*#include <iostream>
#include <vector>

std::vector<std::vector<int>> Transpose(const std::vector<std::vector<int>>& matrix){
    int rows = matrix[0].size();
    int column = matrix.size();
    std::vector <std::vector<int>> new_transpose(rows, std::vector<int>(column));

    for(int i = 0; i != rows; ++i)
        for(int j = 0; j != column; ++j){
            new_transpose[i][j] = matrix[j][i];
        }
    return new_transpose;
}

int main(){

std::vector <std::vector<int>> t(5, std::vector<int>(3));
    for (size_t i = 0; i != 5; ++i) {
        for (size_t j = 0; j != 3; ++j) {
            t[i][j] = j;
        }
    }


Transpose(t);
//std:: cout << Join(r, '_') << "\n";
}*/

/*#include <algorithm>
#include <iostream>
#include <vector>

int main(){
    struct Point{
        int x;
        int y;
    };

    size_t size;
    std::cin >> size;
    std::vector <Point> points(size);

    for(size_t i =0; i != size; i++)
        std::cin >> points[i].x >> points[i].y;

    std::sort(points.begin(), points.end(), [](const Point& p1, const Point& p2){
        return p1.x * p1.x + p1.y * p1.y < p2.x * p2.x + p2.y * p2.y;
                    }
              );

    for(const auto& point : points)
        std::cout << point.x << " " << point.y << "\n";
}*/

#include <iostream>
#include <deque>
#include <string>

void MakeTrain(){
    //using Wagon = int;
    std::deque <int> train;

    std::string command;
    //Wagon vagon;
    size_t vagon;
    //size_t k;

    while(std::cin >> command >> vagon){ //крутая возможность постоянно работать с консолью.........................
        if(command == "+left"){
            train.push_front(vagon);
        }
        else if(command == "+right"){
            train.push_back(vagon);
        }
        else if(command == "-left"){
            size_t k = std::min(vagon, train.size());
            train.erase(train.begin(), train.begin()+ k);
        }

        else if(command == "-right"){
            size_t k = std::min(vagon, train.size());
            train.erase(train.end() - k, train.end());//важной особенностью подобных функций является то, что от итератора1 можно пройти до итератора2 с помощью ++
        }                                             //сюда же относится и функция sort(итератор1, итератор2)


    }
    bool first = 0;
    for(const auto& vagon : train){
        if(first)
            std::cout << " ";
        else
            first = !first;
        std::cout << vagon;
    }
    std::cout << "\n";
}
