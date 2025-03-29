#include <iostream>
#include "lexer_parser.h"
#include "llvm_ir_generator.h"
#include "isa_instruction_generator.h"
#include "memory_mapping.h"
#include "error_handling.h"

int main() {
    std::string inputFile = "input.cpp";
    std::vector<Token> tokens = tokenize(inputFile);
    
    if (!validateSyntax(tokens)) {
        std::cerr << "Syntax Error detected. Compilation aborted." << std::endl;
        return 1;
    }

    std::vector<std::string> llvmIR = generateLLVMIR(tokens);
    std::vector<ISAInstruction> isaInstructions = generateISAInstructions(llvmIR);

    saveISAInstructions("output.isa", isaInstructions);

    std::cout << "Compilation successful. Generated ISA instructions saved in output.isa" << std::endl;
    return 0;
}
