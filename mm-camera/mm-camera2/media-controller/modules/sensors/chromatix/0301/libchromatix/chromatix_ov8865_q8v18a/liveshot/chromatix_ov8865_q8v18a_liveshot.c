/*============================================================================

  Copyright (c) 2013 Qualcomm Technologies, Inc. All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.

============================================================================*/

/*============================================================================
 *                      INCLUDE FILES
 *===========================================================================*/
#include "chromatix.h"
#include "sensor_dbg.h"

static chromatix_parms_type chromatix_ov8865_q8v18a_parms = {
#include "chromatix_ov8865_q8v18a_liveshot.h"
};

/*============================================================================
 * FUNCTION    - load_chromatix -
 *
 * DESCRIPTION:
 *==========================================================================*/
void *load_chromatix(void)
{
  SLOW("chromatix ptr %p", &chromatix_ov8865_q8v18a_parms);
  return &chromatix_ov8865_q8v18a_parms;
}
