#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:
	Engenheiro(std::string nome, int projetos, double salarioHora, double horasTrabalhadas) {
	  _nome = nome;
	  _projetos = projetos;
	  setSalarioHora(salarioHora);
	  setHorasTrabalhadas(horasTrabalhadas);
	}

	std::string getNome() const { return _nome; }
	int getProjetos() const { return _projetos; }

    friend std::ostream & operator<<(std::ostream& os, const Engenheiro& e) {
      os << "Nome: " << e.getNome() << std::endl
	  << "Salario Mes: " << e.pagamentoMes() << std::endl
	  << "Projetos: " << e.getProjetos() << std::endl;
      return os;
    }

  private:
    std::string _nome;
	int _projetos;

};

