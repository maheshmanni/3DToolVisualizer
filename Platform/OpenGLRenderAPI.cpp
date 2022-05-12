//
//  OpenGLRenderAPI.cpp
//  3DToolViz
//
//  Created by Mahesh Manni on 12/05/22.
//

#include "OpenGLRenderAPI.hpp"

#include <OpenGL/OpenGL.h>
#include <OpenGL/gl3.h>
namespace _3DToolViz {

OpenGLRenderAPI::OpenGLRenderAPI()
{
    
}

OpenGLRenderAPI::~OpenGLRenderAPI()
{
    
}

void OpenGLRenderAPI::Init()
{
    glEnable(GL_BLEND);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    glEnable(GL_DEPTH_TEST);
}

void OpenGLRenderAPI::SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height)
{
    glViewport(x, y, width, height);
}

void OpenGLRenderAPI::SetClearColor(const glm::vec4 &color)
{
    glClearColor(color.r, color.g, color.b, color.a);
}

void OpenGLRenderAPI::Clear()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

}
