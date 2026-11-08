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

// Function: FUN_001ecaa0
// Address: 0x1ecaa0 - 0x1ecbf0
void FUN_001ecaa0_0x1ecaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecaa0_0x1ecaa0");
#endif

    switch (ctx->pc) {
        case 0x1ecaecu: goto label_1ecaec;
        case 0x1ecb18u: goto label_1ecb18;
        case 0x1ecb84u: goto label_1ecb84;
        case 0x1ecb94u: goto label_1ecb94;
        case 0x1ecba8u: goto label_1ecba8;
        case 0x1ecbb4u: goto label_1ecbb4;
        case 0x1ecbc8u: goto label_1ecbc8;
        default: break;
    }

    ctx->pc = 0x1ecaa0u;

    // 0x1ecaa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ecaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ecaa4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1ecaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1ecaa8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1ecaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1ecaac: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x1ecaacu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
    // 0x1ecab0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ecab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ecab4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ecab4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecab8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ecab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ecabc: 0x26b3c3d0  addiu       $s3, $s5, -0x3C30
    ctx->pc = 0x1ecabcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951888));
    // 0x1ecac0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ecac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ecac4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ecac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ecac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ecacc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ecaccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecad0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1ecad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1ecad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ecad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecad8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1ecad8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x38C3DCu));
    // 0x1ecadc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1ECADCu;
    {
        const bool branch_taken_0x1ecadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECADCu;
        // 0x1ecae0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecadc) {
            ctx->pc = 0x1ECBCCu;
            goto label_1ecbcc;
        }
    }
    ctx->pc = 0x1ECAE4u;
    // 0x1ecae4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1ECAE4u;
    SET_GPR_U32(ctx, 31, 0x1ECAECu);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1ECAE4u, 0x1ECAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAECu;
label_1ecaec:
    // 0x1ecaec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ecaecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1ecaf0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ecaf4: 0x2442c400  addiu       $v0, $v0, -0x3C00
    ctx->pc = 0x1ecaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951936));
    // 0x1ecaf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecafc: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1ecafcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ecb00: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x1ecb00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
    // 0x1ecb04: 0xae660010  sw          $a2, 0x10($s3)
    ctx->pc = 0x1ecb04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 6));
    // 0x1ecb08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1ecb08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ecb0c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1ecb0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ecb10: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ecb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ecb14: 0x24c4000c  addiu       $a0, $a2, 0xC
    ctx->pc = 0x1ecb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1ecb18:
    // 0x1ecb18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1ecb18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1ecb1c: 0x52480012  beql        $s2, $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1ECB1Cu;
    {
        const bool branch_taken_0x1ecb1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        if (branch_taken_0x1ecb1c) {
            ctx->pc = 0x1ECB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ECB1Cu;
            // 0x1ecb20: 0x26b0c3d0  addiu       $s0, $s5, -0x3C30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951888));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ECB68u;
            goto label_1ecb68;
        }
    }
    ctx->pc = 0x1ECB24u;
    // 0x1ecb24: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ecb24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ecb28: 0x14470007  bne         $v0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECB28u;
    {
        const bool branch_taken_0x1ecb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1ECB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB28u;
        // 0x1ecb2c: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb28) {
            ctx->pc = 0x1ECB48u;
            goto label_1ecb48;
        }
    }
    ctx->pc = 0x1ECB30u;
    // 0x1ecb30: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x1ecb30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x1ecb34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ecb34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ecb38: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1ecb38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ecb3c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECB3Cu;
    {
        const bool branch_taken_0x1ecb3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB3Cu;
        // 0x1ecb40: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb3c) {
            ctx->pc = 0x1ECB64u;
            goto label_1ecb64;
        }
    }
    ctx->pc = 0x1ECB44u;
    // 0x1ecb44: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x1ecb44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ecb48:
    // 0x1ecb48: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1ecb48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecb4c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ecb4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ecb50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ecb50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ecb54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ecb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ecb58: 0x2a220100  slti        $v0, $s1, 0x100
    ctx->pc = 0x1ecb58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ecb5c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1ECB5Cu;
    {
        const bool branch_taken_0x1ecb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB5Cu;
        // 0x1ecb60: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb5c) {
            ctx->pc = 0x1ECB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecb18;
        }
    }
    ctx->pc = 0x1ECB64u;
label_1ecb64:
    // 0x1ecb64: 0x26b0c3d0  addiu       $s0, $s5, -0x3C30
    ctx->pc = 0x1ecb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294951888));
label_1ecb68:
    // 0x1ecb68: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1ecb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1ecb6c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ecb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ecb70: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1ecb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ecb74: 0x80c50007  lb          $a1, 0x7($a2)
    ctx->pc = 0x1ecb74u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x1ecb78: 0x8ea4c3d0  lw          $a0, -0x3C30($s5)
    ctx->pc = 0x1ecb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294951888)));
    // 0x1ecb7c: 0xc07b1bc  jal         func_1EC6F0
    ctx->pc = 0x1ECB7Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB84u);
    ctx->pc = 0x1ECB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB7Cu;
    // 0x1ecb80: 0xa4c30000  sh          $v1, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6F0u, 0x1ECB7Cu, 0x1ECB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB84u;
label_1ecb84:
    // 0x1ecb84: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECB84u;
    {
        const bool branch_taken_0x1ecb84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ecb84) {
            ctx->pc = 0x1ECB9Cu;
            goto label_1ecb9c;
        }
    }
    ctx->pc = 0x1ECB8Cu;
    // 0x1ecb8c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1ECB8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB94u);
    ctx->pc = 0x1ECB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB8Cu;
    // 0x1ecb90: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ECB8Cu, 0x1ECB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB94u;
label_1ecb94:
    // 0x1ecb94: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1ECB94u;
    {
        const bool branch_taken_0x1ecb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB94u;
        // 0x1ecb98: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb94) {
            ctx->pc = 0x1ECBCCu;
            goto label_1ecbcc;
        }
    }
    ctx->pc = 0x1ECB9Cu;
label_1ecb9c:
    // 0x1ecb9c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ecb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ecba0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1ECBA0u;
    {
        const bool branch_taken_0x1ecba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA0u;
        // 0x1ecba4: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecba0) {
            ctx->pc = 0x1ECBC0u;
            goto label_1ecbc0;
        }
    }
    ctx->pc = 0x1ECBA8u;
label_1ecba8:
    // 0x1ecba8: 0x8e24c3d0  lw          $a0, -0x3C30($s1)
    ctx->pc = 0x1ecba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951888)));
    // 0x1ecbac: 0xc07b1c8  jal         func_1EC720
    ctx->pc = 0x1ECBACu;
    SET_GPR_U32(ctx, 31, 0x1ECBB4u);
    ctx->pc = 0x1EC720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC720u, 0x1ECBACu, 0x1ECBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBB4u;
label_1ecbb4:
    // 0x1ecbb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ecbb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1ECBB8u;
    {
        const bool branch_taken_0x1ecbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbb8) {
            ctx->pc = 0x1ECBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecba8;
        }
    }
    ctx->pc = 0x1ECBC0u;
label_1ecbc0:
    // 0x1ecbc0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1ECBC0u;
    SET_GPR_U32(ctx, 31, 0x1ECBC8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1ECBC0u, 0x1ECBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBC8u;
label_1ecbc8:
    // 0x1ecbc8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ecbcc:
    // 0x1ecbcc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ecbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ecbd0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1ecbd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ecbd4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1ecbd4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecbd8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ecbd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecbdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ecbdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecbe0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ecbe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecbe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ecbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecbe8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECBE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBE8u;
        // 0x1ecbec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECBF0u;
}
