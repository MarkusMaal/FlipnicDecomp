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

// Function: entry_001b9774
// Address: 0x1b9774 - 0x1b979c
void entry_001b9774_0x1b9774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9774_0x1b9774");
#endif

    switch (ctx->pc) {
        case 0x1b9780u: goto label_1b9780;
        default: break;
    }

    ctx->pc = 0x1b9774u;

    // 0x1b9774: 0x0  nop
    ctx->pc = 0x1b9774u;
    // NOP
    // 0x1b9778: 0xc06dd24  jal         func_1B7490
    ctx->pc = 0x1B9778u;
    SET_GPR_U32(ctx, 31, 0x1B9780u);
    ctx->pc = 0x1B977Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9778u;
    // 0x1b977c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7490u, 0x1B9778u, 0x1B9780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9780u;
label_1b9780:
    // 0x1b9780: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1b9784: 0x1462fff7  bne         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B9784u;
    {
        const bool branch_taken_0x1b9784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b9784) {
            ctx->pc = 0x1B9764u;
            return;
        }
    }
    ctx->pc = 0x1B978Cu;
    // 0x1b978c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b978cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b9790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9794: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9794u;
        // 0x1b9798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B979Cu;
}
