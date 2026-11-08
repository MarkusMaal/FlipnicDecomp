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

// Function: entry_0010dda8
// Address: 0x10dda8 - 0x10ddb8
void entry_0010dda8_0x10dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dda8_0x10dda8");
#endif

    ctx->pc = 0x10dda8u;

    // 0x10dda8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10DDA8u;
    {
        const bool branch_taken_0x10dda8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x10dda8) {
            ctx->pc = 0x10DDB8u;
            return;
        }
    }
    ctx->pc = 0x10DDB0u;
    // 0x10ddb0: 0xc0439e0  jal         func_10E780
    ctx->pc = 0x10DDB0u;
    SET_GPR_U32(ctx, 31, 0x10DDB8u);
    ctx->pc = 0x10DDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DDB0u;
    // 0x10ddb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10DDB0u, 0x10DDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DDB8u;
}
