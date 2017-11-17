#ifndef PARTICULE_ENGINE_H
#define PARTICULE_ENGINE_H

#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QVector2D>
#include <QVector3D>
#include <QImage>
#include <QColor>

#include "particules.h"

class ParticuleEngine: protected QOpenGLFunctions{
	
public:
	
	ParticuleEngine(int nbParticules);
	
	int nbParticules;
	
	Particule * particules;
	void drawParticules();
	
private:
	void initParticules();
	
	
};

#endif
