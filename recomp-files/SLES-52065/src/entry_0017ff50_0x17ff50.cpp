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

// Function: entry_0017ff50
// Address: 0x17ff50 - 0x17ff74
void entry_0017ff50_0x17ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ff50_0x17ff50");
#endif

    switch (ctx->pc) {
        case 0x17ff6cu: goto label_17ff6c;
        default: break;
    }

    ctx->pc = 0x17ff50u;

    // 0x17ff50: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x17ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ff54: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x17ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17ff58: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17ff58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ff5c: 0x4be5213e  vitof12.xyzw $vf5, $vf4
    ctx->pc = 0x17ff5cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(0.000244140625f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x17ff60: 0xf8a50000  sqc2        $vf5, 0x0($a1)
    ctx->pc = 0x17ff60u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x17ff64: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17FF64u;
    SET_GPR_U32(ctx, 31, 0x17FF6Cu);
    ctx->pc = 0x17FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF64u;
    // 0x17ff68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17FF64u, 0x17FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF6Cu;
label_17ff6c:
    // 0x17ff6c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x17FF6Cu;
    {
        const bool branch_taken_0x17ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff6c) {
            ctx->pc = 0x180018u;
            return;
        }
    }
    ctx->pc = 0x17FF74u;
}
