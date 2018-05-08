
/* 
 * File:   rabbit.h
 * Author: chorche
 *
 * Created on February 10, 2018, 2:09 PM
 */

#ifndef RABBIT_H
#define RABBIT_H

#include "livingobject.h"
#include <string>
#include <vector>

const vector<string> names_maleRabbits = {
    "Tim", "Kim", "Jorge", "Dmitrij", "Chuck", "Ilja",
    "Josif", "Johan", "Ahmed", "Santiago", "Leonardo",
    "Emilio", "Andre", "Bruno", "Javier", "Jean", "Louis",
    "Pepe", "Fabrizio", "Luigi", "Boris", "Vladimir",
    "Leonid", "Karl", "Nikolay", "Thomas", "Chan", "Obez"
}; 

const vector<string> names_femaleRabbits = {
    "Kim", "Natasha", "Angelica", "Esmeralda", "Natalia",
    "Cho", "Alice", "Trash", "Sasha", "Vladlena", "Lada",
    "Ludmila", "Marta", "Nadezhda", "Oksana", "Olga",
    "Oholibah", "Oholah", "Svetlana", "Isabel", "Maria Jose",
    "Catalina", "Salome", "Fernanda", "Fabiana", "Clara"
};

enum gender{
    male, female, herma, unknown
};

class Rabbit: public LivingObject{
    protected:
        int hungry, buildspeed, gatherspeed;
        gender sex;
		string name;
    public:
       	Rabbit(int x, int y, int z, int diameter, gender sex); 
       	int getHungry();
       	int getBuildSpeed();
	int getGatherSpeed();
	string getName();
       	gender getSex();
       	void setHungry(int h);
       	void IncrBuildSpeed(int mv);
	void IncrGatherSpeed(int gs);  
};

#endif /* RABBIT_H */

