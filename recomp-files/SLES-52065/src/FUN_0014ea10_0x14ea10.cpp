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

// Function: FUN_0014ea10
// Address: 0x14ea10 - 0x14eb38
void FUN_0014ea10_0x14ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ea10_0x14ea10");
#endif

    switch (ctx->pc) {
        case 0x14ea84u: goto label_14ea84;
        case 0x14ea8cu: goto label_14ea8c;
        case 0x14eaa4u: goto label_14eaa4;
        case 0x14eab8u: goto label_14eab8;
        case 0x14ead8u: goto label_14ead8;
        case 0x14eae0u: goto label_14eae0;
        case 0x14eaf4u: goto label_14eaf4;
        default: break;
    }

    ctx->pc = 0x14ea10u;

    // 0x14ea10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14ea14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14ea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14ea18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14ea1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14ea20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14ea24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14ea24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14ea28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14ea28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ea30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14ea30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14ea34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ea3c: 0x2321823  subu        $v1, $s1, $s2
    ctx->pc = 0x14ea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x14ea40: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EA40u;
    {
        const bool branch_taken_0x14ea40 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA40u;
        // 0x14ea44: 0x38083  sra         $s0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea40) {
            ctx->pc = 0x14EA50u;
            goto label_14ea50;
        }
    }
    ctx->pc = 0x14EA48u;
    // 0x14ea48: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x14ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x14ea4c: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x14ea4cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
label_14ea50:
    // 0x14ea50: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14ea54: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x14ea54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x14ea58: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x14EA58u;
    {
        const bool branch_taken_0x14ea58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA58u;
        // 0x14ea5c: 0x3c014000  lui         $at, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea58) {
            ctx->pc = 0x14EAE8u;
            goto label_14eae8;
        }
    }
    ctx->pc = 0x14EA60u;
    // 0x14ea60: 0x201082b  sltu        $at, $s0, $at
    ctx->pc = 0x14ea60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14ea64: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14EA64u;
    {
        const bool branch_taken_0x14ea64 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14ea64) {
            ctx->pc = 0x14EA8Cu;
            goto label_14ea8c;
        }
    }
    ctx->pc = 0x14EA6Cu;
    // 0x14ea6c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14ea6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14ea70: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14ea70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14ea74: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14ea78: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14ea78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ea7c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EA7Cu;
    SET_GPR_U32(ctx, 31, 0x14EA84u);
    ctx->pc = 0x14EA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA7Cu;
    // 0x14ea80: 0x24a5f300  addiu       $a1, $a1, -0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EA7Cu, 0x14EA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA84u;
label_14ea84:
    // 0x14ea84: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EA84u;
    SET_GPR_U32(ctx, 31, 0x14EA8Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EA84u, 0x14EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA8Cu;
label_14ea8c:
    // 0x14ea8c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x14ea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x14ea90: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x14ea94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14EA94u;
    {
        const bool branch_taken_0x14ea94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ea94) {
            ctx->pc = 0x14EAACu;
            goto label_14eaac;
        }
    }
    ctx->pc = 0x14EA9Cu;
    // 0x14ea9c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x14EA9Cu;
    SET_GPR_U32(ctx, 31, 0x14EAA4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x14EA9Cu, 0x14EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAA4u;
label_14eaa4:
    // 0x14eaa4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x14eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x14eaa8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x14eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_14eaac:
    // 0x14eaac: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x14eaacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14eab0: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14EAB0u;
    SET_GPR_U32(ctx, 31, 0x14EAB8u);
    ctx->pc = 0x14EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAB0u;
    // 0x14eab4: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14EAB0u, 0x14EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAB8u;
label_14eab8:
    // 0x14eab8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14eab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eabc: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EABCu;
    {
        const bool branch_taken_0x14eabc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EABCu;
        // 0x14eac0: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eabc) {
            ctx->pc = 0x14EAE0u;
            goto label_14eae0;
        }
    }
    ctx->pc = 0x14EAC4u;
    // 0x14eac4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14eac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14eac8: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14eac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14eacc: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ead0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EAD0u;
    SET_GPR_U32(ctx, 31, 0x14EAD8u);
    ctx->pc = 0x14EAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAD0u;
    // 0x14ead4: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EAD0u, 0x14EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAD8u;
label_14ead8:
    // 0x14ead8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EAD8u;
    SET_GPR_U32(ctx, 31, 0x14EAE0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EAD8u, 0x14EAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAE0u;
label_14eae0:
    // 0x14eae0: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x14eae0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x14eae4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x14eae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_14eae8:
    // 0x14eae8: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x14eae8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14eaec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EAECu;
    {
        const bool branch_taken_0x14eaec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAECu;
        // 0x14eaf0: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eaec) {
            ctx->pc = 0x14EB10u;
            goto label_14eb10;
        }
    }
    ctx->pc = 0x14EAF4u;
label_14eaf4:
    // 0x14eaf4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14eaf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x14eaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x14eafc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x14eafcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x14eb00: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x14eb00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14eb04: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x14eb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14eb08: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14EB08u;
    {
        const bool branch_taken_0x14eb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14eb08) {
            ctx->pc = 0x14EAF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14eaf4;
        }
    }
    ctx->pc = 0x14EB10u;
label_14eb10:
    // 0x14eb10: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x14eb10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
    // 0x14eb14: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14eb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14eb18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14eb18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14eb1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14eb1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14eb20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14eb20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eb24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14eb24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eb28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14eb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eb2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14eb2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x14EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB30u;
        // 0x14eb34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EB38u;
}
