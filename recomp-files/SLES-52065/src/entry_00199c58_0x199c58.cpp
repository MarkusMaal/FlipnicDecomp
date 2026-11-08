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

// Function: entry_00199c58
// Address: 0x199c58 - 0x199c7c
void entry_00199c58_0x199c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199c58_0x199c58");
#endif

    switch (ctx->pc) {
        case 0x199c64u: goto label_199c64;
        default: break;
    }

    ctx->pc = 0x199c58u;

    // 0x199c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x199c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c5c: 0xc064324  jal         func_190C90
    ctx->pc = 0x199C5Cu;
    SET_GPR_U32(ctx, 31, 0x199C64u);
    ctx->pc = 0x199C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C5Cu;
    // 0x199c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x199C5Cu, 0x199C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C64u;
label_199c64:
    // 0x199c64: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x199c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x199c68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x199c68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x199c6c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x199C6Cu;
    {
        const bool branch_taken_0x199c6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x199C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C6Cu;
        // 0x199c70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c6c) {
            ctx->pc = 0x199C80u;
            return;
        }
    }
    ctx->pc = 0x199C74u;
    // 0x199c74: 0xc0401a4  jal         func_100690
    ctx->pc = 0x199C74u;
    SET_GPR_U32(ctx, 31, 0x199C7Cu);
    ctx->pc = 0x199C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C74u;
    // 0x199c78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x199C74u, 0x199C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C7Cu;
}
