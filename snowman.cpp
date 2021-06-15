#include "snowman.hpp"

std::string ariel::snowman(unsigned int code) {
    int B = code % 10; code /= 10;
    int T = code % 10; code /= 10;
    int Y = code % 10; code /= 10;
    int X = code % 10; code /= 10;
    int R = code % 10; code /= 10;
    int L = code % 10; code /= 10;
    int N = code % 10; code /= 10;
    int H = code % 10; code /= 10;
    if(code != 0) {
        throw std::logic_error("Invalid code!");
    }
    std::string ans;
    ans = "";
    switch(H) {
    case 1: ans += " _===_ \n"; break;
    case 2: ans += "  ___  \n ..... \n"; break;
    case 3: ans += "   _   \n  /_\\  \n"; break;
    case 4: ans += "  ___  \n (_*_) \n"; break;
    default: throw std::logic_error("Invalid code!");
    }
    if(X == 2) {
        ans += "\\(";
    }
    else {
        ans += " (";
    }
    switch(L) {
    case 1: ans += "."; break;
    case 2: ans += "o"; break;
    case 3: ans += "O"; break;
    case 4: ans += "-"; break;
    default: throw std::logic_error("Invalid code!");
    }
    switch(N) {
    case 1: ans += ","; break;
    case 2: ans += "."; break;
    case 3: ans += "_"; break;
    case 4: ans += " "; break;
    default: throw std::logic_error("Invalid code!");
    }
    switch(R) {
    case 1: ans += "."; break;
    case 2: ans += "o"; break;
    case 3: ans += "O"; break;
    case 4: ans += "-"; break;
    default: throw std::logic_error("Invalid code!");
    }
    if(Y == 2) {
        ans += ")/\n";
    }
    else {
        ans += ") \n";
    }
    switch(X) {
    case 1: ans += "<("; break;
    case 2: ans += " ("; break;
    case 3: ans += "/("; break;
    case 4: ans += " ("; break;
    default: throw std::logic_error("Invalid code!");
    }
    switch(T) {
    case 1: ans += " : "; break;
    case 2: ans += "] ["; break;
    case 3: ans += "> <"; break;
    case 4: ans += "   "; break;
    default: throw std::logic_error("Invalid code!");
    }
    switch(Y) {
    case 1: ans += ")>\n"; break;
    case 2: ans += ") \n"; break;
    case 3: ans += ")\\\n"; break;
    case 4: ans += ") \n"; break;
    default: throw std::logic_error("Invalid code!");
    }
    switch(B) {
    case 1: ans += " ( : ) "; break;
    case 2: ans += " (\" \") "; break;
    case 3: ans += " (___) "; break;
    case 4: ans += " (   ) "; break;
    default: throw std::logic_error("Invalid code!");
    }
    return ans;    
}