#ifndef BALLOONGOO_H
#define BALLOONGOO_H
#include "dynamicgoo.h"

#include <Box2D/Box2D.h>

class BalloonGoo : public DynamicGoo
{
public:
    BalloonGoo(b2World* world, QPoint p=QPoint(0,0),int radius=15,QObject *parent = 0);
    void drag();
    bool createLink(Goo *goo);
    bool destroyLink(Goo *goo);
    bool isDragable();
private:
    bool active;
    float rx,ry;
public slots:
    void paint(QPainter &p);
    void paintDebug(QPainter &p);
};

#endif // BALLOONGOO_H
