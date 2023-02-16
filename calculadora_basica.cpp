#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double resp;

    std::cout << "**********CALCULADORA**********\n";

    std::cout << "qual o primeiro numero?\n ";
    std::cin >> num1;

    std::cout << "qual o segundo numero?\n ";
    std::cin >> num2;

    std::cout << "quan a operacao vai ser feita? (+ - * /)\n";
    std::cin >> op;

    std::cout << "*******************************\n";

    switch(op){
        case '+':
            resp = num1 + num2;
            break;
        case '-':
            resp = num1 - num2;
            break;
        case '*':
            resp = num1 * num2;
            break;
        case '/':
            resp = num1 / num2;
            break;
        default:
            std::cout << "insira uma operacao valida!!";
            break;
    }
    std::cout << "resposta: " << resp;

    return 0;
}