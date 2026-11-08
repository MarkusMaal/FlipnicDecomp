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

// Function: entry_0016212c
// Address: 0x16212c - 0x162168
void entry_0016212c_0x16212c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016212c_0x16212c");
#endif

    ctx->pc = 0x16212cu;

    // 0x16212c: 0x0  nop
    ctx->pc = 0x16212cu;
    // NOP
    // 0x162130: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x162130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x162134: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x162134u;
    {
        const bool branch_taken_0x162134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162134u;
        // 0x162138: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162134) {
            ctx->pc = 0x1620F8u;
            return;
        }
    }
    ctx->pc = 0x16213Cu;
    // 0x16213c: 0x26230300  addiu       $v1, $s1, 0x300
    ctx->pc = 0x16213cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
    // 0x162140: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x162144: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x162144u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x162148: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x162148u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16214c: 0x4be521a8  vadd.xyzw   $vf6, $vf4, $vf5
    ctx->pc = 0x16214cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x162150: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x162150u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x162154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x162154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x162158: 0x1262003a  beq         $s3, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x162158u;
    {
        const bool branch_taken_0x162158 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x16215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162158u;
        // 0x16215c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162158) {
            ctx->pc = 0x162244u;
            return;
        }
    }
    ctx->pc = 0x162160u;
    // 0x162160: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x162160u;
    {
        const bool branch_taken_0x162160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162160) {
            ctx->pc = 0x1621E4u;
            return;
        }
    }
    ctx->pc = 0x162168u;
}
