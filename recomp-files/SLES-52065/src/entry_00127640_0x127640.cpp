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

// Function: entry_00127640
// Address: 0x127640 - 0x127660
void entry_00127640_0x127640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127640_0x127640");
#endif

    switch (ctx->pc) {
        case 0x127650u: goto label_127650;
        default: break;
    }

    ctx->pc = 0x127640u;

    // 0x127640: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x127640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x127644: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x127644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x127648: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x127648u;
    SET_GPR_U32(ctx, 31, 0x127650u);
    ctx->pc = 0x12764Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127648u;
    // 0x12764c: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x127648u, 0x127650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127650u;
label_127650:
    // 0x127650: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x127650u;
    {
        const bool branch_taken_0x127650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127650u;
        // 0x127654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127650) {
            ctx->pc = 0x127660u;
            return;
        }
    }
    ctx->pc = 0x127658u;
    // 0x127658: 0xc049c94  jal         func_127250
    ctx->pc = 0x127658u;
    SET_GPR_U32(ctx, 31, 0x127660u);
    ctx->pc = 0x127250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127250u, 0x127658u, 0x127660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127660u;
}
