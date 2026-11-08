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

// Function: FUN_00200b38
// Address: 0x200b38 - 0x2010a8
void FUN_00200b38_0x200b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00200b38_0x200b38");
#endif

    switch (ctx->pc) {
        case 0x200b7cu: goto label_200b7c;
        case 0x200b90u: goto label_200b90;
        case 0x200c58u: goto label_200c58;
        case 0x200da0u: goto label_200da0;
        case 0x200ee4u: goto label_200ee4;
        case 0x200ef8u: goto label_200ef8;
        case 0x200f0cu: goto label_200f0c;
        case 0x200ff0u: goto label_200ff0;
        case 0x200ffcu: goto label_200ffc;
        case 0x201048u: goto label_201048;
        case 0x201074u: goto label_201074;
        default: break;
    }

    ctx->pc = 0x200b38u;

    // 0x200b38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x200b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x200b3c: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x200b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x200b40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x200b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x200b44: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x200b44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x200b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200b4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x200b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b50: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x200b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x200b54: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x200b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b58: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x200b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x200b5c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x200b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x200b60: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x200b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x200b64: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x200b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x200b68: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x200b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x200b6c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200B6Cu;
    {
        const bool branch_taken_0x200b6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B6Cu;
        // 0x200b70: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b6c) {
            ctx->pc = 0x200B84u;
            goto label_200b84;
        }
    }
    ctx->pc = 0x200B74u;
    // 0x200b74: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x200B74u;
    SET_GPR_U32(ctx, 31, 0x200B7Cu);
    ctx->pc = 0x200B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B74u;
    // 0x200b78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x200B74u, 0x200B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B7Cu;
label_200b7c:
    // 0x200b7c: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x200B7Cu;
    {
        const bool branch_taken_0x200b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B7Cu;
        // 0x200b80: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b7c) {
            ctx->pc = 0x20107Cu;
            goto label_20107c;
        }
    }
    ctx->pc = 0x200B84u;
label_200b84:
    // 0x200b84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b88: 0xc07fe9c  jal         func_1FFA70
    ctx->pc = 0x200B88u;
    SET_GPR_U32(ctx, 31, 0x200B90u);
    ctx->pc = 0x200B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B88u;
    // 0x200b8c: 0x2611fff8  addiu       $s1, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA70u, 0x200B88u, 0x200B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B90u;
label_200b90:
    // 0x200b90: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x200b90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200b94: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x200b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x200b98: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200b9c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x200b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x200ba0: 0x26440013  addiu       $a0, $s2, 0x13
    ctx->pc = 0x200ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x200ba4: 0xa2b824  and         $s7, $a1, $v0
    ctx->pc = 0x200ba4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x200ba8: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x200ba8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x200bac: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200BACu;
    {
        const bool branch_taken_0x200bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BACu;
        // 0x200bb0: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bac) {
            ctx->pc = 0x200BC4u;
            goto label_200bc4;
        }
    }
    ctx->pc = 0x200BB4u;
    // 0x200bb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200bb8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x200bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x200bbc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200BBCu;
    {
        const bool branch_taken_0x200bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BBCu;
        // 0x200bc0: 0x82b024  and         $s6, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bbc) {
            ctx->pc = 0x200BC8u;
            goto label_200bc8;
        }
    }
    ctx->pc = 0x200BC4u;
label_200bc4:
    // 0x200bc4: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x200bc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_200bc8:
    // 0x200bc8: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x200bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200bcc: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x200BCCu;
    {
        const bool branch_taken_0x200bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BCCu;
        // 0x200bd0: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bcc) {
            ctx->pc = 0x201004u;
            goto label_201004;
        }
    }
    ctx->pc = 0x200BD4u;
    // 0x200bd4: 0x2b33821  addu        $a3, $s5, $s3
    ctx->pc = 0x200bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x200bd8: 0x2449d9c8  addiu       $t1, $v0, -0x2638
    ctx->pc = 0x200bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957512));
    // 0x200bdc: 0x8d280008  lw          $t0, 0x8($t1)
    ctx->pc = 0x200bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x200be0: 0x10e80009  beq         $a3, $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200BE0u;
    {
        const bool branch_taken_0x200be0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        ctx->pc = 0x200BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BE0u;
        // 0x200be4: 0x8ce40004  lw          $a0, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200be0) {
            ctx->pc = 0x200C08u;
            goto label_200c08;
        }
    }
    ctx->pc = 0x200BE8u;
    // 0x200be8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200bec: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x200becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x200bf0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x200bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x200bf4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x200bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x200bf8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x200bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x200bfc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x200bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x200c00: 0x54600022  bnel        $v1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x200C00u;
    {
        const bool branch_taken_0x200c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c00) {
            ctx->pc = 0x200C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C00u;
            // 0x200c04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C8Cu;
            goto label_200c8c;
        }
    }
    ctx->pc = 0x200C08u;
