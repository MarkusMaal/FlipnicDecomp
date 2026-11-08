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

// Function: entry_001ee910
// Address: 0x1ee910 - 0x1ee920
void entry_001ee910_0x1ee910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee910_0x1ee910");
#endif

    switch (ctx->pc) {
        case 0x1ee918u: goto label_1ee918;
        default: break;
    }

    ctx->pc = 0x1ee910u;

    // 0x1ee910: 0xc07b836  jal         func_1EE0D8
    ctx->pc = 0x1EE910u;
    SET_GPR_U32(ctx, 31, 0x1EE918u);
    ctx->pc = 0x1EE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE910u;
    // 0x1ee914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE0D8u, 0x1EE910u, 0x1EE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE918u;
label_1ee918:
    // 0x1ee918: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE918u;
    {
        const bool branch_taken_0x1ee918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EE91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE918u;
        // 0x1ee91c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee918) {
            ctx->pc = 0x1EE934u;
            return;
        }
    }
    ctx->pc = 0x1EE920u;
}
