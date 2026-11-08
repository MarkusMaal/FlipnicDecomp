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

// Function: entry_00168014
// Address: 0x168014 - 0x16802c
void entry_00168014_0x168014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168014_0x168014");
#endif

    ctx->pc = 0x168014u;

    // 0x168014: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x168014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x168018: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x168018u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16801c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16801Cu;
    {
        const bool branch_taken_0x16801c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x168020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16801Cu;
        // 0x168020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16801c) {
            ctx->pc = 0x16802Cu;
            return;
        }
    }
    ctx->pc = 0x168024u;
    // 0x168024: 0xc0401a4  jal         func_100690
    ctx->pc = 0x168024u;
    SET_GPR_U32(ctx, 31, 0x16802Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x168024u, 0x16802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16802Cu;
}