label_200c08:
    // 0x200c08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200c0c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x200c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x200c10: 0x14e80013  bne         $a3, $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x200C10u;
    {
        const bool branch_taken_0x200c10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x200C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C10u;
        // 0x200c14: 0x823024  and         $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c10) {
            ctx->pc = 0x200C60u;
            goto label_200c60;
        }
    }
    ctx->pc = 0x200C18u;
    // 0x200c18: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x200c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x200c1c: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x200c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x200c20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x200c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x200c24: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x200C24u;
    {
        const bool branch_taken_0x200c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c24) {
            ctx->pc = 0x200C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C24u;
            // 0x200c28: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C94u;
            goto label_200c94;
        }
    }
    ctx->pc = 0x200C2Cu;
    // 0x200c2c: 0x761023  subu        $v0, $v1, $s6
    ctx->pc = 0x200c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x200c30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c34: 0x2b61821  addu        $v1, $s5, $s6
    ctx->pc = 0x200c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x200c38: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x200c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x200c3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x200c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x200c40: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x200c40u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x200c44: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x200c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x200c48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x200c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200c4c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x200c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x200c50: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x200C50u;
    SET_GPR_U32(ctx, 31, 0x200C58u);
    ctx->pc = 0x200C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200C50u;
    // 0x200c54: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x200C50u, 0x200C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200C58u;
label_200c58:
    // 0x200c58: 0x10000107  b           . + 4 + (0x107 << 2)
    ctx->pc = 0x200C58u;
    {
        const bool branch_taken_0x200c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C58u;
        // 0x200c5c: 0x26a20008  addiu       $v0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c58) {
            ctx->pc = 0x201078u;
            goto label_201078;
        }
    }
    ctx->pc = 0x200C60u;
label_200c60:
    // 0x200c60: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x200c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x200c64: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x200c64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200c68: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x200C68u;
    {
        const bool branch_taken_0x200c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200c68) {
            ctx->pc = 0x200C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200C68u;
            // 0x200c6c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200C94u;
            goto label_200c94;
        }
    }
    ctx->pc = 0x200C70u;
    // 0x200c70: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x200c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x200c74: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x200c74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c78: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x200c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x200c7c: 0x26b20008  addiu       $s2, $s5, 0x8
    ctx->pc = 0x200c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x200c80: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200c84: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x200C84u;
    {
        const bool branch_taken_0x200c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C84u;
        // 0x200c88: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c84) {
            ctx->pc = 0x201008u;
            goto label_201008;
        }
    }
    ctx->pc = 0x200C8Cu;
