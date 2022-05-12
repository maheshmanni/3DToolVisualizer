//
//  SceneCamera.hpp
//  3DToolViz
//
//  Created by Mahesh Manni on 11/05/22.
//

#ifndef SceneCamera_hpp
#define SceneCamera_hpp

#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

namespace _3DToolViz {

    class SceneCamera
    {
    public:
        enum class ProjectionType { Perspective = 0, Orthographic = 1 };
    public:
        SceneCamera();
        ~SceneCamera();
        
        //verticalFOV in degrees
        void SetPerspective(float verticalFOV, float nearClip, float farClip);
        void SetOrthographic(float size, float nearClip, float farClip);

        void SetViewportSize(uint32_t width, uint32_t height);
        
        const float* GetProjectionMatrix() const
        {
            return glm::value_ptr(mProjectionMatrix);
        }
        
    private:
        void RecalculateProjection();
    private:
        glm::mat4 mProjectionMatrix;
        
        ProjectionType m_ProjectionType = ProjectionType::Orthographic;

        float m_PerspectiveFOV = glm::radians(45.0f);
        float m_PerspectiveNear = 0.01f, m_PerspectiveFar = 1000.0f;

        float m_OrthographicSize = 10.0f;
        float m_OrthographicNear = -1.0f, m_OrthographicFar = 1.0f;

        float m_AspectRatio = 0.0f;
    };
}


#endif /* SceneCamera_hpp */
