#include "lexer_parser.h"
#include <fstream>
#include <sstream>
#include <cctype>

std::vector<Token> tokenize(const std::string &filename) {
    std::ifstream file(filename);
    std::vector<Token> tokens;
    std::string word;

    while (file >> word) {
        if (isdigit(word[0])) tokens.push_back({"NUMBER", word});
        else tokens.push_back({"IDENTIFIER", word});
    }

    return tokens;
}
