//
//  camera.cpp
//  RayTracer
//
//  Created by Noé on 09/07/2021.
//  Copyright © 2021 Noé. All rights reserved.
//

#include "camera.hpp"

Camera::Camera(){
    this->pos = new Vector(0,0,0);
    this->dir = new Vector(0,1,0);
    this->fov = 80;
}

Camera::Camera(Vector pos, Vector dir, float fov){
    this->pos = &pos;
    this->dir = &dir;
    this->fov = fov;
}

void Camera::setPosition(Vector pos){
    this->pos = &pos;
}

void Camera::setDirection(Vector dir){
    this->dir = &dir;
}
