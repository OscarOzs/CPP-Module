# include <iostream>
# include "Sample1_struct.hpp"
# include "Sample2_class.hpp"

int main(void)
{
	Sample1	instance1;
	Sample2 instance2;

	return (0);
}

// la difference entre une classe et une structure est leur scope par defaut.
// par defaut la struct aura un scope public tandis que si non specifie la class aura un scope private