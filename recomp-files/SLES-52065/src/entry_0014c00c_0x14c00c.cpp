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

// Function: entry_0014c00c
// Address: 0x14c00c - 0x14c020
void entry_0014c00c_0x14c00c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c00c_0x14c00c");
#endif

    ctx->pc = 0x14c00cu;

    // 0x14c00c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14c00cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14c010: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C010u;
    {
        const bool branch_taken_0x14c010 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14C014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C010u;
        // 0x14c014: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c010) {
            ctx->pc = 0x14C024u;
            return;
        }
    }
    ctx->pc = 0x14C018u;
    // 0x14c018: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14C018u;
    SET_GPR_U32(ctx, 31, 0x14C020u);
    ctx->pc = 0x14C01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C018u;
    // 0x14c01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14C018u, 0x14C020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C020u;
}
