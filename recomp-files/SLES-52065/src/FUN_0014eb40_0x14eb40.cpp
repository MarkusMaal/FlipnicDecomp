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

// Function: FUN_0014eb40
// Address: 0x14eb40 - 0x14ec44
void FUN_0014eb40_0x14eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014eb40_0x14eb40");
#endif

    switch (ctx->pc) {
        case 0x14eba8u: goto label_14eba8;
        case 0x14ebb0u: goto label_14ebb0;
        case 0x14ebc0u: goto label_14ebc0;
        case 0x14ebe0u: goto label_14ebe0;
        case 0x14ebe8u: goto label_14ebe8;
        case 0x14ebf8u: goto label_14ebf8;
        default: break;
    }

    ctx->pc = 0x14eb40u;

    // 0x14eb40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14eb44: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x14eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x14eb48: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14eb4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14eb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14eb50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14eb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14eb54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14eb58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14eb58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14eb60: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14eb60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14eb64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14eb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14eb6c: 0x2321823  subu        $v1, $s1, $s2
    ctx->pc = 0x14eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x14eb70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EB70u;
    {
        const bool branch_taken_0x14eb70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB70u;
        // 0x14eb74: 0x38103  sra         $s0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb70) {
            ctx->pc = 0x14EB80u;
            goto label_14eb80;
        }
    }
    ctx->pc = 0x14EB78u;
    // 0x14eb78: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x14eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x14eb7c: 0x38103  sra         $s0, $v1, 4
    ctx->pc = 0x14eb7cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 4));
label_14eb80:
    // 0x14eb80: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14eb84: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x14eb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x14eb88: 0x61082b  sltu        $at, $v1, $at
    ctx->pc = 0x14eb88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x14eb8c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EB8Cu;
    {
        const bool branch_taken_0x14eb8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB8Cu;
        // 0x14eb90: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb8c) {
            ctx->pc = 0x14EBB0u;
            goto label_14ebb0;
        }
    }
    ctx->pc = 0x14EB94u;
    // 0x14eb94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14eb98: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14eb9c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14eba0: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EBA0u;
    SET_GPR_U32(ctx, 31, 0x14EBA8u);
    ctx->pc = 0x14EBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBA0u;
    // 0x14eba4: 0x24a5f2e0  addiu       $a1, $a1, -0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EBA0u, 0x14EBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBA8u;
label_14eba8:
    // 0x14eba8: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EBA8u;
    SET_GPR_U32(ctx, 31, 0x14EBB0u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EBA8u, 0x14EBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBB0u;
label_14ebb0:
    // 0x14ebb0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14EBB0u;
    {
        const bool branch_taken_0x14ebb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB0u;
        // 0x14ebb4: 0x102100  sll         $a0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebb0) {
            ctx->pc = 0x14EC20u;
            goto label_14ec20;
        }
    }
    ctx->pc = 0x14EBB8u;
    // 0x14ebb8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x14EBB8u;
    SET_GPR_U32(ctx, 31, 0x14EBC0u);
    ctx->pc = 0x14EBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBB8u;
    // 0x14ebbc: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x14EBB8u, 0x14EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBC0u;
label_14ebc0:
    // 0x14ebc0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14ebc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ebc4: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x14EBC4u;
    {
        const bool branch_taken_0x14ebc4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBC4u;
        // 0x14ebc8: 0x3c010022  lui         $at, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebc4) {
            ctx->pc = 0x14EBE8u;
            goto label_14ebe8;
        }
    }
    ctx->pc = 0x14EBCCu;
    // 0x14ebcc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14ebd0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957484)));
    // 0x14ebd4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ebd8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14EBD8u;
    SET_GPR_U32(ctx, 31, 0x14EBE0u);
    ctx->pc = 0x14EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBD8u;
    // 0x14ebdc: 0x24a5f2c0  addiu       $a1, $a1, -0xD40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14EBD8u, 0x14EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBE0u;
label_14ebe0:
    // 0x14ebe0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14EBE0u;
    SET_GPR_U32(ctx, 31, 0x14EBE8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14EBE0u, 0x14EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBE8u;
label_14ebe8:
    // 0x14ebe8: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x14ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x14ebec: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x14ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x14ebf0: 0x1251000b  beq         $s2, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x14EBF0u;
    {
        const bool branch_taken_0x14ebf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x14EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBF0u;
        // 0x14ebf4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebf0) {
            ctx->pc = 0x14EC20u;
            goto label_14ec20;
        }
    }
    ctx->pc = 0x14EBF8u;
label_14ebf8:
    // 0x14ebf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14EBF8u;
    {
        const bool branch_taken_0x14ebf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ebf8) {
            ctx->pc = 0x14EC08u;
            goto label_14ec08;
        }
    }
    ctx->pc = 0x14EC00u;
    // 0x14ec00: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x14ec00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ec04: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x14ec04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_14ec08:
    // 0x14ec08: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x14ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x14ec0c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x14ec0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x14ec10: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x14ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x14ec14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14ec18: 0x1651fff7  bne         $s2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14EC18u;
    {
        const bool branch_taken_0x14ec18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x14EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC18u;
        // 0x14ec1c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec18) {
            ctx->pc = 0x14EBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14ebf8;
        }
    }
    ctx->pc = 0x14EC20u;
label_14ec20:
    // 0x14ec20: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x14ec20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ec24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14ec24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ec28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14ec28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ec2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ec2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ec30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ec30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ec34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14ec34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ec38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14ec38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ec3c: 0x3e00008  jr          $ra
    ctx->pc = 0x14EC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC3Cu;
        // 0x14ec40: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EC44u;
}
