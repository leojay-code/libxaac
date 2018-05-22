/******************************************************************************
 *                                                                            *
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *****************************************************************************
 * Originally developed and contributed by Ittiam Systems Pvt. Ltd, Bangalore
*/
#ifndef IXHEAACD_FREQ_SCA_H
#define IXHEAACD_FREQ_SCA_H

VOID ixheaacd_aac_shellsort(WORD16 *in, WORD32 n);

WORD32 ixheaacd_calc_frq_bnd_tbls(ia_sbr_header_data_struct *ptr_header_data,
                                  ia_sbr_tables_struct *ptr_sbr_tables,
                                  ixheaacd_misc_tables *pstr_common_tables);

VOID ixheaacd_calc_bands(WORD16 *diff, WORD16 start, WORD16 stop,
                         WORD16 ixheaacd_num_bands);

#endif
