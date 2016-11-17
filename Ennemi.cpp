#include "Ennemi.h"

avionEnnemi::avionEnnemi(osg::Vec3f pos, osg::Vec3f dir) : Avion()
{
	position = pos;
	direction = dir;
	camp=false;
}

void avionEnnemi::Strategie(std::vector<Avion> &avions){

	//Trouver ennemi le plus proche
	Avion *plusProche;
	plusProche=trouverJoueurProche(avions);


	//

	//Verifier murs

}

avionEnnemi::~avionEnnemi(){

}

Avion* trouverJoueurProche(std::vector<Avion> avions){
	int i,j=0;
	for(i=1;i<avions->size();i++)
	{
		if(dist(this->position,avions[i].position)<dist(this->position,avions[j].position))
		{

		}
	}
}

float dist(osg::Vec3f a,osg::Vec3f b){
	return (std::sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z)));
}
