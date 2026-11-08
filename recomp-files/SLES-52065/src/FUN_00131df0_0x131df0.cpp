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

// Function: FUN_00131df0
// Address: 0x131df0 - 0x131e18
void FUN_00131df0_0x131df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131df0_0x131df0");
#endif

    switch (ctx->pc) {
        case 0x131df0u: goto label_131df0;
        case 0x131df4u: goto label_131df4;
        case 0x131df8u: goto label_131df8;
        case 0x131dfcu: goto label_131dfc;
        case 0x131e00u: goto label_131e00;
        case 0x131e04u: goto label_131e04;
        case 0x131e08u: goto label_131e08;
        case 0x131e0cu: goto label_131e0c;
        case 0x131e10u: goto label_131e10;
        case 0x131e14u: goto label_131e14;
        default: break;
    }

    ctx->pc = 0x131df0u;

label_131df0:
    // 0x131df0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_131df4:
    // 0x131df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_131df8:
    // 0x131df8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x131df8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131dfc:
    // 0x131dfc: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x131dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_131e00:
    // 0x131e00: 0x320f809  jalr        $t9
label_131e04:
    if (ctx->pc == 0x131E04u) {
        ctx->pc = 0x131E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E00u;
        // 0x131e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E08u;
        goto label_131e08;
    }
    ctx->pc = 0x131E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x131E08u);
        ctx->pc = 0x131E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E00u;
        // 0x131e04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E00u, 0x131E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131E08u;
label_131e08:
    // 0x131e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131e0c:
    // 0x131e0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x131e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_131e10:
    // 0x131e10: 0x3e00008  jr          $ra
label_131e14:
    if (ctx->pc == 0x131E14u) {
        ctx->pc = 0x131E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E10u;
        // 0x131e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131E18u;
        goto label_fallthrough_0x131e10;
    }
    ctx->pc = 0x131E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E10u;
        // 0x131e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131e10:
    ctx->pc = 0x131E18u;
}
