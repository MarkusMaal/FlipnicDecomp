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

// Function: entry_001b8158
// Address: 0x1b8158 - 0x1b8180
void entry_001b8158_0x1b8158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8158_0x1b8158");
#endif

    switch (ctx->pc) {
        case 0x1b8160u: goto label_1b8160;
        default: break;
    }

    ctx->pc = 0x1b8158u;

    // 0x1b8158: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B8158u;
    SET_GPR_U32(ctx, 31, 0x1B8160u);
    ctx->pc = 0x1B815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8158u;
    // 0x1b815c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B8158u, 0x1B8160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8160u;
label_1b8160:
    // 0x1b8160: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1b8160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1b8164: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B8164u;
    {
        const bool branch_taken_0x1b8164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b8164) {
            ctx->pc = 0x1B8148u;
            return;
        }
    }
    ctx->pc = 0x1B816Cu;
    // 0x1b816c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b816cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b8170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8178: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8178u;
        // 0x1b817c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8180u;
}
