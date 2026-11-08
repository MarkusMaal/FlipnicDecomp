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

// Function: entry_001df320
// Address: 0x1df320 - 0x1df330
void entry_001df320_0x1df320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df320_0x1df320");
#endif

    ctx->pc = 0x1df320u;

    // 0x1df320: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DF320u;
    {
        const bool branch_taken_0x1df320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1DF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF320u;
        // 0x1df324: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df320) {
            ctx->pc = 0x1DF330u;
            return;
        }
    }
    ctx->pc = 0x1DF328u;
    // 0x1df328: 0xc077ca6  jal         func_1DF298
    ctx->pc = 0x1DF328u;
    SET_GPR_U32(ctx, 31, 0x1DF330u);
    ctx->pc = 0x1DF32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF328u;
    // 0x1df32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF298u, 0x1DF328u, 0x1DF330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF330u;
}
