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

// Function: caseD_b
// Address: 0x114f7c - 0x114fbc
void caseD_b_0x114f7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x114f7c");
#endif

    switch (ctx->pc) {
        case 0x114f7cu: goto label_114f7c;
        case 0x114f80u: goto label_114f80;
        case 0x114f84u: goto label_114f84;
        case 0x114f88u: goto label_114f88;
        case 0x114f8cu: goto label_114f8c;
        case 0x114f90u: goto label_114f90;
        case 0x114f94u: goto label_114f94;
        case 0x114f98u: goto label_114f98;
        case 0x114f9cu: goto label_114f9c;
        case 0x114fa0u: goto label_114fa0;
        case 0x114fa4u: goto label_114fa4;
        case 0x114fa8u: goto label_114fa8;
        case 0x114facu: goto label_114fac;
        case 0x114fb0u: goto label_114fb0;
        case 0x114fb4u: goto label_114fb4;
        case 0x114fb8u: goto label_114fb8;
        default: break;
    }

    ctx->pc = 0x114f7cu;

label_114f7c:
    // 0x114f7c: 0x92440284  lbu         $a0, 0x284($s2)
    ctx->pc = 0x114f7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 644)));
label_114f80:
    // 0x114f80: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x114f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_114f84:
    // 0x114f84: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_114f88:
    if (ctx->pc == 0x114F88u) {
        ctx->pc = 0x114F8Cu;
        goto label_114f8c;
    }
    ctx->pc = 0x114F84u;
    {
        const bool branch_taken_0x114f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x114f84) {
            ctx->pc = 0x114FBCu;
            return;
        }
    }
    ctx->pc = 0x114F8Cu;
label_114f8c:
    // 0x114f8c: 0xa2420284  sb          $v0, 0x284($s2)
    ctx->pc = 0x114f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 644), (uint8_t)GPR_U32(ctx, 2));
label_114f90:
    // 0x114f90: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x114f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_114f94:
    // 0x114f94: 0x938782a4  lbu         $a3, -0x7D5C($gp)
    ctx->pc = 0x114f94u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935204)));
label_114f98:
    // 0x114f98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x114f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_114f9c:
    // 0x114f9c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x114f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_114fa0:
    // 0x114fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x114fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_114fa4:
    // 0x114fa4: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x114fa4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_114fa8:
    // 0x114fa8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x114fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_114fac:
    // 0x114fac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x114facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_114fb0:
    // 0x114fb0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x114fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_114fb4:
    // 0x114fb4: 0x320f809  jalr        $t9
label_114fb8:
    if (ctx->pc == 0x114FB8u) {
        ctx->pc = 0x114FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FB4u;
        // 0x114fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114FBCu;
        goto label_fallthrough_0x114fb4;
    }
    ctx->pc = 0x114FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114FBCu);
        ctx->pc = 0x114FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FB4u;
        // 0x114fb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114FB4u, 0x114FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x114fb4:
    ctx->pc = 0x114FBCu;
}
