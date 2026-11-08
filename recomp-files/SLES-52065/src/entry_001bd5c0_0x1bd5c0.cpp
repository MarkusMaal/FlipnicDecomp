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

// Function: entry_001bd5c0
// Address: 0x1bd5c0 - 0x1bd5e4
void entry_001bd5c0_0x1bd5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd5c0_0x1bd5c0");
#endif

    switch (ctx->pc) {
        case 0x1bd5d4u: goto label_1bd5d4;
        default: break;
    }

    ctx->pc = 0x1bd5c0u;

    // 0x1bd5c0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1bd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1bd5c4: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BD5C4u;
    {
        const bool branch_taken_0x1bd5c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD5C4u;
        // 0x1bd5c8: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd5c4) {
            ctx->pc = 0x1BD5E4u;
            return;
        }
    }
    ctx->pc = 0x1BD5CCu;
    // 0x1bd5cc: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x1BD5CCu;
    SET_GPR_U32(ctx, 31, 0x1BD5D4u);
    ctx->pc = 0x1BD5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5CCu;
    // 0x1bd5d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x1BD5CCu, 0x1BD5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5D4u;
label_1bd5d4:
    // 0x1bd5d4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1bd5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bd5d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd5dc: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x1BD5DCu;
    SET_GPR_U32(ctx, 31, 0x1BD5E4u);
    ctx->pc = 0x1BD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD5DCu;
    // 0x1bd5e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x1BD5DCu, 0x1BD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD5E4u;
}
