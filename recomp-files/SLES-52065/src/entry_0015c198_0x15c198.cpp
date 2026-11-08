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

// Function: entry_0015c198
// Address: 0x15c198 - 0x15c1ac
void entry_0015c198_0x15c198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c198_0x15c198");
#endif

    switch (ctx->pc) {
        case 0x15c1a8u: goto label_15c1a8;
        default: break;
    }

    ctx->pc = 0x15c198u;

    // 0x15c198: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x15C198u;
    {
        const bool branch_taken_0x15c198 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C198u;
        // 0x15c19c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c198) {
            ctx->pc = 0x15C1ACu;
            return;
        }
    }
    ctx->pc = 0x15C1A0u;
    // 0x15c1a0: 0xc080748  jal         func_201D20
    ctx->pc = 0x15C1A0u;
    SET_GPR_U32(ctx, 31, 0x15C1A8u);
    ctx->pc = 0x15C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C1A0u;
    // 0x15c1a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x15C1A0u, 0x15C1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1A8u;
label_15c1a8:
    // 0x15c1a8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x15c1a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x15c1acu;
}
