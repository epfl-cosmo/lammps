/* -*- c++ -*- ----------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifdef PAIR_CLASS

PairStyle(gran/hertz/history/omp,PairGranHertzHistoryOMP)

#else

#ifndef LMP_PAIR_GRAN_HERTZ_HISTORY_OMP_H
#define LMP_PAIR_GRAN_HERTZ_HISTORY_OMP_H

#include "pair_gran_hooke_history_omp.h"

namespace LAMMPS_NS {

class PairGranHertzHistoryOMP : public PairGranHookeHistoryOMP {
 public:
  PairGranHertzHistoryOMP(class LAMMPS *);
  void compute(int, int);
  void settings(int, char **);
 protected:
  template <int> void eval();

};

}

#endif
#endif
