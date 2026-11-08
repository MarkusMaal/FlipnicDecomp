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

// Function: entry_0015c328
// Address: 0x15c328 - 0x15c33c
void entry_0015c328_0x15c328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c328_0x15c328");
#endif

    switch (ctx->pc) {
        case 0x15c338u: goto label_15c338;
        default: break;
    }

    ctx->pc = 0x15c328u;

    // 0x15c328: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C328u;
    {
        const bool branch_taken_0x15c328 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C328u;
        // 0x15c32c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c328) {
            ctx->pc = 0x15C33Cu;
            return;
        }
    }
    ctx->pc = 0x15C330u;
    // 0x15c330: 0xc080748  jal         func_201D20
    ctx->pc = 0x15C330u;
    SET_GPR_U32(ctx, 31, 0x15C338u);
    ctx->pc = 0x15C334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C330u;
    // 0x15c334: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x15C330u, 0x15C338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C338u;
label_15c338:
    // 0x15c338: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15c33cu;
}
