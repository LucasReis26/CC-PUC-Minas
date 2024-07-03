#include <iostream>

class Relogio{
    private:
        int hora;
        int min;
        int seg;
    public:
        Relogio()
        {
            Inicializa(0,0,0);
        }
        Relogio(int nHora, int nMin, int nSeg)
        {
            Inicializa(nHora, nMin, nSeg);
        }
        void Inicializa(int nHora, int nMin, int nSeg)
        {
            setHora(nHora);
            setMin(nMin);
            setSeg(nSeg);
        }
        void setHora(int hora)
        {
            if(hora <= 23 && hora >= 0)
                this->hora = hora;
            else
                return;
        }
        int getHora() { return hora; }
        void setMin(int min)
        {
            if(min <= 59 && min >= 0)
                this->min = min;
            else
                return;
        }
        int getMin() { return min; }
        void setSeg(int seg)
        {
            if(seg <= 59 && seg >= 0)
                this->seg = seg;
            else
                return;
        }
        int getSeg() { return seg; }
        void addSeg()
        {
            if(seg == 60)
            {
                seg = 0;
                min++;
            }
            if(min == 60)
            {
                min = 0;
                hora++;
            }
            if(hora == 24)
            {
                
            }
        }
};