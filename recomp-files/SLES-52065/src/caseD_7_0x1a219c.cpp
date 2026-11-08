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

// Function: caseD_7
// Address: 0x1a219c - 0x1a21cc
void caseD_7_0x1a219c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1a219c");
#endif

    switch (ctx->pc) {
        case 0x1a219cu: goto label_1a219c;
        case 0x1a21a0u: goto label_1a21a0;
        case 0x1a21a4u: goto label_1a21a4;
        case 0x1a21a8u: goto label_1a21a8;
        case 0x1a21acu: goto label_1a21ac;
        case 0x1a21b0u: goto label_1a21b0;
        case 0x1a21b4u: goto label_1a21b4;
        case 0x1a21b8u: goto label_1a21b8;
        case 0x1a21bcu: goto label_1a21bc;
        case 0x1a21c0u: goto label_1a21c0;
        case 0x1a21c4u: goto label_1a21c4;
        case 0x1a21c8u: goto label_1a21c8;
        default: break;
    }

    ctx->pc = 0x1a219cu;

label_1a219c:
    // 0x1a219c: 0x8e830c78  lw          $v1, 0xC78($s4)
    ctx->pc = 0x1a219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3192)));
label_1a21a0:
    // 0x1a21a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a21a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a21a4:
    // 0x1a21a4: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x1a21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_1a21a8:
    // 0x1a21a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1a21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1a21ac:
    // 0x1a21ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a21b0:
    // 0x1a21b0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a21b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a21b4:
    // 0x1a21b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a21b8:
    // 0x1a21b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a21b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a21bc:
    // 0x1a21bc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a21bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a21c0:
    // 0x1a21c0: 0x320f809  jalr        $t9
label_1a21c4:
    if (ctx->pc == 0x1A21C4u) {
        ctx->pc = 0x1A21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21C0u;
        // 0x1a21c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A21C8u;
        goto label_1a21c8;
    }
    ctx->pc = 0x1A21C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A21C8u);
        ctx->pc = 0x1A21C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A21C0u;
        // 0x1a21c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A21C0u, 0x1A21C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A21C8u;
label_1a21c8:
    // 0x1a21c8: 0xae800c7c  sw          $zero, 0xC7C($s4)
    ctx->pc = 0x1a21c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3196), GPR_U32(ctx, 0));
    ctx->pc = 0x1a21ccu;
}
