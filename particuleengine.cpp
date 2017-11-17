#include "particuleengine.h"

ParticuleEngine::ParticuleEngine(int nbParticules):
nbParticules(nbParticules){
	particules = new Particule[nbParticules];
}

void Particule::initParticules(){
	for (int i = 0;i<nbParticules;i++){
		particules[i] = new Particule(QVector3D(10.0,10.0,10.0));
	}
}
