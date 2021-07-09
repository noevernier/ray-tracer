//
//  rayTracer.cpp
//  RayTracer
//
//  Created by Noé on 09/07/2021.
//  Copyright © 2021 Noé. All rights reserved.
//

#include "rayTracer.hpp"

RayTracer::RayTracer(Camera camera, int s_width, int s_height){
    this->camera = &camera;
    this->s_width = s_width;
    this->s_height = s_height;
    this->pix_size = (float)width/(float)s_width;
    
    texture.create(width, height);
    pixels  = new Uint8[width * height * 4];
}

void RayTracer::draw_rect(int x, int y, Color c){
    for (int i = 0; i < pix_size; i++) {
        for (int j = 0; j < pix_size; j++) {
            int index = (x+i) + (y+j)*(width);
            
            pixels[index*4 + 0] = c.r;
            pixels[index*4 + 1] = c.g;
            pixels[index*4 + 2] = c.b;
            pixels[index*4 + 3] = c.a;
            
        }
    }
}


void RayTracer::drawScreen(RenderWindow& window){
    for (int i = 0; i < s_width; i++) {
        for (int j = 0; j < s_height; j++) {
            this->draw_rect(i * pix_size, j * pix_size, Color(rand()%255, rand()%255, rand()%255));
        }
    }
    texture.update(pixels);
    sprite.setTexture(texture);
    window.draw(sprite);
}
