/* j/2/sort.c
**
** This file is in the public domain.
*/
#include "all.h"


/* functions
*/
  u3_noun
  u3_cqb_sort(
                    u3_noun a,
                    u3_noun b)
  {
    //  must think about
    //
    return u3_cm_bail(c3__fail);
  }
  u3_noun
  u3_cwb_sort(
                   u3_noun cor)
  {
    u3_noun a, b;

    if ( u3_no == u3_cr_mean(cor, u3_cv_sam_2, &a, u3_cv_sam_3, &b, 0) ) {
      return u3_cm_bail(c3__exit);
    } else {
      return u3_cqb_sort(a, b);
    }
  }
