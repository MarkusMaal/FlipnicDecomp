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

// Function: FUN_001a6ec0
// Address: 0x1a6ec0 - 0x1a6fa8
void FUN_001a6ec0_0x1a6ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6ec0_0x1a6ec0");
#endif

    switch (ctx->pc) {
        case 0x1a6ec0u: goto label_1a6ec0;
        case 0x1a6ec4u: goto label_1a6ec4;
        case 0x1a6ec8u: goto label_1a6ec8;
        case 0x1a6eccu: goto label_1a6ecc;
        case 0x1a6ed0u: goto label_1a6ed0;
        case 0x1a6ed4u: goto label_1a6ed4;
        case 0x1a6ed8u: goto label_1a6ed8;
        case 0x1a6edcu: goto label_1a6edc;
        case 0x1a6ee0u: goto label_1a6ee0;
        case 0x1a6ee4u: goto label_1a6ee4;
        case 0x1a6ee8u: goto label_1a6ee8;
        case 0x1a6eecu: goto label_1a6eec;
        case 0x1a6ef0u: goto label_1a6ef0;
        case 0x1a6ef4u: goto label_1a6ef4;
        case 0x1a6ef8u: goto label_1a6ef8;
        case 0x1a6efcu: goto label_1a6efc;
        case 0x1a6f00u: goto label_1a6f00;
        case 0x1a6f04u: goto label_1a6f04;
        case 0x1a6f08u: goto label_1a6f08;
        case 0x1a6f0cu: goto label_1a6f0c;
        case 0x1a6f10u: goto label_1a6f10;
        case 0x1a6f14u: goto label_1a6f14;
        case 0x1a6f18u: goto label_1a6f18;
        case 0x1a6f1cu: goto label_1a6f1c;
        case 0x1a6f20u: goto label_1a6f20;
        case 0x1a6f24u: goto label_1a6f24;
        case 0x1a6f28u: goto label_1a6f28;
        case 0x1a6f2cu: goto label_1a6f2c;
        case 0x1a6f30u: goto label_1a6f30;
        case 0x1a6f34u: goto label_1a6f34;
        case 0x1a6f38u: goto label_1a6f38;
        case 0x1a6f3cu: goto label_1a6f3c;
        case 0x1a6f40u: goto label_1a6f40;
        case 0x1a6f44u: goto label_1a6f44;
        case 0x1a6f48u: goto label_1a6f48;
        case 0x1a6f4cu: goto label_1a6f4c;
        case 0x1a6f50u: goto label_1a6f50;
        case 0x1a6f54u: goto label_1a6f54;
        case 0x1a6f58u: goto label_1a6f58;
        case 0x1a6f5cu: goto label_1a6f5c;
        case 0x1a6f60u: goto label_1a6f60;
        case 0x1a6f64u: goto label_1a6f64;
        case 0x1a6f68u: goto label_1a6f68;
        case 0x1a6f6cu: goto label_1a6f6c;
        case 0x1a6f70u: goto label_1a6f70;
        case 0x1a6f74u: goto label_1a6f74;
        case 0x1a6f78u: goto label_1a6f78;
        case 0x1a6f7cu: goto label_1a6f7c;
        case 0x1a6f80u: goto label_1a6f80;
        case 0x1a6f84u: goto label_1a6f84;
        case 0x1a6f88u: goto label_1a6f88;
        case 0x1a6f8cu: goto label_1a6f8c;
        case 0x1a6f90u: goto label_1a6f90;
        case 0x1a6f94u: goto label_1a6f94;
        case 0x1a6f98u: goto label_1a6f98;
        case 0x1a6f9cu: goto label_1a6f9c;
        case 0x1a6fa0u: goto label_1a6fa0;
        case 0x1a6fa4u: goto label_1a6fa4;
        default: break;
    }

    ctx->pc = 0x1a6ec0u;

