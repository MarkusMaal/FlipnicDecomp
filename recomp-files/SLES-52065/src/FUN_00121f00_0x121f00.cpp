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

// Function: FUN_00121f00
// Address: 0x121f00 - 0x121fb8
void FUN_00121f00_0x121f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00121f00_0x121f00");
#endif

    switch (ctx->pc) {
        case 0x121f00u: goto label_121f00;
        case 0x121f04u: goto label_121f04;
        case 0x121f08u: goto label_121f08;
        case 0x121f0cu: goto label_121f0c;
        case 0x121f10u: goto label_121f10;
        case 0x121f14u: goto label_121f14;
        case 0x121f18u: goto label_121f18;
        case 0x121f1cu: goto label_121f1c;
        case 0x121f20u: goto label_121f20;
        case 0x121f24u: goto label_121f24;
        case 0x121f28u: goto label_121f28;
        case 0x121f2cu: goto label_121f2c;
        case 0x121f30u: goto label_121f30;
        case 0x121f34u: goto label_121f34;
        case 0x121f38u: goto label_121f38;
        case 0x121f3cu: goto label_121f3c;
        case 0x121f40u: goto label_121f40;
        case 0x121f44u: goto label_121f44;
        case 0x121f48u: goto label_121f48;
        case 0x121f4cu: goto label_121f4c;
        case 0x121f50u: goto label_121f50;
        case 0x121f54u: goto label_121f54;
        case 0x121f58u: goto label_121f58;
        case 0x121f5cu: goto label_121f5c;
        case 0x121f60u: goto label_121f60;
        case 0x121f64u: goto label_121f64;
        case 0x121f68u: goto label_121f68;
        case 0x121f6cu: goto label_121f6c;
        case 0x121f70u: goto label_121f70;
        case 0x121f74u: goto label_121f74;
        case 0x121f78u: goto label_121f78;
        case 0x121f7cu: goto label_121f7c;
        case 0x121f80u: goto label_121f80;
        case 0x121f84u: goto label_121f84;
        case 0x121f88u: goto label_121f88;
        case 0x121f8cu: goto label_121f8c;
        case 0x121f90u: goto label_121f90;
        case 0x121f94u: goto label_121f94;
        case 0x121f98u: goto label_121f98;
        case 0x121f9cu: goto label_121f9c;
        case 0x121fa0u: goto label_121fa0;
        case 0x121fa4u: goto label_121fa4;
        case 0x121fa8u: goto label_121fa8;
        case 0x121facu: goto label_121fac;
        case 0x121fb0u: goto label_121fb0;
        case 0x121fb4u: goto label_121fb4;
        default: break;
    }

    ctx->pc = 0x121f00u;

label_121f00:
    // 0x121f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x121f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_121f04:
    // 0x121f04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x121f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121f08:
    // 0x121f08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x121f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_121f0c:
    // 0x121f0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_121f10:
    // 0x121f10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_121f14:
    // 0x121f14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121f14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121f18:
    // 0x121f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x121f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_121f1c:
    // 0x121f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x121f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121f20:
    // 0x121f20: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x121f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_121f24:
    // 0x121f24: 0x8cc50018  lw          $a1, 0x18($a2)
    ctx->pc = 0x121f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_121f28:
    // 0x121f28: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_121f2c:
    if (ctx->pc == 0x121F2Cu) {
        ctx->pc = 0x121F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F28u;
        // 0x121f2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F30u;
        goto label_121f30;
    }
    ctx->pc = 0x121F28u;
    {
        const bool branch_taken_0x121f28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x121F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F28u;
        // 0x121f2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f28) {
            ctx->pc = 0x121F38u;
            goto label_121f38;
        }
    }
    ctx->pc = 0x121F30u;
label_121f30:
    // 0x121f30: 0x1000000b  b           . + 4 + (0xB << 2)
