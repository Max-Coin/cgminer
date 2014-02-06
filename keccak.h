#ifndef KECCAK_H
#define KECCAK_H

#include "miner.h"

#ifdef USE_KECCAK
extern bool keccak_prepare_work(struct thr_info *thr, struct work *work);
extern int keccak_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce);
extern void keccak_regenhash(struct work *work);
#else
static inline int keccak_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce) {
	return 0;
}
static inline void keccak_regenhash(struct work *work) {
}
#endif

#endif /* KECCAK_H */
