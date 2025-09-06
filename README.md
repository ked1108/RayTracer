# Raytracing Engine

A simple CPU-based ray tracing engine written in modern C++. Inspired by [*Ray Tracing in One Weekend*](https://raytracing.github.io/), this project implements the fundamentals of physically based rendering from scratch.

---

## ✨ Features

* **Camera & Viewport**

  * Configurable aspect ratios (e.g. 16:9).
  * Rays generated per pixel for accurate projection.

* **Geometry**

  * Spheres (initial primitive).
  * Extendable `hittable` interface for future shapes.

* **Materials**

  * **Lambertian** (diffuse scattering).
  * **Metal** (reflective surfaces with fuzziness).
  * **Dielectric** (glass-like refraction).

* **Lighting & Shading**

  * Recursive ray scattering for multiple bounces.
  * Background gradient (sky-like shading).

* **Rendering**

  * Anti-aliasing via multiple samples per pixel.
  * Gamma correction for realistic brightness.
  * Portable PPM image output.

---

## 🖼 Example Render

TODO

---

## 🚀 Getting Started

### Prerequisites

* C++17 (or later) compiler
* CMake (for build configuration)

### Build & Run

```bash
git clone https://github.com/ked1108/RayTracer.git
cd RayTracer
mkdir build && cd build
cmake ..
make
./RayTracer > output.ppm
```

Open `output.ppm` with an image viewer that supports PPM (I've used FEH).

---

## 🛠 Roadmap

* [ ] Add more primitives (planes, triangles, meshes)
* [ ] Implement BVH acceleration structures
* [ ] Importance sampling for materials
* [ ] Multi-threading for performance

---

## 📚 References

* [*Ray Tracing in One Weekend* Series](https://raytracing.github.io/) by Peter Shirley
* PBRT: *Physically Based Rendering*

---

## 📜 License

MIT License. See [LICENSE](./LICENSE) for details.
