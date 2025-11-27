#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
class Carro
{
    private:
    int CapacTanque;
    int ConsuCombustivel;
    int CombustAtual;
    int DistanPerco;

    public:
    Carro(){inicializa(50,15,0,0);    } 
    Carro(int c, int d){inicializa(50,15,c,d);}
    
    void inicializa(int a, int b, int c, int d){
        CapacTanque=a;
        ConsuCombustivel=b;
        CombustAtual=c;
        DistanPerco=d;
    }
    void setCombustAtual(int c){
        if(c>=0 && c<=CapacTanque){
            CombustAtual=c;
        }
        }
    void setDistanciaPerco(int d){
        if(d>=0)
        {
            DistanPerco=d;
        }
    }
    int getCombustAtual(){return CombustAtual;}
    int getDistanciaPerco(){return DistanPerco;}

    void calcular()
    {
        CombustAtual= CombustAtual-DistanPerco/ConsuCombustivel;

        if((int)CombustAtual<0)
        {
            cout<<"ERRO"<<endl;
            CombustAtual=0;
        }
    }
    void exibir()
    {
        cout<<"Distancia percorrida: "<<(int)DistanPerco<<endl;
        cout<<"Combustível restante: "<<(int)CombustAtual<<endl;
    }
    
};

int main()
{
    Carro p1,p2;
    int a,b;
    cin>>a>>b;
    p1.setCombustAtual(a);
    p2.setCombustAtual(b);
    cin>>a>>b;
    p1.setDistanciaPerco(a);
    p2.setDistanciaPerco(b);

    p1.calcular();
    p2.calcular();
    
    cout<<"Carro 1: "<<endl;
    p1.exibir();
    cout<<"Carro 2: "<<endl;
    p2.exibir();
    return 0;
}