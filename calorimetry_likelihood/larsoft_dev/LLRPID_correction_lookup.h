#ifndef CORRECTION_LOOKUP_H
#define CORRECTION_LOOKUP_H
#include <stdlib.h>
#include <vector>

namespace searchingfornues
{
  struct CorrectionLookUpParameters
  {
    std::vector<std::vector<float>> parameter_correction_edges_pl_0 = {
    {0.000, 0.524, 0.785, 1.047, 1.309, 1.571, },
    {0.000, 0.196, 0.393, 0.589, 0.785, 0.982, 1.178, 1.374, 1.571, },
    };

    std::vector<float> correction_table_pl_0 = {
    1.045, 1.036, 1.044, 1.023, 1.042, 1.047, 1.051, 1.000, 1.052, 1.042, 1.058, 1.041, 1.040, 1.031, 1.049, 1.006, 1.044, 1.052, 1.075, 1.056, 
    1.057, 1.045, 1.033, 1.006, 1.062, 1.075, 1.092, 1.115, 1.109, 1.100, 1.053, 1.086, 1.107, 1.027, 1.135, 1.080, 1.099, 1.172, 1.119, 1.047, 
    };


    std::vector<std::vector<float>> parameter_correction_edges_pl_1 = {
    {0.000, 0.524, 0.785, 1.047, 1.309, 1.571, },
    {0.000, 0.196, 0.393, 0.589, 0.785, 0.982, 1.178, 1.374, 1.571, },
    };

    std::vector<float> correction_table_pl_1 = {
    1.027, 1.030, 1.007, 0.971, 1.020, 0.978, 1.030, 1.249, 1.054, 1.030, 1.030, 1.017, 1.034, 1.056, 1.033, 1.037, 1.040, 1.044, 1.059, 1.040, 
    1.067, 1.062, 1.006, 1.017, 1.073, 1.110, 1.104, 1.102, 1.104, 1.088, 1.066, 1.037, 1.045, 0.843, 1.061, 1.166, 1.100, 1.110, 1.080, 1.020, 
    };


    std::vector<std::vector<float>> parameter_correction_edges_pl_2 = {
    {0.000, 0.524, 0.785, 1.047, 1.309, 1.571, },
    {0.000, 0.196, 0.393, 0.589, 0.785, 0.982, 1.178, 1.374, 1.571, },
    };

    std::vector<float> correction_table_pl_2 = {
    1.000, 1.002, 1.065, 0.975, 1.020, 1.034, 1.110, 0.998, 1.009, 0.942, 0.987, 0.992, 0.996, 0.998, 0.981, 1.032, 0.837, 0.943, 0.970, 0.970, 
    0.977, 0.990, 0.977, 1.013, 1.031, 0.916, 0.934, 0.972, 0.990, 0.984, 0.974, 0.969, 0.791, 0.878, 1.015, 0.993, 1.014, 1.021, 1.005, 0.988, 
    };


  };
}

#endif