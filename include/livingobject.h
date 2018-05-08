/* 
 * File:   livingobject.h
 * Author: chorche
 *
 * Created on February 10, 2018, 2:10 PM
 */

#ifndef LIVINGOBJECT_H
#define LIVINGOBJECT_H

#include "gameobject.h"

class LivingObject: public GameObject{
protected:
	double health;
        int maxhealth, attack, armor;
	int attackspeed, movespeed, healspeed;
    public:
        LivingObject(int x, int y, int z, int diameter);
        double getHealth();
        int getMaxHealth();
        int getAttack();
        int getArmor();
	int getAttackSpeed();
	int getMoveSpeed();
	int getHealSpeed();
	void IncrHealth(double h);
	void IncrMaxHealth(int h);
	void IncrAttack(int a);
	void IncrArmor(int a);
	void IncrAttackSpeed(int as);
	void IncrMoveSpeed(int mvs);
	void IncrHealSpeed(int hls);
	bool move(int newx, int newy, int newz);
};

#endif /* LIVINGOBJECT_H */

