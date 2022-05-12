//
//  RendererAPI.cpp
//  3DToolViz
//
//  Created by Mahesh Manni on 12/05/22.
//

#include "RendererAPI.hpp"
#include "../Platform/OpenGLRenderAPI.hpp"
namespace _3DToolViz {

RendererAPI* RendererAPI::Create()
{
    return new OpenGLRenderAPI();
}
}
