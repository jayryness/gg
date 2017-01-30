#pragma once
#ifndef GG_MATHUTIL_H
#define GG_MATHUTIL_H

#include <numeric>

namespace gg {

template<class T>
T Lerp(T y0, T y1, T x) {
    return y0 + (y1 - y0) * x;
}

template<class T>
T Saturate(T x) {
    return std::min(std::max(T(0), x), T(1));
}

}

#endif
