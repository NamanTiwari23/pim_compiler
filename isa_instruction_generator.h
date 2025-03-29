#ifndef ISA_INSTRUCTION_GENERATOR_H
#define ISA_INSTRUCTION_GENERATOR_H

#include <vector>
#include <string>

struct ISAInstruction {
    std::string opcode;
    std::string dest;
    std::string src1;
    std::string src2;
};

std::vector<ISAInstruction> generateISAInstructions(const std::vector<std::string> &llvmIR);
void saveISAInstructions(const std::string &filename, const std::vector<ISAInstruction> &instructions);

#endif
