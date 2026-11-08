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

// Function: FUN_001fbd00
// Address: 0x1fbd00 - 0x1fbe28
void FUN_001fbd00_0x1fbd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fbd00_0x1fbd00");
#endif

    switch (ctx->pc) {
        case 0x1fbd24u: goto label_1fbd24;
        case 0x1fbd40u: goto label_1fbd40;
        case 0x1fbd50u: goto label_1fbd50;
        case 0x1fbd84u: goto label_1fbd84;
        case 0x1fbd90u: goto label_1fbd90;
        case 0x1fbdc4u: goto label_1fbdc4;
        case 0x1fbdd4u: goto label_1fbdd4;
        case 0x1fbdf0u: goto label_1fbdf0;
        case 0x1fbe00u: goto label_1fbe00;
        default: break;
    }

    ctx->pc = 0x1fbd00u;

    // 0x1fbd00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fbd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fbd04: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1fbd04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1fbd08: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1fbd08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1fbd0c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1fbd0cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1fbd10: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1fbd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1fbd14: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1fbd14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1fbd18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1fbd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1fbd1c: 0xc07e752  jal         func_1F9D48
    ctx->pc = 0x1FBD1Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD24u);
    ctx->pc = 0x1FBD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD1Cu;
    // 0x1fbd20: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9D48u, 0x1FBD1Cu, 0x1FBD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD24u;
label_1fbd24:
    // 0x1fbd24: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1fbd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1fbd28: 0x8c504d60  lw          $s0, 0x4D60($v0)
    ctx->pc = 0x1fbd28u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x224D60u));
    // 0x1fbd2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fbd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fbd30: 0x12030035  beq         $s0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x1FBD30u;
    {
        const bool branch_taken_0x1fbd30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD30u;
        // 0x1fbd34: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd30) {
            ctx->pc = 0x1FBE08u;
            goto label_1fbe08;
        }
    }
    ctx->pc = 0x1FBD38u;
    // 0x1fbd38: 0xc07ee40  jal         func_1FB900
    ctx->pc = 0x1FBD38u;
    SET_GPR_U32(ctx, 31, 0x1FBD40u);
    ctx->pc = 0x1FBD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD38u;
    // 0x1fbd3c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB900u, 0x1FBD38u, 0x1FBD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD40u;
label_1fbd40:
    // 0x1fbd40: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FBD40u;
    {
        const bool branch_taken_0x1fbd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD40u;
        // 0x1fbd44: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd40) {
            ctx->pc = 0x1FBE0Cu;
            goto label_1fbe0c;
        }
    }
    ctx->pc = 0x1FBD48u;
    // 0x1fbd48: 0xc07ee40  jal         func_1FB900
    ctx->pc = 0x1FBD48u;
    SET_GPR_U32(ctx, 31, 0x1FBD50u);
    ctx->pc = 0x1FBD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD48u;
    // 0x1fbd4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB900u, 0x1FBD48u, 0x1FBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD50u;
label_1fbd50:
    // 0x1fbd50: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1FBD50u;
    {
        const bool branch_taken_0x1fbd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD50u;
        // 0x1fbd54: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd50) {
            ctx->pc = 0x1FBE0Cu;
            goto label_1fbe0c;
        }
    }
    ctx->pc = 0x1FBD58u;
    // 0x1fbd58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fbd58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbd5c: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1fbd5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fbd60: 0x0  nop
    ctx->pc = 0x1fbd60u;
    // NOP
    // 0x1fbd64: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
    ctx->pc = 0x1FBD64u;
    {
        const bool branch_taken_0x1fbd64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fbd64) {
            ctx->pc = 0x1FBD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBD64u;
            // 0x1fbd68: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBE0Cu;
            goto label_1fbe0c;
        }
    }
    ctx->pc = 0x1FBD6Cu;
    // 0x1fbd6c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1fbd6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fbd70: 0x0  nop
    ctx->pc = 0x1fbd70u;
    // NOP
    // 0x1fbd74: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x1FBD74u;
    {
        const bool branch_taken_0x1fbd74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FBD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD74u;
        // 0x1fbd78: 0x4600b006  mov.s       $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd74) {
            ctx->pc = 0x1FBE0Cu;
            goto label_1fbe0c;
        }
    }
    ctx->pc = 0x1FBD7Cu;
    // 0x1fbd7c: 0xc082520  jal         func_209480
    ctx->pc = 0x1FBD7Cu;
    SET_GPR_U32(ctx, 31, 0x1FBD84u);
    ctx->pc = 0x1FBD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD7Cu;
    // 0x1fbd80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1FBD7Cu, 0x1FBD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD84u;
