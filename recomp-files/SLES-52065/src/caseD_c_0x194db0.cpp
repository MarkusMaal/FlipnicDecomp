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

// Function: caseD_c
// Address: 0x194db0 - 0x194dcc
void caseD_c_0x194db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x194db0");
#endif

    switch (ctx->pc) {
        case 0x194dc4u: goto label_194dc4;
        default: break;
    }

    ctx->pc = 0x194db0u;

    // 0x194db0: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x194db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x194db4: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x194db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x194db8: 0x8e070030  lw          $a3, 0x30($s0)
    ctx->pc = 0x194db8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x194dbc: 0xc064b88  jal         func_192E20
    ctx->pc = 0x194DBCu;
    SET_GPR_U32(ctx, 31, 0x194DC4u);
    ctx->pc = 0x194DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194DBCu;
    // 0x194dc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192E20u, 0x194DBCu, 0x194DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194DC4u;
label_194dc4:
    // 0x194dc4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x194DC4u;
    {
        const bool branch_taken_0x194dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194dc4) {
            ctx->pc = 0x194E60u;
            return;
        }
    }
    ctx->pc = 0x194DCCu;
}
