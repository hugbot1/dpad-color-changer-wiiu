#include <whb/proc.h>
#include <whb/gfx.h>
#include <vpad/input.h>

struct Color {
    float r, g, b, a;
};

Color colors[] = {
    {1.0f, 0.0f, 0.0f, 1.0f}, // Red
    {0.0f, 1.0f, 0.0f, 1.0f}, // Green
    {0.0f, 0.0f, 1.0f, 1.0f}, // Blue
};

int main(int argc, char** argv)
{
    WHBProcInit();
    WHBGfxInit();

    int currentColor = 0;
    int colorCount = sizeof(colors) / sizeof(Color);

    while (WHBProcIsRunning())
    {
        VPADStatus status;
        VPADRead(VPAD_CHAN_0, &status, 1, nullptr);

        if (status.trigger & VPAD_BUTTON_RIGHT)
        {
            currentColor++;
            if (currentColor >= colorCount)
                currentColor = 0;
        }

        if (status.trigger & VPAD_BUTTON_LEFT)
        {
            currentColor--;
            if (currentColor < 0)
                currentColor = colorCount - 1;
        }

        Color c = colors[currentColor];

        WHBGfxBeginRender();

        WHBGfxBeginRenderTV();
        WHBGfxClearColor(c.r, c.g, c.b, c.a);
        WHBGfxFinishRenderTV();

        WHBGfxBeginRenderDRC();
        WHBGfxClearColor(c.r, c.g, c.b, c.a);
        WHBGfxFinishRenderDRC();

        WHBGfxFinishRender();
    }

    WHBGfxShutdown();
    WHBProcShutdown();

    return 0;
}