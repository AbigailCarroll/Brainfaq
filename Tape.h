#include <vector>

class Tape
{
public:

	Tape();

	void increment();

	void decrement();

	int read(int cell);

	void write(int input);

	void jump_program_forward();

	void jump_program_back();

	int get_pointer();

private:

	std::vector<std::byte> tape;
	int pointer;

};