label_200c8c:
    // 0x200c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200c90: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x200c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_200c94:
    // 0x200c94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x200c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200c98: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x200C98u;
    {
        const bool branch_taken_0x200c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200C98u;
        // 0x200c9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c98) {
            ctx->pc = 0x200EF0u;
            goto label_200ef0;
        }
    }
    ctx->pc = 0x200CA0u;
    // 0x200ca0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x200ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x200ca4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x200ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x200ca8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x200ca8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x200cac: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x200cacu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x200cb0: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x200cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x200cb4: 0x10e00054  beqz        $a3, . + 4 + (0x54 << 2)
    ctx->pc = 0x200CB4u;
    {
        const bool branch_taken_0x200cb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x200CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CB4u;
        // 0x200cb8: 0x832024  and         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cb4) {
            ctx->pc = 0x200E08u;
            goto label_200e08;
        }
    }
    ctx->pc = 0x200CBCu;
    // 0x200cbc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x200cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x200cc0: 0x2462d9c8  addiu       $v0, $v1, -0x2638
    ctx->pc = 0x200cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957512));
    // 0x200cc4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x200cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9D0u));
    // 0x200cc8: 0x14e30042  bne         $a3, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x200CC8u;
    {
        const bool branch_taken_0x200cc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x200CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CC8u;
        // 0x200ccc: 0xc41021  addu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200cc8) {
            ctx->pc = 0x200DD4u;
            goto label_200dd4;
        }
    }
    ctx->pc = 0x200CD0u;
    // 0x200cd0: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x200cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x200cd4: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x200cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x200cd8: 0x73b821  addu        $s7, $v1, $s3
    ctx->pc = 0x200cd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x200cdc: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x200cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x200ce0: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x200CE0u;
    {
        const bool branch_taken_0x200ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200CE0u;
        // 0x200ce4: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ce0) {
            ctx->pc = 0x200E08u;
            goto label_200e08;
        }
    }
    ctx->pc = 0x200CE8u;
    // 0x200ce8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x200ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x200cec: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x200cecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x200cf0: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200cf4: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x200cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x200cf8: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x200cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x200cfc: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x200cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x200d00: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x200D00u;
    {
        const bool branch_taken_0x200d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D00u;
        // 0x200d04: 0x26320008  addiu       $s2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d00) {
            ctx->pc = 0x200D94u;
            goto label_200d94;
        }
    }
    ctx->pc = 0x200D08u;
    // 0x200d08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x200d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d0c: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x200d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x200d10: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x200D10u;
    {
        const bool branch_taken_0x200d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D10u;
        // 0x200d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d10) {
            ctx->pc = 0x200D70u;
            goto label_200d70;
        }
    }
    ctx->pc = 0x200D18u;
    // 0x200d18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200d1c: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x200d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x200d20: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x200d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x200d24: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x200d24u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x200d28: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x200d28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x200d2c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200d30: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x200D30u;
    {
        const bool branch_taken_0x200d30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D30u;
        // 0x200d34: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d30) {
            ctx->pc = 0x200D70u;
            goto label_200d70;
        }
    }
    ctx->pc = 0x200D38u;
    // 0x200d38: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x200d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200d3c: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x200d3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x200d40: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x200d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x200d44: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x200d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x200d48: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x200d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x200d4c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x200d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200d50: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200D50u;
    {
        const bool branch_taken_0x200d50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D50u;
        // 0x200d54: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d50) {
            ctx->pc = 0x200D70u;
            goto label_200d70;
        }
    }
    ctx->pc = 0x200D58u;
    // 0x200d58: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x200d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200d5c: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x200d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x200d60: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x200d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x200d64: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x200d64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x200d68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x200d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x200d6c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x200d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_200d70:
    // 0x200d70: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200d74: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x200d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x200d78: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200d78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200d7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x200d80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200d84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200d88: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x200d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x200d8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200D8Cu;
    {
        const bool branch_taken_0x200d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200D8Cu;
        // 0x200d90: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d8c) {
            ctx->pc = 0x200DA0u;
            goto label_200da0;
        }
    }
    ctx->pc = 0x200D94u;
label_200d94:
    // 0x200d94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200d98: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x200D98u;
    SET_GPR_U32(ctx, 31, 0x200DA0u);
    ctx->pc = 0x200D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200D98u;
    // 0x200d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x200D98u, 0x200DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200DA0u;
label_200da0:
    // 0x200da0: 0x2f61023  subu        $v0, $s7, $s6
    ctx->pc = 0x200da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x200da4: 0x2962821  addu        $a1, $s4, $s6
    ctx->pc = 0x200da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x200da8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x200da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x200dac: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x200dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x200db0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x200db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x200db4: 0x2483d9c8  addiu       $v1, $a0, -0x2638
    ctx->pc = 0x200db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957512));
    // 0x200db8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x200db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dbc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x200dbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x21D9D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x21D9D0u, _value); } while (0);
    // 0x200dc0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x200dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x200dc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x200dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x200dc8: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x200dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x200dcc: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x200DCCu;
    {
        const bool branch_taken_0x200dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DCCu;
        // 0x200dd0: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200dcc) {
            ctx->pc = 0x20106Cu;
            goto label_20106c;
        }
    }
    ctx->pc = 0x200DD4u;
