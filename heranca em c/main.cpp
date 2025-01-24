// Figura 12.16: fig12_16.cpp
// Testando a classe BasePlusCommissionEmployee.

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

// definição da classe BasePlusCommissionEmployee
#include "BasePlusCommissionEmployee.h"

int main()
{
    // instancia o objeto BasePlusCommissionEmployee
    BasePlusCommissionEmployee employee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);

    // configura a formatação de saída de ponto flutuante
    cout << fixed << setprecision(2);

    // obtém os dados do empregado comissionado
    cout << "Informações do empregado obtidas pelas funções get: \n"
         << "\nPrimeiro nome: " << employee.getFirstName()
         << "\nÚltimo nome: " << employee.getLastName()
         << "\nNúmero do seguro social: " << employee.getSocialSecurityNumber()
         << "\nVendas brutas: " << employee.getGrossSales()
         << "\nTaxa de comissão: " << employee.getCommissionRate()
         << "\nSalário-base: " << employee.getBaseSalary() << endl;

    employee.setBaseSalary(1000); // configura o salário-base

    cout << "\nInformações atualizadas do empregado exibidas pela função print: \n"
         << endl;
    employee.print(); // exibe as novas informações do empregado

    // exibe os rendimentos do empregado
    cout << "\n\nRendimentos do empregado: $" << employee.earnings() << endl;

    return 0;
} // fim de main
