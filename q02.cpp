#include <iostream>
#include <string>
#include <iomanip>
#include <cstdio>
using namespace std;

class Relogio
{
    private:
    int Hora;
    int Minuto;
    int Segundo;

    public:
    Relogio(int hora=0, int minuto=0, int segundo=0)
    {
        Hora=hora;
        Minuto=minuto;
        Segundo=segundo;
    }
    void setHora(int hora)
    {
        if(hora>=0 && hora <24)
        {
             Hora=hora;
        }
        else
        cout<<"Hora invalida"<<endl;
    }
    void setMinuto(int minuto)
    {
        if(minuto>=0 && minuto <=59)
        {
             Minuto=minuto;
        }
        else
        cout<<"Minuto invalida"<<endl;
    }
    void setSegundo(int segundo)
    {
        if(segundo>=0 && segundo <=59)
        {
             Segundo=segundo;
        }
        else
        cout<<"Segundo invalida"<<endl;
    }
    int getHora()
    {
        return Hora;
    }
    int getMinuto()
    {
        return Minuto;
    }
    int getSegundo()
    {
        return Segundo;
    }
    void avancar()
    {
        Segundo++;
        if(Segundo==60)
        {
            Minuto++;
            Segundo=0;
            if(Minuto==60)
            {
                Minuto=0;
                Hora++;
                if(Hora==24)
                {
                    Hora=0;
                }
            }
        }

    }
    void mostrar()
    {
        printf("Novo Horario: %02d:%02d:%02d\n",Hora,Minuto,Segundo);

        return;
    }
};

int main()
{
    int N;
    cin>>N;
    Relogio *rl=new Relogio[N];
    for(int i=0;i<N;i++)
    {
        int Hora,Minuto,Segundo;
        cin>>Hora;
        cin>>Minuto;
        cin>>Segundo;
        printf("Horario Atual: %02d:%02d:%02d\n",Hora,Minuto,Segundo);
        rl[i].setHora(Hora);
        rl[i].setMinuto(Minuto);
        rl[i].setSegundo(Segundo);
        rl[i].avancar();
        rl[i].mostrar();

    }
    
    return 0;
}