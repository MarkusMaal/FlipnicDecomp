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

// Function: FUN_0017fba0
// Address: 0x17fba0 - 0x17fc74
void FUN_0017fba0_0x17fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fba0_0x17fba0");
#endif

    switch (ctx->pc) {
        case 0x17fbc4u: goto label_17fbc4;
        case 0x17fbe0u: goto label_17fbe0;
        case 0x17fbe8u: goto label_17fbe8;
        case 0x17fbf0u: goto label_17fbf0;
        case 0x17fbfcu: goto label_17fbfc;
        case 0x17fc0cu: goto label_17fc0c;
        case 0x17fc18u: goto label_17fc18;
        case 0x17fc28u: goto label_17fc28;
        case 0x17fc38u: goto label_17fc38;
        case 0x17fc44u: goto label_17fc44;
        default: break;
    }

    ctx->pc = 0x17fba0u;

    // 0x17fba0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17fba4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17fba8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17fba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17fbac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17fbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17fbb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17fbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17fbb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17fbb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17fbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17fbbc: 0xc047a3c  jal         func_11E8F0
    ctx->pc = 0x17FBBCu;
    SET_GPR_U32(ctx, 31, 0x17FBC4u);
    ctx->pc = 0x17FBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBBCu;
    // 0x17fbc0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E8F0u, 0x17FBBCu, 0x17FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBC4u;
label_17fbc4:
    // 0x17fbc4: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x17fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x17fbc8: 0x8e72000c  lw          $s2, 0xC($s3)
    ctx->pc = 0x17fbc8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x17fbcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17fbd0: 0x2438821  addu        $s1, $s2, $v1
    ctx->pc = 0x17fbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x17fbd4: 0x1251001e  beq         $s2, $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x17FBD4u;
    {
        const bool branch_taken_0x17fbd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x17FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FBD4u;
        // 0x17fbd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fbd4) {
            ctx->pc = 0x17FC50u;
            goto label_17fc50;
        }
    }
    ctx->pc = 0x17FBDCu;
    // 0x17fbdc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x17fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_17fbe0:
    // 0x17fbe0: 0xc048920  jal         func_122480
    ctx->pc = 0x17FBE0u;
    SET_GPR_U32(ctx, 31, 0x17FBE8u);
    ctx->pc = 0x17FBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBE0u;
    // 0x17fbe4: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x17FBE0u, 0x17FBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBE8u;
label_17fbe8:
    // 0x17fbe8: 0xc04c268  jal         func_1309A0
    ctx->pc = 0x17FBE8u;
    SET_GPR_U32(ctx, 31, 0x17FBF0u);
    ctx->pc = 0x1309A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1309A0u, 0x17FBE8u, 0x17FBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBF0u;
label_17fbf0:
    // 0x17fbf0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17fbf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fbf4: 0xc080748  jal         func_201D20
    ctx->pc = 0x17FBF4u;
    SET_GPR_U32(ctx, 31, 0x17FBFCu);
    ctx->pc = 0x17FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FBF4u;
    // 0x17fbf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17FBF4u, 0x17FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FBFCu;
label_17fbfc:
    // 0x17fbfc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17fbfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17fc00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc04: 0xc048884  jal         func_122210
    ctx->pc = 0x17FC04u;
    SET_GPR_U32(ctx, 31, 0x17FC0Cu);
    ctx->pc = 0x17FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC04u;
    // 0x17fc08: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122210u, 0x17FC04u, 0x17FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC0Cu;
label_17fc0c:
    // 0x17fc0c: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x17fc0cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17fc10: 0xc080748  jal         func_201D20
    ctx->pc = 0x17FC10u;
    SET_GPR_U32(ctx, 31, 0x17FC18u);
    ctx->pc = 0x17FC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC10u;
    // 0x17fc14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x17FC10u, 0x17FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC18u;
label_17fc18:
    // 0x17fc18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17fc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17fc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc20: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x17FC20u;
    SET_GPR_U32(ctx, 31, 0x17FC28u);
    ctx->pc = 0x17FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC20u;
    // 0x17fc24: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x17FC20u, 0x17FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC28u;
label_17fc28:
    // 0x17fc28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x17fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x17fc2c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x17fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x17fc30: 0xc046c14  jal         func_11B050
    ctx->pc = 0x17FC30u;
    SET_GPR_U32(ctx, 31, 0x17FC38u);
    ctx->pc = 0x17FC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC30u;
    // 0x17fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x17FC30u, 0x17FC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC38u;
label_17fc38:
    // 0x17fc38: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x17fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17fc3c: 0xc04619c  jal         func_118670
    ctx->pc = 0x17FC3Cu;
    SET_GPR_U32(ctx, 31, 0x17FC44u);
    ctx->pc = 0x17FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FC3Cu;
    // 0x17fc40: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x17FC3Cu, 0x17FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FC44u;
label_17fc44:
    // 0x17fc44: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17fc44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x17fc48: 0x1651ffe5  bne         $s2, $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17FC48u;
    {
        const bool branch_taken_0x17fc48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x17FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC48u;
        // 0x17fc4c: 0x27a40068  addiu       $a0, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fc48) {
            ctx->pc = 0x17FBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fbe0;
        }
    }
    ctx->pc = 0x17FC50u;
label_17fc50:
    // 0x17fc50: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x17fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x17fc54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17fc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fc58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17fc58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fc5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17fc5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fc60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17fc60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fc64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17fc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fc68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17fc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FC6Cu;
        // 0x17fc70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FC74u;
}
