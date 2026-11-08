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

// Function: entry_00202c74
// Address: 0x202c74 - 0x202c90
void entry_00202c74_0x202c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202c74_0x202c74");
#endif

    switch (ctx->pc) {
        case 0x202c84u: goto label_202c84;
        default: break;
    }

    ctx->pc = 0x202c74u;

    // 0x202c74: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x202c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x202c78: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x202c78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x202c7c: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x202C7Cu;
    SET_GPR_U32(ctx, 31, 0x202C84u);
    ctx->pc = 0x202C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202C7Cu;
    // 0x202c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x202C7Cu, 0x202C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202C84u;
label_202c84:
    // 0x202c84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x202c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202c88: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x202C88u;
    {
        const bool branch_taken_0x202c88 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x202C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202C88u;
        // 0x202c8c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202c88) {
            ctx->pc = 0x202CA0u;
            return;
        }
    }
    ctx->pc = 0x202C90u;
}
