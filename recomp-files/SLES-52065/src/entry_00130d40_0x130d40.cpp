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

// Function: entry_00130d40
// Address: 0x130d40 - 0x130d60
void entry_00130d40_0x130d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130d40_0x130d40");
#endif

    ctx->pc = 0x130d40u;

    // 0x130d40: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x130d40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130d44: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x130D44u;
    {
        const bool branch_taken_0x130d44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D44u;
        // 0x130d48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d44) {
            ctx->pc = 0x130D94u;
            return;
        }
    }
    ctx->pc = 0x130D4Cu;
    // 0x130d4c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130d50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130D50u;
    {
        const bool branch_taken_0x130d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D50u;
        // 0x130d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d50) {
            ctx->pc = 0x130D60u;
            return;
        }
    }
    ctx->pc = 0x130D58u;
    // 0x130d58: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D58u;
    SET_GPR_U32(ctx, 31, 0x130D60u);
    ctx->pc = 0x130C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C10u, 0x130D58u, 0x130D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D60u;
}
