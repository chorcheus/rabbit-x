#include "gameconstants.h"
#include <cmath>
vector<GameObject*> gameobjects;

/* Returns the position of GameObject go in the container gobs
 * Returns -1 if not found
*/
int findObj(GameObject go, vector<GameObject*> gobs){
    for(unsigned int i(0); i!=gobs.size(); ++i){
        if(go.equals(*gobs[i])) return i;
    }
    return -1;
}

/*GameObject constructor
*/
GameObject::GameObject(int x, int y, int z, int diameter){
    this->x = x;
    this->y = y;
    this->z = z;
	this->diameter = diameter;
    this->id = ID;
	++ID;
	gameobjects.push_back(this);
}

int GameObject::getID(){
	return this->id;
}

int GameObject::getX(){
    return this->x;
}

int GameObject::getY(){
    return this->y;
}

int GameObject::getZ(){
    return this->z;
}

int GameObject::getDiameter(){
	return this->diameter;
}

void GameObject::setX(int nx){
    this->x = nx;
}

void GameObject::setY(int ny){
    this->y = ny;
}

void GameObject::setZ(int nz){
    this->z = nz;
}

bool GameObject::equals(GameObject go){
    return this->id==go.getID();
}
/* Checks whether there is a GameObject on the position (+- diameter)
 * Returns GameObject if found. Else return nullptr
 */
GameObject* GameObject::placeMeeting(int x, int y){
	int d = this->diameter;
	for(unsigned int i(0); i!=gameobjects.size();++i){
		int ox = gameobjects[i]->getX();
		int oy = gameobjects[i]->getY();
		int od = gameobjects[i]->getDiameter();
		if(ox<x+d && ox+od>=x && oy<y+d && oy+od>=y && !this->equals(*gameobjects[i])) return gameobjects[i];
	}
	return nullptr;
}

/* Removes object from the GameObject container
*/
void GameObject::remove(){
    gameobjects.erase(gameobjects.begin() + findObj(*this, gameobjects));
}

/* Returns distance from the object
*/
double GameObject::distanceFrom(GameObject o){
	int ox = o.getX();
	int oy = o.getY();
	int oz = o.getZ();
	return sqrt((x-ox)*(x-ox)+(y-oy)*(y-oy)+(z-oz)*(z-oz));
}
