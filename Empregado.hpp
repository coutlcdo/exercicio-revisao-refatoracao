#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {

  public:
	void setSalarioHora(double entry) { salarioHora = entry; }
	void setHorasTrabalhadas(double entry) { horasTrabalhadas = entry; }

    double pagamentoMes() const {
	  double horasExtra = 0;

	  // Cálculo de hora extra (quando horasTrabalhadas é mais que as 8 padrão
	  // é adicionado 50% das horas extras)
      if(horasTrabalhadas > 8) {
        horasExtra = horasTrabalhadas - 8;
        horasExtra /= 2;
      }

	  return (horasTrabalhadas + horasExtra) * salarioHora;
    }

  private:
    double salarioHora;
	double horasTrabalhadas;

};

#endif