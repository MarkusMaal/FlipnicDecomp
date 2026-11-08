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

// Function: FUN_001ccc50
// Address: 0x1ccc50 - 0x1ccd24
void FUN_001ccc50_0x1ccc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ccc50_0x1ccc50");
#endif

    switch (ctx->pc) {
        case 0x1cccecu: goto label_1cccec;
        case 0x1ccd00u: goto label_1ccd00;
        case 0x1ccd14u: goto label_1ccd14;
        default: break;
    }

    ctx->pc = 0x1ccc50u;

    // 0x1ccc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccc54: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ccc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ccc58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccc5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1ccc5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ccc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ccc64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccc68: 0x8c880060  lw          $t0, 0x60($a0)
    ctx->pc = 0x1ccc68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1ccc6c: 0x11030016  beq         $t0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CCC6Cu;
    {
        const bool branch_taken_0x1ccc6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CCC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC6Cu;
        // 0x1ccc70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc6c) {
            ctx->pc = 0x1CCCC8u;
            goto label_1cccc8;
        }
    }
    ctx->pc = 0x1CCC74u;
    // 0x1ccc74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ccc74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccc78: 0x11070010  beq         $t0, $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CCC78u;
    {
        const bool branch_taken_0x1ccc78 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x1CCC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCC78u;
        // 0x1ccc7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc78) {
            ctx->pc = 0x1CCCBCu;
            goto label_1cccbc;
        }
    }
    ctx->pc = 0x1CCC80u;
    // 0x1ccc80: 0x1104000b  beq         $t0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CCC80u;
    {
        const bool branch_taken_0x1ccc80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ccc80) {
            ctx->pc = 0x1CCCB0u;
            goto label_1cccb0;
        }
    }
    ctx->pc = 0x1CCC88u;
    // 0x1ccc88: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCC88u;
    {
        const bool branch_taken_0x1ccc88 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc88) {
            ctx->pc = 0x1CCC98u;
            goto label_1ccc98;
        }
    }
    ctx->pc = 0x1CCC90u;
    // 0x1ccc90: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1CCC90u;
    {
        const bool branch_taken_0x1ccc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccc90) {
            ctx->pc = 0x1CCCCCu;
            goto label_1ccccc;
        }
    }
    ctx->pc = 0x1CCC98u;
label_1ccc98:
    // 0x1ccc98: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ccc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ccc9c: 0x9063006b  lbu         $v1, 0x6B($v1)
    ctx->pc = 0x1ccc9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 107)));
    // 0x1ccca0: 0x1064001c  beq         $v1, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CCCA0u;
    {
        const bool branch_taken_0x1ccca0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1CCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA0u;
        // 0x1ccca4: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccca0) {
            ctx->pc = 0x1CCD14u;
            goto label_1ccd14;
        }
    }
    ctx->pc = 0x1CCCA8u;
    // 0x1ccca8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCCA8u;
    {
        const bool branch_taken_0x1ccca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCA8u;
        // 0x1cccac: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccca8) {
            ctx->pc = 0x1CCCCCu;
            goto label_1ccccc;
        }
    }
    ctx->pc = 0x1CCCB0u;
label_1cccb0:
    // 0x1cccb0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1cccb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CCCB4u;
    {
        const bool branch_taken_0x1cccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCB4u;
        // 0x1cccb8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccb4) {
            ctx->pc = 0x1CCCCCu;
            goto label_1ccccc;
        }
    }
    ctx->pc = 0x1CCCBCu;
label_1cccbc:
    // 0x1cccbc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1cccbcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCCC0u;
    {
        const bool branch_taken_0x1cccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCC0u;
        // 0x1cccc4: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccc0) {
            ctx->pc = 0x1CCCCCu;
            goto label_1ccccc;
        }
    }
    ctx->pc = 0x1CCCC8u;
label_1cccc8:
    // 0x1cccc8: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x1cccc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ccccc:
    // 0x1ccccc: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CCCCCu;
    {
        const bool branch_taken_0x1ccccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccccc) {
            ctx->pc = 0x1CCCD8u;
            goto label_1cccd8;
        }
    }
    ctx->pc = 0x1CCCD4u;
    // 0x1cccd4: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x1cccd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cccd8:
    // 0x1cccd8: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CCCD8u;
    {
        const bool branch_taken_0x1cccd8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCCD8u;
        // 0x1cccdc: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccd8) {
            ctx->pc = 0x1CCD14u;
            goto label_1ccd14;
        }
    }
    ctx->pc = 0x1CCCE0u;
    // 0x1ccce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccce4: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CCCE4u;
    SET_GPR_U32(ctx, 31, 0x1CCCECu);
    ctx->pc = 0x1CCCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCE4u;
    // 0x1ccce8: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CCCE4u, 0x1CCCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCCECu;
label_1cccec:
    // 0x1cccec: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cccecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cccf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cccf4: 0x24a58340  addiu       $a1, $a1, -0x7CC0
    ctx->pc = 0x1cccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935360));
    // 0x1cccf8: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CCCF8u;
    SET_GPR_U32(ctx, 31, 0x1CCD00u);
    ctx->pc = 0x1CCCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCCF8u;
    // 0x1cccfc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CCCF8u, 0x1CCD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD00u;
label_1ccd00:
    // 0x1ccd00: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ccd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ccd04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd08: 0x24a58400  addiu       $a1, $a1, -0x7C00
    ctx->pc = 0x1ccd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935552));
    // 0x1ccd0c: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CCD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD14u);
    ctx->pc = 0x1CCD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD0Cu;
    // 0x1ccd10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CCD0Cu, 0x1CCD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD14u;
label_1ccd14:
    // 0x1ccd14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccd18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ccd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccd1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCD1Cu;
        // 0x1ccd20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCD24u;
}
