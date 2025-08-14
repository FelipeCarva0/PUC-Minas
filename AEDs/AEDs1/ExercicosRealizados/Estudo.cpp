#include<iostream>
#include<string>
using namespace std;
class Elevador{
private:
    int qtdPessoas;
    int qtdAndares;
    int andarAtual;
    int pessoasAtual;
public:
    Elevador(int qtdAndares, int qtdPessoas){
        this -> qtdAndares = qtdAndares;
        this -> qtdPessoas = qtdPessoas;
        this -> andarAtual = 0;
        this -> pessoasAtual = 0;
    }

    void entra(){
        if(pessoasAtual<qtdPessoas){
            pessoasAtual++;
           // cout<<"\nUma pessoa entrou. Quantidade de pessoas no elevador: "<< pessoasAtual;
        }else{
            cout<< "\nElevador lotado";

        }
    }
    void sai(){
        if(pessoasAtual>0){
            pessoasAtual--;
            //cout<<"\nUma pessoa saiu. Quantidade de pessoas no elevador: "<< pessoasAtual;
        }else{
        cout<< "\nElevador vazio";
        }

    }

    void sobe(){
        if(andarAtual<qtdAndares){
            andarAtual++;
            cout<<"\nAndar atual: "<<andarAtual;
             cout<<"\n Quantidade de pessoas no elevador: "<< pessoasAtual;
        }else{
        cout<<"\nVoce esta no topo";
        cout<<"\n Quantidade de pessoas no elevador: "<< pessoasAtual;
        }
    }
    void desce(){
        if(andarAtual>0){
            andarAtual--;
            cout<<"\nAndar atual"<<andarAtual;
            cout<<"\n Quantidade de pessoas no elevador: "<< pessoasAtual;
        }else{
        cout<<"\nVoce esta no terreo";
        cout<<"\n Quantidade de pessoas no elevador: "<< pessoasAtual;
        }
    }




};
int main(){
    Elevador variavel(4, 8);
    for(int i=0; i<5; i++){
    variavel.entra();
    }
    for(int i=0; i<2; i++){
        variavel.sobe();
    }
     for(int i=0; i<3; i++){
            variavel.sai();
     }
     for(int i=0; i<2; i++){
        variavel.sobe();
    }
    return 0;
}
