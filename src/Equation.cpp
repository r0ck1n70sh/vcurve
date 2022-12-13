#include <string>

class Equation {
	private:
		vector<Polynomial> expression;

	public:
		void addPolynomial(Polynomial polynomial);
		std::string getExpression();
		vector<Polynomial> getExpression();
};
