#ifndef SCF_H
#define SCF_H
# include "inp_par_read.h"

int gen_HF_DM(double * DM, double * MO, int n, int n_el);

int change_orbs(double * V, int i, int j, int dim);

int RHF(molecule * A, rhf_par * rhf, char * job_name);

int build_W_for_RHF_grad(double* W_for_RHF_grad, double* MO, int n_ao, int n_occ, double* eps); //// n_occ = n_cor, eps = e


#ifdef experimental
int XC_OHF(int method, molecule * A, int n_state, int * ex);

int OHF(molecule * A, int n_state, int * ex);

int DC_OHF(molecule * A, int n_state, int * ex);

int DC_ROHF(molecule * A, int n_state, int * ex);

int ORHF(molecule * A, int n);

int OHF_AB(molecule * A, int n_state);

#endif

#endif
