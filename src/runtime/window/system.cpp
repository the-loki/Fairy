//
// Created by loki on 2024/3/9.
//

#include <runtime/window/system.h>
#include <runtime/render/component/gfx_context.h>

#include <flecs.h>

namespace fairy::runtime::window {

void Initialize(flecs::world & world) {
	using GraphicsContext = fairy::runtime::render::GfxContext;

	world.entity().set(fairy::runtime::window::Window::CreateDefault());
	world.system<Window>().kind(flecs::OnStart).write<Window>().each(SetupGLFWWindow);
	world.system<Window>().kind(flecs::PreUpdate).write<GraphicsContext>().each(UpdateWindow);
}

}