label_121f34:
    if (ctx->pc == 0x121F34u) {
        ctx->pc = 0x121F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F30u;
        // 0x121f34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F38u;
        goto label_121f38;
    }
    ctx->pc = 0x121F30u;
    {
        const bool branch_taken_0x121f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F30u;
        // 0x121f34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f30) {
            ctx->pc = 0x121F60u;
            goto label_121f60;
        }
    }
    ctx->pc = 0x121F38u;
label_121f38:
    // 0x121f38: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x121f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_121f3c:
    // 0x121f3c: 0x8e442030  lw          $a0, 0x2030($s2)
    ctx->pc = 0x121f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
label_121f40:
    // 0x121f40: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x121f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_121f44:
    // 0x121f44: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x121f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_121f48:
    // 0x121f48: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x121f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_121f4c:
    // 0x121f4c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x121f4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_121f50:
    // 0x121f50: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_121f54:
    if (ctx->pc == 0x121F54u) {
        ctx->pc = 0x121F58u;
        goto label_121f58;
    }
    ctx->pc = 0x121F50u;
    {
        const bool branch_taken_0x121f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f50) {
            ctx->pc = 0x121F60u;
            goto label_121f60;
        }
    }
    ctx->pc = 0x121F58u;
label_121f58:
    // 0x121f58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x121f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_121f5c:
    // 0x121f5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x121f5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_121f60:
    // 0x121f60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x121f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_121f64:
    // 0x121f64: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_121f68:
    if (ctx->pc == 0x121F68u) {
        ctx->pc = 0x121F6Cu;
        goto label_121f6c;
    }
    ctx->pc = 0x121F64u;
    {
        const bool branch_taken_0x121f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x121f64) {
            ctx->pc = 0x121FA0u;
            goto label_121fa0;
        }
    }
    ctx->pc = 0x121F6Cu;
label_121f6c:
    // 0x121f6c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121f70:
    // 0x121f70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x121f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_121f74:
    // 0x121f74: 0x320f809  jalr        $t9
label_121f78:
    if (ctx->pc == 0x121F78u) {
        ctx->pc = 0x121F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F74u;
        // 0x121f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F7Cu;
        goto label_121f7c;
    }
    ctx->pc = 0x121F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121F7Cu);
        ctx->pc = 0x121F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F74u;
        // 0x121f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F74u, 0x121F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121F7Cu;
label_121f7c:
    // 0x121f7c: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x121f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_121f80:
    // 0x121f80: 0xc047d50  jal         func_11F540
label_121f84:
    if (ctx->pc == 0x121F84u) {
        ctx->pc = 0x121F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F80u;
        // 0x121f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F88u;
        goto label_121f88;
    }
    ctx->pc = 0x121F80u;
    SET_GPR_U32(ctx, 31, 0x121F88u);
    ctx->pc = 0x121F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121F80u;
    // 0x121f84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F540u, 0x121F80u, 0x121F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F88u;
label_121f88:
    // 0x121f88: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x121f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121f8c:
    // 0x121f8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x121f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_121f90:
    // 0x121f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x121f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121f94:
    // 0x121f94: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x121f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_121f98:
    // 0x121f98: 0x320f809  jalr        $t9
label_121f9c:
    if (ctx->pc == 0x121F9Cu) {
        ctx->pc = 0x121F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F98u;
        // 0x121f9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FA0u;
        goto label_121fa0;
    }
    ctx->pc = 0x121F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x121FA0u);
        ctx->pc = 0x121F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F98u;
        // 0x121f9c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F98u, 0x121FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121FA0u;
label_121fa0:
    // 0x121fa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x121fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_121fa4:
    // 0x121fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_121fa8:
    // 0x121fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_121fac:
    // 0x121fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x121facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_121fb0:
    // 0x121fb0: 0x3e00008  jr          $ra
label_121fb4:
    if (ctx->pc == 0x121FB4u) {
        ctx->pc = 0x121FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FB0u;
        // 0x121fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FB8u;
        goto label_fallthrough_0x121fb0;
    }
    ctx->pc = 0x121FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FB0u;
        // 0x121fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x121fb0:
    ctx->pc = 0x121FB8u;
}
