#ifndef LLVM_IR_GENERATOR_H
#define LLVM_IR_GENERATOR_H

#include "lexer_parser.h"
#include <vector>
#include <string>

std::vector<std::string> generateLLVMIR(const std::vector<Token> &tokens);

#endif
