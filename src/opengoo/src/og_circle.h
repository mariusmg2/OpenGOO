#ifndef OG_CIRCLE_H
#define OG_CIRCLE_H

#include "og_ibody.h"

struct WOGCircle;

class QPainter;

class OGCircle : public OGIBody
{
        void _Draw(QPainter* p);

    public:
        OGCircle(WOGCircle* circle, WOGMaterial* material);
        virtual ~OGCircle() {}
};

#endif // OG_CIRCLE_H
