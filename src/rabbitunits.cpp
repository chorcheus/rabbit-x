#include "rabbitunits.h"
#include "gameattributes.h"

static int adultDiameter = 32;
static int kidDiameter = 24;

RabbitMale::RabbitMale(int x, int y, int z) : Rabbit(x, y, z, adultDiameter, male){
	this->attack = RABBITM_ATTACK;
	this->armor = RABBITM_ARMOR;
	this->maxhealth = RABBITM_HEALTH;
	this->health = this->maxhealth;
	this->movespeed = RABBITM_MVSPEED;
	this->buildspeed = RABBITM_BLDSPEED;
	this->attackspeed = RABBITM_ATTSPEED;
	this->gatherspeed = RABBITM_GATHSPEED;
	this->healspeed = RABBITM_HEALSPEED;
}

RabbitFemale::RabbitFemale(int x, int y, int z) : Rabbit(x, y, z, adultDiameter, female){
	this->attack = RABBITF_ATTACK;
	this->armor = RABBITF_ARMOR;
	this->ovulation = 0;
	this->pregnant = 0;
	this->maxhealth = RABBITF_HEALTH;
	this->health = this->maxhealth;
	this->movespeed = RABBITF_MVSPEED;
	this->buildspeed = RABBITF_BLDSPEED;
	this->attackspeed = RABBITF_ATTSPEED;
	this->gatherspeed = RABBITF_GATHSPEED;
	this->healspeed = RABBITF_HEALSPEED;
	this->ovullength = RABBITF_OVULLENGTH;
	this->ovulspeed = RABBITF_OVULSPEED;
	this->birthspeed = RABBITF_BIRTHSPEED;
}

int RabbitFemale::getOvulation(){
	return this->ovulation;
}

int RabbitFemale::getPregnant(){
	return this->pregnant;
}

int RabbitFemale::getOvulLength(){
	return this->ovullength;
}

int RabbitFemale::getOvulSpeed(){
	return this->ovulspeed;
}

int RabbitFemale::getBirthSpeed(){
	return this->birthspeed;
}

void RabbitFemale::IncrOvulation(int o){
	this->ovulation += o;
}

void RabbitFemale::IncrPregnant(int p){
	this->pregnant += p;
}

void RabbitFemale::IncrOvulLength(int o){
	this->ovullength += o;
}

void RabbitFemale::IncrOvulSpeed(int o){
	this->ovulspeed += o;
}

void RabbitFemale::IncrBirthSpeed(int b){
	this->birthspeed += b;
}

static vector<gender> sx = {male, female, male, female, male};
RabbitKid::RabbitKid(int x, int y, int z) : Rabbit(x, y, z, kidDiameter, sx[rand() % 5]){
	this->attack = RABBITK_ATTACK;
	this->armor = RABBITK_ARMOR;
	this->grow = 0;
	this->maxhealth = RABBITK_HEALTH;
	this->health = this->maxhealth;
	this->movespeed = RABBITK_MVSPEED;
	this->buildspeed = RABBITK_BLDSPEED;
	this->attackspeed = RABBITK_ATTSPEED;
	this->gatherspeed = RABBITK_GATHSPEED;
	this->healspeed = RABBITK_HEALSPEED;
	this->growspeed = RABBITK_GROWSPEED;
}

int RabbitKid::getGrow(){
	return this->grow;
}

int RabbitKid::getGrowSpeed(){
	return this->growspeed;
}

void RabbitKid::IncrGrow(int i){
	this->grow += i;
}

void RabbitKid::IncrGrowSpeed(int i){
	this->growspeed += i;
}

