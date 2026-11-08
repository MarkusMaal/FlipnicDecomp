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

// Function: FUN_001f8b48
// Address: 0x1f8b48 - 0x1f8c28
void FUN_001f8b48_0x1f8b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8b48_0x1f8b48");
#endif

    switch (ctx->pc) {
        case 0x1f8b94u: goto label_1f8b94;
        case 0x1f8bb0u: goto label_1f8bb0;
        case 0x1f8bb8u: goto label_1f8bb8;
        case 0x1f8bc0u: goto label_1f8bc0;
        case 0x1f8c00u: goto label_1f8c00;
        default: break;
    }

    ctx->pc = 0x1f8b48u;

    // 0x1f8b48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f8b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f8b4c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1f8b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1f8b50: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x1f8b50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x1f8b54: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1f8b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1f8b58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1f8b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1f8b5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f8b5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b60: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f8b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f8b64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f8b64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b68: 0x8e62d6b8  lw          $v0, -0x2948($s3)
    ctx->pc = 0x1f8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6B8u));
    // 0x1f8b6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f8b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8b70: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f8b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f8b74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1f8b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1f8b78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8B78u;
    {
        const bool branch_taken_0x1f8b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B78u;
        // 0x1f8b7c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b78) {
            ctx->pc = 0x1F8B88u;
            goto label_1f8b88;
        }
    }
    ctx->pc = 0x1F8B80u;
    // 0x1f8b80: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F8B80u;
    {
        const bool branch_taken_0x1f8b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B80u;
        // 0x1f8b84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b80) {
            ctx->pc = 0x1F8C04u;
            goto label_1f8c04;
        }
    }
    ctx->pc = 0x1F8B88u;
label_1f8b88:
    // 0x1f8b88: 0x3c110039  lui         $s1, 0x39
    ctx->pc = 0x1f8b88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
    // 0x1f8b8c: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F8B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F8B94u);
    ctx->pc = 0x1F8B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8B8Cu;
    // 0x1f8b90: 0x26241600  addiu       $a0, $s1, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F8B8Cu, 0x1F8B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8B94u;
label_1f8b94:
    // 0x1f8b94: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8B94u;
    {
        const bool branch_taken_0x1f8b94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8B94u;
        // 0x1f8b98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8b94) {
            ctx->pc = 0x1F8BC8u;
            goto label_1f8bc8;
        }
    }
    ctx->pc = 0x1F8B9Cu;
    // 0x1f8b9c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8B9Cu;
    {
        const bool branch_taken_0x1f8b9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8b9c) {
            ctx->pc = 0x1F8BC8u;
            goto label_1f8bc8;
        }
    }
    ctx->pc = 0x1F8BA4u;
    // 0x1f8ba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8BA4u;
    {
        const bool branch_taken_0x1f8ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8ba4) {
            ctx->pc = 0x1F8BB8u;
            goto label_1f8bb8;
        }
    }
    ctx->pc = 0x1F8BACu;
    // 0x1f8bac: 0x0  nop
    ctx->pc = 0x1f8bacu;
    // NOP
label_1f8bb0:
    // 0x1f8bb0: 0xc07e2c0  jal         func_1F8B00
    ctx->pc = 0x1F8BB0u;
    SET_GPR_U32(ctx, 31, 0x1F8BB8u);
    ctx->pc = 0x1F8BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BB0u;
    // 0x1f8bb4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8B00u, 0x1F8BB0u, 0x1F8BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BB8u;
label_1f8bb8:
    // 0x1f8bb8: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F8BB8u;
    SET_GPR_U32(ctx, 31, 0x1F8BC0u);
    ctx->pc = 0x1F8BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BB8u;
    // 0x1f8bbc: 0x26241600  addiu       $a0, $s1, 0x1600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 5632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F8BB8u, 0x1F8BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8BC0u;
label_1f8bc0:
    // 0x1f8bc0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F8BC0u;
    {
        const bool branch_taken_0x1f8bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BC0u;
        // 0x1f8bc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bc0) {
            ctx->pc = 0x1F8BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8bb0;
        }
    }
    ctx->pc = 0x1F8BC8u;
label_1f8bc8:
    // 0x1f8bc8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8BC8u;
    {
        const bool branch_taken_0x1f8bc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BC8u;
        // 0x1f8bcc: 0x2e100001  sltiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bc8) {
            ctx->pc = 0x1F8BD8u;
            goto label_1f8bd8;
        }
    }
    ctx->pc = 0x1F8BD0u;
    // 0x1f8bd0: 0x8e62d6b8  lw          $v0, -0x2948($s3)
    ctx->pc = 0x1f8bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956728)));
    // 0x1f8bd4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1f8bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_1f8bd8:
    // 0x1f8bd8: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8BD8u;
    {
        const bool branch_taken_0x1f8bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BD8u;
        // 0x1f8bdc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8bd8) {
            ctx->pc = 0x1F8C04u;
            goto label_1f8c04;
        }
    }
    ctx->pc = 0x1F8BE0u;
    // 0x1f8be0: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8BE0u;
    {
        const bool branch_taken_0x1f8be0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8BE0u;
        // 0x1f8be4: 0xae60d6b8  sw          $zero, -0x2948($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294956728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8be0) {
            ctx->pc = 0x1F8BF4u;
            goto label_1f8bf4;
        }
    }
    ctx->pc = 0x1F8BE8u;
    // 0x1f8be8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8bec: 0x8c432bc0  lw          $v1, 0x2BC0($v0)
    ctx->pc = 0x1f8becu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x392BC0u));
    // 0x1f8bf0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1f8bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_1f8bf4:
    // 0x1f8bf4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f8bf8: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8BF8u;
    SET_GPR_U32(ctx, 31, 0x1F8C00u);
    ctx->pc = 0x1F8BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8BF8u;
    // 0x1f8bfc: 0x8c44d6bc  lw          $a0, -0x2944($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8BF8u, 0x1F8C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8C00u;
label_1f8c00:
    // 0x1f8c00: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8c04:
    // 0x1f8c04: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f8c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8c08: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1f8c08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8c0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1f8c0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8c10: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1f8c10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8c14: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f8c14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8c18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1f8c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8c1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8c1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8C20u;
        // 0x1f8c24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8C28u;
}
