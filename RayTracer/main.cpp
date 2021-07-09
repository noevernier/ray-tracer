#include "utils/utils.hpp"
#include "rayTracer/rayTracer.hpp"

int main()
{
    RenderWindow window(VideoMode(width, height), "RayTracer");
    Clock clock;
    bool end = false;
    sf::Event sf_event;
    
    Camera camera;
    RayTracer ray_tracer(camera, width/10, height/10);
    
    while (window.isOpen())
    {
        events(sf_event, window, end);

        window.clear();
        show_fps(clock, window);
        ray_tracer.drawScreen(window);
   
        window.display();
    }

    return 0;
}
