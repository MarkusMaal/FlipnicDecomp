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

// Function: FUN_001b6cb0
// Address: 0x1b6cb0 - 0x1b6da4
void FUN_001b6cb0_0x1b6cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6cb0_0x1b6cb0");
#endif

    switch (ctx->pc) {
        case 0x1b6cf0u: goto label_1b6cf0;
        case 0x1b6d04u: goto label_1b6d04;
        case 0x1b6d10u: goto label_1b6d10;
        case 0x1b6d18u: goto label_1b6d18;
        case 0x1b6d20u: goto label_1b6d20;
        case 0x1b6d40u: goto label_1b6d40;
        case 0x1b6d54u: goto label_1b6d54;
        case 0x1b6d60u: goto label_1b6d60;
        case 0x1b6d68u: goto label_1b6d68;
        case 0x1b6d70u: goto label_1b6d70;
        case 0x1b6d7cu: goto label_1b6d7c;
        default: break;
    }

    ctx->pc = 0x1b6cb0u;

    // 0x1b6cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6cb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b6cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6cbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6cc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6cc4: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x1b6cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1b6cc8: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1B6CC8u;
    {
        const bool branch_taken_0x1b6cc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CC8u;
        // 0x1b6ccc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cc8) {
            ctx->pc = 0x1B6D8Cu;
            goto label_1b6d8c;
        }
    }
    ctx->pc = 0x1B6CD0u;
    // 0x1b6cd0: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x1b6cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6cd4: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6CD4u;
    {
        const bool branch_taken_0x1b6cd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cd4) {
            ctx->pc = 0x1B6D20u;
            goto label_1b6d20;
        }
    }
    ctx->pc = 0x1B6CDCu;
    // 0x1b6cdc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b6cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6ce0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6CE0u;
    {
        const bool branch_taken_0x1b6ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ce0) {
            ctx->pc = 0x1B6CF0u;
            goto label_1b6cf0;
        }
    }
    ctx->pc = 0x1B6CE8u;
    // 0x1b6ce8: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6CE8u;
    SET_GPR_U32(ctx, 31, 0x1B6CF0u);
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6CE8u, 0x1B6CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CF0u;
label_1b6cf0:
    // 0x1b6cf0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6cf4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6CF4u;
    {
        const bool branch_taken_0x1b6cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CF4u;
        // 0x1b6cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cf4) {
            ctx->pc = 0x1B6D08u;
            goto label_1b6d08;
        }
    }
    ctx->pc = 0x1B6CFCu;
    // 0x1b6cfc: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6CFCu;
    SET_GPR_U32(ctx, 31, 0x1B6D04u);
    ctx->pc = 0x1B6D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6CFCu;
    // 0x1b6d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6CFCu, 0x1B6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D04u;
label_1b6d04:
    // 0x1b6d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d08:
    // 0x1b6d08: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6D08u;
    SET_GPR_U32(ctx, 31, 0x1B6D10u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6D08u, 0x1B6D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D10u;
label_1b6d10:
    // 0x1b6d10: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6D10u;
    SET_GPR_U32(ctx, 31, 0x1B6D18u);
    ctx->pc = 0x1B6D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D10u;
    // 0x1b6d14: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6D10u, 0x1B6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D18u;
label_1b6d18:
    // 0x1b6d18: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6D18u;
    SET_GPR_U32(ctx, 31, 0x1B6D20u);
    ctx->pc = 0x1B6D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D18u;
    // 0x1b6d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6D18u, 0x1B6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D20u;
label_1b6d20:
    // 0x1b6d20: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b6d24: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B6D24u;
    {
        const bool branch_taken_0x1b6d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D24u;
        // 0x1b6d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d24) {
            ctx->pc = 0x1B6D74u;
            goto label_1b6d74;
        }
    }
    ctx->pc = 0x1B6D2Cu;
    // 0x1b6d2c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6d30: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6D30u;
    {
        const bool branch_taken_0x1b6d30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D30u;
        // 0x1b6d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d30) {
            ctx->pc = 0x1B6D40u;
            goto label_1b6d40;
        }
    }
    ctx->pc = 0x1B6D38u;
    // 0x1b6d38: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6D38u;
    SET_GPR_U32(ctx, 31, 0x1B6D40u);
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6D38u, 0x1B6D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D40u;
label_1b6d40:
    // 0x1b6d40: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1b6d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6d44: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6D44u;
    {
        const bool branch_taken_0x1b6d44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D44u;
        // 0x1b6d48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d44) {
            ctx->pc = 0x1B6D58u;
            goto label_1b6d58;
        }
    }
    ctx->pc = 0x1B6D4Cu;
    // 0x1b6d4c: 0xc06dab4  jal         func_1B6AD0
    ctx->pc = 0x1B6D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B6D54u);
    ctx->pc = 0x1B6D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D4Cu;
    // 0x1b6d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6AD0u, 0x1B6D4Cu, 0x1B6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D54u;
label_1b6d54:
    // 0x1b6d54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b6d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d58:
    // 0x1b6d58: 0xc06db28  jal         func_1B6CA0
    ctx->pc = 0x1B6D58u;
    SET_GPR_U32(ctx, 31, 0x1B6D60u);
    ctx->pc = 0x1B6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6CA0u, 0x1B6D58u, 0x1B6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D60u;
label_1b6d60:
    // 0x1b6d60: 0xc06db24  jal         func_1B6C90
    ctx->pc = 0x1B6D60u;
    SET_GPR_U32(ctx, 31, 0x1B6D68u);
    ctx->pc = 0x1B6D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D60u;
    // 0x1b6d64: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C90u, 0x1B6D60u, 0x1B6D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D68u;
label_1b6d68:
    // 0x1b6d68: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6D68u;
    SET_GPR_U32(ctx, 31, 0x1B6D70u);
    ctx->pc = 0x1B6D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6D68u;
    // 0x1b6d6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6D68u, 0x1B6D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D70u;
label_1b6d70:
    // 0x1b6d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6d74:
    // 0x1b6d74: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1B6D74u;
    SET_GPR_U32(ctx, 31, 0x1B6D7Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1B6D74u, 0x1B6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6D7Cu;
label_1b6d7c:
    // 0x1b6d7c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1b6d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1b6d80: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1b6d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b6d84: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1b6d84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1b6d88: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1b6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1b6d8c:
    // 0x1b6d8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6d90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6d94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6d98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D9Cu;
        // 0x1b6da0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6DA4u;
}
