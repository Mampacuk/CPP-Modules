#include "Brain.hpp"
#include <sstream>

std::string	Brain::identify(void) const
{
	std::ostringstream	os;

	os << this;
	return (os.str());
}
