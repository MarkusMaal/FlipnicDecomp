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

// Function: entry_00130f10
// Address: 0x130f10 - 0x130f28
void entry_00130f10_0x130f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130f10_0x130f10");
#endif

    switch (ctx->pc) {
        case 0x130f24u: goto label_130f24;
        default: break;
    }

    ctx->pc = 0x130f10u;

    // 0x130f10: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130f14: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130F14u;
    {
        const bool branch_taken_0x130f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F14u;
        // 0x130f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f14) {
            ctx->pc = 0x130F28u;
            return;
        }
    }
    ctx->pc = 0x130F1Cu;
    // 0x130f1c: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130F1Cu;
    SET_GPR_U32(ctx, 31, 0x130F24u);
    ctx->pc = 0x130F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F1Cu;
    // 0x130f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130E10u, 0x130F1Cu, 0x130F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F24u;
label_130f24:
    // 0x130f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x130f28u;
}
