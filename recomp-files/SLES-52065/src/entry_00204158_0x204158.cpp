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

// Function: entry_00204158
// Address: 0x204158 - 0x204168
void entry_00204158_0x204158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204158_0x204158");
#endif

    switch (ctx->pc) {
        case 0x204160u: goto label_204160;
        default: break;
    }

    ctx->pc = 0x204158u;

    // 0x204158: 0xc080748  jal         func_201D20
    ctx->pc = 0x204158u;
    SET_GPR_U32(ctx, 31, 0x204160u);
    ctx->pc = 0x20415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204158u;
    // 0x20415c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x204158u, 0x204160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204160u;
label_204160:
    // 0x204160: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x204160u;
    {
        const bool branch_taken_0x204160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204160u;
        // 0x204164: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204160) {
            ctx->pc = 0x204374u;
            return;
        }
    }
    ctx->pc = 0x204168u;
}
