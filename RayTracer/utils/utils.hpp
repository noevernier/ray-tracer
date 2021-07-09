//
//  utils.hpp
//  RayTracer
//
//  Created by Noé on 09/07/2021.
//  Copyright © 2021 Noé. All rights reserved.
//

#ifndef utils_hpp
#define utils_hpp

#include <stdio.h>

#include <SFML/Graphics.hpp>
#include <cmath>
#include <random>
#include <vector>
#include <iostream>
#include <list>
#include <thread>
#include <mutex>
#include <atomic>
#include <utility>
#include <array>
#include "../vector/Vector.hpp"
#include "../constants.h"

using namespace std;
using namespace sf;

void events(sf::Event& sf_event, sf::RenderWindow& window, bool& end);
void show_fps(Clock &clock, RenderWindow &window);

#endif /* utils_hpp */
