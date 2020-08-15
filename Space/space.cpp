#include <iostream>

int main() {

	double weight 
	int nPlanet

	std::cout << "Enter your weight on Earth: ";
	std::cin >> weight;

	std::cout << "\nPlanet options available:\n1. Venus\n2. Mars\n3. Jupiter\n4. Saturn\n5. Uranus\n6. Neptune\n";
	std::cout << "Enter the number of the planet you would like to visit: ";
    std::cin >> nPlanet;

    switch(nPlanet); {

    	case 1:
    		pWeight = weight * 0.78;
    		std::cout << "Your weight on Venus is: " << pWeight;
    		break;

    	case 2: 
    		pWeight = weight * 0.39;
    		std::cout << "Your weight on Mars is: " << pWeight;
    		break;

    	case 3:
    		pWeight = weight * 2.65;
    		std::cout << "Your weight on Jupiter is: " << pWeight;
    		break;
    	case 4:
    		pWeight = weight * 1.17;
    		std::cout << "Your weight on Saturn is: " << pWeight;
			break;
    	case 5:
    		pWeight = weight * 1.05;
    		std::cout << "Your weight on Uranus is: " << pWeight;
    		break;
    	case 6:
    		pWeight = weight * 1.23;
    		std::cout << "Your weight on Neptune is: " << pWeight;
    		break

    }

    

}