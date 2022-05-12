//
//  SceneCamera.cpp
//  3DToolViz
//
//  Created by Mahesh Manni on 11/05/22.
//

#include "SceneCamera.hpp"
#include <glm/gtc/matrix_transform.hpp>

namespace _3DToolViz {

SceneCamera::SceneCamera()
{
    RecalculateProjection();
}

SceneCamera::~SceneCamera()
{
    
}

void SceneCamera::SetPerspective(float verticalFOV, float nearClip, float farClip)
{
    m_ProjectionType = ProjectionType::Perspective;
    m_PerspectiveFOV = glm::radians(verticalFOV);
    m_PerspectiveNear = nearClip;
    m_PerspectiveFar = farClip;
    RecalculateProjection();
}

void SceneCamera::SetOrthographic(float size, float nearClip, float farClip)
{
    
}

void SceneCamera::SetViewportSize(uint32_t width, uint32_t height)
{
    m_AspectRatio = (float)width / (float)height;
    RecalculateProjection();
}

void SceneCamera::RecalculateProjection()
{
    if(m_ProjectionType == ProjectionType::Orthographic)
    {
        mProjectionMatrix = glm::perspective(m_PerspectiveFOV, m_AspectRatio, m_PerspectiveNear, m_PerspectiveFar);
        return;
    }
}



}
