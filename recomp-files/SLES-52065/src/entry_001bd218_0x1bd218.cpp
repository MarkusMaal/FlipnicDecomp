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

// Function: entry_001bd218
// Address: 0x1bd218 - 0x1bd240
void entry_001bd218_0x1bd218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd218_0x1bd218");
#endif

    switch (ctx->pc) {
        case 0x1bd220u: goto label_1bd220;
        default: break;
    }

    ctx->pc = 0x1bd218u;

    // 0x1bd218: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1BD218u;
    SET_GPR_U32(ctx, 31, 0x1BD220u);
    ctx->pc = 0x1BD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD218u;
    // 0x1bd21c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1BD218u, 0x1BD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD220u;
label_1bd220:
    // 0x1bd220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd224: 0x1462ffe0  bne         $v1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1BD224u;
    {
        const bool branch_taken_0x1bd224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd224) {
            ctx->pc = 0x1BD1A8u;
            return;
        }
    }
    ctx->pc = 0x1BD22Cu;
    // 0x1bd22c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bd22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bd230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bd234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd238: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD238u;
        // 0x1bd23c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD240u;
}
