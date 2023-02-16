#include <iostream>
#include <ctime>

//declarando funcoes antes do main
char escolhaJogador();
char escolhaPC();
void mostrarEscolha(char escolha);
void mostrarGanhador(char escolha, char escolhapc);

int main(){

    char escolha;
    char escolhapc;

    escolha = escolhaJogador();
    std::cout << "Sua escolha foi: ";
    mostrarEscolha(escolha);

    escolhapc = escolhaPC();
    std::cout << "A escolha do PC foi: ";
    mostrarEscolha(escolhapc);

    mostrarGanhador(escolha, escolhapc);

    return 0;
}

char escolhaJogador(){
    // pede qual vai ser a jogada do player para retornar a escolha
    char escolha;

    std::cout << "***********************\n";
    std::cout << "Pedra - papel - tesoura\n";
    std::cout << "***********************\n";

    do{
    std::cout << "faca sua escolha!!!\n";
    std::cout << "1 - Pedra!\n";
    std::cout << "2 - Papel!\n";
    std::cout << "3 - Tesoura!\n";
    std::cin >> escolha;
    }while(escolha != '1' && escolha != '2' && escolha != '3');

return escolha;
}
char escolhaPC(){
    //escolhe uma jogada aleatoria para jogar contra o player
    srand(time (0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return '1';
        case 2: return '2';
        case 3: return '3';
    }

return 0;
}
void mostrarEscolha(char escolha){
    //mostra a escolha baseado em 1 - pedra / 2 - papel / 3 - tesoura
    switch(escolha){
        case '1':
            std::cout << "Pedra\n";
            break;
        case '2':
            std::cout << "Papel\n";
            break;
        case '3':
            std::cout << "Tesoura\n";
            break;
    }


}
void mostrarGanhador(char escolha, char escolhapc){
    //sistema que define quem ganhou dependendo das variaveis do jogo
    switch(escolha){
        case '1':
            if(escolhapc == '1'){
                std::cout << "Empate!!!\n";
            }else if( escolhapc == '2'){
                std::cout << "Voce perdeu!!!\n";
            }else{
                std:: cout << "Voce ganhou!!!\n";
            }
            break;
        case '2':
            if(escolhapc == '1'){
                std::cout << "Voce ganhou!!!\n";
            }else if( escolhapc == '2'){
                std::cout << "Empatou!!!\n";
            }else{
                std:: cout << "Voce perdeu!!!\n";
            }
            break;
        case '3':
            if(escolhapc == '1'){
                    std::cout << "Voce perdeu!!!\n";
                }else if( escolhapc == '2'){
                    std::cout << "Voce ganhaou!!!\n";
                }else{
                    std:: cout << "Empatou!!!\n";
                }
                break;
    }
}