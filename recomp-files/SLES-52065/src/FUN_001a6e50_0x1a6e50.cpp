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

// Function: FUN_001a6e50
// Address: 0x1a6e50 - 0x1a6e80
void FUN_001a6e50_0x1a6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6e50_0x1a6e50");
#endif

    switch (ctx->pc) {
        case 0x1a6e50u: goto label_1a6e50;
        case 0x1a6e54u: goto label_1a6e54;
        case 0x1a6e58u: goto label_1a6e58;
        case 0x1a6e5cu: goto label_1a6e5c;
        case 0x1a6e60u: goto label_1a6e60;
        case 0x1a6e64u: goto label_1a6e64;
        case 0x1a6e68u: goto label_1a6e68;
        case 0x1a6e6cu: goto label_1a6e6c;
        case 0x1a6e70u: goto label_1a6e70;
        case 0x1a6e74u: goto label_1a6e74;
        case 0x1a6e78u: goto label_1a6e78;
        case 0x1a6e7cu: goto label_1a6e7c;
        default: break;
    }

    ctx->pc = 0x1a6e50u;

label_1a6e50:
    // 0x1a6e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a6e54:
    // 0x1a6e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6e58:
    // 0x1a6e58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a6e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6e5c:
    // 0x1a6e5c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a6e60:
    if (ctx->pc == 0x1A6E60u) {
        ctx->pc = 0x1A6E64u;
        goto label_1a6e64;
    }
    ctx->pc = 0x1A6E5Cu;
    {
        const bool branch_taken_0x1a6e5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e5c) {
            ctx->pc = 0x1A6E74u;
            goto label_1a6e74;
        }
    }
    ctx->pc = 0x1A6E64u;
label_1a6e64:
    // 0x1a6e64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6e68:
    // 0x1a6e68: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6e6c:
    // 0x1a6e6c: 0x320f809  jalr        $t9
label_1a6e70:
    if (ctx->pc == 0x1A6E70u) {
        ctx->pc = 0x1A6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E6Cu;
        // 0x1a6e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E74u;
        goto label_1a6e74;
    }
    ctx->pc = 0x1A6E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6E74u);
        ctx->pc = 0x1A6E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E6Cu;
        // 0x1a6e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E6Cu, 0x1A6E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6E74u;
label_1a6e74:
    // 0x1a6e74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6e74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6e78:
    // 0x1a6e78: 0x3e00008  jr          $ra
label_1a6e7c:
    if (ctx->pc == 0x1A6E7Cu) {
        ctx->pc = 0x1A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E78u;
        // 0x1a6e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6E80u;
        goto label_fallthrough_0x1a6e78;
    }
    ctx->pc = 0x1A6E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E78u;
        // 0x1a6e7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6e78:
    ctx->pc = 0x1A6E80u;
}
