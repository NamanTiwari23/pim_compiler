#include "error_handling.h"
#include <iostream>

bool validateSyntax(const std::vector<Token> &tokens) {
    for (const auto &token : tokens) {
        if (token.type != "IDENTIFIER" && token.type != "NUMBER") {
            std::cerr << "Invalid token: " << token.value << std::endl;
            return false;
        }
    }
    return true;
}
