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

// Function: FUN_00127d20
// Address: 0x127d20 - 0x127db4
void FUN_00127d20_0x127d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127d20_0x127d20");
#endif

    switch (ctx->pc) {
        case 0x127d20u: goto label_127d20;
        case 0x127d24u: goto label_127d24;
        case 0x127d28u: goto label_127d28;
        case 0x127d2cu: goto label_127d2c;
        case 0x127d30u: goto label_127d30;
        case 0x127d34u: goto label_127d34;
        case 0x127d38u: goto label_127d38;
        case 0x127d3cu: goto label_127d3c;
        case 0x127d40u: goto label_127d40;
        case 0x127d44u: goto label_127d44;
        case 0x127d48u: goto label_127d48;
        case 0x127d4cu: goto label_127d4c;
        case 0x127d50u: goto label_127d50;
        case 0x127d54u: goto label_127d54;
        case 0x127d58u: goto label_127d58;
        case 0x127d5cu: goto label_127d5c;
        case 0x127d60u: goto label_127d60;
        case 0x127d64u: goto label_127d64;
        case 0x127d68u: goto label_127d68;
        case 0x127d6cu: goto label_127d6c;
        case 0x127d70u: goto label_127d70;
        case 0x127d74u: goto label_127d74;
        case 0x127d78u: goto label_127d78;
        case 0x127d7cu: goto label_127d7c;
        case 0x127d80u: goto label_127d80;
        case 0x127d84u: goto label_127d84;
        case 0x127d88u: goto label_127d88;
        case 0x127d8cu: goto label_127d8c;
        case 0x127d90u: goto label_127d90;
        case 0x127d94u: goto label_127d94;
        case 0x127d98u: goto label_127d98;
        case 0x127d9cu: goto label_127d9c;
        case 0x127da0u: goto label_127da0;
        case 0x127da4u: goto label_127da4;
        case 0x127da8u: goto label_127da8;
        case 0x127dacu: goto label_127dac;
        case 0x127db0u: goto label_127db0;
        default: break;
    }

    ctx->pc = 0x127d20u;

label_127d20:
    // 0x127d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x127d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_127d24:
    // 0x127d24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x127d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_127d28:
    // 0x127d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x127d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_127d2c:
    // 0x127d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x127d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_127d30:
    // 0x127d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x127d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_127d34:
    // 0x127d34: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x127d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_127d38:
    // 0x127d38: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x127d38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_127d3c:
    // 0x127d3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x127d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_127d40:
    // 0x127d40: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x127d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_127d44:
    // 0x127d44: 0x1230000b  beq         $s1, $s0, . + 4 + (0xB << 2)
label_127d48:
    if (ctx->pc == 0x127D48u) {
        ctx->pc = 0x127D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D44u;
        // 0x127d48: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127D4Cu;
        goto label_127d4c;
    }
    ctx->pc = 0x127D44u;
    {
        const bool branch_taken_0x127d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x127D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D44u;
        // 0x127d48: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127d44) {
            ctx->pc = 0x127D74u;
            goto label_127d74;
        }
    }
    ctx->pc = 0x127D4Cu;
label_127d4c:
    // 0x127d4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x127d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_127d50:
    // 0x127d50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_127d54:
    if (ctx->pc == 0x127D54u) {
        ctx->pc = 0x127D58u;
        goto label_127d58;
    }
    ctx->pc = 0x127D50u;
    {
        const bool branch_taken_0x127d50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x127d50) {
            ctx->pc = 0x127D68u;
            goto label_127d68;
        }
    }
    ctx->pc = 0x127D58u;
label_127d58:
    // 0x127d58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127d58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127d5c:
    // 0x127d5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x127d5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_127d60:
    // 0x127d60: 0x320f809  jalr        $t9
label_127d64:
    if (ctx->pc == 0x127D64u) {
        ctx->pc = 0x127D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D60u;
        // 0x127d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127D68u;
        goto label_127d68;
    }
    ctx->pc = 0x127D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127D68u);
        ctx->pc = 0x127D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127D60u;
        // 0x127d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127D60u, 0x127D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127D68u;
label_127d68:
    // 0x127d68: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x127d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_127d6c:
    // 0x127d6c: 0x1630fff7  bne         $s1, $s0, . + 4 + (-0x9 << 2)
label_127d70:
    if (ctx->pc == 0x127D70u) {
        ctx->pc = 0x127D74u;
        goto label_127d74;
    }
    ctx->pc = 0x127D6Cu;
    {
        const bool branch_taken_0x127d6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x127d6c) {
            ctx->pc = 0x127D4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127d4c;
        }
    }
    ctx->pc = 0x127D74u;
label_127d74:
    // 0x127d74: 0x0  nop
    ctx->pc = 0x127d74u;
    // NOP
label_127d78:
    // 0x127d78: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x127d78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_127d7c:
    // 0x127d7c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x127d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_127d80:
    // 0x127d80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x127d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_127d84:
    // 0x127d84: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x127d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_127d88:
    // 0x127d88: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x127d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_127d8c:
    // 0x127d8c: 0xae43007c  sw          $v1, 0x7C($s2)
    ctx->pc = 0x127d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 3));
label_127d90:
    // 0x127d90: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x127d90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_127d94:
    // 0x127d94: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x127d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_127d98:
    // 0x127d98: 0xac600130  sw          $zero, 0x130($v1)
    ctx->pc = 0x127d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
label_127d9c:
    // 0x127d9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x127d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_127da0:
    // 0x127da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127da4:
    // 0x127da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_127da8:
    // 0x127da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x127da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127dac:
    // 0x127dac: 0x3e00008  jr          $ra
label_127db0:
    if (ctx->pc == 0x127DB0u) {
        ctx->pc = 0x127DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DACu;
        // 0x127db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x127DB4u;
        goto label_fallthrough_0x127dac;
    }
    ctx->pc = 0x127DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127DACu;
        // 0x127db0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x127dac:
    ctx->pc = 0x127DB4u;
}
