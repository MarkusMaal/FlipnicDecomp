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

// Function: FUN_001fbc00
// Address: 0x1fbc00 - 0x1fbcfc
void FUN_001fbc00_0x1fbc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbc00_0x1fbc00");
#endif

    switch (ctx->pc) {
        case 0x1fbc1cu: goto label_1fbc1c;
        case 0x1fbc38u: goto label_1fbc38;
        case 0x1fbc48u: goto label_1fbc48;
        case 0x1fbc7cu: goto label_1fbc7c;
        case 0x1fbc9cu: goto label_1fbc9c;
        case 0x1fbcacu: goto label_1fbcac;
        case 0x1fbcc8u: goto label_1fbcc8;
        case 0x1fbcd8u: goto label_1fbcd8;
        default: break;
    }

    ctx->pc = 0x1fbc00u;

    // 0x1fbc00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1fbc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1fbc04: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1fbc04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1fbc08: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1fbc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1fbc0c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1fbc0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fbc10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fbc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fbc14: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1FBC14u;
    SET_GPR_U32(ctx, 31, 0x1FBC1Cu);
    ctx->pc = 0x1FBC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC14u;
    // 0x1fbc18: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1FBC14u, 0x1FBC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC1Cu;
label_1fbc1c:
    // 0x1fbc1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fbc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fbc20: 0x8c504d60  lw          $s0, 0x4D60($v0)
    ctx->pc = 0x1fbc20u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x224D60u));
    // 0x1fbc24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fbc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbc28: 0x1203002d  beq         $s0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FBC28u;
    {
        const bool branch_taken_0x1fbc28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC28u;
        // 0x1fbc2c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc28) {
            ctx->pc = 0x1FBCE0u;
            goto label_1fbce0;
        }
    }
    ctx->pc = 0x1FBC30u;
    // 0x1fbc30: 0xc07ee40  jal         func_1FB900
    ctx->pc = 0x1FBC30u;
    SET_GPR_U32(ctx, 31, 0x1FBC38u);
    ctx->pc = 0x1FBC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC30u;
    // 0x1fbc34: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB900u, 0x1FBC30u, 0x1FBC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC38u;
label_1fbc38:
    // 0x1fbc38: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FBC38u;
    {
        const bool branch_taken_0x1fbc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC38u;
        // 0x1fbc3c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc38) {
            ctx->pc = 0x1FBCE4u;
            goto label_1fbce4;
        }
    }
    ctx->pc = 0x1FBC40u;
    // 0x1fbc40: 0xc07edfe  jal         func_1FB7F8
    ctx->pc = 0x1FBC40u;
    SET_GPR_U32(ctx, 31, 0x1FBC48u);
    ctx->pc = 0x1FBC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC40u;
    // 0x1fbc44: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7F8u, 0x1FBC40u, 0x1FBC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC48u;
label_1fbc48:
    // 0x1fbc48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fbc48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fbc4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fbc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fbc50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fbc50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fbc54: 0x0  nop
    ctx->pc = 0x1fbc54u;
    // NOP
    // 0x1fbc58: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1FBC58u;
    {
        const bool branch_taken_0x1fbc58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FBC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC58u;
        // 0x1fbc5c: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc58) {
            ctx->pc = 0x1FBCE0u;
            goto label_1fbce0;
        }
    }
    ctx->pc = 0x1FBC60u;
    // 0x1fbc60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fbc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbc64: 0x24424dc0  addiu       $v0, $v0, 0x4DC0
    ctx->pc = 0x1fbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19904));
    // 0x1fbc68: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1fbc68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1fbc6c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1fbc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1fbc70: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1fbc70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fbc74: 0xc082520  jal         func_209480
    ctx->pc = 0x1FBC74u;
    SET_GPR_U32(ctx, 31, 0x1FBC7Cu);
    ctx->pc = 0x1FBC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC74u;
    // 0x1fbc78: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1FBC74u, 0x1FBC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC7Cu;
label_1fbc7c:
    // 0x1fbc7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1fbc7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc80: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1fbc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1fbc84: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x1fbc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x1fbc88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fbc88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbc8c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBC8Cu;
    {
        const bool branch_taken_0x1fbc8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FBC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC8Cu;
        // 0x1fbc90: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc8c) {
            ctx->pc = 0x1FBCA4u;
            goto label_1fbca4;
        }
    }
    ctx->pc = 0x1FBC94u;
    // 0x1fbc94: 0xc07ed04  jal         func_1FB410
    ctx->pc = 0x1FBC94u;
    SET_GPR_U32(ctx, 31, 0x1FBC9Cu);
    ctx->pc = 0x1FBC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC94u;
    // 0x1fbc98: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB410u, 0x1FBC94u, 0x1FBC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC9Cu;
label_1fbc9c:
    // 0x1fbc9c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBC9Cu;
    {
        const bool branch_taken_0x1fbc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBC9Cu;
        // 0x1fbca0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbc9c) {
            ctx->pc = 0x1FBCB8u;
            goto label_1fbcb8;
        }
    }
    ctx->pc = 0x1FBCA4u;
label_1fbca4:
    // 0x1fbca4: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1FBCA4u;
    SET_GPR_U32(ctx, 31, 0x1FBCACu);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1FBCA4u, 0x1FBCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCACu;
label_1fbcac:
    // 0x1fbcac: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1fbcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1fbcb0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fbcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fbcb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbcb8:
    // 0x1fbcb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBCB8u;
    {
        const bool branch_taken_0x1fbcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbcb8) {
            ctx->pc = 0x1FBCD0u;
            goto label_1fbcd0;
        }
    }
    ctx->pc = 0x1FBCC0u;
    // 0x1fbcc0: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1FBCC0u;
    SET_GPR_U32(ctx, 31, 0x1FBCC8u);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1FBCC0u, 0x1FBCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCC8u;
label_1fbcc8:
    // 0x1fbcc8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fbcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbccc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fbcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1fbcd0:
    // 0x1fbcd0: 0xc082222  jal         func_208888
    ctx->pc = 0x1FBCD0u;
    SET_GPR_U32(ctx, 31, 0x1FBCD8u);
    ctx->pc = 0x1FBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCD0u;
    // 0x1fbcd4: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x1FBCD0u, 0x1FBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCD8u;
label_1fbcd8:
    // 0x1fbcd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBCD8u;
    {
        const bool branch_taken_0x1fbcd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCD8u;
        // 0x1fbcdc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbcd8) {
            ctx->pc = 0x1FBCE8u;
            goto label_1fbce8;
        }
    }
    ctx->pc = 0x1FBCE0u;
label_1fbce0:
    // 0x1fbce0: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1fbce0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_1fbce4:
    // 0x1fbce4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fbce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fbce8:
    // 0x1fbce8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1fbce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbcec: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1fbcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fbcf0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1fbcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fbcf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCF4u;
        // 0x1fbcf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBCFCu;
}
