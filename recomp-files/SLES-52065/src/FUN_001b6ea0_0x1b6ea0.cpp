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

// Function: FUN_001b6ea0
// Address: 0x1b6ea0 - 0x1b6fd8
void FUN_001b6ea0_0x1b6ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6ea0_0x1b6ea0");
#endif

    switch (ctx->pc) {
        case 0x1b6f10u: goto label_1b6f10;
        case 0x1b6f18u: goto label_1b6f18;
        case 0x1b6f20u: goto label_1b6f20;
        case 0x1b6f44u: goto label_1b6f44;
        case 0x1b6f4cu: goto label_1b6f4c;
        case 0x1b6fa8u: goto label_1b6fa8;
        default: break;
    }

    ctx->pc = 0x1b6ea0u;

    // 0x1b6ea0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b6ea4: 0x34010000  ori         $at, $zero, 0x0
    ctx->pc = 0x1b6ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)0);
    // 0x1b6ea8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b6eac: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1b6eacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1b6eb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b6eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b6eb4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1b6eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1b6eb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b6eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b6ebc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1b6ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1b6ec0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b6ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b6ec4: 0x10c38  dsll        $at, $at, 16
    ctx->pc = 0x1b6ec4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) << 16);
    // 0x1b6ec8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b6ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b6ecc: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1b6eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1b6ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b6ed4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b6ed4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ed8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6edc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1b6edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ee0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6ee4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b6ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6ee8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1b6ee8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6eec: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1b6eecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1b6ef0: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6EF0u;
    {
        const bool branch_taken_0x1b6ef0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6EF0u;
        // 0x1b6ef4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ef0) {
            ctx->pc = 0x1B6F18u;
            goto label_1b6f18;
        }
    }
    ctx->pc = 0x1B6EF8u;
    // 0x1b6ef8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1b6ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1b6efc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b6efcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b6f00: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1b6f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1b6f04: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1b6f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b6f08: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1B6F08u;
    SET_GPR_U32(ctx, 31, 0x1B6F10u);
    ctx->pc = 0x1B6F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F08u;
    // 0x1b6f0c: 0x24a50fc0  addiu       $a1, $a1, 0xFC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1B6F08u, 0x1B6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F10u;
label_1b6f10:
    // 0x1b6f10: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1B6F10u;
    SET_GPR_U32(ctx, 31, 0x1B6F18u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1B6F10u, 0x1B6F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F18u;
label_1b6f18:
    // 0x1b6f18: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B6F18u;
    SET_GPR_U32(ctx, 31, 0x1B6F20u);
    ctx->pc = 0x1B6F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F18u;
    // 0x1b6f1c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B6F18u, 0x1B6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F20u;
label_1b6f20:
    // 0x1b6f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f24: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6F24u;
    {
        const bool branch_taken_0x1b6f24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F24u;
        // 0x1b6f28: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f24) {
            ctx->pc = 0x1B6F50u;
            goto label_1b6f50;
        }
    }
    ctx->pc = 0x1B6F2Cu;
    // 0x1b6f2c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1b6f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1b6f30: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b6f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b6f34: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1b6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1b6f38: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1b6f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b6f3c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1B6F3Cu;
    SET_GPR_U32(ctx, 31, 0x1B6F44u);
    ctx->pc = 0x1B6F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6F3Cu;
    // 0x1b6f40: 0x24a50fa0  addiu       $a1, $a1, 0xFA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1B6F3Cu, 0x1B6F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F44u;
label_1b6f44:
    // 0x1b6f44: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1B6F44u;
    SET_GPR_U32(ctx, 31, 0x1B6F4Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1B6F44u, 0x1B6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F4Cu;
label_1b6f4c:
    // 0x1b6f4c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1b6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1b6f50:
    // 0x1b6f50: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6F50u;
    {
        const bool branch_taken_0x1b6f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6f50) {
            ctx->pc = 0x1B6F68u;
            goto label_1b6f68;
        }
    }
    ctx->pc = 0x1B6F58u;
    // 0x1b6f58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6f5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b6f60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1b6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b6f64: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1b6f68:
    // 0x1b6f68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b6f6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1b6f70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1b6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1b6f74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b6f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b6f78: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x1b6f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x1b6f7c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6F7Cu;
    {
        const bool branch_taken_0x1b6f7c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F7Cu;
        // 0x1b6f80: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f7c) {
            ctx->pc = 0x1B6F8Cu;
            goto label_1b6f8c;
        }
    }
    ctx->pc = 0x1B6F84u;
    // 0x1b6f84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6F84u;
    {
        const bool branch_taken_0x1b6f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6F84u;
        // 0x1b6f88: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6f84) {
            ctx->pc = 0x1B6F90u;
            goto label_1b6f90;
        }
    }
    ctx->pc = 0x1B6F8Cu;
label_1b6f8c:
    // 0x1b6f8c: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x1b6f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_1b6f90:
    // 0x1b6f90: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b6f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b6f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b6f98: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1b6f98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1b6f9c: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x1b6f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1b6fa0: 0xc048dec  jal         func_1237B0
    ctx->pc = 0x1B6FA0u;
    SET_GPR_U32(ctx, 31, 0x1B6FA8u);
    ctx->pc = 0x1B6FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FA0u;
    // 0x1b6fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1237B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1237B0u, 0x1B6FA0u, 0x1B6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FA8u;
label_1b6fa8:
    // 0x1b6fa8: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6FA8u;
    {
        const bool branch_taken_0x1b6fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FA8u;
        // 0x1b6fac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6fa8) {
            ctx->pc = 0x1B6FB4u;
            goto label_1b6fb4;
        }
    }
    ctx->pc = 0x1B6FB0u;
    // 0x1b6fb0: 0xaeb0000c  sw          $s0, 0xC($s5)
    ctx->pc = 0x1b6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 16));
label_1b6fb4:
    // 0x1b6fb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b6fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b6fb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b6fb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b6fbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b6fbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b6fc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b6fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b6fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6FD0u;
        // 0x1b6fd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6FD8u;
}
