#include <iostream>
#include <string>

int main() {
    std::string str1 = "Hi,";
    std::string str2 = "let's ";
    std::string str3 = "play soccer";
    std::string result = str1 + str2 + str3;
    printf("Concatenado: %s\n", result.c_str());
    return 0;
}
