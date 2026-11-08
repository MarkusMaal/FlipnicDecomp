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

// Function: entry_00195e1c
// Address: 0x195e1c - 0x195e40
void entry_00195e1c_0x195e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195e1c_0x195e1c");
#endif

    switch (ctx->pc) {
        case 0x195e1cu: goto label_195e1c;
        case 0x195e20u: goto label_195e20;
        case 0x195e24u: goto label_195e24;
        case 0x195e28u: goto label_195e28;
        case 0x195e2cu: goto label_195e2c;
        case 0x195e30u: goto label_195e30;
        case 0x195e34u: goto label_195e34;
        case 0x195e38u: goto label_195e38;
        case 0x195e3cu: goto label_195e3c;
        default: break;
    }

    ctx->pc = 0x195e1cu;

label_195e1c:
    // 0x195e1c: 0x8c830320  lw          $v1, 0x320($a0)
    ctx->pc = 0x195e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 800)));
label_195e20:
    // 0x195e20: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_195e24:
    if (ctx->pc == 0x195E24u) {
        ctx->pc = 0x195E28u;
        goto label_195e28;
    }
    ctx->pc = 0x195E20u;
    {
        const bool branch_taken_0x195e20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195e20) {
            ctx->pc = 0x195E40u;
            return;
        }
    }
    ctx->pc = 0x195E28u;
label_195e28:
    // 0x195e28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_195e2c:
    if (ctx->pc == 0x195E2Cu) {
        ctx->pc = 0x195E30u;
        goto label_195e30;
    }
    ctx->pc = 0x195E28u;
    {
        const bool branch_taken_0x195e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195e28) {
            ctx->pc = 0x195E40u;
            return;
        }
    }
    ctx->pc = 0x195E30u;
label_195e30:
    // 0x195e30: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x195e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_195e34:
    // 0x195e34: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x195e34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_195e38:
    // 0x195e38: 0x320f809  jalr        $t9
label_195e3c:
    if (ctx->pc == 0x195E3Cu) {
        ctx->pc = 0x195E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E38u;
        // 0x195e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195E40u;
        goto label_fallthrough_0x195e38;
    }
    ctx->pc = 0x195E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x195E40u);
        ctx->pc = 0x195E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195E38u;
        // 0x195e3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195E38u, 0x195E40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x195e38:
    ctx->pc = 0x195E40u;
}
