#include "iostream"
#include "string"

int main(){
    std::string word;
    std::cin >> word;

    for(size_t i = 1; i != word.size(); ++i){
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'h' || word[i] == 'i'  || word[i] == 'o' \
            || word[i] == 'w' || word[i] == 'u'  || word[i] == 'y'){
            word.erase(i, 1);
            i--;
        }
    }

    for(size_t i = 1; i != word.size(); ++i){
        if(word[i] == 'b' || word[i] == 'f' || word[i] == 'p' || word[i] == 'v')
            word[i] = '1';
        else if(word[i] == 'c' || word[i] == 'g' || word[i] == 'j' || word[i] == 'k' ||\
                word[i] =='q' || word[i] == 's' || word[i] == 'x' || word[i] == 'z')
            word[i] = '2';
        else if(word[i] == 'd' || word[i] == 't')
            word[i] = '3';
        else if(word[i] == 'l')
            word[i] = '4';
        else if(word[i] =='m' || word[i] == 'n')
            word[i] = '5';
        else if(word[i] == 'r')
            word[i] = '6';
    }


    for(size_t i = 1; i != word.size(); ++i){
        if(word[i] == word[i+1]){
            word.erase(i, 1);
            i--;
        }
    }


    if(word.size() < 4)
        while(word.size() < 4)
            word += '0';
    else
        word.erase(4, word.size());

    std::cout << word << "\n";

}
