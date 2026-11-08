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

// Function: entry_00151b1c
// Address: 0x151b1c - 0x151b3c
void entry_00151b1c_0x151b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151b1c_0x151b1c");
#endif

    switch (ctx->pc) {
        case 0x151b30u: goto label_151b30;
        default: break;
    }

    ctx->pc = 0x151b1cu;

label_151b1c:
    // 0x151b1c: 0x0  nop
    ctx->pc = 0x151b1cu;
    // NOP
label_151b20:
    // 0x151b20: 0x8e59000c  lw          $t9, 0xC($s2)
    ctx->pc = 0x151b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_151b24:
    // 0x151b24: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x151b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_151b28:
    // 0x151b28: 0x320f809  jalr        $t9
label_151b2c:
    if (ctx->pc == 0x151B2Cu) {
        ctx->pc = 0x151B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B28u;
        // 0x151b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B30u;
        goto label_151b30;
    }
    ctx->pc = 0x151B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B30u);
        ctx->pc = 0x151B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B28u;
        // 0x151b2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B28u, 0x151B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B30u;
label_151b30:
    // 0x151b30: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x151b30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_151b34:
    // 0x151b34: 0x1640fff9  bnez        $s2, . + 4 + (-0x7 << 2)
label_151b38:
    if (ctx->pc == 0x151B38u) {
        ctx->pc = 0x151B3Cu;
        goto label_fallthrough_0x151b34;
    }
    ctx->pc = 0x151B34u;
    {
        const bool branch_taken_0x151b34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b34) {
            ctx->pc = 0x151B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b1c;
        }
    }
label_fallthrough_0x151b34:
    ctx->pc = 0x151B3Cu;
}
