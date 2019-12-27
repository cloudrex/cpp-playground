#pragma once

namespace playground {
    class Vector2D {
    private:
        double x;

        double y;

    public:
        Vector2D(double x, double y);

        void translate(double x, double y);

        double translate(Vector2D delta);

        double translateX(double x);

        double translateY(double y);
    };
}
