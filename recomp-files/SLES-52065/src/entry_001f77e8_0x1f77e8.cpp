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

// Function: entry_001f77e8
// Address: 0x1f77e8 - 0x1f7800
void entry_001f77e8_0x1f77e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f77e8_0x1f77e8");
#endif

    switch (ctx->pc) {
        case 0x1f77fcu: goto label_1f77fc;
        default: break;
    }

    ctx->pc = 0x1f77e8u;

    // 0x1f77e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1f77e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1f77ec: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1f77ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1f77f0: 0x8c64bb28  lw          $a0, -0x44D8($v1)
    ctx->pc = 0x1f77f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949672)));
    // 0x1f77f4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F77F4u;
    SET_GPR_U32(ctx, 31, 0x1F77FCu);
    ctx->pc = 0x1F77F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F77F4u;
    // 0x1f77f8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F77F4u, 0x1F77FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F77FCu;
label_1f77fc:
    // 0x1f77fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f77fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1f7800u;
}
