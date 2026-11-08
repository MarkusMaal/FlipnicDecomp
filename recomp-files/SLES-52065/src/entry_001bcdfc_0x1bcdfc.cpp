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

// Function: entry_001bcdfc
// Address: 0x1bcdfc - 0x1bce38
void entry_001bcdfc_0x1bcdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcdfc_0x1bcdfc");
#endif

    switch (ctx->pc) {
        case 0x1bce08u: goto label_1bce08;
        default: break;
    }

    ctx->pc = 0x1bcdfcu;

    // 0x1bcdfc: 0x0  nop
    ctx->pc = 0x1bcdfcu;
    // NOP
    // 0x1bce00: 0xc06e0f8  jal         func_1B83E0
    ctx->pc = 0x1BCE00u;
    SET_GPR_U32(ctx, 31, 0x1BCE08u);
    ctx->pc = 0x1BCE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCE00u;
    // 0x1bce04: 0x8ea4001c  lw          $a0, 0x1C($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B83E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B83E0u, 0x1BCE00u, 0x1BCE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCE08u;
label_1bce08:
    // 0x1bce08: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1bce08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1bce0c: 0x1462ffd3  bne         $v1, $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1BCE0Cu;
    {
        const bool branch_taken_0x1bce0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bce0c) {
            ctx->pc = 0x1BCD5Cu;
            return;
        }
    }
    ctx->pc = 0x1BCE14u;
    // 0x1bce14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bce14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bce18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1bce18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bce1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1bce1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bce20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bce20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bce24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bce24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bce28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bce28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bce2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bce2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bce30: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCE30u;
        // 0x1bce34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCE38u;
}
