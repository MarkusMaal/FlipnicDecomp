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

// Function: FUN_001fba88
// Address: 0x1fba88 - 0x1fbb78
void FUN_001fba88_0x1fba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fba88_0x1fba88");
#endif

    switch (ctx->pc) {
        case 0x1fbac0u: goto label_1fbac0;
        case 0x1fbaecu: goto label_1fbaec;
        case 0x1fbb30u: goto label_1fbb30;
        case 0x1fbb44u: goto label_1fbb44;
        case 0x1fbb58u: goto label_1fbb58;
        case 0x1fbb68u: goto label_1fbb68;
        default: break;
    }

    ctx->pc = 0x1fba88u;

    // 0x1fba88: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x1fba88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1fba8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fba8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fba90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba94: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1fba94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1fba98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1fba98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1fba9c: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x1fba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x1fbaa0: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1fbaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1fbaa4: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x1fbaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x1fbaa8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fbaa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fbaac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBAACu;
    {
        const bool branch_taken_0x1fbaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAACu;
        // 0x1fbab0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbaac) {
            ctx->pc = 0x1FBAC8u;
            goto label_1fbac8;
        }
    }
    ctx->pc = 0x1FBAB4u;
    // 0x1fbab4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1fbab4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1fbab8: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FBAB8u;
    SET_GPR_U32(ctx, 31, 0x1FBAC0u);
    ctx->pc = 0x1FBABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAB8u;
    // 0x1fbabc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FBAB8u, 0x1FBAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAC0u;
label_1fbac0:
    // 0x1fbac0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1FBAC0u;
    {
        const bool branch_taken_0x1fbac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAC0u;
        // 0x1fbac4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbac0) {
            ctx->pc = 0x1FBB70u;
            goto label_1fbb70;
        }
    }
    ctx->pc = 0x1FBAC8u;
label_1fbac8:
    // 0x1fbac8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1fbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x1fbacc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fbaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fbad0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1fbad0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fbad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBAD4u;
    {
        const bool branch_taken_0x1fbad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbad4) {
            ctx->pc = 0x1FBAE4u;
            goto label_1fbae4;
        }
    }
    ctx->pc = 0x1FBADCu;
    // 0x1fbadc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1FBADCu;
    {
        const bool branch_taken_0x1fbadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBADCu;
        // 0x1fbae0: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbadc) {
            ctx->pc = 0x1FBB6Cu;
            goto label_1fbb6c;
        }
    }
    ctx->pc = 0x1FBAE4u;
label_1fbae4:
    // 0x1fbae4: 0xc07e80c  jal         func_1FA030
    ctx->pc = 0x1FBAE4u;
    SET_GPR_U32(ctx, 31, 0x1FBAECu);
    ctx->pc = 0x1FBAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAE4u;
    // 0x1fbae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA030u, 0x1FBAE4u, 0x1FBAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAECu;
label_1fbaec:
    // 0x1fbaec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x1fbaecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1fbaf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbaf4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FBAF4u;
    {
        const bool branch_taken_0x1fbaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAF4u;
        // 0x1fbaf8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbaf4) {
            ctx->pc = 0x1FBB38u;
            goto label_1fbb38;
        }
    }
    ctx->pc = 0x1FBAFCu;
    // 0x1fbafc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBAFCu;
    {
        const bool branch_taken_0x1fbafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAFCu;
        // 0x1fbb00: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbafc) {
            ctx->pc = 0x1FBB14u;
            goto label_1fbb14;
        }
    }
    ctx->pc = 0x1FBB04u;
    // 0x1fbb04: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FBB04u;
    {
        const bool branch_taken_0x1fbb04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB04u;
        // 0x1fbb08: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb04) {
            ctx->pc = 0x1FBB24u;
            goto label_1fbb24;
        }
    }
    ctx->pc = 0x1FBB0Cu;
    // 0x1fbb0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FBB0Cu;
    {
        const bool branch_taken_0x1fbb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb0c) {
            ctx->pc = 0x1FBB60u;
            goto label_1fbb60;
        }
    }
    ctx->pc = 0x1FBB14u;
label_1fbb14:
    // 0x1fbb14: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FBB14u;
    {
        const bool branch_taken_0x1fbb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB14u;
        // 0x1fbb18: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb14) {
            ctx->pc = 0x1FBB4Cu;
            goto label_1fbb4c;
        }
    }
    ctx->pc = 0x1FBB1Cu;
    // 0x1fbb1c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FBB1Cu;
    {
        const bool branch_taken_0x1fbb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbb1c) {
            ctx->pc = 0x1FBB60u;
            goto label_1fbb60;
        }
    }
    ctx->pc = 0x1FBB24u;
label_1fbb24:
    // 0x1fbb24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb28: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FBB28u;
    SET_GPR_U32(ctx, 31, 0x1FBB30u);
    ctx->pc = 0x1FBB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB28u;
    // 0x1fbb2c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FBB28u, 0x1FBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB30u;
label_1fbb30:
    // 0x1fbb30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1FBB30u;
    {
        const bool branch_taken_0x1fbb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB30u;
        // 0x1fbb34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb30) {
            ctx->pc = 0x1FBB70u;
            goto label_1fbb70;
        }
    }
    ctx->pc = 0x1FBB38u;
label_1fbb38:
    // 0x1fbb38: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1fbb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fbb3c: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FBB3Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB44u);
    ctx->pc = 0x1FBB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB3Cu;
    // 0x1fbb40: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FBB3Cu, 0x1FBB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB44u;
label_1fbb44:
    // 0x1fbb44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FBB44u;
    {
        const bool branch_taken_0x1fbb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB44u;
        // 0x1fbb48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb44) {
            ctx->pc = 0x1FBB70u;
            goto label_1fbb70;
        }
    }
    ctx->pc = 0x1FBB4Cu;
label_1fbb4c:
    // 0x1fbb4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb50: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FBB50u;
    SET_GPR_U32(ctx, 31, 0x1FBB58u);
    ctx->pc = 0x1FBB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB50u;
    // 0x1fbb54: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFF0u, 0x1FBB50u, 0x1FBB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB58u;
label_1fbb58:
    // 0x1fbb58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FBB58u;
    {
        const bool branch_taken_0x1fbb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB58u;
        // 0x1fbb5c: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb58) {
            ctx->pc = 0x1FBB6Cu;
            goto label_1fbb6c;
        }
    }
    ctx->pc = 0x1FBB60u;
label_1fbb60:
    // 0x1fbb60: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FBB60u;
    SET_GPR_U32(ctx, 31, 0x1FBB68u);
    ctx->pc = 0x1FBB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB60u;
    // 0x1fbb64: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FBB60u, 0x1FBB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB68u;
label_1fbb68:
    // 0x1fbb68: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1fbb68u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1fbb6c:
    // 0x1fbb6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fbb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbb70:
    // 0x1fbb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB70u;
        // 0x1fbb74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBB78u;
}
