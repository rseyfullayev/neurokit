module;

#include <vector>
#include <cstddef>



export module nl.math.vec;


export namespace nl::math {
    // Vector
    class Vec {
        public:
            Vec();
            Vec(size_t n);
            size_t length() const;
            float& operator()(size_t i);
            const float& operator()(size_t i) const;

        private:
            std::vector<float> vec{};

    };

    Vec operator+(const Vec& a, const Vec& b);
    Vec operator*(const Vec& a, const Vec& b);
    Vec operator-(const Vec& a, const Vec& b);

    float dot(const Vec& a, const Vec&b);

}


