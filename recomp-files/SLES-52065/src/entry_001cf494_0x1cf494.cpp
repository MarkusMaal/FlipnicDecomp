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

// Function: entry_001cf494
// Address: 0x1cf494 - 0x1cf4b0
void entry_001cf494_0x1cf494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf494_0x1cf494");
#endif

    switch (ctx->pc) {
        case 0x1cf4a0u: goto label_1cf4a0;
        default: break;
    }

    ctx->pc = 0x1cf494u;

    // 0x1cf494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf498: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1CF498u;
    SET_GPR_U32(ctx, 31, 0x1CF4A0u);
    ctx->pc = 0x1CF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF498u;
    // 0x1cf49c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1CF498u, 0x1CF4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4A0u;
label_1cf4a0:
    // 0x1cf4a0: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1cf4a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1cf4a4: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x1CF4A4u;
    {
        const bool branch_taken_0x1cf4a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF4A4u;
        // 0x1cf4a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4a4) {
            ctx->pc = 0x1CF558u;
            return;
        }
    }
    ctx->pc = 0x1CF4ACu;
    // 0x1cf4ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cf4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cf4b0u;
}
