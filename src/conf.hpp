#pragma once

namespace conf
{
    // window configs
    constexpr int SCREEN_WIDTH = 1000;
    constexpr int SCREEN_HEIGHT = 1000;
    constexpr int MAX_FRAMERATE = 144; // fps
    constexpr float dt = 1.0f / static_cast<float>(MAX_FRAMERATE);
}