label_1a6ec0:
    // 0x1a6ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a6ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a6ec4:
    // 0x1a6ec4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a6ec8:
    // 0x1a6ec8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a6ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a6ecc:
    // 0x1a6ecc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a6eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a6ed0:
    // 0x1a6ed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a6ed4:
    // 0x1a6ed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a6ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a6ed8:
    // 0x1a6ed8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6edc:
    // 0x1a6edc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a6edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6ee0:
    // 0x1a6ee0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_1a6ee4:
    if (ctx->pc == 0x1A6EE4u) {
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EE8u;
        goto label_1a6ee8;
    }
    ctx->pc = 0x1A6EE0u;
    {
        const bool branch_taken_0x1a6ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE0u;
        // 0x1a6ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ee0) {
            ctx->pc = 0x1A6EF0u;
            goto label_1a6ef0;
        }
    }
    ctx->pc = 0x1A6EE8u;
label_1a6ee8:
    // 0x1a6ee8: 0x10000029  b           . + 4 + (0x29 << 2)
label_1a6eec:
    if (ctx->pc == 0x1A6EECu) {
        ctx->pc = 0x1A6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE8u;
        // 0x1a6eec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6EF0u;
        goto label_1a6ef0;
    }
    ctx->pc = 0x1A6EE8u;
    {
        const bool branch_taken_0x1a6ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EE8u;
        // 0x1a6eec: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ee8) {
            ctx->pc = 0x1A6F90u;
            goto label_1a6f90;
        }
    }
    ctx->pc = 0x1A6EF0u;
label_1a6ef0:
    // 0x1a6ef0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6ef4:
    // 0x1a6ef4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a6ef8:
    // 0x1a6ef8: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
label_1a6efc:
    if (ctx->pc == 0x1A6EFCu) {
        ctx->pc = 0x1A6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EF8u;
        // 0x1a6efc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F00u;
        goto label_1a6f00;
    }
    ctx->pc = 0x1A6EF8u;
    {
        const bool branch_taken_0x1a6ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1A6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EF8u;
        // 0x1a6efc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ef8) {
            ctx->pc = 0x1A6F30u;
            goto label_1a6f30;
        }
    }
    ctx->pc = 0x1A6F00u;
label_1a6f00:
    // 0x1a6f00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a6f04:
    if (ctx->pc == 0x1A6F04u) {
        ctx->pc = 0x1A6F08u;
        goto label_1a6f08;
    }
    ctx->pc = 0x1A6F00u;
    {
        const bool branch_taken_0x1a6f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f00) {
            ctx->pc = 0x1A6F10u;
            goto label_1a6f10;
        }
    }
    ctx->pc = 0x1A6F08u;
label_1a6f08:
    // 0x1a6f08: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1a6f0c:
    if (ctx->pc == 0x1A6F0Cu) {
        ctx->pc = 0x1A6F10u;
        goto label_1a6f10;
    }
    ctx->pc = 0x1A6F08u;
    {
        const bool branch_taken_0x1a6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f08) {
            ctx->pc = 0x1A6F88u;
            goto label_1a6f88;
        }
    }
    ctx->pc = 0x1A6F10u;
label_1a6f10:
    // 0x1a6f10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6f14:
    // 0x1a6f14: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1a6f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1a6f18:
    // 0x1a6f18: 0x320f809  jalr        $t9
label_1a6f1c:
    if (ctx->pc == 0x1A6F1Cu) {
        ctx->pc = 0x1A6F20u;
        goto label_1a6f20;
    }
    ctx->pc = 0x1A6F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F18u, 0x1A6F20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F20u;
label_1a6f20:
    // 0x1a6f20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a6f24:
    // 0x1a6f24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a6f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1a6f28:
    // 0x1a6f28: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a6f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a6f2c:
    // 0x1a6f2c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a6f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f30:
    // 0x1a6f30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a6f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f34:
    // 0x1a6f34: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x1a6f34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1a6f38:
    // 0x1a6f38: 0xc069c08  jal         func_1A7020
