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

// Function: FUN_0017fc80
// Address: 0x17fc80 - 0x17fe64
void FUN_0017fc80_0x17fc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017fc80_0x17fc80");
#endif

    switch (ctx->pc) {
        case 0x17fd04u: goto label_17fd04;
        case 0x17fd24u: goto label_17fd24;
        case 0x17fd5cu: goto label_17fd5c;
        case 0x17fd64u: goto label_17fd64;
        case 0x17fd74u: goto label_17fd74;
        case 0x17fd84u: goto label_17fd84;
        case 0x17fd94u: goto label_17fd94;
        case 0x17fda0u: goto label_17fda0;
        case 0x17fdb0u: goto label_17fdb0;
        case 0x17fdc0u: goto label_17fdc0;
        case 0x17fdd0u: goto label_17fdd0;
        case 0x17fddcu: goto label_17fddc;
        case 0x17fe00u: goto label_17fe00;
        case 0x17fe14u: goto label_17fe14;
        case 0x17fe28u: goto label_17fe28;
        case 0x17fe3cu: goto label_17fe3c;
        default: break;
    }

    ctx->pc = 0x17fc80u;

    // 0x17fc80: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x17fc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x17fc84: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x17fc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x17fc88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17fc8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17fc90: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17fc90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17fc98: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17fc98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fc9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17fc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17fca0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17fca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17fca4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17fca4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17fca8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x17fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x17fcac: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x17fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x17fcb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17fcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17fcb4: 0x0  nop
    ctx->pc = 0x17fcb4u;
    // NOP
    // 0x17fcb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17fcb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17fcbc: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x17fcbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17fcc0: 0x0  nop
    ctx->pc = 0x17fcc0u;
    // NOP
    // 0x17fcc4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17FCC4u;
    {
        const bool branch_taken_0x17fcc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCC4u;
        // 0x17fcc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcc4) {
            ctx->pc = 0x17FCD0u;
            goto label_17fcd0;
        }
    }
    ctx->pc = 0x17FCCCu;
    // 0x17fccc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17fcccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fcd0:
    // 0x17fcd0: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17fcd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17fcd4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x17fcd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x17fcd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17fcd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17fcdc: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x17fcdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x17fce0: 0x16430006  bne         $s2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17FCE0u;
    {
        const bool branch_taken_0x17fce0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x17FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCE0u;
        // 0x17fce4: 0x46006501  sub.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fce0) {
            ctx->pc = 0x17FCFCu;
            goto label_17fcfc;
        }
    }
    ctx->pc = 0x17FCE8u;
    // 0x17fce8: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x17fce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x17fcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17fcf0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FCF0u;
    {
        const bool branch_taken_0x17fcf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FCF0u;
        // 0x17fcf4: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fcf0) {
            ctx->pc = 0x17FCFCu;
            goto label_17fcfc;
        }
    }
    ctx->pc = 0x17FCF8u;
    // 0x17fcf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17fcf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17fcfc:
    // 0x17fcfc: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x17FCFCu;
    SET_GPR_U32(ctx, 31, 0x17FD04u);
    ctx->pc = 0x17FD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FCFCu;
    // 0x17fd00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x17FCFCu, 0x17FD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD04u;
label_17fd04:
    // 0x17fd04: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x17fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x17fd08: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x17fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x17fd0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17FD0Cu;
    {
        const bool branch_taken_0x17fd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD0Cu;
        // 0x17fd10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd0c) {
            ctx->pc = 0x17FD3Cu;
            goto label_17fd3c;
        }
    }
    ctx->pc = 0x17FD14u;
    // 0x17fd14: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17fd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17fd18: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x17fd18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17fd1c: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FD1Cu;
    SET_GPR_U32(ctx, 31, 0x17FD24u);
    ctx->pc = 0x17FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD1Cu;
    // 0x17fd20: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FD1Cu, 0x17FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD24u;
label_17fd24:
    // 0x17fd24: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x17fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd28: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x17fd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x17fd2c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x17fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd30: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x17fd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x17fd34: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x17fd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17fd38: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x17fd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_17fd3c:
    // 0x17fd3c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x17fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x17fd40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x17fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x17fd44: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17FD44u;
    {
        const bool branch_taken_0x17fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FD44u;
        // 0x17fd48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fd44) {
            ctx->pc = 0x17FDDCu;
            goto label_17fddc;
        }
    }
    ctx->pc = 0x17FD4Cu;
    // 0x17fd4c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x17fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17fd50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x17fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17fd54: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FD54u;
    SET_GPR_U32(ctx, 31, 0x17FD5Cu);
    ctx->pc = 0x17FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD54u;
    // 0x17fd58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FD54u, 0x17FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD5Cu;
label_17fd5c:
    // 0x17fd5c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x17FD5Cu;
    SET_GPR_U32(ctx, 31, 0x17FD64u);
    ctx->pc = 0x17FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD5Cu;
    // 0x17fd60: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x17FD5Cu, 0x17FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD64u;
