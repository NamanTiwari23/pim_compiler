#include "isa_instruction_generator.h"
#include <fstream>

std::vector<ISAInstruction> generateISAInstructions(const std::vector<std::string> &llvmIR) {
    std::vector<ISAInstruction> instructions;
    
    for (const auto &ir : llvmIR) {
        if (ir.find("LOAD") != std::string::npos) {
            instructions.push_back({"LOAD", "R1", ir.substr(5), ""});
        }
    }

    return instructions;
}

void saveISAInstructions(const std::string &filename, const std::vector<ISAInstruction> &instructions) {
    std::ofstream file(filename);
    for (const auto &inst : instructions) {
        file << inst.opcode << " " << inst.dest << " " << inst.src1 << " " << inst.src2 << std::endl;
    }
}