label_1fbd84:
    // 0x1fbd84: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1fbd84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1fbd88: 0xc082520  jal         func_209480
    ctx->pc = 0x1FBD88u;
    SET_GPR_U32(ctx, 31, 0x1FBD90u);
    ctx->pc = 0x1FBD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBD88u;
    // 0x1fbd8c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209480u, 0x1FBD88u, 0x1FBD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBD90u;
label_1fbd90:
    // 0x1fbd90: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1fbd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1fbd94: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fbd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fbd98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fbd98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fbd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbda0: 0x24634dc8  addiu       $v1, $v1, 0x4DC8
    ctx->pc = 0x1fbda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19912));
    // 0x1fbda4: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x1fbda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x1fbda8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1fbda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1fbdac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbdb0: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1fbdb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1fbdb4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBDB4u;
    {
        const bool branch_taken_0x1fbdb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FBDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDB4u;
        // 0x1fbdb8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdb4) {
            ctx->pc = 0x1FBDCCu;
            goto label_1fbdcc;
        }
    }
    ctx->pc = 0x1FBDBCu;
    // 0x1fbdbc: 0xc07ed04  jal         func_1FB410
    ctx->pc = 0x1FBDBCu;
    SET_GPR_U32(ctx, 31, 0x1FBDC4u);
    ctx->pc = 0x1FBDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDBCu;
    // 0x1fbdc0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB410u, 0x1FBDBCu, 0x1FBDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDC4u;
label_1fbdc4:
    // 0x1fbdc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FBDC4u;
    {
        const bool branch_taken_0x1fbdc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBDC4u;
        // 0x1fbdc8: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbdc4) {
            ctx->pc = 0x1FBDE0u;
            goto label_1fbde0;
        }
    }
    ctx->pc = 0x1FBDCCu;
label_1fbdcc:
    // 0x1fbdcc: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1FBDCCu;
    SET_GPR_U32(ctx, 31, 0x1FBDD4u);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1FBDCCu, 0x1FBDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDD4u;
label_1fbdd4:
    // 0x1fbdd4: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x1fbdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1fbdd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fbdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1fbddc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1fbddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1fbde0:
    // 0x1fbde0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FBDE0u;
    {
        const bool branch_taken_0x1fbde0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbde0) {
            ctx->pc = 0x1FBDF8u;
            goto label_1fbdf8;
        }
    }
    ctx->pc = 0x1FBDE8u;
    // 0x1fbde8: 0xc07f4f8  jal         func_1FD3E0
    ctx->pc = 0x1FBDE8u;
    SET_GPR_U32(ctx, 31, 0x1FBDF0u);
    ctx->pc = 0x1FD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3E0u, 0x1FBDE8u, 0x1FBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBDF0u;
label_1fbdf0:
    // 0x1fbdf0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1fbdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbdf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1fbdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1fbdf8:
    // 0x1fbdf8: 0xc082222  jal         func_208888
    ctx->pc = 0x1FBDF8u;
    SET_GPR_U32(ctx, 31, 0x1FBE00u);
    ctx->pc = 0x1FBDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBDF8u;
    // 0x1fbdfc: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208888u, 0x1FBDF8u, 0x1FBE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE00u;
label_1fbe00:
    // 0x1fbe00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBE00u;
    {
        const bool branch_taken_0x1fbe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE00u;
        // 0x1fbe04: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe00) {
            ctx->pc = 0x1FBE10u;
            goto label_1fbe10;
        }
    }
    ctx->pc = 0x1FBE08u;
label_1fbe08:
    // 0x1fbe08: 0x4600b006  mov.s       $f0, $f22
    ctx->pc = 0x1fbe08u;
    ctx->f[0] = FPU_MOV_S(ctx->f[22]);
label_1fbe0c:
    // 0x1fbe0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fbe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1fbe10:
    // 0x1fbe10: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1fbe10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbe14: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1fbe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1fbe18: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1fbe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fbe1c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1fbe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fbe20: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE20u;
        // 0x1fbe24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBE28u;
}