label_200dd4:
    // 0x200dd4: 0x532821  addu        $a1, $v0, $s3
    ctx->pc = 0x200dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x200dd8: 0xb6182b  sltu        $v1, $a1, $s6
    ctx->pc = 0x200dd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200ddc: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x200DDCu;
    {
        const bool branch_taken_0x200ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200DDCu;
        // 0x200de0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ddc) {
            ctx->pc = 0x200E08u;
            goto label_200e08;
        }
    }
    ctx->pc = 0x200DE4u;
    // 0x200de4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x200de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x200de8: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x200de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x200dec: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x200decu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200df0: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x200df0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x200df4: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200df4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200df8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x200df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x200dfc: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x200e00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x200E00u;
    {
        const bool branch_taken_0x200e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E00u;
        // 0x200e04: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e00) {
            ctx->pc = 0x200E30u;
            goto label_200e30;
        }
    }
    ctx->pc = 0x200E08u;
label_200e08:
    // 0x200e08: 0x12800038  beqz        $s4, . + 4 + (0x38 << 2)
    ctx->pc = 0x200E08u;
    {
        const bool branch_taken_0x200e08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E08u;
        // 0x200e0c: 0x931821  addu        $v1, $a0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e08) {
            ctx->pc = 0x200EECu;
            goto label_200eec;
        }
    }
    ctx->pc = 0x200E10u;
    // 0x200e10: 0x76102b  sltu        $v0, $v1, $s6
    ctx->pc = 0x200e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x200e14: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x200E14u;
    {
        const bool branch_taken_0x200e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E14u;
        // 0x200e18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e14) {
            ctx->pc = 0x200EF0u;
            goto label_200ef0;
        }
    }
    ctx->pc = 0x200E1Cu;
    // 0x200e1c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x200e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x200e20: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x200e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e24: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x200e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x200e28: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x200e28u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e2c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x200e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_200e30:
    // 0x200e30: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x200e30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x200e34: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x200e34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x200e38: 0x2666fffc  addiu       $a2, $s3, -0x4
    ctx->pc = 0x200e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x200e3c: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x200e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x200e40: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x200E40u;
    {
        const bool branch_taken_0x200e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E40u;
        // 0x200e44: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e40) {
            ctx->pc = 0x200ED8u;
            goto label_200ed8;
        }
    }
    ctx->pc = 0x200E48u;
    // 0x200e48: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x200e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x200e4c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x200E4Cu;
    {
        const bool branch_taken_0x200e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E4Cu;
        // 0x200e50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e4c) {
            ctx->pc = 0x200EB0u;
            goto label_200eb0;
        }
    }
    ctx->pc = 0x200E54u;
    // 0x200e54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200e58: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x200e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x200e5c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x200e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x200e60: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x200e60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x200e64: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x200e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x200e68: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200e6c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x200E6Cu;
    {
        const bool branch_taken_0x200e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E6Cu;
        // 0x200e70: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e6c) {
            ctx->pc = 0x200EB0u;
            goto label_200eb0;
        }
    }
    ctx->pc = 0x200E74u;
    // 0x200e74: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x200e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200e78: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x200e78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x200e7c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x200e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x200e80: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x200e84: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x200e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x200e88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200e8c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x200E8Cu;
    {
        const bool branch_taken_0x200e8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200E8Cu;
        // 0x200e90: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e8c) {
            ctx->pc = 0x200EB0u;
            goto label_200eb0;
        }
    }
    ctx->pc = 0x200E94u;
    // 0x200e94: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x200e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200e98: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x200e9c: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x200e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x200ea0: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x200ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x200ea4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x200ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x200ea8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x200ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x200eac: 0x0  nop
    ctx->pc = 0x200eacu;
    // NOP
label_200eb0:
    // 0x200eb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200eb4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x200eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x200eb8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200ebc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x200ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x200ec0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200ec4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200ec8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x200ecc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x200eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x200ed0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x200ED0u;
    {
        const bool branch_taken_0x200ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED0u;
        // 0x200ed4: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ed0) {
            ctx->pc = 0x201008u;
            goto label_201008;
        }
    }
    ctx->pc = 0x200ED8u;
