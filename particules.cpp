#include "particules.h"

Particule::Particule(QVector3D &p):
position(p),
velocity(1,1,1),
color(QColor(255,255,255,255)),
lifetime(5.0),
size(5.0),
isAlive(true){
	
}
