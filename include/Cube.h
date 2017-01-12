#pragma once

#include "includes.h"
#include "Avion.h"
#include "Joueur.h"
#include "Ennemi.h"

using namespace std;

const string CHEMIN_MODELES = "modèles/";

class Cube {
private:
    Joueur* J1;
    Joueur* J2;
    Ennemi* E1;
    Ennemi* E2;

	osg::ref_ptr<osg::PositionAttitudeTransform>  patAvionAmi1;
	osg::ref_ptr<osg::PositionAttitudeTransform>  patAvionAmi2;
	osg::ref_ptr<osg::PositionAttitudeTransform>  patAlignement;
	osg::ref_ptr<osg::PositionAttitudeTransform>  patAvionEnnemi1;
	osg::ref_ptr<osg::PositionAttitudeTransform>  patAvionEnnemi2;
	osg::ref_ptr<osg::PositionAttitudeTransform>  patSCALE;
	void ConstructionAvion();
	int compteur;
    std::vector<Avion*> ListeAvion ;
	int n;
	osg::ref_ptr<osg::Group> root;
	osgViewer::Viewer* viewer;
	osg::Vec3f getSubCubePosition(int i,int j,int k);
	osg::ref_ptr<osg::Node> createSubCube(int i,int j,int k);
	osg::ref_ptr<osg::Group> createCube();
	void afficherAvion();
	void elimination(vector<int> ListeTouchés, vector<Avion*> &ListeAvion);
	bool VerificationFin(std::vector<Avion*> &ListeAvion);
public:
	osgViewer::Viewer* getViewer() { return viewer; }
	void mainLoop();
	Cube(int _n);
	void afficherCube();
	int getSize() { return n; }

	bool fin;
};