label_200ed8:
    // 0x200ed8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200edc: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x200EDCu;
    SET_GPR_U32(ctx, 31, 0x200EE4u);
    ctx->pc = 0x200EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EDCu;
    // 0x200ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x200EDCu, 0x200EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EE4u;
label_200ee4:
    // 0x200ee4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x200EE4u;
    {
        const bool branch_taken_0x200ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200EE4u;
        // 0x200ee8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ee4) {
            ctx->pc = 0x201008u;
            goto label_201008;
        }
    }
    ctx->pc = 0x200EECu;
label_200eec:
    // 0x200eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x200eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200ef0:
    // 0x200ef0: 0xc07fbb2  jal         func_1FEEC8
    ctx->pc = 0x200EF0u;
    SET_GPR_U32(ctx, 31, 0x200EF8u);
    ctx->pc = 0x200EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200EF0u;
    // 0x200ef4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEEC8u, 0x200EF0u, 0x200EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200EF8u;
label_200ef8:
    // 0x200ef8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x200ef8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200efc: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x200EFCu;
    {
        const bool branch_taken_0x200efc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x200efc) {
            ctx->pc = 0x200F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200EFCu;
            // 0x200f00: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200F14u;
            goto label_200f14;
        }
    }
    ctx->pc = 0x200F04u;
    // 0x200f04: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x200F04u;
    SET_GPR_U32(ctx, 31, 0x200F0Cu);
    ctx->pc = 0x200F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F04u;
    // 0x200f08: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x200F04u, 0x200F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200F0Cu;
label_200f0c:
    // 0x200f0c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x200F0Cu;
    {
        const bool branch_taken_0x200f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F0Cu;
        // 0x200f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f0c) {
            ctx->pc = 0x201078u;
            goto label_201078;
        }
    }
    ctx->pc = 0x200F14u;
label_200f14:
    // 0x200f14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200f18: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x200f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x200f1c: 0x2651fff8  addiu       $s1, $s2, -0x8
    ctx->pc = 0x200f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x200f20: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x200f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x200f24: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x200f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x200f28: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x200F28u;
    {
        const bool branch_taken_0x200f28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x200F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F28u;
        // 0x200f2c: 0x2666fffc  addiu       $a2, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f28) {
            ctx->pc = 0x200F50u;
            goto label_200f50;
        }
    }
    ctx->pc = 0x200F30u;
    // 0x200f30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x200f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x200f34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x200f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x200f38: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x200f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x200f3c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x200f3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x200f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x200f44: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x200f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x200f48: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x200F48u;
    {
        const bool branch_taken_0x200f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F48u;
        // 0x200f4c: 0x263b821  addu        $s7, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f48) {
            ctx->pc = 0x201008u;
            goto label_201008;
        }
    }
    ctx->pc = 0x200F50u;
label_200f50:
    // 0x200f50: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x200f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x200f54: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x200F54u;
    {
        const bool branch_taken_0x200f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F54u;
        // 0x200f58: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f54) {
            ctx->pc = 0x200FE4u;
            goto label_200fe4;
        }
    }
    ctx->pc = 0x200F5Cu;
    // 0x200f5c: 0x2cc20014  sltiu       $v0, $a2, 0x14
    ctx->pc = 0x200f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x200f60: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x200F60u;
    {
        const bool branch_taken_0x200f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F60u;
        // 0x200f64: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f60) {
            ctx->pc = 0x200FC0u;
            goto label_200fc0;
        }
    }
    ctx->pc = 0x200F68u;
    // 0x200f68: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x200f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x200f6c: 0x26070008  addiu       $a3, $s0, 0x8
    ctx->pc = 0x200f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x200f70: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x200f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x200f74: 0x2cc4001c  sltiu       $a0, $a2, 0x1C
    ctx->pc = 0x200f74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x200f78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x200f78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x200f7c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x200f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200f80: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x200F80u;
    {
        const bool branch_taken_0x200f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F80u;
        // 0x200f84: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f80) {
            ctx->pc = 0x200FC0u;
            goto label_200fc0;
        }
    }
    ctx->pc = 0x200F88u;
    // 0x200f88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x200f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x200f8c: 0x2cc40024  sltiu       $a0, $a2, 0x24
    ctx->pc = 0x200f8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x200f90: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x200f94: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x200f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x200f98: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x200f98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x200f9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x200f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x200fa0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200FA0u;
    {
        const bool branch_taken_0x200fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FA0u;
        // 0x200fa4: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fa0) {
            ctx->pc = 0x200FC0u;
            goto label_200fc0;
        }
    }
    ctx->pc = 0x200FA8u;
    // 0x200fa8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x200fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x200fac: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x200facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x200fb0: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x200fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x200fb4: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x200fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x200fb8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x200fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x200fbc: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x200fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_200fc0:
    // 0x200fc0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200fc4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x200fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x200fc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200fcc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x200fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x200fd0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200fd4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200fd8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x200fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x200fdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x200FDCu;
    {
        const bool branch_taken_0x200fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FDCu;
        // 0x200fe0: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fdc) {
            ctx->pc = 0x200FF0u;
            goto label_200ff0;
        }
    }
    ctx->pc = 0x200FE4u;
