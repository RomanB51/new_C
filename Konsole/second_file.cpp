#include "iostream"
#include "string"
#include "ctype.h"

bool Password (std::string password){
    if(password.size() < 8 || password.size() > 14)
        return 0;

    int up = 0;
    int low = 0;
    int digits = 0;
    int other = 0;

    for(char elem: password){
        if(elem < 33 || elem > 126)
            return 0;
        if(ispunct(elem))
            other = 1;
        if(islower(elem))
            low = 1;
        if(isupper(elem))
            up = 1;
        if(isdigit(elem))
            digits = 1;
    }

    return other + low + up + digits >= 3;
}

int main(){
    std::string password;
    std:: cin >> password;
    if(Password(password))
        std::cout << "YES\n";
    else
        std::cout << "NO\n";
}
