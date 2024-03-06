#ifndef __NAUNET_UTILITIES_H__
#define __NAUNET_UTILITIES_H__

// 
namespace naunet_util {

// From Numerical Recipes in C, 2nd ed
double *vector(long nl, long nh);
void free_vector(double *v, long nl, long nh);
double **matrix(long nrl, long nrh, long ncl, long nch);
void free_matrix(double **m, long nrl, long nrh, long ncl, long nch);
void spline(double x[], double y[], int n, double yp1, double ypn, double y2[]);
void splint(double xa[], double ya[], double y2a[], int n, double x, double *y);
void splie2(double x1a[], double x2a[], double *ya[], int m, int n,
            double **y2a);
void splin2(double x1a[], double x2a[], double *ya[], double *y2a[], int m,
            int n, double x1, double x2, double *y);

}  // namespace naunet_util
#endif