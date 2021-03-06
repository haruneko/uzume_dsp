// Copyright 2020 Hal@shurabaP.  All rights reserved.
// Use of this source code is governed by a MIT style
// license that can be found in the LICENSE file.
#ifndef UZUME_VOCODER_CONTOUR_HPP
#define UZUME_VOCODER_CONTOUR_HPP

namespace uzume { namespace vocoder {

class Contour final {
public:
    Contour() = delete;
    Contour(double msLength, double msFramePeriod);
    ~Contour();

    double at(double ms) const;

    double msLength() const;

    const int length;
    double *data;
    const double msFramePeriod;
};

} }

#endif //UZUME_VOCODER_CONTOUR_HPP
