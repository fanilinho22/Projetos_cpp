#include <iostream>
#include <iomanip>

//declarando as funcoes antes do main 
void conta(double contaf);
double deposito();
double sacar(double contaf);

int main(){

    double contaf = 0; //contaf = vai armazenar os valores na conta do usuario
    int desi = 0; // desi = decisao 

    do{// sistema de escolha / menu
        std::cout << "******BANCO DO BICHO******\n";
        std::cout << "Digite sua escolha: \n";
        std::cout << "***************************\n";
        std::cout << "1 - Mostrar conta\n";
        std::cout << "2 - Depositar\n";
        std::cout << "3 - Sacar\n";
        std::cout << "4 - Sair\n";
        std::cin >> desi;

        std::cin.clear();
        fflush(stdin);

        switch(desi){
            case 1:
                conta(contaf);
                break;
            case 2:
                contaf += deposito();
                conta(contaf);
                break;
            case 3:
                contaf -= sacar(contaf);
                conta(contaf);
                break;
            case 4:
                std::cout << "Volte sempre\n";
                break;
        }
    }while(desi != 4);

    

    return 0;
}

void conta(double contaf){
    //printa na tela o salso em sua conta
    std::cout << "Sua conta: $" << std::setprecision(2) << std::fixed << contaf << '\n';
}

double deposito(){
    // armazena a quantia que o usuario quer adicionar em sua conta 
    double quantia = 0;

    std::cout << "Quanto voce deseja depositar? \n";
    std::cin >> quantia;

    if(quantia > 0 ){
        return quantia;
    }else{
        std::cout << "Quantia invalida!!!\n";
        return 0;
    }
}

double sacar(double contaf){
    // retira da conta do usuario uma quantia que ele deseje sacar
    double quantia = 0;

    std::cout << "Quantos voce deseja retirar? \n";
    std::cin >> quantia;

    if(quantia > contaf){
        std::cout << "Quantia invalida!!!\n";
        return 0;
    }else{
        return quantia;
        
    }
}