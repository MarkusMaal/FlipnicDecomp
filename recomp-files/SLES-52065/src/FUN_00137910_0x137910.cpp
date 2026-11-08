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

// Function: FUN_00137910
// Address: 0x137910 - 0x137a14
void FUN_00137910_0x137910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00137910_0x137910");
#endif

    switch (ctx->pc) {
        case 0x137938u: goto label_137938;
        case 0x137944u: goto label_137944;
        case 0x137954u: goto label_137954;
        case 0x137964u: goto label_137964;
        case 0x137984u: goto label_137984;
        case 0x1379c4u: goto label_1379c4;
        case 0x1379ccu: goto label_1379cc;
        case 0x1379f4u: goto label_1379f4;
        default: break;
    }

    ctx->pc = 0x137910u;

    // 0x137910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x137910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x137914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x137918: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x137918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x13791c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13791cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137920: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x137920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x137924: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x137924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x137928: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x137928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13792c: 0x8f85858c  lw          $a1, -0x7A74($gp)
    ctx->pc = 0x13792cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x137930: 0xc04eb2c  jal         func_13ACB0
    ctx->pc = 0x137930u;
    SET_GPR_U32(ctx, 31, 0x137938u);
    ctx->pc = 0x137934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137930u;
    // 0x137934: 0x27a4004c  addiu       $a0, $sp, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ACB0u, 0x137930u, 0x137938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137938u;
label_137938:
    // 0x137938: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x137938u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x13793c: 0xc04de88  jal         func_137A20
    ctx->pc = 0x13793Cu;
    SET_GPR_U32(ctx, 31, 0x137944u);
    ctx->pc = 0x137940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13793Cu;
    // 0x137940: 0x8f84858c  lw          $a0, -0x7A74($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A20u, 0x13793Cu, 0x137944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137944u;
label_137944:
    // 0x137944: 0x16220023  bne         $s1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x137944u;
    {
        const bool branch_taken_0x137944 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x137948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137944u;
        // 0x137948: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137944) {
            ctx->pc = 0x1379D4u;
            goto label_1379d4;
        }
    }
    ctx->pc = 0x13794Cu;
    // 0x13794c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13794Cu;
    SET_GPR_U32(ctx, 31, 0x137954u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13794Cu, 0x137954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137954u;
label_137954:
    // 0x137954: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x137954u;
    {
        const bool branch_taken_0x137954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137954u;
        // 0x137958: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137954) {
            ctx->pc = 0x137964u;
            goto label_137964;
        }
    }
    ctx->pc = 0x13795Cu;
    // 0x13795c: 0xc04dd14  jal         func_137450
    ctx->pc = 0x13795Cu;
    SET_GPR_U32(ctx, 31, 0x137964u);
    ctx->pc = 0x137450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137450u, 0x13795Cu, 0x137964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137964u;
label_137964:
    // 0x137964: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x137964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x137968: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x137968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13796c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x13796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x137970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x137970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x137974: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x137974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x137978: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x137978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x13797c: 0xc04de8c  jal         func_137A30
    ctx->pc = 0x13797Cu;
    SET_GPR_U32(ctx, 31, 0x137984u);
    ctx->pc = 0x137980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13797Cu;
    // 0x137980: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A30u, 0x13797Cu, 0x137984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137984u;
label_137984:
    // 0x137984: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x137984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x137988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x137988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13798c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x137990: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x137990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x137994: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x137994u;
    {
        const bool branch_taken_0x137994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x137994) {
            ctx->pc = 0x1379C4u;
            goto label_1379c4;
        }
    }
    ctx->pc = 0x13799Cu;
    // 0x13799c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1379a0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1379A0u;
    {
        const bool branch_taken_0x1379a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1379a0) {
            ctx->pc = 0x1379C4u;
            goto label_1379c4;
        }
    }
    ctx->pc = 0x1379A8u;
    // 0x1379a8: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x1379a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1379ac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1379acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1379b0: 0x8f85858c  lw          $a1, -0x7A74($gp)
    ctx->pc = 0x1379b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935948)));
    // 0x1379b4: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x1379b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x1379b8: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x1379b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1379bc: 0xc04ebf0  jal         func_13AFC0
    ctx->pc = 0x1379BCu;
    SET_GPR_U32(ctx, 31, 0x1379C4u);
    ctx->pc = 0x1379C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379BCu;
    // 0x1379c0: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AFC0u, 0x1379BCu, 0x1379C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379C4u;
label_1379c4:
    // 0x1379c4: 0xc04e9f8  jal         func_13A7E0
    ctx->pc = 0x1379C4u;
    SET_GPR_U32(ctx, 31, 0x1379CCu);
    ctx->pc = 0x1379C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379C4u;
    // 0x1379c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7E0u, 0x1379C4u, 0x1379CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379CCu;
label_1379cc:
    // 0x1379cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1379CCu;
    {
        const bool branch_taken_0x1379cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1379D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1379CCu;
        // 0x1379d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1379cc) {
            ctx->pc = 0x137A00u;
            goto label_137a00;
        }
    }
    ctx->pc = 0x1379D4u;
label_1379d4:
    // 0x1379d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1379d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1379d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1379d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1379dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1379dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1379e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1379e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1379e4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1379e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1379e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1379e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1379ec: 0xc04e9f8  jal         func_13A7E0
    ctx->pc = 0x1379ECu;
    SET_GPR_U32(ctx, 31, 0x1379F4u);
    ctx->pc = 0x1379F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1379ECu;
    // 0x1379f0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A7E0u, 0x1379ECu, 0x1379F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1379F4u;
label_1379f4:
    // 0x1379f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1379f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1379f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1379f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1379fc: 0x0  nop
    ctx->pc = 0x1379fcu;
    // NOP
label_137a00:
    // 0x137a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137a04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137a08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x137a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x137A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137A0Cu;
        // 0x137a10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137A14u;
}