label_17fd64:
    // 0x17fd64: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x17fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fd68: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x17fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17fd6c: 0xc07d3fe  jal         func_1F4FF8
    ctx->pc = 0x17FD6Cu;
    SET_GPR_U32(ctx, 31, 0x17FD74u);
    ctx->pc = 0x17FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD6Cu;
    // 0x17fd70: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4FF8u, 0x17FD6Cu, 0x17FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD74u;
label_17fd74:
    // 0x17fd74: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x17fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fd78: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17fd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17fd7c: 0xc07d428  jal         func_1F50A0
    ctx->pc = 0x17FD7Cu;
    SET_GPR_U32(ctx, 31, 0x17FD84u);
    ctx->pc = 0x17FD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD7Cu;
    // 0x17fd80: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A0u, 0x17FD7Cu, 0x17FD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD84u;
label_17fd84:
    // 0x17fd84: 0xc7ac0088  lwc1        $f12, 0x88($sp)
    ctx->pc = 0x17fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17fd88: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x17fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17fd8c: 0xc07d3d4  jal         func_1F4F50
    ctx->pc = 0x17FD8Cu;
    SET_GPR_U32(ctx, 31, 0x17FD94u);
    ctx->pc = 0x17FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD8Cu;
    // 0x17fd90: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4F50u, 0x17FD8Cu, 0x17FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FD94u;
label_17fd94:
    // 0x17fd94: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fd98: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x17FD98u;
    SET_GPR_U32(ctx, 31, 0x17FDA0u);
    ctx->pc = 0x17FD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FD98u;
    // 0x17fd9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x17FD98u, 0x17FDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDA0u;
label_17fda0:
    // 0x17fda0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fda4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x17fda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x17fda8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17FDA8u;
    SET_GPR_U32(ctx, 31, 0x17FDB0u);
    ctx->pc = 0x17FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDA8u;
    // 0x17fdac: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x17FDA8u, 0x17FDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDB0u;
label_17fdb0:
    // 0x17fdb0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fdb4: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17fdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17fdb8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17FDB8u;
    SET_GPR_U32(ctx, 31, 0x17FDC0u);
    ctx->pc = 0x17FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDB8u;
    // 0x17fdbc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x17FDB8u, 0x17FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDC0u;
label_17fdc0:
    // 0x17fdc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x17fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x17fdc4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x17fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x17fdc8: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x17FDC8u;
    SET_GPR_U32(ctx, 31, 0x17FDD0u);
    ctx->pc = 0x17FDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDC8u;
    // 0x17fdcc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x17FDC8u, 0x17FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDD0u;
label_17fdd0:
    // 0x17fdd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdd4: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x17FDD4u;
    SET_GPR_U32(ctx, 31, 0x17FDDCu);
    ctx->pc = 0x17FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDD4u;
    // 0x17fdd8: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x17FDD4u, 0x17FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FDDCu;
label_17fddc:
    // 0x17fddc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x17fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x17fde0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x17fde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x17fde4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17FDE4u;
    {
        const bool branch_taken_0x17fde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FDE4u;
        // 0x17fde8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fde4) {
            ctx->pc = 0x17FE40u;
            goto label_17fe40;
        }
    }
    ctx->pc = 0x17FDECu;
    // 0x17fdec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17fdecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17fdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fdf4: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x17fdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x17fdf8: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FDF8u;
    SET_GPR_U32(ctx, 31, 0x17FE00u);
    ctx->pc = 0x17FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FDF8u;
    // 0x17fdfc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FDF8u, 0x17FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE00u;
label_17fe00:
    // 0x17fe00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17fe00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x17fe04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fe08: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x17fe08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x17fe0c: 0xc05ffac  jal         func_17FEB0
    ctx->pc = 0x17FE0Cu;
    SET_GPR_U32(ctx, 31, 0x17FE14u);
    ctx->pc = 0x17FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE0Cu;
    // 0x17fe10: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FEB0u, 0x17FE0Cu, 0x17FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE14u;
label_17fe14:
    // 0x17fe14: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x17fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x17fe18: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x17fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x17fe1c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x17fe1cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x17fe20: 0xc061ab4  jal         func_186AD0
    ctx->pc = 0x17FE20u;
    SET_GPR_U32(ctx, 31, 0x17FE28u);
    ctx->pc = 0x17FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE20u;
    // 0x17fe24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186AD0u, 0x17FE20u, 0x17FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE28u;
label_17fe28:
    // 0x17fe28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17fe28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17fe2c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x17fe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x17fe30: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x17fe30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
    // 0x17fe34: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x17FE34u;
    SET_GPR_U32(ctx, 31, 0x17FE3Cu);
    ctx->pc = 0x17FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FE34u;
    // 0x17fe38: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x17FE34u, 0x17FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FE3Cu;
label_17fe3c:
    // 0x17fe3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17fe3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17fe40:
    // 0x17fe40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x17fe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17fe44: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17fe44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17fe48: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17fe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17fe4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17fe4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17fe50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17fe50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fe54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fe54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fe58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17fe58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x17FE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE5Cu;
        // 0x17fe60: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17FE64u;
}
