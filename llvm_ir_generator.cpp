#include "llvm_ir_generator.h"

std::vector<std::string> generateLLVMIR(const std::vector<Token> &tokens) {
    std::vector<std::string> ir;
    for (const auto &token : tokens) {
        if (token.type == "IDENTIFIER") {
            ir.push_back("LOAD " + token.value);
        }
    }
    return ir;
}
