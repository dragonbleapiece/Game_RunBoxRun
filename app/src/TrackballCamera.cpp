#include <app/TrackballCamera.hpp>
#include <app/Player.hpp>

using namespace glimac;

TrackballCamera::TrackballCamera(float distance, float angleX, float angleY, glm::vec3 posTarget)
: m_PosTarget(posTarget), m_fDistance(distance), m_fAngleX(angleX), m_fAngleY(angleY)
{

}

void TrackballCamera::moveFront(float delta) {
    m_fDistance += delta;
}

void TrackballCamera::rotateLeft(float degrees) {
    m_fAngleY += degrees;
}

void TrackballCamera::rotateUp(float degrees) {
    m_fAngleX += degrees;
}

void TrackballCamera::translateZ(float t) {
    m_PosTarget.z -= t;
}

void TrackballCamera::translateX(float t) {
    m_PosTarget.x += t;
}

void TrackballCamera::translateY(float t) {
    m_PosTarget.y += t;
}

const glm::mat4 TrackballCamera::getViewMatrix() const {
    glm::vec4 position = glm::vec4(0.f, 0.f, -m_fDistance, 1.f);
    position = glm::rotate(glm::mat4(1.f), glm::radians(m_fAngleY), glm::vec3(0.f, 1.f, 0.f)) * position;
    position = glm::rotate(glm::mat4(1.f), glm::radians(m_fAngleX), glm::vec3(1.f, 0.f, 0.f)) * position;
    glm::mat4 mvMatrix=glm::lookAt(glm::vec3(position) + m_PosTarget, m_PosTarget, glm::vec3(0, 1, 0));
    mvMatrix = glm::rotate(mvMatrix, glm::radians(180.f), glm::vec3(0.f, -1.f, 0.f)); // Rotation
    mvMatrix = glm::translate(mvMatrix, glm::vec3(0, 0, 10)); // Rotation
    return mvMatrix;
}

/*glm::vec3 TrackballCamera::getVectorDirection() const {
    glm::vec4 vector =  glm::vec4(0.f, 0.f, m_fDistance, 0.f);
    vector = glm::rotate(glm::mat4(1.f), glm::radians(m_fAngleY), glm::vec3(0.f, 1.f, 0.f)) * vector;
    vector = glm::rotate(glm::mat4(1.f), glm::radians(m_fAngleX), glm::vec3(1.f, 0.f, 0.f)) * vector;
    return glm::vec3(vector);
}*/