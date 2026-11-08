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

// Function: entry_00151b5c
// Address: 0x151b5c - 0x151b84
void entry_00151b5c_0x151b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151b5c_0x151b5c");
#endif

    switch (ctx->pc) {
        case 0x151b70u: goto label_151b70;
        default: break;
    }

    ctx->pc = 0x151b5cu;

label_151b5c:
    // 0x151b5c: 0x0  nop
    ctx->pc = 0x151b5cu;
    // NOP
label_151b60:
    // 0x151b60: 0x8e39000c  lw          $t9, 0xC($s1)
    ctx->pc = 0x151b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_151b64:
    // 0x151b64: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x151b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_151b68:
    // 0x151b68: 0x320f809  jalr        $t9
label_151b6c:
    if (ctx->pc == 0x151B6Cu) {
        ctx->pc = 0x151B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B68u;
        // 0x151b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151B70u;
        goto label_151b70;
    }
    ctx->pc = 0x151B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x151B70u);
        ctx->pc = 0x151B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B68u;
        // 0x151b6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B68u, 0x151B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151B70u;
label_151b70:
    // 0x151b70: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x151b70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_151b74:
    // 0x151b74: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
label_151b78:
    if (ctx->pc == 0x151B78u) {
        ctx->pc = 0x151B7Cu;
        goto label_151b7c;
    }
    ctx->pc = 0x151B74u;
    {
        const bool branch_taken_0x151b74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b74) {
            ctx->pc = 0x151B5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b5c;
        }
    }
    ctx->pc = 0x151B7Cu;
label_151b7c:
    // 0x151b7c: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_151b80:
    if (ctx->pc == 0x151B80u) {
        ctx->pc = 0x151B84u;
        goto label_fallthrough_0x151b7c;
    }
    ctx->pc = 0x151B7Cu;
    {
        const bool branch_taken_0x151b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151b7c) {
            ctx->pc = 0x151ADCu;
            return;
        }
    }
label_fallthrough_0x151b7c:
    ctx->pc = 0x151B84u;
}
