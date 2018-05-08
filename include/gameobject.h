/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   gameobject.h
 * Author: chorche
 *
 * Created on February 10, 2018, 1:44 PM
 */

#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

using namespace std;

static int ID(0);

class GameObject{
private:
    int id, x, y, z, diameter;
public:
    GameObject(int x, int y, int z, int diameter);
    int getID();
    int getX();
    int getY();
    int getZ();
	int getDiameter();
    void setX(int nx);
    void setY(int ny);
    void setZ(int nz);
    bool equals(GameObject go);
	GameObject* placeMeeting(int x, int y);
	double distanceFrom(GameObject o);
    void remove();
};

#endif /* GAMEOBJECT_H */

