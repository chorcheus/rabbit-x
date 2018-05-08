/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: chorche
 *
 * Created on February 10, 2018, 1:50 PM
 */

#include "rabbitunits.h"
#include "gameconstants.h"

using namespace std;

ostream& operator<<(ostream& o, gender sex){
    switch(sex){
		case male:
			cout << "male";
			break;
		case female:
			cout << "female";
			break;
		case herma:
			cout << "herma";
			break;
		case unknown:
			cout << "unknown";
			break;
	}
    return o;
}

Rabbit * getRabbit(int i){
	return (Rabbit*) gameobjects[i];
}

/*
 * 
 */
int main(int argc, char** argv) {
	srand(time(0));	//to get random name each time one calls it

	RabbitMale rabbit1(45,24,68);
	RabbitMale rabbit2(12,64,24);
	RabbitFemale rabbit3(0,4,98);
	RabbitFemale rabbit4(145,98,12);
	RabbitKid rabbit5(456, 874, 65);
	RabbitKid rabbit6(12, 54, 78);
	RabbitKid rabbit7(45, 87, 65);
	RabbitKid rabbit8(1, 5, 78);
	RabbitKid rabbit9(56, 74, 65);
	RabbitKid rabbit10(2, 4, 78);
	
	cout << "ID" << "\t" << "Sex" << "\t" << "Health" << "\t";
	cout << "Armor" << "\t" << "Attack" << "\t" << "Speed\t" << "Name\n";
	cout << "---------------------------------------------------------------------\n";
	
	for(unsigned int i(0); i!=gameobjects.size(); ++i){
		Rabbit * tmp_rabbit = getRabbit(i);
		cout << tmp_rabbit->getID() << "\t";
		cout << tmp_rabbit->getSex() << "\t";
		cout << tmp_rabbit->getMaxHealth() << "\t";
		cout << tmp_rabbit->getArmor() << "\t";
		cout << tmp_rabbit->getAttack() << "\t";
		cout << tmp_rabbit->getMoveSpeed() << "\t";
		cout << tmp_rabbit->getName() << "\n";
	}
	
	cout << "\nPlace meetings\n";
	for(unsigned int i(0); i!=gameobjects.size(); ++i){
		Rabbit * tmp_rabbit = getRabbit(i);
		if(tmp_rabbit->placeMeeting(tmp_rabbit->getX(), tmp_rabbit->getY())==nullptr)
			cout << "False\n";
		else
			cout << "True\n";
	}
    return 0;
}

