// Heading.h -- Heading class specification
#ifndef HEADING_H
#define HEADING_H
#include <string>
using namespace std;

class Heading
{
	private:
		string Company,		// Company Name
			   Report;		// Report Name

	public:
		// Default constructor loaded with default values
		Heading()
		{
			Company = "ABC Industries";
			Report = "Report";
		}
		
		// Defaul constructor loaded
		// Alows user to pass arguments to class member variables
		// when a Heading object is created
		Heading(string c, string r)
		{
			Company = c;
			Report = r;
		}

		// Member function prototypes
		void setHeading(string, string);
		void prtOneline(Heading);
		void prtFourline(Heading);
};
#endif
