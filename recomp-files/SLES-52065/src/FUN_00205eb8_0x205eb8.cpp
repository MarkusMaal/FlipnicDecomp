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

// Function: FUN_00205eb8
// Address: 0x205eb8 - 0x205fcc
void FUN_00205eb8_0x205eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00205eb8_0x205eb8");
#endif

    switch (ctx->pc) {
        case 0x205efcu: goto label_205efc;
        case 0x205f24u: goto label_205f24;
        case 0x205f50u: goto label_205f50;
        case 0x205fa8u: goto label_205fa8;
        default: break;
    }

    ctx->pc = 0x205eb8u;

    // 0x205eb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x205eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x205ebc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x205ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x205ec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x205ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x205ec8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x205ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ecc: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x205eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x205ed0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x205ED0u;
    {
        const bool branch_taken_0x205ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205ED0u;
        // 0x205ed4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205ed0) {
            ctx->pc = 0x205EE8u;
            goto label_205ee8;
        }
    }
    ctx->pc = 0x205ED8u;
    // 0x205ed8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x205edc: 0x8c43d9ac  lw          $v1, -0x2654($v0)
    ctx->pc = 0x205edcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x205ee0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x205ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x205ee4: 0x0  nop
    ctx->pc = 0x205ee4u;
    // NOP
label_205ee8:
    // 0x205ee8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x205ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x205eec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205EECu;
    {
        const bool branch_taken_0x205eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x205eec) {
            ctx->pc = 0x205EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205EECu;
            // 0x205ef0: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F00u;
            goto label_205f00;
        }
    }
    ctx->pc = 0x205EF4u;
    // 0x205ef4: 0xc07f5b0  jal         func_1FD6C0
    ctx->pc = 0x205EF4u;
    SET_GPR_U32(ctx, 31, 0x205EFCu);
    ctx->pc = 0x205EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205EF4u;
    // 0x205ef8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD6C0u, 0x205EF4u, 0x205EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EFCu;
label_205efc:
    // 0x205efc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x205efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_205f00:
    // 0x205f00: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x205f00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205f04: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x205f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x205f08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x205F08u;
    {
        const bool branch_taken_0x205f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F08u;
        // 0x205f0c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f08) {
            ctx->pc = 0x205F1Cu;
            goto label_205f1c;
        }
    }
    ctx->pc = 0x205F10u;
    // 0x205f10: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x205f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x205f14: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F14u;
    {
        const bool branch_taken_0x205f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x205f14) {
            ctx->pc = 0x205F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F14u;
            // 0x205f18: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205F34u;
            goto label_205f34;
        }
    }
    ctx->pc = 0x205F1Cu;
label_205f1c:
    // 0x205f1c: 0xc08180c  jal         func_206030
    ctx->pc = 0x205F1Cu;
    SET_GPR_U32(ctx, 31, 0x205F24u);
    ctx->pc = 0x205F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F1Cu;
    // 0x205f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206030u, 0x205F1Cu, 0x205F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F24u;
label_205f24:
    // 0x205f24: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x205F24u;
    {
        const bool branch_taken_0x205f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F24u;
        // 0x205f28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f24) {
            ctx->pc = 0x205FB8u;
            goto label_205fb8;
        }
    }
    ctx->pc = 0x205F2Cu;
    // 0x205f2c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x205f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x205f30: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x205f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_205f34:
    // 0x205f34: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x205f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x205f38: 0xa32023  subu        $a0, $a1, $v1
    ctx->pc = 0x205f38u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x205f3c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x205f3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x205f40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F40u;
    {
        const bool branch_taken_0x205f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F40u;
        // 0x205f44: 0x323100ff  andi        $s1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f40) {
            ctx->pc = 0x205F60u;
            goto label_205f60;
        }
    }
    ctx->pc = 0x205F48u;
    // 0x205f48: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x205F48u;
    SET_GPR_U32(ctx, 31, 0x205F50u);
    ctx->pc = 0x205F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F48u;
    // 0x205f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x205F48u, 0x205F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F50u;
label_205f50:
    // 0x205f50: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x205F50u;
    {
        const bool branch_taken_0x205f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x205F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F50u;
        // 0x205f54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f50) {
            ctx->pc = 0x205FB8u;
            goto label_205fb8;
        }
    }
    ctx->pc = 0x205F58u;
    // 0x205f58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x205f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x205f5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x205f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_205f60:
    // 0x205f60: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x205f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x205f64: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x205f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x205f68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x205f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x205f6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x205f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x205f70: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x205f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x205f74: 0xa0b10000  sb          $s1, 0x0($a1)
    ctx->pc = 0x205f74u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x205f78: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x205f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x205f7c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x205f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x205f80: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F80u;
    {
        const bool branch_taken_0x205f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x205f80) {
            ctx->pc = 0x205FA0u;
            goto label_205fa0;
        }
    }
    ctx->pc = 0x205F88u;
    // 0x205f88: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x205f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x205f8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x205f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x205f90: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x205F90u;
    {
        const bool branch_taken_0x205f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205F90u;
        // 0x205f94: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205f90) {
            ctx->pc = 0x205FB4u;
            goto label_205fb4;
        }
    }
    ctx->pc = 0x205F98u;
    // 0x205f98: 0x56220007  bnel        $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x205F98u;
    {
        const bool branch_taken_0x205f98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x205f98) {
            ctx->pc = 0x205F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205F98u;
            // 0x205f9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205FB8u;
            goto label_205fb8;
        }
    }
    ctx->pc = 0x205FA0u;
label_205fa0:
    // 0x205fa0: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x205FA0u;
    SET_GPR_U32(ctx, 31, 0x205FA8u);
    ctx->pc = 0x205FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205FA0u;
    // 0x205fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x205FA0u, 0x205FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FA8u;
label_205fa8:
    // 0x205fa8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x205fa8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205fac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x205FACu;
    {
        const bool branch_taken_0x205fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x205FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FACu;
        // 0x205fb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205fac) {
            ctx->pc = 0x205FB8u;
            goto label_205fb8;
        }
    }
    ctx->pc = 0x205FB4u;
label_205fb4:
    // 0x205fb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x205fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_205fb8:
    // 0x205fb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x205fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x205fbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x205fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x205FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FC4u;
        // 0x205fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205FCCu;
}
