/*
	Taken from an answer on stackoverflow:
	https://stackoverflow.com/questions/2616906/how-do-i-output-coloured-text-to-a-linux-terminal
*/
#include<ostream>

namespace Color{
	enum ColorCode{
		FG_RED		= 31,
		FG_GREEN	= 32,
		FG_BLUE		= 34,
		FG_DEFAULT	= 39,
		BG_RED		= 41,
		BG_GREEN	= 42,
		BG_BLUE		= 44,
		BG_DEFAULT	= 49
	};

	class Modifier{
		public:
			Modifier(ColorCode pCode) : code(pCode) {}
			friend std::ostream&
			operator<<(std::ostream& os, const Modifier& mod) {
				return os << "\033[" << mod.code << "m";
			}

		private:
			ColorCode code;
	};
}