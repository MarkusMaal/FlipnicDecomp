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

// Function: entry_001def48
// Address: 0x1def48 - 0x1def60
void entry_001def48_0x1def48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001def48_0x1def48");
#endif

    switch (ctx->pc) {
        case 0x1def5cu: goto label_1def5c;
        default: break;
    }

    ctx->pc = 0x1def48u;

    // 0x1def48: 0x1010  mfhi        $v0
    ctx->pc = 0x1def48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1def4c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DEF4Cu;
    {
        const bool branch_taken_0x1def4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1def4c) {
            ctx->pc = 0x1DEF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DEF4Cu;
            // 0x1def50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF60u;
            return;
        }
    }
    ctx->pc = 0x1DEF54u;
    // 0x1def54: 0xc080664  jal         func_201990
    ctx->pc = 0x1DEF54u;
    SET_GPR_U32(ctx, 31, 0x1DEF5Cu);
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1DEF54u, 0x1DEF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF5Cu;
label_1def5c:
    // 0x1def5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1def5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1def60u;
}
