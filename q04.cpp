#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Autor
{
    private:
    string Nome;

    public:
    Autor(){inicializa("nenhum");}
    Autor(string nome){Nome=nome;}
    void inicializa(string nome){Nome=nome;}
    void setNome(string nome){
        if(nome.length()>2){
            Nome=nome;
        }
    }
    string getNome(){return Nome;}
};

class Livro
{
    private:
    string Titulo;
    int Ano;
    Autor *Nome;

    public:
    Livro(){inicializa("nenhum",0,NULL);}
    Livro(string titulo, int ano, Autor *nome){
    inicializa(titulo,ano,nome);
    }
    void inicializa(string titulo, int ano, Autor *nome)
    {
        Titulo=titulo;
        Ano=ano;
        Nome=nome;
    }
    void setTitulo(string titulo){Titulo=titulo;}
    void setAno(int ano){Ano=ano;}
    void setNome(Autor *nome){Nome=nome;}
    string getTitulo(){return Titulo;}
    int getAno(){return Ano;}
    Autor* getNome(){return Nome;}

    void exibir()
    {
        cout<<"Detalhes do Livro:"<<endl<<"Titulo: "<<Titulo<<endl<<"Ano de Publicacao: "<<Ano<<endl<<"Autor: "<<Nome->getNome()<<endl;
        return;
    }

};

int main()
{
    Autor *autor=new Autor();
    string nome;
    getline(cin,nome);
    fflush(stdin);
    autor->setNome(nome);
    string titulo;
    int ano;
    getline(cin,titulo);
    fflush(stdin);
    cin>>ano;
    Livro *livro=new Livro(titulo,ano,autor);
    livro->exibir();


    return 0;
}


