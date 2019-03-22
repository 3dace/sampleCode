#include <iostream>
#include <string>
#include <vector>
#include <array>

///MACROS::

#define __ex__ exit(0) // Not using semi-colons purposely (if I am reading this, // I obviously know. JUst to others.
#define __ExErr__ exit(1) // Exits with error code 1 (meaning something went wrong)
/// My conventions: __SystemDefined__, __Var
#define __vNum int verificationnum
#define __tryWhich const std::string trywhich
#define __catchWhich const std::string catchWhich


/*
	TRYWHICH REFERENCE:
		///
*/



namespace debug {
	template <typename T> 
	const int Which(const std::vector<T> params) const { // Calls other functions depending
						// on input....										//Const makes it read only
		params.push_back();

		return 0; // int values always return and number.
	}
	const int cWhich(std::vector<std::string, const char*> params) const { // Read only
		//Calls other functions depending on input
			

		return 0;
	}
}

class tryor // Core DEBUG feauture (will be implemented later.
{
private:
	///
protected:
	///
public:
	tryor();
	~tryor();

};

tryor::tryor(__vNum = 0, __tryWhich = "default", __catchWhich = "default") // My own macros (defined at top) and set to default values
//using macros to save space
{
	if () // Check param values, and assign (with THIS keyword) to a global variable.

}

tryor::~tryor()
{
}
