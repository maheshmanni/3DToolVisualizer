//
//  OpenGLRenderAPI.hpp
//  3DToolViz
//
//  Created by Mahesh Manni on 12/05/22.
//

#ifndef OpenGLRenderAPI_hpp
#define OpenGLRenderAPI_hpp

#include "../Renderer/RendererAPI.hpp"
namespace _3DToolViz {

class OpenGLRenderAPI : public RendererAPI
{
public:
    OpenGLRenderAPI();
    ~OpenGLRenderAPI();
    
    virtual void Init() override;
    virtual void SetViewport(uint32_t x, uint32_t y, uint32_t width, uint32_t height) override;

    virtual void SetClearColor(const glm::vec4& color) override;
    virtual void Clear() override;

};
}

#endif /* OpenGLRenderAPI_hpp */
