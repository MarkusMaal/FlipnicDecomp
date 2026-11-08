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

// Function: FUN_00122ef0
// Address: 0x122ef0 - 0x122ff0
void FUN_00122ef0_0x122ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00122ef0_0x122ef0");
#endif

    switch (ctx->pc) {
        case 0x122f40u: goto label_122f40;
        case 0x122f48u: goto label_122f48;
        case 0x122fa8u: goto label_122fa8;
        default: break;
    }

    ctx->pc = 0x122ef0u;

    // 0x122ef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122ef4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122ef8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x122ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x122efc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x122efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x122f00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x122f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x122f08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x122f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f0c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x122f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x122f10: 0xafa80044  sw          $t0, 0x44($sp)
    ctx->pc = 0x122f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    // 0x122f14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x122f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x122f18: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122f1c: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x122f1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x122f20: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x122F20u;
    {
        const bool branch_taken_0x122f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F20u;
        // 0x122f24: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f20) {
            ctx->pc = 0x122F48u;
            goto label_122f48;
        }
    }
    ctx->pc = 0x122F28u;
    // 0x122f28: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x122f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x122f2c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x122f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x122f30: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x122f30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x122f34: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x122f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122f38: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x122F38u;
    SET_GPR_U32(ctx, 31, 0x122F40u);
    ctx->pc = 0x122F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122F38u;
    // 0x122f3c: 0x24a5ea30  addiu       $a1, $a1, -0x15D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x122F38u, 0x122F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F40u;
label_122f40:
    // 0x122f40: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x122F40u;
    SET_GPR_U32(ctx, 31, 0x122F48u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x122F40u, 0x122F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122F48u;
label_122f48:
    // 0x122f48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x122f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x122f4c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122f50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122f54: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x122f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x122f58: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x122f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x122f5c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x122f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x122f60: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122f60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122f64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x122F64u;
    {
        const bool branch_taken_0x122f64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F64u;
        // 0x122f68: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f64) {
            ctx->pc = 0x122F70u;
            goto label_122f70;
        }
    }
    ctx->pc = 0x122F6Cu;
    // 0x122f6c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x122f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_122f70:
    // 0x122f70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x122f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x122f74: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x122f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x122f78: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x122f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x122f7c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x122f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122f80: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122f80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122f84: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x122F84u;
    {
        const bool branch_taken_0x122f84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F84u;
        // 0x122f88: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f84) {
            ctx->pc = 0x122F90u;
            goto label_122f90;
        }
    }
    ctx->pc = 0x122F8Cu;
    // 0x122f8c: 0x27a30044  addiu       $v1, $sp, 0x44
    ctx->pc = 0x122f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_122f90:
    // 0x122f90: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x122f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x122f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122f98: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x122f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x122f9c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x122f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x122fa0: 0xc07fdd8  jal         func_1FF760
    ctx->pc = 0x122FA0u;
    SET_GPR_U32(ctx, 31, 0x122FA8u);
    ctx->pc = 0x122FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FA0u;
    // 0x122fa4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF760u, 0x122FA0u, 0x122FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122FA8u;
label_122fa8:
    // 0x122fa8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x122FA8u;
    {
        const bool branch_taken_0x122fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x122fa8) {
            ctx->pc = 0x122FD8u;
            goto label_122fd8;
        }
    }
    ctx->pc = 0x122FB0u;
    // 0x122fb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x122fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122fb4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x122fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x122fb8: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x122fb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x122fbc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x122FBCu;
    {
        const bool branch_taken_0x122fbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x122fbc) {
            ctx->pc = 0x122FCCu;
            goto label_122fcc;
        }
    }
    ctx->pc = 0x122FC4u;
    // 0x122fc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x122FC4u;
    {
        const bool branch_taken_0x122fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FC4u;
        // 0x122fc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fc4) {
            ctx->pc = 0x122FD8u;
            goto label_122fd8;
        }
    }
    ctx->pc = 0x122FCCu;
label_122fcc:
    // 0x122fcc: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x122fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x122fd0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x122fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x122fd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x122fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_122fd8:
    // 0x122fd8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x122fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122fdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122fdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122fe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x122FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FE8u;
        // 0x122fec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122FF0u;
}
