//
//  rayTracer.hpp
//  RayTracer
//
//  Created by Noé on 09/07/2021.
//  Copyright © 2021 Noé. All rights reserved.
//

#ifndef rayTracer_hpp
#define rayTracer_hpp

#include <stdio.h>
#include "camera.hpp"
#include "utils.hpp"

class RayTracer{
public:
    Camera* camera;
    int s_width,s_height;
    
    Texture texture;
    Sprite sprite;
    Uint8 *pixels;
    
    float pix_size;
    RayTracer(Camera,int,int);
    
    void drawScreen(RenderWindow& window);
private:
    void draw_rect(int x, int y, Color);
};

#endif /* rayTracer_hpp */
