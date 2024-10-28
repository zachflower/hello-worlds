#include <iostream>
#include <fstream>
#include <vector>
#include <stack>

constexpr int TAPE_SIZE = 30000;

void interpretBrainfuck(const std::string& code) {
    std::vector<unsigned char> tape(TAPE_SIZE, 0);
    std::stack<int> loop_stack;
    size_t tape_ptr = 0;
    size_t code_ptr = 0;

    while (code_ptr < code.size()) {
        switch (code[code_ptr]) {
            case '>':
                tape_ptr = (tape_ptr + 1) % TAPE_SIZE;
                break;
            case '<':
                tape_ptr = (tape_ptr - 1 + TAPE_SIZE) % TAPE_SIZE;
                break;
            case '+':
                tape[tape_ptr]++;
                break;
            case '-':
                tape[tape_ptr]--;
                break;
            case '.':
                std::cout << static_cast<char>(tape[tape_ptr]);
                break;
            case ',':
                tape[tape_ptr] = static_cast<unsigned char>(std::cin.get());
                break;
            case '[':
                if (tape[tape_ptr] == 0) {
                    int open_brackets = 1;
                    while (open_brackets > 0) {
                        code_ptr++;
                        if (code[code_ptr] == '[') open_brackets++;
                        else if (code[code_ptr] == ']') open_brackets--;
                    }
                } else {
                    loop_stack.push(code_ptr);
                }
                break;
            case ']':
                if (tape[tape_ptr] != 0) {
                    code_ptr = loop_stack.top();
                } else {
                    loop_stack.pop();
                }
                break;
        }
        code_ptr++;
    }
}

std::string loadBrainfuckCode(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Could not open file");
    }
    std::string code;
    char ch;
    while (file.get(ch)) {
        if (ch == '>' || ch == '<' || ch == '+' || ch == '-' || 
            ch == '.' || ch == ',' || ch == '[' || ch == ']') {
            code += ch;
        }
    }
    return code;
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    try {
        std::string code = loadBrainfuckCode(argv[1]);
        interpretBrainfuck(code);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << "\n";
        return 1;
    }
    
    std::cout << std::endl;

    return 0;
}