#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010913c
// Address: 0x10913c - 0x109164
void entry_0010913c_0x10913c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010913c_0x10913c");
#endif

    ctx->pc = 0x10913cu;

    // 0x10913c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x10913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x109140: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x109140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109144: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x109144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109148: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x109148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x10914c: 0xf8660000  sqc2        $vf6, 0x0($v1)
    ctx->pc = 0x10914cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x109150: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x109150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109154: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109154u;
    {
        const bool branch_taken_0x109154 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x109158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109154u;
        // 0x109158: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109154) {
            ctx->pc = 0x109164u;
            return;
        }
    }
    ctx->pc = 0x10915Cu;
    // 0x10915c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10915Cu;
    {
        const bool branch_taken_0x10915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10915Cu;
        // 0x109160: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10915c) {
            ctx->pc = 0x10917Cu;
            return;
        }
    }
    ctx->pc = 0x109164u;
}
