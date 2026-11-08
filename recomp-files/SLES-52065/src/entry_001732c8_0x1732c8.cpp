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

// Function: entry_001732c8
// Address: 0x1732c8 - 0x1732f4
void entry_001732c8_0x1732c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001732c8_0x1732c8");
#endif

    ctx->pc = 0x1732c8u;

    // 0x1732c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1732c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1732cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1732ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1732d0: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1732d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1732d4: 0x8ca300a0  lw          $v1, 0xA0($a1)
    ctx->pc = 0x1732d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x1732d8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1732D8u;
    {
        const bool branch_taken_0x1732d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1732DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1732D8u;
        // 0x1732dc: 0x24a30060  addiu       $v1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1732d8) {
            ctx->pc = 0x1732F4u;
            return;
        }
    }
    ctx->pc = 0x1732E0u;
    // 0x1732e0: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1732e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1732e4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1732e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1732e8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1732e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1732ec: 0xf9010000  sqc2        $vf1, 0x0($t0)
    ctx->pc = 0x1732ecu;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1732f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1732f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->pc = 0x1732f4u;
}