label_1a6f3c:
    if (ctx->pc == 0x1A6F3Cu) {
        ctx->pc = 0x1A6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F38u;
        // 0x1a6f3c: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F40u;
        goto label_1a6f40;
    }
    ctx->pc = 0x1A6F38u;
    SET_GPR_U32(ctx, 31, 0x1A6F40u);
    ctx->pc = 0x1A6F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6F38u;
    // 0x1a6f3c: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7020u, 0x1A6F38u, 0x1A6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6F40u;
label_1a6f40:
    // 0x1a6f40: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a6f44:
    if (ctx->pc == 0x1A6F44u) {
        ctx->pc = 0x1A6F48u;
        goto label_1a6f48;
    }
    ctx->pc = 0x1A6F40u;
    {
        const bool branch_taken_0x1a6f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f40) {
            ctx->pc = 0x1A6F74u;
            goto label_1a6f74;
        }
    }
    ctx->pc = 0x1A6F48u;
label_1a6f48:
    // 0x1a6f48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a6f4c:
    // 0x1a6f4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1a6f4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a6f50:
    // 0x1a6f50: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1a6f54:
    // 0x1a6f54: 0x320f809  jalr        $t9
label_1a6f58:
    if (ctx->pc == 0x1A6F58u) {
        ctx->pc = 0x1A6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F54u;
        // 0x1a6f58: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F5Cu;
        goto label_1a6f5c;
    }
    ctx->pc = 0x1A6F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F5Cu);
        ctx->pc = 0x1A6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F54u;
        // 0x1a6f58: 0x26250001  addiu       $a1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F54u, 0x1A6F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F5Cu;
label_1a6f5c:
    // 0x1a6f5c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1a6f5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a6f60:
    // 0x1a6f60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a6f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f64:
    // 0x1a6f64: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1a6f68:
    // 0x1a6f68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1a6f6c:
    // 0x1a6f6c: 0x320f809  jalr        $t9
label_1a6f70:
    if (ctx->pc == 0x1A6F70u) {
        ctx->pc = 0x1A6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F6Cu;
        // 0x1a6f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F74u;
        goto label_1a6f74;
    }
    ctx->pc = 0x1A6F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A6F74u);
        ctx->pc = 0x1A6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F6Cu;
        // 0x1a6f70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F6Cu, 0x1A6F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6F74u;
label_1a6f74:
    // 0x1a6f74: 0x0  nop
    ctx->pc = 0x1a6f74u;
    // NOP
label_1a6f78:
    // 0x1a6f78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1a6f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1a6f7c:
    // 0x1a6f7c: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1a6f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1a6f80:
    // 0x1a6f80: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1a6f84:
    if (ctx->pc == 0x1A6F84u) {
        ctx->pc = 0x1A6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F80u;
        // 0x1a6f84: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6F88u;
        goto label_1a6f88;
    }
    ctx->pc = 0x1A6F80u;
    {
        const bool branch_taken_0x1a6f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F80u;
        // 0x1a6f84: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f80) {
            ctx->pc = 0x1A6F34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6f34;
        }
    }
    ctx->pc = 0x1A6F88u;
label_1a6f88:
    // 0x1a6f88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6f8c:
    // 0x1a6f8c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a6f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a6f90:
    // 0x1a6f90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a6f90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a6f94:
    // 0x1a6f94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a6f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a6f98:
    // 0x1a6f98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6f98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a6f9c:
    // 0x1a6f9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a6f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6fa0:
    // 0x1a6fa0: 0x3e00008  jr          $ra
label_1a6fa4:
    if (ctx->pc == 0x1A6FA4u) {
        ctx->pc = 0x1A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FA0u;
        // 0x1a6fa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6FA8u;
        goto label_fallthrough_0x1a6fa0;
    }
    ctx->pc = 0x1A6FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FA0u;
        // 0x1a6fa4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a6fa0:
    ctx->pc = 0x1A6FA8u;
}
