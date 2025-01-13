#pragma once
#include "../config.h"
#include "../components/camera_component.h"
#include "../components/transform_component.h"
#include "../view/shader.h"

class CameraSystem {
public:

    CameraSystem(GLFWwindow* window);
    
    glm::mat4 get_updated_view(
        std::unordered_map<unsigned int,TransformComponent> &transformComponents,
        unsigned int cameraID, CameraComponent& cameraComponent, float dt);
    
private:
    unsigned int viewLocation;
    glm::vec3 global_up = {0.0f, 0.0f, 1.0f};
    GLFWwindow* window;
    Shader* shader;
};