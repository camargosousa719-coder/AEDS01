#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


class Dados
{
    private:
    string Nome;
    int Idade;
    float Altura;

    public:
    Dados()
    {
        inicializa("nenhum",0,0);
    }
    Dados(string Nome, int Idade, int Altura)
    {
        inicializa(Nome, Idade, Altura);

    }
void setNome(string nome){
    if(nome.length()>2){
        Nome=nome;
    } else{
        cout<<"Nome nao existe"<<endl;
    }
    
}
void setIdade(int idade){
    if(idade>0){
    Idade=idade;
    }
    else{
        cout<<"Idade nao existe"<<endl;
    }
}
void setAltura(float altura){
    if(altura>0){
    Altura=altura;
    }
    else{
        cout<<"Altura nao existe"<<endl;
    }
}
string getNome()
{
    return Nome;
}
int getIdade()
{
    return Idade;
}
float getAltura()
{
    return Altura;
}
void inicializa(string nome, int idade, float altura)
{
    Nome= nome;
    Idade= idade;
    Altura= altura;
}
void exibir()
{
    cout<<"Dados da pessoa:"<<endl;
    cout<<"Nome: "<<Nome<<endl;
    cout<<"Idade: "<<Idade<<" anos"<<endl;
    cout<<fixed << setprecision(2)<<"Altura: "<<Altura<<" metros"<<endl;
}
};
int main()
{
    
    int N;
    string nome;
    int idade;
    float altura;
    cin>>N;
    Dados *objeto=new Dados[N];
    for(int i=0;i<N;i++)
{
    cin>>nome;
    cin>>idade;
    cin>>altura;
    objeto[i].inicializa(nome,idade,altura);
    objeto[i].exibir();
    cout<<endl;

}
    return 0;
}

