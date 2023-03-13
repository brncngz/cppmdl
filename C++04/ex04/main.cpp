
#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "MiningBarge.hpp"

int main(void)
{
	MiningBarge barge;

	IAsteroid *comet = new AsteroKreog();
	IAsteroid *asteroid = new KoalaSteroid();

	IMiningLaser *deep = new DeepCoreMiner();
	IMiningLaser *strip = new StripMiner();

	std::cout << "---0" << std::endl;
	barge.mine(comet);
	std::cout << "---0" << std::endl;
	barge.mine(asteroid);
//  No lasers equipped, nothing to do //

	barge.equip(deep);

	std::cout << "---1" << std::endl;
	barge.mine(comet);
	std::cout << "---1" << std::endl;
	barge.mine(asteroid);
	barge.equip(strip);
	std::cout << "---2" << std::endl;
	barge.mine(comet);
	std::cout << "---2" << std::endl;
	barge.mine(asteroid);

	IMiningLaser *deep2 = new DeepCoreMiner();
	IMiningLaser *strip2 = new StripMiner();
	IMiningLaser *strip3 = new StripMiner();

	barge.equip(strip);
	barge.equip(0);
	std::cout << "---2" << std::endl;
	barge.mine(comet);
	std::cout << "---2" << std::endl;
	barge.mine(asteroid);
	barge.equip(strip2);
	std::cout << "---3" << std::endl;
	barge.mine(comet);
	std::cout << "---3" << std::endl;
	barge.mine(asteroid);
	barge.equip(deep2);
	barge.equip(strip3);
	std::cout << "---4" << std::endl;
	barge.mine(comet);
	std::cout << "---4" << std::endl;
	barge.mine(asteroid);

	std::cout << "---0" << std::endl;
	barge.mine(0);

	std::cout << "---0" << std::endl;
	deep2->mine(0);
	std::cout << "---1" << std::endl;
	deep2->mine(comet);
	std::cout << "---1" << std::endl;
	deep2->mine(asteroid);
	std::cout << "---0" << std::endl;
	strip3->mine(0);
	std::cout << "---1" << std::endl;
	strip3->mine(comet);
	std::cout << "---1" << std::endl;
	strip3->mine(asteroid);

	delete deep;
	delete deep2;
	delete strip;
	delete strip2;
	delete strip3;
	delete comet;
	delete asteroid;

	return (0);
}
