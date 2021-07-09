//
//  camera.hpp
//  RayTracer
//
//  Created by Noé on 09/07/2021.
//  Copyright © 2021 Noé. All rights reserved.
//

#ifndef camera_hpp
#define camera_hpp

#include <stdio.h>
#include "Vector.hpp"

class Camera{
public:
    Vector *pos;
    Vector *dir;
    
    float fov;
    
    Camera();
    Camera(Vector pos, Vector dir, float fov);
    
    void setPosition(Vector);
    void setDirection(Vector);
    
};

#endif /* camera_hpp */
