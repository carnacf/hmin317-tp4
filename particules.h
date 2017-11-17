#ifndef PARTICULES_H
#define PARTICULES_H

#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QVector2D>
#include <QVector3D>
#include <QColor>

class Particule{
	public:
	Particule(QVector3D & p);
	
	QVector3D pos;
	QVector3D velocity;
	
	QColor col;
	
	float lifetime;
	
	float size;
	
	bool isAlive;
	
	private:
	
};

#endif

