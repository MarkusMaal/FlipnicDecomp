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

// Function: entry_00142fb8
// Address: 0x142fb8 - 0x142fd4
void entry_00142fb8_0x142fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142fb8_0x142fb8");
#endif

    switch (ctx->pc) {
        case 0x142fc4u: goto label_142fc4;
        default: break;
    }

    ctx->pc = 0x142fb8u;

label_142fb8:
    // 0x142fb8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142fbc: 0xc050bfc  jal         func_142FF0
    ctx->pc = 0x142FBCu;
    SET_GPR_U32(ctx, 31, 0x142FC4u);
    ctx->pc = 0x142FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142FBCu;
    // 0x142fc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142FF0u, 0x142FBCu, 0x142FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FC4u;
label_142fc4:
    // 0x142fc4: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x142fc8: 0x0  nop
    ctx->pc = 0x142fc8u;
    // NOP
    // 0x142fcc: 0x1630fffa  bne         $s1, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x142FCCu;
    {
        const bool branch_taken_0x142fcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x142fcc) {
            ctx->pc = 0x142FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142fb8;
        }
    }
    ctx->pc = 0x142FD4u;
}
