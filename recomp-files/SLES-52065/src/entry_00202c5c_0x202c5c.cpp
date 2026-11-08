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

// Function: entry_00202c5c
// Address: 0x202c5c - 0x202c74
void entry_00202c5c_0x202c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202c5c_0x202c5c");
#endif

    switch (ctx->pc) {
        case 0x202c6cu: goto label_202c6c;
        default: break;
    }

    ctx->pc = 0x202c5cu;

    // 0x202c5c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x202c5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202c60: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202c60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202c64: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202C64u;
    SET_GPR_U32(ctx, 31, 0x202C6Cu);
    ctx->pc = 0x202C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C64u;
    // 0x202c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202C64u, 0x202C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C6Cu;
label_202c6c:
    // 0x202c6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202C6Cu;
    {
        const bool branch_taken_0x202c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C6Cu;
        // 0x202c70: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c6c) {
            ctx->pc = 0x202C90u;
            return;
        }
    }
    ctx->pc = 0x202C74u;
}