label_200fe4:
    // 0x200fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fe8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x200FE8u;
    SET_GPR_U32(ctx, 31, 0x200FF0u);
    ctx->pc = 0x200FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FE8u;
    // 0x200fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x200FE8u, 0x200FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FF0u;
label_200ff0:
    // 0x200ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ff4: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x200FF4u;
    SET_GPR_U32(ctx, 31, 0x200FFCu);
    ctx->pc = 0x200FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FF4u;
    // 0x200ff8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x200FF4u, 0x200FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200FFCu;
label_200ffc:
    // 0x200ffc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x200FFCu;
    {
        const bool branch_taken_0x200ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FFCu;
        // 0x201000: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ffc) {
            ctx->pc = 0x20106Cu;
            goto label_20106c;
        }
    }
    ctx->pc = 0x201004u;
label_201004:
    // 0x201004: 0x26b20008  addiu       $s2, $s5, 0x8
    ctx->pc = 0x201004u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_201008:
    // 0x201008: 0x2f62023  subu        $a0, $s7, $s6
    ctx->pc = 0x201008u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
    // 0x20100c: 0x2c820010  sltiu       $v0, $a0, 0x10
    ctx->pc = 0x20100cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x201010: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x201010u;
    {
        const bool branch_taken_0x201010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201010u;
        // 0x201014: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201010) {
            ctx->pc = 0x201050u;
            goto label_201050;
        }
    }
    ctx->pc = 0x201018u;
    // 0x201018: 0x34830001  ori         $v1, $a0, 0x1
    ctx->pc = 0x201018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x20101c: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x20101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x201020: 0x2362821  addu        $a1, $s1, $s6
    ctx->pc = 0x201020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x201024: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x201024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x201028: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x201028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20102c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x20102cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x201030: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x201030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201034: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x201034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x201038: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x201038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20103c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x20103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x201040: 0xc07f62a  jal         func_1FD8A8
    ctx->pc = 0x201040u;
    SET_GPR_U32(ctx, 31, 0x201048u);
    ctx->pc = 0x201044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201040u;
    // 0x201044: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD8A8u, 0x201040u, 0x201048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201048u;
label_201048:
    // 0x201048: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x201048u;
    {
        const bool branch_taken_0x201048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201048u;
        // 0x20104c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201048) {
            ctx->pc = 0x20106Cu;
            goto label_20106c;
        }
    }
    ctx->pc = 0x201050u;
label_201050:
    // 0x201050: 0x2372021  addu        $a0, $s1, $s7
    ctx->pc = 0x201050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x201054: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x201054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x201058: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x201058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20105c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20105cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201060: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x201060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x201064: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x201064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x201068: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x201068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20106c:
    // 0x20106c: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x20106Cu;
    SET_GPR_U32(ctx, 31, 0x201074u);
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x20106Cu, 0x201074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201074u;
label_201074:
    // 0x201074: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x201074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_201078:
    // 0x201078: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x201078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_20107c:
    // 0x20107c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x20107cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x201080: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x201080u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x201084: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x201084u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x201088: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x201088u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20108c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x20108cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x201090: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x201090u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201094: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x201094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201098: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x201098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20109c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20109cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2010a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2010A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2010A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2010A0u;
        // 0x2010a4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2010A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2010A8u;
}
