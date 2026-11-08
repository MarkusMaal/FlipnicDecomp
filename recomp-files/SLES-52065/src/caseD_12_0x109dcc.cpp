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

// Function: caseD_12
// Address: 0x109dcc - 0x109df8
void caseD_12_0x109dcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x109dcc");
#endif

    switch (ctx->pc) {
        case 0x109de0u: goto label_109de0;
        case 0x109de8u: goto label_109de8;
        case 0x109df0u: goto label_109df0;
        default: break;
    }

    ctx->pc = 0x109dccu;

    // 0x109dcc: 0x8f828218  lw          $v0, -0x7DE8($gp)
    ctx->pc = 0x109dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109dd4: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x109dd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x109dd8: 0xc0583f0  jal         func_160FC0
    ctx->pc = 0x109DD8u;
    SET_GPR_U32(ctx, 31, 0x109DE0u);
    ctx->pc = 0x109DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DD8u;
    // 0x109ddc: 0x24442c00  addiu       $a0, $v0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160FC0u, 0x109DD8u, 0x109DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DE0u;
label_109de0:
    // 0x109de0: 0xc058018  jal         func_160060
    ctx->pc = 0x109DE0u;
    SET_GPR_U32(ctx, 31, 0x109DE8u);
    ctx->pc = 0x109DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DE0u;
    // 0x109de4: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160060u, 0x109DE0u, 0x109DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DE8u;
label_109de8:
    // 0x109de8: 0xc057f04  jal         func_15FC10
    ctx->pc = 0x109DE8u;
    SET_GPR_U32(ctx, 31, 0x109DF0u);
    ctx->pc = 0x109DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DE8u;
    // 0x109dec: 0x8f848218  lw          $a0, -0x7DE8($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x109DE8u, 0x109DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DF0u;
label_109df0:
    // 0x109df0: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x109DF0u;
    {
        const bool branch_taken_0x109df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109df0) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109DF8u;
}
