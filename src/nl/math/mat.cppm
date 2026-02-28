module;

#include <vector>
#include <cstddef>


export module nl.math.mat;



export namespace nl::math {

    class Matrix {
    public:
        size_t row() const;
        size_t col() const;

        float& operator()(size_t i, size_t j);
        const float& operator()(size_t i, size_t j) const;

    private:
        std::vector<std::vector<float>> mat{};
    };

}