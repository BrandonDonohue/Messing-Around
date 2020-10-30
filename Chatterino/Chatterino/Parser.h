class Parser{
	public:
		Parser(std::string input){
			result = input;
		}

		int parse(std::string input);
	private:
		std::string result;	
};