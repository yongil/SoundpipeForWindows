#ifndef _FFTLIB_H_
#define _FFTLIB_H_

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#define POW2(m) ((uint32_t) 1 << (m))       /* integer power of 2 for m<32 */

/* fft's with M bigger than this bust primary cache */
#define MCACHE  (11 - (sizeof(SPFLOAT) / 8))

/* some math constants to 40 decimal places */
#define MYPI      3.141592653589793238462643383279502884197   /* pi         */
#define MYROOT2   1.414213562373095048801688724209698078569   /* sqrt(2)    */
#define MYCOSPID8 0.9238795325112867561281831893967882868224  /* cos(pi/8)  */
#define MYSINPID8 0.3826834323650897717284599840303988667613  /* sin(pi/8)  */

extern void fftCosInit(int M, SPFLOAT *Utbl);
extern void rffts1(SPFLOAT *ioptr, int M, SPFLOAT *Utbl, int16_t *BRLow);
extern void ffts1(SPFLOAT *ioptr, int M, SPFLOAT *Utbl, int16_t *BRLow);
extern void riffts1(SPFLOAT *ioptr, int M, SPFLOAT *Utbl, int16_t *BRLow);


//static void sp_fft_init(sp_fft *fft, int M);
//static void sp_fftr(sp_fft *fft, SPFLOAT *buf, int FFTsize);
//static void sp_fft_cpx(sp_fft *fft, SPFLOAT *buf, int FFTsize);
//static void sp_ifftr(sp_fft *fft, SPFLOAT *buf, int FFTsize);

#endif // _FFTLIB_H_
