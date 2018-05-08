/* 
 * File:   rabbitunits.h
 * Author: chorche
 *
 * Created on February 10, 2018, 4:19 PM
 */

#ifndef RABBITUNITS_H
#define RABBITUNITS_H

#include "rabbit.h"
#include <string>

class RabbitMale : public Rabbit{
public:
    RabbitMale(int x, int y, int z);
};

class RabbitFemale : public Rabbit{
private:
	int ovulation, pregnant;
	int ovulspeed, birthspeed, ovullength;
public:
    RabbitFemale(int x, int y, int z);
	int getOvulation();
	int getPregnant();
	int getOvulSpeed();
	int getBirthSpeed();
	int getOvulLength();
	void IncrOvulation(int o);
	void IncrPregnant(int p);
	void IncrOvulSpeed(int o);
	void IncrOvulLength(int o);
	void IncrBirthSpeed(int b);
};

class RabbitKid : public Rabbit{
private:
	int grow, growspeed;
public:
	RabbitKid(int x, int y, int z);
	int getGrow();
	int getGrowSpeed();
	void IncrGrow(int i);
	void IncrGrowSpeed(int i);
};
#endif /* RABBITUNITS_H */

