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

// Function: entry_001192f4
// Address: 0x1192f4 - 0x119334
void entry_001192f4_0x1192f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001192f4_0x1192f4");
#endif

    switch (ctx->pc) {
        case 0x119324u: goto label_119324;
        default: break;
    }

    ctx->pc = 0x1192f4u;

label_1192f4:
    // 0x1192f4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1192f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1192f8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1192f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1192fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x119300: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x119300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x119304: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x119304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x119308: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x119308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11930c: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x11930cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x119310: 0x84a2000a  lh          $v0, 0xA($a1)
    ctx->pc = 0x119310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x119314: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x119314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x119318: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x119318u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11931c: 0xc046518  jal         func_119460
    ctx->pc = 0x11931Cu;
    SET_GPR_U32(ctx, 31, 0x119324u);
    ctx->pc = 0x119320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11931Cu;
    // 0x119320: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119460u, 0x11931Cu, 0x119324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119324u;
label_119324:
    // 0x119324: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x119324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x119328: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x119328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x11932c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x11932Cu;
    {
        const bool branch_taken_0x11932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11932Cu;
        // 0x119330: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11932c) {
            ctx->pc = 0x1192F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1192f4;
        }
    }
    ctx->pc = 0x119334u;
}
