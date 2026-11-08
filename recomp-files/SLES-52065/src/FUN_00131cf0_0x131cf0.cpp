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

// Function: FUN_00131cf0
// Address: 0x131cf0 - 0x131d20
void FUN_00131cf0_0x131cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00131cf0_0x131cf0");
#endif

    switch (ctx->pc) {
        case 0x131cf0u: goto label_131cf0;
        case 0x131cf4u: goto label_131cf4;
        case 0x131cf8u: goto label_131cf8;
        case 0x131cfcu: goto label_131cfc;
        case 0x131d00u: goto label_131d00;
        case 0x131d04u: goto label_131d04;
        case 0x131d08u: goto label_131d08;
        case 0x131d0cu: goto label_131d0c;
        case 0x131d10u: goto label_131d10;
        case 0x131d14u: goto label_131d14;
        case 0x131d18u: goto label_131d18;
        case 0x131d1cu: goto label_131d1c;
        default: break;
    }

    ctx->pc = 0x131cf0u;

label_131cf0:
    // 0x131cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_131cf4:
    // 0x131cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_131cf8:
    // 0x131cf8: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x131cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_131cfc:
    // 0x131cfc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_131d00:
    if (ctx->pc == 0x131D00u) {
        ctx->pc = 0x131D04u;
        goto label_131d04;
    }
    ctx->pc = 0x131CFCu;
    {
        const bool branch_taken_0x131cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131cfc) {
            ctx->pc = 0x131D14u;
            goto label_131d14;
        }
    }
    ctx->pc = 0x131D04u;
label_131d04:
    // 0x131d04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x131d04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_131d08:
    // 0x131d08: 0x8f390088  lw          $t9, 0x88($t9)
    ctx->pc = 0x131d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 136)));
label_131d0c:
    // 0x131d0c: 0x320f809  jalr        $t9
label_131d10:
    if (ctx->pc == 0x131D10u) {
        ctx->pc = 0x131D14u;
        goto label_131d14;
    }
    ctx->pc = 0x131D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x131D14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D0Cu, 0x131D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x131D14u;
label_131d14:
    // 0x131d14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131d18:
    // 0x131d18: 0x3e00008  jr          $ra
label_131d1c:
    if (ctx->pc == 0x131D1Cu) {
        ctx->pc = 0x131D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D18u;
        // 0x131d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x131D20u;
        goto label_fallthrough_0x131d18;
    }
    ctx->pc = 0x131D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131D18u;
        // 0x131d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x131d18:
    ctx->pc = 0x131D20u;
}
