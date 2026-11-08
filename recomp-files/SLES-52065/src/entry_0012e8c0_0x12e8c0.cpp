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

// Function: entry_0012e8c0
// Address: 0x12e8c0 - 0x12e8e0
void entry_0012e8c0_0x12e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e8c0_0x12e8c0");
#endif

    switch (ctx->pc) {
        case 0x12e8d4u: goto label_12e8d4;
        default: break;
    }

    ctx->pc = 0x12e8c0u;

label_12e8c0:
    // 0x12e8c0: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x12e8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x12e8c4: 0x2631ffe0  addiu       $s1, $s1, -0x20
    ctx->pc = 0x12e8c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x12e8c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8cc: 0xc04bafc  jal         func_12EBF0
    ctx->pc = 0x12E8CCu;
    SET_GPR_U32(ctx, 31, 0x12E8D4u);
    ctx->pc = 0x12E8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E8CCu;
    // 0x12e8d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EBF0u, 0x12E8CCu, 0x12E8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E8D4u;
label_12e8d4:
    // 0x12e8d4: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x12e8d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x12e8d8: 0x1420fff9  bnez        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12E8D8u;
    {
        const bool branch_taken_0x12e8d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e8d8) {
            ctx->pc = 0x12E8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e8c0;
        }
    }
    ctx->pc = 0x12E8E0u;
}
