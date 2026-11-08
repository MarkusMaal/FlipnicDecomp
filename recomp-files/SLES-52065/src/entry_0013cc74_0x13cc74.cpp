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

// Function: entry_0013cc74
// Address: 0x13cc74 - 0x13cc9c
void entry_0013cc74_0x13cc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013cc74_0x13cc74");
#endif

    switch (ctx->pc) {
        case 0x13cc90u: goto label_13cc90;
        default: break;
    }

    ctx->pc = 0x13cc74u;

label_13cc74:
    // 0x13cc74: 0x8ea301b8  lw          $v1, 0x1B8($s5)
    ctx->pc = 0x13cc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 440)));
label_13cc78:
    // 0x13cc78: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_13cc7c:
    if (ctx->pc == 0x13CC7Cu) {
        ctx->pc = 0x13CC80u;
        goto label_13cc80;
    }
    ctx->pc = 0x13CC78u;
    {
        const bool branch_taken_0x13cc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc78) {
            ctx->pc = 0x13CC9Cu;
            return;
        }
    }
    ctx->pc = 0x13CC80u;
label_13cc80:
    // 0x13cc80: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_13cc84:
    // 0x13cc84: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x13cc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_13cc88:
    // 0x13cc88: 0x320f809  jalr        $t9
label_13cc8c:
    if (ctx->pc == 0x13CC8Cu) {
        ctx->pc = 0x13CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC88u;
        // 0x13cc8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13CC90u;
        goto label_13cc90;
    }
    ctx->pc = 0x13CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13CC90u);
        ctx->pc = 0x13CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CC88u;
        // 0x13cc8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CC88u, 0x13CC90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13CC90u;
label_13cc90:
    // 0x13cc90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_13cc94:
    if (ctx->pc == 0x13CC94u) {
        ctx->pc = 0x13CC98u;
        goto label_13cc98;
    }
    ctx->pc = 0x13CC90u;
    {
        const bool branch_taken_0x13cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cc90) {
            ctx->pc = 0x13CC9Cu;
            return;
        }
    }
    ctx->pc = 0x13CC98u;
label_13cc98:
    // 0x13cc98: 0xa2a00055  sb          $zero, 0x55($s5)
    ctx->pc = 0x13cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 85), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x13cc9cu;
}
