#include <string>

class Polynomial {
	private:
		Sign sign;
		std::string varName;

	public:
		Sign getSign() {
			return self->sign;
		}

		std::string getVarName() {
			return self->varName;
		}

}
