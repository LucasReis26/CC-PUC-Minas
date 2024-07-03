#include <iostream>
#include <iomanip>

class Pessoa{
    private:
        std::string nome;
        int idade;
        float altura;
    public:
        Pessoa()
        {
            Inicializa("Sem nome",0,0);
        }
        Pessoa(std::string nNome, int nIdade, float nAltura)
        {
            Inicializa(nNome,nIdade,nAltura);
        }
        void Inicializa(std::string nNome, int nIdade, float nAltura)
        {
            setNome(nNome);
            setIdade(nIdade);
            setAltura(nAltura);
        }
        void setNome(std::string nome)
        {
            this->nome = nome;
        }
        std::string getNome() { return nome; }
        void setIdade(int idade)
        {
            this->idade = idade;
        }
        int getIdade() { return idade; }
        void setAltura(float altura)
        {
            this->altura = altura;
        }
        float getAltura() { return altura; }
        void exibe()
        {
            std::cout << "Dados da pessoa: " << std::endl;
            std::cout << "Nome: " << getNome() << std::endl;
            std::cout << "Idade: " << getIdade() <<std::endl;
            std::cout << "Altura: " << std::setprecision(3) << getAltura() << " metros" << std::endl;
            std::cout << std::endl;
        }
};

int main()
{
    system("clear");

    std::string nome, enter;
    int N, idade;
    float altura;

    std::cin >> N;

    Pessoa X[N];

    for(int i = 0; i < N; i++)
    {
        std::getline(std::cin,enter);
        std::getline(std::cin,nome);
        std::cin >> idade >> altura;
        X[i].setNome(nome);
        X[i].setIdade(idade);
        X[i].setAltura(altura);
    }


    system("clear");
    for(int i = 0; i < N; i++)
    {
        X[i].exibe();
    }

}