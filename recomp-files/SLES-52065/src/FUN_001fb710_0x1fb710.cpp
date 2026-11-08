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

// Function: FUN_001fb710
// Address: 0x1fb710 - 0x1fb7f8
void FUN_001fb710_0x1fb710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fb710_0x1fb710");
#endif

    switch (ctx->pc) {
        case 0x1fb748u: goto label_1fb748;
        case 0x1fb774u: goto label_1fb774;
        case 0x1fb7b4u: goto label_1fb7b4;
        case 0x1fb7ccu: goto label_1fb7cc;
        case 0x1fb7dcu: goto label_1fb7dc;
        case 0x1fb7ecu: goto label_1fb7ec;
        default: break;
    }

    ctx->pc = 0x1fb710u;

    // 0x1fb710: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fb710u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fb714: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fb714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fb718: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fb718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb71c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fb720: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fb720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fb724: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1fb724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1fb728: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fb728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fb72c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1fb72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1fb730: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fb730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb734: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB734u;
    {
        const bool branch_taken_0x1fb734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB734u;
        // 0x1fb738: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb734) {
            ctx->pc = 0x1FB750u;
            goto label_1fb750;
        }
    }
    ctx->pc = 0x1FB73Cu;
    // 0x1fb73c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fb73cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fb740: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FB740u;
    SET_GPR_U32(ctx, 31, 0x1FB748u);
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FB740u, 0x1FB748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB748u;
label_1fb748:
    // 0x1fb748: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1FB748u;
    {
        const bool branch_taken_0x1fb748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB748u;
        // 0x1fb74c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb748) {
            ctx->pc = 0x1FB7F0u;
            goto label_1fb7f0;
        }
    }
    ctx->pc = 0x1FB750u;
label_1fb750:
    // 0x1fb750: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fb750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1fb754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fb754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fb758: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fb758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fb75c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB75Cu;
    {
        const bool branch_taken_0x1fb75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb75c) {
            ctx->pc = 0x1FB76Cu;
            goto label_1fb76c;
        }
    }
    ctx->pc = 0x1FB764u;
    // 0x1fb764: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FB764u;
    {
        const bool branch_taken_0x1fb764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB764u;
        // 0x1fb768: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb764) {
            ctx->pc = 0x1FB7ECu;
            goto label_1fb7ec;
        }
    }
    ctx->pc = 0x1FB76Cu;
label_1fb76c:
    // 0x1fb76c: 0xc07e80c  jal         func_1FA030
    ctx->pc = 0x1FB76Cu;
    SET_GPR_U32(ctx, 31, 0x1FB774u);
    ctx->pc = 0x1FB770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB76Cu;
    // 0x1fb770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA030u, 0x1FB76Cu, 0x1FB774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB774u;
label_1fb774:
    // 0x1fb774: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1fb774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fb778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fb778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb77c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FB77Cu;
    {
        const bool branch_taken_0x1fb77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB77Cu;
        // 0x1fb780: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb77c) {
            ctx->pc = 0x1FB7BCu;
            goto label_1fb7bc;
        }
    }
    ctx->pc = 0x1FB784u;
    // 0x1fb784: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB784u;
    {
        const bool branch_taken_0x1fb784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB784u;
        // 0x1fb788: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb784) {
            ctx->pc = 0x1FB79Cu;
            goto label_1fb79c;
        }
    }
    ctx->pc = 0x1FB78Cu;
    // 0x1fb78c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB78Cu;
    {
        const bool branch_taken_0x1fb78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB78Cu;
        // 0x1fb790: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb78c) {
            ctx->pc = 0x1FB7ACu;
            goto label_1fb7ac;
        }
    }
    ctx->pc = 0x1FB794u;
    // 0x1fb794: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FB794u;
    {
        const bool branch_taken_0x1fb794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB794u;
        // 0x1fb798: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb794) {
            ctx->pc = 0x1FB7E4u;
            goto label_1fb7e4;
        }
    }
    ctx->pc = 0x1FB79Cu;
label_1fb79c:
    // 0x1fb79c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FB79Cu;
    {
        const bool branch_taken_0x1fb79c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FB7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB79Cu;
        // 0x1fb7a0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb79c) {
            ctx->pc = 0x1FB7D4u;
            goto label_1fb7d4;
        }
    }
    ctx->pc = 0x1FB7A4u;
    // 0x1fb7a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FB7A4u;
    {
        const bool branch_taken_0x1fb7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7A4u;
        // 0x1fb7a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7a4) {
            ctx->pc = 0x1FB7E4u;
            goto label_1fb7e4;
        }
    }
    ctx->pc = 0x1FB7ACu;
label_1fb7ac:
    // 0x1fb7ac: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FB7ACu;
    SET_GPR_U32(ctx, 31, 0x1FB7B4u);
    ctx->pc = 0x1FB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7ACu;
    // 0x1fb7b0: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FB7ACu, 0x1FB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7B4u;
label_1fb7b4:
    // 0x1fb7b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FB7B4u;
    {
        const bool branch_taken_0x1fb7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B4u;
        // 0x1fb7b8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7b4) {
            ctx->pc = 0x1FB7F0u;
            goto label_1fb7f0;
        }
    }
    ctx->pc = 0x1FB7BCu;
label_1fb7bc:
    // 0x1fb7bc: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1fb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fb7c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fb7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb7c4: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FB7C4u;
    SET_GPR_U32(ctx, 31, 0x1FB7CCu);
    ctx->pc = 0x1FB7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7C4u;
    // 0x1fb7c8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FB7C4u, 0x1FB7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7CCu;
label_1fb7cc:
    // 0x1fb7cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB7CCu;
    {
        const bool branch_taken_0x1fb7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7CCu;
        // 0x1fb7d0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7cc) {
            ctx->pc = 0x1FB7ECu;
            goto label_1fb7ec;
        }
    }
    ctx->pc = 0x1FB7D4u;
label_1fb7d4:
    // 0x1fb7d4: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FB7D4u;
    SET_GPR_U32(ctx, 31, 0x1FB7DCu);
    ctx->pc = 0x1FB7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7D4u;
    // 0x1fb7d8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FB7D4u, 0x1FB7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7DCu;
label_1fb7dc:
    // 0x1fb7dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB7DCu;
    {
        const bool branch_taken_0x1fb7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7DCu;
        // 0x1fb7e0: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7dc) {
            ctx->pc = 0x1FB7ECu;
            goto label_1fb7ec;
        }
    }
    ctx->pc = 0x1FB7E4u;
label_1fb7e4:
    // 0x1fb7e4: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FB7E4u;
    SET_GPR_U32(ctx, 31, 0x1FB7ECu);
    ctx->pc = 0x1FB7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7E4u;
    // 0x1fb7e8: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FB7E4u, 0x1FB7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7ECu;
label_1fb7ec:
    // 0x1fb7ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fb7ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb7f0:
    // 0x1fb7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7F0u;
        // 0x1fb7f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB7F8u;
}
