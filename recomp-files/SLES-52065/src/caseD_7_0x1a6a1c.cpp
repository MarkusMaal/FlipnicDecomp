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
// Address: 0x1a6a1c - 0x1a6a58
void caseD_7_0x1a6a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1a6a1c");
#endif

    switch (ctx->pc) {
        case 0x1a6a1cu: goto label_1a6a1c;
        case 0x1a6a20u: goto label_1a6a20;
        case 0x1a6a24u: goto label_1a6a24;
        case 0x1a6a28u: goto label_1a6a28;
        case 0x1a6a2cu: goto label_1a6a2c;
        case 0x1a6a30u: goto label_1a6a30;
        case 0x1a6a34u: goto label_1a6a34;
        case 0x1a6a38u: goto label_1a6a38;
        case 0x1a6a3cu: goto label_1a6a3c;
        case 0x1a6a40u: goto label_1a6a40;
        case 0x1a6a44u: goto label_1a6a44;
        case 0x1a6a48u: goto label_1a6a48;
        case 0x1a6a4cu: goto label_1a6a4c;
        case 0x1a6a50u: goto label_1a6a50;
        case 0x1a6a54u: goto label_1a6a54;
        default: break;
    }

    ctx->pc = 0x1a6a1cu;

label_1a6a1c:
    // 0x1a6a1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6a20:
    // 0x1a6a20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6a24:
    // 0x1a6a24: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a6a28:
    // 0x1a6a28: 0x320f809  jalr        $t9
label_1a6a2c:
    if (ctx->pc == 0x1A6A2Cu) {
        ctx->pc = 0x1A6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A28u;
        // 0x1a6a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A30u;
        goto label_1a6a30;
    }
    ctx->pc = 0x1A6A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6A30u);
        ctx->pc = 0x1A6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A28u;
        // 0x1a6a2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A28u, 0x1A6A30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A30u;
label_1a6a30:
    // 0x1a6a30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6a34:
    // 0x1a6a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6a38:
    // 0x1a6a38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6a3c:
    // 0x1a6a3c: 0x320f809  jalr        $t9
label_1a6a40:
    if (ctx->pc == 0x1A6A40u) {
        ctx->pc = 0x1A6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A3Cu;
        // 0x1a6a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6A44u;
        goto label_1a6a44;
    }
    ctx->pc = 0x1A6A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6A44u);
        ctx->pc = 0x1A6A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A3Cu;
        // 0x1a6a40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6A3Cu, 0x1A6A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6A44u;
label_1a6a44:
    // 0x1a6a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6a48:
    // 0x1a6a48: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x1a6a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
label_1a6a4c:
    // 0x1a6a4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6a50:
    // 0x1a6a50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6a54:
    // 0x1a6a54: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1a6a58u;
}
