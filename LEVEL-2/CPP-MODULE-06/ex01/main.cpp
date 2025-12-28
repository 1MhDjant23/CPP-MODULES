#include "Serializer.hpp"

int	main() {
	Data*	dt = new Data();
	Data	*dataDeserialize = NULL;

	dt->y = 88;
	dt->y = 125;
	dt->c = 'Q';
	dt->stat = true;

	uintptr_t	uSerialize = Serializer::serialize(dt);
	std::cout << "data: " << dt << std::endl;
	std::cout << "x = " << dt->x << "y = " << dt->y << " .char is: " << dt->c << " .stat is: " << dt->stat << std::endl;
	std::cout << "uintpr_t is: " << uSerialize << std::endl;
	dataDeserialize = Serializer::deserialize(uSerialize);
	std::cout << "deserialized: " << dataDeserialize << std::endl;

	delete dt;
	return 0;
}

