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

// Function: FUN_001a6e80
// Address: 0x1a6e80 - 0x1a6eb8
void FUN_001a6e80_0x1a6e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6e80_0x1a6e80");
#endif

    switch (ctx->pc) {
        case 0x1a6e80u: goto label_1a6e80;
        case 0x1a6e84u: goto label_1a6e84;
        case 0x1a6e88u: goto label_1a6e88;
        case 0x1a6e8cu: goto label_1a6e8c;
        case 0x1a6e90u: goto label_1a6e90;
        case 0x1a6e94u: goto label_1a6e94;
        case 0x1a6e98u: goto label_1a6e98;
        case 0x1a6e9cu: goto label_1a6e9c;
        case 0x1a6ea0u: goto label_1a6ea0;
        case 0x1a6ea4u: goto label_1a6ea4;
        case 0x1a6ea8u: goto label_1a6ea8;
        case 0x1a6eacu: goto label_1a6eac;
        case 0x1a6eb0u: goto label_1a6eb0;
        case 0x1a6eb4u: goto label_1a6eb4;
        default: break;
    }

    ctx->pc = 0x1a6e80u;

label_1a6e80:
    // 0x1a6e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a6e84:
    // 0x1a6e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a6e88:
    // 0x1a6e88: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a6e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6e8c:
    // 0x1a6e8c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1a6e90:
    if (ctx->pc == 0x1A6E90u) {
        ctx->pc = 0x1A6E94u;
        goto label_1a6e94;
    }
    ctx->pc = 0x1A6E8Cu;
    {
        const bool branch_taken_0x1a6e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e8c) {
            ctx->pc = 0x1A6EACu;
            goto label_1a6eac;
        }
    }
    ctx->pc = 0x1A6E94u;
label_1a6e94:
    // 0x1a6e94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6e94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6e98:
    // 0x1a6e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6e9c:
    // 0x1a6e9c: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1a6e9cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1a6ea0:
    // 0x1a6ea0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6ea4:
    // 0x1a6ea4: 0x320f809  jalr        $t9
label_1a6ea8:
    if (ctx->pc == 0x1A6EA8u) {
        ctx->pc = 0x1A6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EA4u;
        // 0x1a6ea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EACu;
        goto label_1a6eac;
    }
    ctx->pc = 0x1A6EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6EACu);
        ctx->pc = 0x1A6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EA4u;
        // 0x1a6ea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EA4u, 0x1A6EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6EACu;
label_1a6eac:
    // 0x1a6eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6eb0:
    // 0x1a6eb0: 0x3e00008  jr          $ra
label_1a6eb4:
    if (ctx->pc == 0x1A6EB4u) {
        ctx->pc = 0x1A6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB0u;
        // 0x1a6eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EB8u;
        goto label_fallthrough_0x1a6eb0;
    }
    ctx->pc = 0x1A6EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EB0u;
        // 0x1a6eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6eb0:
    ctx->pc = 0x1A6EB8u;
}
