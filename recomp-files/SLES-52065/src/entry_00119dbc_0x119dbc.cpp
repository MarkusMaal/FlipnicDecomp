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

// Function: entry_00119dbc
// Address: 0x119dbc - 0x119de4
void entry_00119dbc_0x119dbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119dbc_0x119dbc");
#endif

    switch (ctx->pc) {
        case 0x119dd8u: goto label_119dd8;
        default: break;
    }

    ctx->pc = 0x119dbcu;

label_119dbc:
    // 0x119dbc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x119dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_119dc0:
    // 0x119dc0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x119dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_119dc4:
    // 0x119dc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x119dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_119dc8:
    // 0x119dc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x119dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_119dcc:
    // 0x119dcc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x119dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_119dd0:
    // 0x119dd0: 0x320f809  jalr        $t9
label_119dd4:
    if (ctx->pc == 0x119DD4u) {
        ctx->pc = 0x119DD8u;
        goto label_119dd8;
    }
    ctx->pc = 0x119DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x119DD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119DD0u, 0x119DD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x119DD8u;
label_119dd8:
    // 0x119dd8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x119dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_119ddc:
    // 0x119ddc: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
label_119de0:
    if (ctx->pc == 0x119DE0u) {
        ctx->pc = 0x119DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DDCu;
        // 0x119de0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x119DE4u;
        goto label_fallthrough_0x119ddc;
    }
    ctx->pc = 0x119DDCu;
    {
        const bool branch_taken_0x119ddc = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x119DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119DDCu;
        // 0x119de0: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ddc) {
            ctx->pc = 0x119DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119dbc;
        }
    }
label_fallthrough_0x119ddc:
    ctx->pc = 0x119DE4u;
}
