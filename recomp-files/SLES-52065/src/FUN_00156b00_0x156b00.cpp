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

// Function: FUN_00156b00
// Address: 0x156b00 - 0x156c04
void FUN_00156b00_0x156b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00156b00_0x156b00");
#endif

    switch (ctx->pc) {
        case 0x156b24u: goto label_156b24;
        case 0x156b2cu: goto label_156b2c;
        case 0x156b38u: goto label_156b38;
        case 0x156b4cu: goto label_156b4c;
        case 0x156bf0u: goto label_156bf0;
        default: break;
    }

    ctx->pc = 0x156b00u;

    // 0x156b00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156b04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x156b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x156b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x156b0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x156b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x156b10: 0x848501e8  lh          $a1, 0x1E8($a0)
    ctx->pc = 0x156b10u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x156b14: 0x10a30037  beq         $a1, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x156B14u;
    {
        const bool branch_taken_0x156b14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x156B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B14u;
        // 0x156b18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b14) {
            ctx->pc = 0x156BF4u;
            goto label_156bf4;
        }
    }
    ctx->pc = 0x156B1Cu;
    // 0x156b1c: 0xc055e00  jal         func_157800
    ctx->pc = 0x156B1Cu;
    SET_GPR_U32(ctx, 31, 0x156B24u);
    ctx->pc = 0x157800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157800u, 0x156B1Cu, 0x156B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B24u;
label_156b24:
    // 0x156b24: 0xc056258  jal         func_158960
    ctx->pc = 0x156B24u;
    SET_GPR_U32(ctx, 31, 0x156B2Cu);
    ctx->pc = 0x156B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B24u;
    // 0x156b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158960u, 0x156B24u, 0x156B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B2Cu;
label_156b2c:
    // 0x156b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b30: 0xc055d10  jal         func_157440
    ctx->pc = 0x156B30u;
    SET_GPR_U32(ctx, 31, 0x156B38u);
    ctx->pc = 0x156B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B30u;
    // 0x156b34: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157440u, 0x156B30u, 0x156B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B38u;
label_156b38:
    // 0x156b38: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x156b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x156b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b40: 0xc60c02ec  lwc1        $f12, 0x2EC($s0)
    ctx->pc = 0x156b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x156b44: 0xc055cf4  jal         func_1573D0
    ctx->pc = 0x156B44u;
    SET_GPR_U32(ctx, 31, 0x156B4Cu);
    ctx->pc = 0x156B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B44u;
    // 0x156b48: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1573D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1573D0u, 0x156B44u, 0x156B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B4Cu;
label_156b4c:
    // 0x156b4c: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x156b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x156b50: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x156b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x156b54: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x156b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x156b58: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x156b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x156b5c: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x156b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
    // 0x156b60: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x156b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x156b64: 0xae000330  sw          $zero, 0x330($s0)
    ctx->pc = 0x156b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    // 0x156b68: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x156b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x156b6c: 0x860201e8  lh          $v0, 0x1E8($s0)
    ctx->pc = 0x156b6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 488)));
    // 0x156b70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x156B70u;
    {
        const bool branch_taken_0x156b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x156B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B70u;
        // 0x156b74: 0x3c06c47a  lui         $a2, 0xC47A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50298 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156b70) {
            ctx->pc = 0x156B94u;
            goto label_156b94;
        }
    }
    ctx->pc = 0x156B78u;
    // 0x156b78: 0x860201ec  lh          $v0, 0x1EC($s0)
    ctx->pc = 0x156b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 492)));
    // 0x156b7c: 0x4400002  bltz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x156B7Cu;
    {
        const bool branch_taken_0x156b7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x156b7c) {
            ctx->pc = 0x156B88u;
            goto label_156b88;
        }
    }
    ctx->pc = 0x156B84u;
    // 0x156b84: 0xa60201ee  sh          $v0, 0x1EE($s0)
    ctx->pc = 0x156b84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 494), (uint16_t)GPR_U32(ctx, 2));
label_156b88:
    // 0x156b88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x156b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156b8c: 0xa60201ec  sh          $v0, 0x1EC($s0)
    ctx->pc = 0x156b8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 492), (uint16_t)GPR_U32(ctx, 2));
    // 0x156b90: 0x3c06c47a  lui         $a2, 0xC47A
    ctx->pc = 0x156b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50298 << 16));
label_156b94:
    // 0x156b94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x156b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x156b98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x156b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x156b9c: 0xae060214  sw          $a2, 0x214($s0)
    ctx->pc = 0x156b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 6));
    // 0x156ba0: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156ba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x156ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x156ba8: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bb0: 0xae060224  sw          $a2, 0x224($s0)
    ctx->pc = 0x156bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 6));
    // 0x156bb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bb8: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156bbc: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bc0: 0xae060234  sw          $a2, 0x234($s0)
    ctx->pc = 0x156bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 6));
    // 0x156bc4: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156bc8: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bcc: 0xae060244  sw          $a2, 0x244($s0)
    ctx->pc = 0x156bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 6));
    // 0x156bd0: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156bd4: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156bd8: 0xae060254  sw          $a2, 0x254($s0)
    ctx->pc = 0x156bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 6));
    // 0x156bdc: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x156bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
    // 0x156be0: 0xae030204  sw          $v1, 0x204($s0)
    ctx->pc = 0x156be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 516), GPR_U32(ctx, 3));
    // 0x156be4: 0xa60001ea  sh          $zero, 0x1EA($s0)
    ctx->pc = 0x156be4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 490), (uint16_t)GPR_U32(ctx, 0));
    // 0x156be8: 0xc0561f4  jal         func_1587D0
    ctx->pc = 0x156BE8u;
    SET_GPR_U32(ctx, 31, 0x156BF0u);
    ctx->pc = 0x156BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BE8u;
    // 0x156bec: 0xa60301f0  sh          $v1, 0x1F0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 496), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1587D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587D0u, 0x156BE8u, 0x156BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BF0u;
label_156bf0:
    // 0x156bf0: 0xaf808604  sw          $zero, -0x79FC($gp)
    ctx->pc = 0x156bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936068), GPR_U32(ctx, 0));
label_156bf4:
    // 0x156bf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x156bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156bf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x156bf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x156BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156BFCu;
        // 0x156c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156C04u;
}
