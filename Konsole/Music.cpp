#include "iostream"
#include "string"

int main(){
    std::string word;
    std::string code;
    std::cin >> word;

    code = word[0];
    for(size_t i = 1; i < word.size; i++){
        if(word[i] != a || word[i] != e || word[i] != h || word[i] != i  || word[i] != o /
            || word[i] != u || word[i] != w  || word[i] != y)
            code += word[i];
    }

    for(size_t i = 1; i < code.size; i++){
        if(code[i] == b || code[i] == f || code[i] == p || code[i] == v)
            code[i] = 1;
        else if(code[i] == c || code[i] == g || code[i] == j || code[i] == k/
                                                                                code[i] == q || code[i] == s || code[i] == x || code[i] == z)
            code[i] = 2;
        else if(code[i] == d || code[i] == t)
            code[i] = 3;
        else if(code[i] == l)
            code[i] = 4;
        else if(code[i] == m || code[i] == n)
            code[i] = 5;
        else if(code[i] == r)
            code[i] = 6;
    }

    for(int i = 2; i < code.lenght; i++){
        if(code[i-1] == code[i])
            code.erase(i, 1);
    }

    if(code.lenght < 5)
        while(code.lenght < 5)
            code += '0';
    else
        code.erase(4, code.lenght);

}
