#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

  public:
	Vendedor(std::string nome, double quotaMensalVendas, double salarioHora, double horasTrabalhadas) {
	  _nome = nome;
	  _quotaMensalVendas = quotaMensalVendas;
	  setSalarioHora(salarioHora);
	  setHorasTrabalhadas(horasTrabalhadas);
	}

	std::string getNome() const { return _nome; }

    friend std::ostream & operator<<(std::ostream& os, const Vendedor& v) {
      os << "Nome: " << v.getNome() << std::endl
	  << "Salario Mes: " << v.pagamentoMes() << std::endl
	  << "Quota vendas: " << v.quotaTotalAnual() << std::endl;
      return os;
    }

	double quotaTotalAnual() const {
	  return _quotaMensalVendas * 12;
	}

  private:
    std::string _nome;
    double _quotaMensalVendas;

};

