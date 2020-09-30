
#include "coord.hpp"

// common abstract base class GeoObj for geometric objects
class GeoObj {
  public:
    // draw geometric object:
    virtual void draw() const = 0;
    // return center of gravity of geometric object:
    virtual Coord center_of_gravity() const = 0;
    //...
};

// concrete geometric object class Circle
// - derived from GeoObj
class Circle : public GeoObj {
  public:
    virtual void draw() const {  }
    virtual Coord center_of_gravity() const {  }
    //...
};

// concrete geometric object class Line
// - derived from GeoObj
class Line : public GeoObj {
  public:
    virtual void draw() const {  };
    virtual Coord center_of_gravity() const  {   }
    //...
};
//
