/*
 * Copyright (c) 2021 Arm Limited.
 *
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "src/cpu/kernels/crop/generic/neon/impl.h"
#include "src/cpu/kernels/crop/generic/neon/list.h"

namespace arm_compute
{
namespace cpu
{
void u8_in_bounds_crop_window(const ITensor *input, const ITensor *output, float *output_ptr, Coordinates input_offset,
                              int32_t window_step_x, int32_t output_width_start, int32_t output_width_limit, bool input_has_single_channel, bool is_width_flipped)
{
    return in_bounds_crop_window<uint8_t>(input, output, output_ptr, input_offset,
                                          window_step_x, output_width_start, output_width_limit, input_has_single_channel, is_width_flipped);
}

void u16_in_bounds_crop_window(const ITensor *input, const ITensor *output, float *output_ptr, Coordinates input_offset,
                               int32_t window_step_x, int32_t output_width_start, int32_t output_width_limit, bool input_has_single_channel, bool is_width_flipped)
{
    return in_bounds_crop_window<uint16_t>(input, output, output_ptr, input_offset,
                                           window_step_x, output_width_start, output_width_limit, input_has_single_channel, is_width_flipped);
}

void u32_in_bounds_crop_window(const ITensor *input, const ITensor *output, float *output_ptr, Coordinates input_offset,
                               int32_t window_step_x, int32_t output_width_start, int32_t output_width_limit, bool input_has_single_channel, bool is_width_flipped)
{
    return in_bounds_crop_window<uint32_t>(input, output, output_ptr, input_offset,
                                           window_step_x, output_width_start, output_width_limit, input_has_single_channel, is_width_flipped);
}

void s8_in_bounds_crop_window(const ITensor *input, const ITensor *output, float *output_ptr, Coordinates input_offset,
                              int32_t window_step_x, int32_t output_width_start, int32_t output_width_limit, bool input_has_single_channel, bool is_width_flipped)
{
    return in_bounds_crop_window<int8_t>(input, output, output_ptr, input_offset,
                                         window_step_x, output_width_start, output_width_limit, input_has_single_channel, is_width_flipped);
}

void s16_in_bounds_crop_window(const ITensor *input, const ITensor *output, float *output_ptr, Coordinates input_offset,
                               int32_t window_step_x, int32_t output_width_start, int32_t output_width_limit, bool input_has_single_channel, bool is_width_flipped)
{
    return in_bounds_crop_window<int16_t>(input, output, output_ptr, input_offset,
                                          window_step_x, output_width_start, output_width_limit, input_has_single_channel, is_width_flipped);
}

void s32_in_bounds_crop_window(const ITensor *input, const ITensor *output, float *output_ptr, Coordinates input_offset,
                               int32_t window_step_x, int32_t output_width_start, int32_t output_width_limit, bool input_has_single_channel, bool is_width_flipped)
{
    return in_bounds_crop_window<int32_t>(input, output, output_ptr, input_offset,
                                          window_step_x, output_width_start, output_width_limit, input_has_single_channel, is_width_flipped);
}
}
} // namespace arm_compute
