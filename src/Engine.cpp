#include "Engine.h"

Engine::Engine()
{
    // Get the screen resolution
    // and create a SFML window and view
    Vector2f resolution;
    resolution.x = VideoMode::getDesktopMode().width;
    resolution.y = VideoMode::getDesktopMode().height;

    m_Window.create(VideoMode(resolution.x, resolution.y), "Thomas Was Late", Style::Fullscreen);

    // Initialize the full screen view
    m_MainView.setSize(resolution);
    m_HudView.reset(FloatRect(0, 0, resolution.x, resolution.y));

    // Initialize the split-screen Views
    m_LeftView.setViewport(FloatRect(0.001f, 0.001f, 0.498f, 0.998f));

    m_RightView.setViewport(FloatRect(0.5f, 0.001f, 0.499f, 0.998f));

    m_BGLeftView.setViewport(FloatRect(0.001f, 0.001f, 0.498f, 0.998f));

    m_BGRightView.setViewport(FloatRect(0.5f, 0.001f, 0.499f, 0.998f));

    m_BackgroundTexture = TextureHolder::GetTexture("graphics/background.png");

    // Associate the sprite with the texture
    m_BackgroundSprite.setTexture(m_BackgroundTexture);
}