#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Elevador
{
    private:
    int AndarAtual;
    int TotalAndares;
    int Capacidade;
    int PessoasPresentes;

    public:
    Elevador()
    {
        inicializa(0,1,1,0);
    }
    Elevador(int capac, int total)
    {
        inicializa(0,capac,total,0);
    }
    void inicializa(int andar, int capac, int total, int pessoas)
    {
        AndarAtual=andar;
        Capacidade=capac;
        TotalAndares=total;
        PessoasPresentes=pessoas;
    }
    void entra()
    {
        if(Capacidade >PessoasPresentes){
            PessoasPresentes++;
        }
    }
    void sair()
    {
        if(PessoasPresentes>0)
        {
            PessoasPresentes--;
        }
    }
    void subir()
    {
        if(AndarAtual<TotalAndares)
        {
            AndarAtual++;
        }
    }
    void descer()
    {
        if(AndarAtual>0)
        {
            AndarAtual--;
        }
    }
    void mostrar()
    {
        cout<<"Andar atual: "<<AndarAtual<<endl<<"Pessoas presentes: "<<PessoasPresentes<<endl;
    }
    int getAndarAtual(){return AndarAtual;}
    int getTotatalAndares(){return TotalAndares;}
    int getCapacidade(){return Capacidade;}
    int getPessoasPresentes(){return PessoasPresentes;}
};

int main()
{
    int cap, andar;
    cin>>cap>>andar;
    Elevador elevador(cap,andar);
    int count=0;
    cin>>count;
    for(int i=0;i<count;i++)
    {
        string op;
        cin>>op;
        if(op=="subir"){
            elevador.subir();
        }
        else if(op=="descer"){
            elevador.descer();
        }
        else if(op=="entrar"){
            elevador.entra();
        }
        else{
            elevador.sair();
        }
        elevador.mostrar();
    }
    return 0;
}