# Copyright 2020 Hal@shurabaP.  All rights reserved.
# Use of this source code is governed by a MIT style
# license that can be found in the LICENSE file.
cmake_minimum_required(VERSION 3.13)

project(uzume_dsp VERSION 0.0.1 LANGUAGES CXX)

add_library(uzume_dsp STATIC)
set_property(TARGET uzume_dsp PROPERTY CXX_STANDARD 11)
target_compile_features(uzume_dsp
        PRIVATE
        cxx_std_11)
target_compile_options(uzume_dsp
        PRIVATE
        -Wall -Wextra -Wno-long-long -pedantic)
target_sources(uzume_dsp
        PRIVATE
        AnalyzeAperiodicityWithD4C.cpp
        AnalyzePeriodicityWithCheapTrick.cpp
        constant.cpp
        EstimateF0WithDIO.cpp
        fft.cpp
        GaussianNoiseGenerator.cpp
        ImpulseResponse.cpp
        NaiveSpectrogram.cpp
        Spectrum.cpp
        SynthesizeImpulseResponseWithWORLD.cpp
        SynthesizePhrase.cpp
        SynthesizePhraseWithWORLD.cpp
        util.cpp
        Waveform.cpp)
set_property(TARGET
        PROPERTY PUBLIC_HEADER
        AnalyzeAperiodicity.hpp
        AnalyzeAperiodicityWithD4C.hpp
        AnalyzePeriodicity.hpp
        AnalyzePeriodicityWithCheapTrick.hpp
        EstimateF0.hpp
        EstimateF0WithDIO.hpp
        GaussianNoiseGenerator.hpp
        ImpulseResponse.hpp
        NaiveSpectrogram.hpp
        Spectrogram.hpp
        Spectrum.hpp
        SynthesizeImpulseResponse.hpp
        SynthesizeImpulseResponseWithWORLD.hpp
        SynthesizePhrase.hpp
        SynthesizePhraseWithWORLD.hpp
        Waveform.hpp)
target_include_directories(uzume_dsp
        INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>)
install(TARGETS uzume_dsp
        EXPORT libuzume_dsp
        ARCHIVE DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/lib/
        LIBRARY DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/lib/
        PUBLIC_HEADER DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/include)