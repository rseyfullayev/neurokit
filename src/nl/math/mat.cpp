module;

#include <vector>
#include <cstddef>


module nl.math.mat;

namespace nl::math {

    size_t Matrix::row() const {
        return mat.size();
    }

    size_t Matrix::col() const {
        return mat.empty() ? 0 : mat[0].size();
    }

    float& Matrix::operator()(size_t i, size_t j) {
        return mat[i][j];
    }

    const float& Matrix::operator()(size_t i, size_t j) const {
        return mat[i][j];
    }

}