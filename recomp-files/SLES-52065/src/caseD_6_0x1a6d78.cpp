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

// Function: caseD_6
// Address: 0x1a6d78 - 0x1a6db4
void caseD_6_0x1a6d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1a6d78");
#endif

    switch (ctx->pc) {
        case 0x1a6d78u: goto label_1a6d78;
        case 0x1a6d7cu: goto label_1a6d7c;
        case 0x1a6d80u: goto label_1a6d80;
        case 0x1a6d84u: goto label_1a6d84;
        case 0x1a6d88u: goto label_1a6d88;
        case 0x1a6d8cu: goto label_1a6d8c;
        case 0x1a6d90u: goto label_1a6d90;
        case 0x1a6d94u: goto label_1a6d94;
        case 0x1a6d98u: goto label_1a6d98;
        case 0x1a6d9cu: goto label_1a6d9c;
        case 0x1a6da0u: goto label_1a6da0;
        case 0x1a6da4u: goto label_1a6da4;
        case 0x1a6da8u: goto label_1a6da8;
        case 0x1a6dacu: goto label_1a6dac;
        case 0x1a6db0u: goto label_1a6db0;
        default: break;
    }

    ctx->pc = 0x1a6d78u;

label_1a6d78:
    // 0x1a6d78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d7c:
    // 0x1a6d7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6d80:
    // 0x1a6d80: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x1a6d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_1a6d84:
    // 0x1a6d84: 0x320f809  jalr        $t9
label_1a6d88:
    if (ctx->pc == 0x1A6D88u) {
        ctx->pc = 0x1A6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D84u;
        // 0x1a6d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6D8Cu;
        goto label_1a6d8c;
    }
    ctx->pc = 0x1A6D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6D8Cu);
        ctx->pc = 0x1A6D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D84u;
        // 0x1a6d88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D84u, 0x1A6D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6D8Cu;
label_1a6d8c:
    // 0x1a6d8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6d90:
    // 0x1a6d90: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6d94:
    // 0x1a6d94: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6d98:
    // 0x1a6d98: 0x320f809  jalr        $t9
label_1a6d9c:
    if (ctx->pc == 0x1A6D9Cu) {
        ctx->pc = 0x1A6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D98u;
        // 0x1a6d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6DA0u;
        goto label_1a6da0;
    }
    ctx->pc = 0x1A6D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6DA0u);
        ctx->pc = 0x1A6D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D98u;
        // 0x1a6d9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D98u, 0x1A6DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6DA0u;
label_1a6da0:
    // 0x1a6da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6da4:
    // 0x1a6da4: 0xa2020018  sb          $v0, 0x18($s0)
    ctx->pc = 0x1a6da4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 2));
label_1a6da8:
    // 0x1a6da8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6dac:
    // 0x1a6dac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6db0:
    // 0x1a6db0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->pc = 0x1a6db4u;
}
