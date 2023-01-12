#include <SFML/Graphics.hpp>
#include <entt/entt.hpp>

int main(int argc, char ** argv)
{
    sf::RenderWindow renderWindow(sf::VideoMode(sf::Vector2u(1920, 1080)), "Demo Game");

    entt::registry sceneRegistry;
    auto entity = sceneRegistry.create();

    sf::Event event;

    sf::CircleShape circleShape(200);
    circleShape.setFillColor(sf::Color::Blue);

    sf::View view1 = sf::View(sf::Vector2f(0.f, 0.f), sf::Vector2f(1920.f, 1080.f));

    while (renderWindow.isOpen())
    {

        while (renderWindow.pollEvent(event)){
        if (event.type == sf::Event::EventType::Closed)
            renderWindow.close();
        }

        renderWindow.clear();
        renderWindow.draw(circleShape);
        renderWindow.display();
    }


}