#include "LexicalAnalyser.h"

class Interpreter {
    std::ifstream input;
    std::ofstream output;

    Expression* main = nullptr;
    Expression* eval_main = nullptr;
public:
    Interpreter();

    Interpreter(const char* inputFileName);

    Interpreter(const char* inputFileName, const char* outputFileName);

    Interpreter& read();

    Interpreter& execute();

    void print();

    void print(std::ostream& os);

    ~Interpreter();
};