#include "rabbit.h"

Rabbit::Rabbit(int x, int y, int z, int diameter, gender sex) : LivingObject(x,y,z, diameter){
    this->hungry = 0;
	this->sex = sex;
    if(sex==male){
        int nameindex = rand() % names_maleRabbits.size();
		this->name = names_maleRabbits[nameindex];
    }
    else if(sex==female){
        int nameindex = rand() % names_femaleRabbits.size();
		this->name = names_femaleRabbits[nameindex];
    }
}

string Rabbit::getName(){
	return this->name;
}

int Rabbit::getHungry(){
    return this->hungry;
}

int Rabbit::getBuildSpeed(){
    return this->buildspeed;
}

int Rabbit::getGatherSpeed(){
	return this->gatherspeed;
}

gender Rabbit::getSex(){
    return this->sex;
}

void Rabbit::setHungry(int h){
    this->hungry = h;
}

void Rabbit::IncrBuildSpeed(int mv){
    this->buildspeed += mv;
}

void Rabbit::IncrGatherSpeed(int gs){
    this->gatherspeed += gs;
}



