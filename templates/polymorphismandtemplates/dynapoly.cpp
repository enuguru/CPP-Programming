
#include "dynahier.hpp"
#include <vector>

// draw any GeoObj
void myDraw (GeoObj const& obj)
{
    obj.draw();            // call draw() according to type of object
}

// process distance of center of gravity between two GeoObjs
Coord distance (GeoObj const& x1, GeoObj const& x2)
{
    Coord c = x1.center_of_gravity() - x2.center_of_gravity();
    return c.abs();        // return coordinates as absolute values
}

// draw heterogeneous collection of GeoObjs
void drawElems (std::vector<GeoObj*> const& elems)
{
    for (unsigned i=0; i<elems.size(); ++i) {
        elems[i]->draw();  // call draw() according to type of element
    }
}

int main()
{
    Line l;
    Circle c, c1, c2;

    myDraw(l);            // myDraw(GeoObj&) => Line::draw()
    myDraw(c);            // myDraw(GeoObj&) => Circle::draw()

    distance(c1,c2);      // distance(GeoObj&,GeoObj&)
    distance(l,c);        // distance(GeoObj&,GeoObj&)

    std::vector<GeoObj*> coll; // heterogeneous collection, a vector of different objects, so it is a collection
                               // this is collection that contains different types of objects one circle
                               // and the other line 
    coll.push_back(&l);        // insert line, here you are pushing the address of line object
    coll.push_back(&c);        // insert circle, here you are pushing the address of circle object
    drawElems(coll);            // draw different kinds of GeoObjs
}
