#include "RenderSystem.h"

RenderSystem::RenderSystem() {

}

void RenderSystem::addEntity(Entity e) {
	entities.push_back(e);
}

void RenderSystem::update() {
	int index = 0;

	std::cout << "RENDER SYSTEM:" << std::endl;
	for (Entity & entity : entities) {

		//Render texture to screen
		for (Component * component : entity.getComponents()) {
			if (component->getID() == 2) {
				std::cout << "Checking position component of entity " << entity.getName() << std::endl;
			}

		}
		std::cout << "Drawing entity: " << entity.getName() << std::endl;

		index++;
	}
	std::cout << std::endl;
	std::cout << std::endl;

}