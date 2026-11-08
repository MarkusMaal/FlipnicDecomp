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

// Function: FUN_001065c0
// Address: 0x1065c0 - 0x1065f0
void FUN_001065c0_0x1065c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001065c0_0x1065c0");
#endif

    switch (ctx->pc) {
        case 0x1065c0u: goto label_1065c0;
        case 0x1065c4u: goto label_1065c4;
        case 0x1065c8u: goto label_1065c8;
        case 0x1065ccu: goto label_1065cc;
        case 0x1065d0u: goto label_1065d0;
        case 0x1065d4u: goto label_1065d4;
        case 0x1065d8u: goto label_1065d8;
        case 0x1065dcu: goto label_1065dc;
        case 0x1065e0u: goto label_1065e0;
        case 0x1065e4u: goto label_1065e4;
        case 0x1065e8u: goto label_1065e8;
        case 0x1065ecu: goto label_1065ec;
        default: break;
    }

    ctx->pc = 0x1065c0u;

label_1065c0:
    // 0x1065c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1065c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1065c4:
    // 0x1065c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1065c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1065c8:
    // 0x1065c8: 0x8c840220  lw          $a0, 0x220($a0)
    ctx->pc = 0x1065c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_1065cc:
    // 0x1065cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1065d0:
    if (ctx->pc == 0x1065D0u) {
        ctx->pc = 0x1065D4u;
        goto label_1065d4;
    }
    ctx->pc = 0x1065CCu;
    {
        const bool branch_taken_0x1065cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1065cc) {
            ctx->pc = 0x1065E4u;
            goto label_1065e4;
        }
    }
    ctx->pc = 0x1065D4u;
label_1065d4:
    // 0x1065d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1065d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1065d8:
    // 0x1065d8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1065d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1065dc:
    // 0x1065dc: 0x320f809  jalr        $t9
label_1065e0:
    if (ctx->pc == 0x1065E0u) {
        ctx->pc = 0x1065E4u;
        goto label_1065e4;
    }
    ctx->pc = 0x1065DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1065E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1065DCu, 0x1065E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1065E4u;
label_1065e4:
    // 0x1065e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1065e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1065e8:
    // 0x1065e8: 0x3e00008  jr          $ra
label_1065ec:
    if (ctx->pc == 0x1065ECu) {
        ctx->pc = 0x1065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065E8u;
        // 0x1065ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1065F0u;
        goto label_fallthrough_0x1065e8;
    }
    ctx->pc = 0x1065E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1065E8u;
        // 0x1065ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1065E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1065e8:
    ctx->pc = 0x1065F0u;
}
