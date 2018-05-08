#include "livingobject.h"

LivingObject::LivingObject(int x, int y, int z, int diameter) : GameObject(x,y,z,diameter){}

double LivingObject::getHealth(){
    return this->health;
}

int LivingObject::getMaxHealth(){
    return this->maxhealth;
}

int LivingObject::getArmor(){
    return this->armor;
}

int LivingObject::getAttack(){
    return this->attack;
}

int LivingObject::getAttackSpeed(){
	return this->attackspeed;
}

int LivingObject::getMoveSpeed(){
	return this->movespeed;
}

int LivingObject::getHealSpeed(){
	return this->healspeed;
}

void LivingObject::IncrArmor(int a){
	this->armor += a;
}

void LivingObject::IncrAttack(int a){
	this->attack += a;
}

void LivingObject::IncrHealth(double h){
	this->health += h;
}

void LivingObject::IncrMaxHealth(int h){
	this->maxhealth += h;
}

void LivingObject::IncrAttackSpeed(int as){
	this->attackspeed += as;
}

void LivingObject::IncrHealSpeed(int hls){
	this->healspeed += hls;
}

void LivingObject::IncrMoveSpeed(int mvs){
	this->movespeed += mvs;
}

bool LivingObject::move(int newx, int newy, int newz){
	if(placeMeeting(newx, newy)==nullptr){
		this->setX(newx);
		this->setY(newy);
		this->setZ(newz);
		return true;
	}
	return false;
}

