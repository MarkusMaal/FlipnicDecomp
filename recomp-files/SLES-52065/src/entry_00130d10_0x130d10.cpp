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

// Function: entry_00130d10
// Address: 0x130d10 - 0x130d28
void entry_00130d10_0x130d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d10_0x130d10");
#endif

    switch (ctx->pc) {
        case 0x130d24u: goto label_130d24;
        default: break;
    }

    ctx->pc = 0x130d10u;

    // 0x130d10: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130d14: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130D14u;
    {
        const bool branch_taken_0x130d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D14u;
        // 0x130d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d14) {
            ctx->pc = 0x130D28u;
            return;
        }
    }
    ctx->pc = 0x130D1Cu;
    // 0x130d1c: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D1Cu;
    SET_GPR_U32(ctx, 31, 0x130D24u);
    ctx->pc = 0x130D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D1Cu;
    // 0x130d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130D1Cu, 0x130D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D24u;
label_130d24:
    // 0x130d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130d28u;
}
