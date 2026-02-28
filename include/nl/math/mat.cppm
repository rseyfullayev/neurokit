export module nl.math.mat;


#include <vector>
#include <cstddef>

export namespace nl::math {
// Matrix
    class Matrix {
        public:
            Vec row() const;
            size_t col() const;
            float& operator[][](size_t i, size_t j);
            const float& operator[][](size_t i, size_t j) const;

        private:
            std::vector<vector<float>> mat{};   
    }
}
// Transpose Matrix
Matrix T(Matrix& a) const;

// matrix multiplication
Matrix dot(Matrix& a) const;




