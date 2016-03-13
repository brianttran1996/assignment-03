/* ----------------------------------------------------------------------------
* Copyright &copy; 2016 Ben Blazak <bblazak@fullerton.edu>, Brian Tran <brianttran1996@csu.fullerton.edu> and Gary Kam <kamgary109@csu.fullerton.edu>
* Released under the [MIT License] (http://opensource.org/licenses/MIT)
* ------------------------------------------------------------------------- */


//This is part 1

//Reference: http://www.cplusplus.com/doc/tutorial/exceptions/

#include <iostream>
#include <exception>
using std::cout;
using std::endl;

using std::string;

using std::exception;

class Turtle{
private:
	static const bool areYouATurtleOrNot = true;
	string snails[20];

public:
	Turtle(bool areYouATurtleOrNot);
	~Turtle();

	virtual const char* noway() const throw()
	{
		return "My exception happened, which means that you're not turtle after all.\n";
	}
} myException;

Turtle::Turtle(bool areYouATurtleOrNot){
	if (areYouATurtleOrNot)
		cout << "Yes, you are.\n";
	else
		cout << "No, you're not.\n";
}

	int main(){
		try
		{
			throw myException;
		}
		catch (Turtle& e)
		{
			cout << e.noway() << '\n';
		}
		return 0;
}

//This is part 2
//Will update

//This is part 3
//Will update

//This is part 4
//Will update

//This is part 5
//Will update
