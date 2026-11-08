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

// Function: entry_0014b070
// Address: 0x14b070 - 0x14b094
void entry_0014b070_0x14b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014b070_0x14b070");
#endif

    switch (ctx->pc) {
        case 0x14b084u: goto label_14b084;
        default: break;
    }

    ctx->pc = 0x14b070u;

    // 0x14b070: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x14b070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14b074: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14B074u;
    {
        const bool branch_taken_0x14b074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B074u;
        // 0x14b078: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b074) {
            ctx->pc = 0x14B094u;
            return;
        }
    }
    ctx->pc = 0x14B07Cu;
    // 0x14b07c: 0xc04fedc  jal         func_13FB70
    ctx->pc = 0x14B07Cu;
    SET_GPR_U32(ctx, 31, 0x14B084u);
    ctx->pc = 0x14B080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B07Cu;
    // 0x14b080: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FB70u, 0x14B07Cu, 0x14B084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B084u;
label_14b084:
    // 0x14b084: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x14b084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x14b088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14b088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b08c: 0xc04ff54  jal         func_13FD50
    ctx->pc = 0x14B08Cu;
    SET_GPR_U32(ctx, 31, 0x14B094u);
    ctx->pc = 0x14B090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B08Cu;
    // 0x14b090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FD50u, 0x14B08Cu, 0x14B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B094u;
}
