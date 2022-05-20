#ifndef CONTA_H
#define CONTA_H
#include <string>


class Conta
{
protected:
    double saldo;
    int senha;
public:
    Conta();
    Conta(int senha, int numero, std::string titular, double saldo);
    ~Conta();
    int numero;
    std::string titular;
    bool exibeDados(int senha);
    double getSaldo(int senha);
    void setSaldo(double valor);
    void setSenha(int novaSenha);
    void deposito(double valor);
    void saque(int senha, double valor);

};


#endif