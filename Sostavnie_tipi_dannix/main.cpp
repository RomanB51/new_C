#include <iostream>

int main(){
    enum class Color{
        Orange,
        White,
        Black,
        Yellow,
    };

    Color new_color = Color::White;
    //Color::Orange  :: std::cout << "red\n";

    enum class GH{

    };

    struct HJ{
        int h = 0;
        double d = 2;
    };
    HJ k = {2, 4.8};

    std::cout << k.d;
}
