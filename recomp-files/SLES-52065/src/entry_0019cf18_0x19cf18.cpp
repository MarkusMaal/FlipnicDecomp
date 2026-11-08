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

// Function: entry_0019cf18
// Address: 0x19cf18 - 0x19cffc
void entry_0019cf18_0x19cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cf18_0x19cf18");
#endif

    switch (ctx->pc) {
        case 0x19cf28u: goto label_19cf28;
        case 0x19cfacu: goto label_19cfac;
        case 0x19cfe0u: goto label_19cfe0;
        case 0x19cff0u: goto label_19cff0;
        default: break;
    }

    ctx->pc = 0x19cf18u;

    // 0x19cf18: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19cf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19cf1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19cf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cf20: 0xc04c6dc  jal         func_131B70
    ctx->pc = 0x19CF20u;
    SET_GPR_U32(ctx, 31, 0x19CF28u);
    ctx->pc = 0x19CF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF20u;
    // 0x19cf24: 0x24a5dad0  addiu       $a1, $a1, -0x2530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x19CF20u, 0x19CF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CF28u;
label_19cf28:
    // 0x19cf28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19cf28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x19cf2c: 0x8e830674  lw          $v1, 0x674($s4)
    ctx->pc = 0x19cf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1652)));
    // 0x19cf30: 0xc424db00  lwc1        $f4, -0x2500($at)
    ctx->pc = 0x19cf30u;
    { uint32_t bits = FAST_READ32(0x36DB00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x19cf34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19cf38: 0xc6650030  lwc1        $f5, 0x30($s3)
    ctx->pc = 0x19cf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x19cf3c: 0xc6630034  lwc1        $f3, 0x34($s3)
    ctx->pc = 0x19cf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19cf40: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x19cf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19cf44: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x19cf48: 0xc422db04  lwc1        $f2, -0x24FC($at)
    ctx->pc = 0x19cf48u;
    { uint32_t bits = FAST_READ32(0x36DB04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19cf4c: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x19cf4cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x19cf50: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x19cf50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x19cf54: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x19cf58: 0xc420db08  lwc1        $f0, -0x24F8($at)
    ctx->pc = 0x19cf58u;
    { uint32_t bits = FAST_READ32(0x36DB08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19cf5c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x19cf5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x19cf60: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x19cf60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x19cf64: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x19cf64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19cf68: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x19CF68u;
    {
        const bool branch_taken_0x19cf68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19CF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF68u;
        // 0x19cf6c: 0x46010842  mul.s       $f1, $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf68) {
            ctx->pc = 0x19D068u;
            return;
        }
    }
    ctx->pc = 0x19CF70u;
    // 0x19cf70: 0x8e830698  lw          $v1, 0x698($s4)
    ctx->pc = 0x19cf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1688)));
    // 0x19cf74: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x19cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x19cf78: 0x1462003b  bne         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x19CF78u;
    {
        const bool branch_taken_0x19cf78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF78u;
        // 0x19cf7c: 0x46022000  add.s       $f0, $f4, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf78) {
            ctx->pc = 0x19D068u;
            return;
        }
    }
    ctx->pc = 0x19CF80u;
    // 0x19cf80: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x19cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x19cf84: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19cf84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19cf88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19cf8c: 0x0  nop
    ctx->pc = 0x19cf8cu;
    // NOP
    // 0x19cf90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19cf90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19cf94: 0x0  nop
    ctx->pc = 0x19cf94u;
    // NOP
    // 0x19cf98: 0x45000033  bc1f        . + 4 + (0x33 << 2)
    ctx->pc = 0x19CF98u;
    {
        const bool branch_taken_0x19cf98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19cf98) {
            ctx->pc = 0x19D068u;
            return;
        }
    }
    ctx->pc = 0x19CFA0u;
    // 0x19cfa0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x19cfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19cfa4: 0xc064c0c  jal         func_193030
    ctx->pc = 0x19CFA4u;
    SET_GPR_U32(ctx, 31, 0x19CFACu);
    ctx->pc = 0x19CFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFA4u;
    // 0x19cfa8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193030u, 0x19CFA4u, 0x19CFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFACu;
label_19cfac:
    // 0x19cfac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x19cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x19cfb0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x19cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x19cfb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19cfb8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19CFB8u;
    {
        const bool branch_taken_0x19cfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cfb8) {
            ctx->pc = 0x19CFFCu;
            return;
        }
    }
    ctx->pc = 0x19CFC0u;
    // 0x19cfc0: 0x8e830908  lw          $v1, 0x908($s4)
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2312)));
    // 0x19cfc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x19cfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x19cfc8: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x19cfcc: 0x24a5dad0  addiu       $a1, $a1, -0x2530
    ctx->pc = 0x19cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957776));
    // 0x19cfd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x19cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x19cfd8: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x19CFD8u;
    SET_GPR_U32(ctx, 31, 0x19CFE0u);
    ctx->pc = 0x19CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFD8u;
    // 0x19cfdc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x19CFD8u, 0x19CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFE0u;
label_19cfe0:
    // 0x19cfe0: 0x8e850670  lw          $a1, 0x670($s4)
    ctx->pc = 0x19cfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1648)));
    // 0x19cfe4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19cfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cfe8: 0xc064cac  jal         func_1932B0
    ctx->pc = 0x19CFE8u;
    SET_GPR_U32(ctx, 31, 0x19CFF0u);
    ctx->pc = 0x19CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CFE8u;
    // 0x19cfec: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932B0u, 0x19CFE8u, 0x19CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CFF0u;
label_19cff0:
    // 0x19cff0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19cff4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19CFF4u;
    {
        const bool branch_taken_0x19cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFF4u;
        // 0x19cff8: 0xae820674  sw          $v0, 0x674($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cff4) {
            ctx->pc = 0x19D068u;
            return;
        }
    }
    ctx->pc = 0x19CFFCu;
}
