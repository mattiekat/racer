#include "shapes.h"

void Cube::init() {
    if(m_vao != 0) return;

    GLfloat side2 = m_side * 0.5f;

    std::vector<GLfloat> points {
        // Front
        -side2,-side2,side2,  side2,-side2,side2,
        side2,side2,side2,   -side2,side2,side2,
        // Right
        side2,-side2,side2,  side2,-side2,-side2,
        side2,side2,-side2,   side2,side2,side2,
        // Back
        -side2,-side2,-side2, -side2,side2,-side2,
        side2,side2,-side2,   side2,-side2,-side2,
        // Left
        -side2,-side2,side2,  -side2,side2,side2,
        -side2,side2,-side2, -side2,-side2,-side2,
        // Bottom
        -side2,-side2,side2,  -side2,-side2,-side2,
        side2,-side2,-side2,  side2,-side2,side2,
        // Top
        -side2,side2,side2,   side2,side2,side2,
        side2,side2,-side2,  -side2,side2,-side2
    };

    std::vector<GLfloat> normals {
        // Front
        0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f,
        // Right
        1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f,
        // Back
        0.0f, 0.0f, -1.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, -1.0f,
        // Left
        -1.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f,
        // Bottom
        0.0f, -1.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, -1.0f, 0.0f, 0.0f, -1.0f, 0.0f,
        // Top
        0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 0.0f
    };

    std::vector<GLuint> elements {
        0,1,2,0,2,3,
        4,5,6,4,6,7,
        8,9,10,8,10,11,
        12,13,14,12,14,15,
        16,17,18,16,18,19,
        20,21,22,20,22,23
    };

    TriangleMesh::init(&elements, &points, &normals);
}
