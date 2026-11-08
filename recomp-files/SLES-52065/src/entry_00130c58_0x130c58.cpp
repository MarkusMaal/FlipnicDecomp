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

// Function: entry_00130c58
// Address: 0x130c58 - 0x130c70
void entry_00130c58_0x130c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130c58_0x130c58");
#endif

    switch (ctx->pc) {
        case 0x130c6cu: goto label_130c6c;
        default: break;
    }

    ctx->pc = 0x130c58u;

    // 0x130c58: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130c5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130C5Cu;
    {
        const bool branch_taken_0x130c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C5Cu;
        // 0x130c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c5c) {
            ctx->pc = 0x130C70u;
            return;
        }
    }
    ctx->pc = 0x130C64u;
    // 0x130c64: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130C64u;
    SET_GPR_U32(ctx, 31, 0x130C6Cu);
    ctx->pc = 0x130C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C64u;
    // 0x130c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130C64u, 0x130C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C6Cu;
label_130c6c:
    // 0x130c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130c70u;
}
