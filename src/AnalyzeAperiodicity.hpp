// Copyright 2020 Hal@shurabaP.  All rights reserved.
// Use of this source code is governed by a MIT style
// license that can be found in the LICENSE file.
#ifndef UZUME_DSP_ANALYZE_APERIODICITY_HPP
#define UZUME_DSP_ANALYZE_APERIODICITY_HPP
#include "InstantWaveform.hpp"
#include "Spectrum.hpp"

namespace uzume { namespace dsp {

/**
 * AnalyzeAperiodicity is an interface to analyze aperiodic spectrum.
 */
class AnalyzeAperiodicity {
public:
    virtual ~AnalyzeAperiodicity() = default;

    /**
     * () analyzes input and sets aperiodic spectrum into output.
     * `input` should be instantaneous signal that contains, at least, a single period of voice.
     * @return true if analysis is successful, otherwise false.
     */
    virtual bool operator()(Spectrum *output, const InstantWaveform *input) = 0;
};

} }

#endif //UZUME_DSP_ANALYZE_APERIODICITY_HPP
