#ifndef COLOR_H
#define COLOR_H

#include "raytracer.h"

using color = vec3;

double linear_to_gamma(double linear) {
    return (linear > 0.0) ? std::sqrt(linear) : 0.0;
}

void write_color(std::ostream &out, color pixel_color) {
    static const interval color_range(0.0, 0.999);
    pixel_color = color(
        linear_to_gamma(pixel_color.x()),
        linear_to_gamma(pixel_color.y()),
        linear_to_gamma(pixel_color.z())
    );
    out << static_cast<int>(256 * color_range.clamp(pixel_color.x())) << ' '
        << static_cast<int>(256 * color_range.clamp(pixel_color.y())) << ' '
        << static_cast<int>(256 * color_range.clamp(pixel_color.z())) << '\n';
}

#endif