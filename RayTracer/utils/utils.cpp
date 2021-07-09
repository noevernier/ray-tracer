//
//  utils.cpp
//  RayTracer
//
//  Created by Noé on 09/07/2021.
//  Copyright © 2021 Noé. All rights reserved.
//

#include "utils.hpp"

void events(sf::Event& sf_event, sf::RenderWindow& window, bool& end)
{
    while (window.pollEvent(sf_event))
    {
        if(sf_event.type == sf::Event::Closed){
            window.close();
            end = true;
        }
    }
}



void show_fps(Clock &clock, RenderWindow &window){
    float fps = 1.f / clock.getElapsedTime().asSeconds();
    clock.restart();
    
    cout << fps << endl;
}
