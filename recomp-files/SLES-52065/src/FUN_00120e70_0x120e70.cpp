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

// Function: FUN_00120e70
// Address: 0x120e70 - 0x120f10
void FUN_00120e70_0x120e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00120e70_0x120e70");
#endif

    switch (ctx->pc) {
        case 0x120e70u: goto label_120e70;
        case 0x120e74u: goto label_120e74;
        case 0x120e78u: goto label_120e78;
        case 0x120e7cu: goto label_120e7c;
        case 0x120e80u: goto label_120e80;
        case 0x120e84u: goto label_120e84;
        case 0x120e88u: goto label_120e88;
        case 0x120e8cu: goto label_120e8c;
        case 0x120e90u: goto label_120e90;
        case 0x120e94u: goto label_120e94;
        case 0x120e98u: goto label_120e98;
        case 0x120e9cu: goto label_120e9c;
        case 0x120ea0u: goto label_120ea0;
        case 0x120ea4u: goto label_120ea4;
        case 0x120ea8u: goto label_120ea8;
        case 0x120eacu: goto label_120eac;
        case 0x120eb0u: goto label_120eb0;
        case 0x120eb4u: goto label_120eb4;
        case 0x120eb8u: goto label_120eb8;
        case 0x120ebcu: goto label_120ebc;
        case 0x120ec0u: goto label_120ec0;
        case 0x120ec4u: goto label_120ec4;
        case 0x120ec8u: goto label_120ec8;
        case 0x120eccu: goto label_120ecc;
        case 0x120ed0u: goto label_120ed0;
        case 0x120ed4u: goto label_120ed4;
        case 0x120ed8u: goto label_120ed8;
        case 0x120edcu: goto label_120edc;
        case 0x120ee0u: goto label_120ee0;
        case 0x120ee4u: goto label_120ee4;
        case 0x120ee8u: goto label_120ee8;
        case 0x120eecu: goto label_120eec;
        case 0x120ef0u: goto label_120ef0;
        case 0x120ef4u: goto label_120ef4;
        case 0x120ef8u: goto label_120ef8;
        case 0x120efcu: goto label_120efc;
        case 0x120f00u: goto label_120f00;
        case 0x120f04u: goto label_120f04;
        case 0x120f08u: goto label_120f08;
        case 0x120f0cu: goto label_120f0c;
        default: break;
    }

    ctx->pc = 0x120e70u;

label_120e70:
    // 0x120e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_120e74:
    // 0x120e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x120e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_120e78:
    // 0x120e78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x120e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_120e7c:
    // 0x120e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x120e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_120e80:
    // 0x120e80: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x120e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_120e84:
    // 0x120e84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x120e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_120e88:
    // 0x120e88: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x120e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_120e8c:
    // 0x120e8c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x120e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_120e90:
    // 0x120e90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x120e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_120e94:
    // 0x120e94: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x120e94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_120e98:
    // 0x120e98: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x120e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_120e9c:
    // 0x120e9c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x120e9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_120ea0:
    // 0x120ea0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_120ea4:
    if (ctx->pc == 0x120EA4u) {
        ctx->pc = 0x120EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EA0u;
        // 0x120ea4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120EA8u;
        goto label_120ea8;
    }
    ctx->pc = 0x120EA0u;
    {
        const bool branch_taken_0x120ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EA0u;
        // 0x120ea4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120ea0) {
            ctx->pc = 0x120EB4u;
            goto label_120eb4;
        }
    }
    ctx->pc = 0x120EA8u;
label_120ea8:
    // 0x120ea8: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x120ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_120eac:
    // 0x120eac: 0xc0484a8  jal         func_1212A0
label_120eb0:
    if (ctx->pc == 0x120EB0u) {
        ctx->pc = 0x120EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EACu;
        // 0x120eb0: 0x2786803c  addiu       $a2, $gp, -0x7FC4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934588));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120EB4u;
        goto label_120eb4;
    }
    ctx->pc = 0x120EACu;
    SET_GPR_U32(ctx, 31, 0x120EB4u);
    ctx->pc = 0x120EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120EACu;
    // 0x120eb0: 0x2786803c  addiu       $a2, $gp, -0x7FC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934588));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212A0u, 0x120EACu, 0x120EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EB4u;
label_120eb4:
    // 0x120eb4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x120eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_120eb8:
    // 0x120eb8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x120eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_120ebc:
    // 0x120ebc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x120ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_120ec0:
    // 0x120ec0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x120ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_120ec4:
    // 0x120ec4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_120ec8:
    if (ctx->pc == 0x120EC8u) {
        ctx->pc = 0x120ECCu;
        goto label_120ecc;
    }
    ctx->pc = 0x120EC4u;
    {
        const bool branch_taken_0x120ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120ec4) {
            ctx->pc = 0x120EF4u;
            goto label_120ef4;
        }
    }
    ctx->pc = 0x120ECCu;
label_120ecc:
    // 0x120ecc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x120eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_120ed0:
    // 0x120ed0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x120ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_120ed4:
    // 0x120ed4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x120ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_120ed8:
    // 0x120ed8: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x120ed8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_120edc:
    // 0x120edc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_120ee0:
    if (ctx->pc == 0x120EE0u) {
        ctx->pc = 0x120EE4u;
        goto label_120ee4;
    }
    ctx->pc = 0x120EDCu;
    {
        const bool branch_taken_0x120edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x120edc) {
            ctx->pc = 0x120EF4u;
            goto label_120ef4;
        }
    }
    ctx->pc = 0x120EE4u;
label_120ee4:
    // 0x120ee4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x120ee4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_120ee8:
    // 0x120ee8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x120ee8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_120eec:
    // 0x120eec: 0x320f809  jalr        $t9
label_120ef0:
    if (ctx->pc == 0x120EF0u) {
        ctx->pc = 0x120EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EECu;
        // 0x120ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120EF4u;
        goto label_120ef4;
    }
    ctx->pc = 0x120EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x120EF4u);
        ctx->pc = 0x120EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EECu;
        // 0x120ef0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120EECu, 0x120EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x120EF4u;
label_120ef4:
    // 0x120ef4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x120ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_120ef8:
    // 0x120ef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x120ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_120efc:
    // 0x120efc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x120efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_120f00:
    // 0x120f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x120f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_120f04:
    // 0x120f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x120f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_120f08:
    // 0x120f08: 0x3e00008  jr          $ra
label_120f0c:
    if (ctx->pc == 0x120F0Cu) {
        ctx->pc = 0x120F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F08u;
        // 0x120f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x120F10u;
        goto label_fallthrough_0x120f08;
    }
    ctx->pc = 0x120F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F08u;
        // 0x120f0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x120f08:
    ctx->pc = 0x120F10u;
}
