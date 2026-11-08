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

// Function: entry_0019f198
// Address: 0x19f198 - 0x19f1c0
void entry_0019f198_0x19f198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f198_0x19f198");
#endif

    switch (ctx->pc) {
        case 0x19f1b4u: goto label_19f1b4;
        default: break;
    }

    ctx->pc = 0x19f198u;

    // 0x19f198: 0x8e830688  lw          $v1, 0x688($s4)
    ctx->pc = 0x19f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1672)));
    // 0x19f19c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19f1a0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19F1A0u;
    {
        const bool branch_taken_0x19f1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1A0u;
        // 0x19f1a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1a0) {
            ctx->pc = 0x19F1C0u;
            return;
        }
    }
    ctx->pc = 0x19F1A8u;
    // 0x19f1a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f1ac: 0xc063e08  jal         func_18F820
    ctx->pc = 0x19F1ACu;
    SET_GPR_U32(ctx, 31, 0x19F1B4u);
    ctx->pc = 0x19F1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1ACu;
    // 0x19f1b0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19F1ACu, 0x19F1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1B4u;
label_19f1b4:
    // 0x19f1b4: 0x10000203  b           . + 4 + (0x203 << 2)
    ctx->pc = 0x19F1B4u;
    {
        const bool branch_taken_0x19f1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f1b4) {
            ctx->pc = 0x19F9C4u;
            return;
        }
    }
    ctx->pc = 0x19F1BCu;
    // 0x19f1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19f1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19f1c0u;
}
