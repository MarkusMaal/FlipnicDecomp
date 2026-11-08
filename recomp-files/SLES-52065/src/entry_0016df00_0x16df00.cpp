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

// Function: entry_0016df00
// Address: 0x16df00 - 0x16dfec
void entry_0016df00_0x16df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016df00_0x16df00");
#endif

    switch (ctx->pc) {
        case 0x16df18u: goto label_16df18;
        case 0x16df50u: goto label_16df50;
        default: break;
    }

    ctx->pc = 0x16df00u;

    // 0x16df00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16df04: 0x16420039  bne         $s2, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x16DF04u;
    {
        const bool branch_taken_0x16df04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x16df04) {
            ctx->pc = 0x16DFECu;
            return;
        }
    }
    ctx->pc = 0x16DF0Cu;
    // 0x16df0c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16df10: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16DF10u;
    SET_GPR_U32(ctx, 31, 0x16DF18u);
    ctx->pc = 0x16DF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF10u;
    // 0x16df14: 0xc4550058  lwc1        $f21, 0x58($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16DF10u, 0x16DF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF18u;
label_16df18:
    // 0x16df18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16df18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16df1c: 0x0  nop
    ctx->pc = 0x16df1cu;
    // NOP
    // 0x16df20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x16df20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x16df24: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x16df24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x16df28: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x16df28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x16df2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16df2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16df30: 0x0  nop
    ctx->pc = 0x16df30u;
    // NOP
    // 0x16df34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x16df34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x16df38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16df38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16df3c: 0xc4540058  lwc1        $f20, 0x58($v0)
    ctx->pc = 0x16df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16df40: 0x0  nop
    ctx->pc = 0x16df40u;
    // NOP
    // 0x16df44: 0x0  nop
    ctx->pc = 0x16df44u;
    // NOP
    // 0x16df48: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x16DF48u;
    SET_GPR_U32(ctx, 31, 0x16DF50u);
    ctx->pc = 0x16DF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF48u;
    // 0x16df4c: 0x46150541  sub.s       $f21, $f0, $f21 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x16DF48u, 0x16DF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF50u;
label_16df50:
    // 0x16df50: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16df50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16df54: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16df54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16df58: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x16df58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x16df5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x16df60: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x16df60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x16df64: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x16df64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x16df68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16df68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16df6c: 0x0  nop
    ctx->pc = 0x16df6cu;
    // NOP
    // 0x16df70: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x16df70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x16df74: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16df78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16df7c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x16df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16df80: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x16df80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x16df84: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x16df84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16df88: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x16df88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x16df8c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x16df8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x16df90: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x16df90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16df94: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x16df94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16df98: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x16df98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x16df9c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16dfa0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x16dfa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x16dfa4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x16dfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x16dfa8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x16dfa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dfac: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x16dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16dfb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16dfb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16dfb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16dfb8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x16dfb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x16dfbc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x16dfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x16dfc0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x16dfc4: 0x8e630210  lw          $v1, 0x210($s3)
    ctx->pc = 0x16dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x16dfc8: 0x8e620224  lw          $v0, 0x224($s3)
    ctx->pc = 0x16dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 548)));
    // 0x16dfcc: 0xc4ae0054  lwc1        $f14, 0x54($a1)
    ctx->pc = 0x16dfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x16dfd0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16dfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16dfd4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x16dfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dfd8: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16dfdc: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x16dfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16dfe0: 0xc4ad004c  lwc1        $f13, 0x4C($a1)
    ctx->pc = 0x16dfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16dfe4: 0xc05bb04  jal         func_16EC10
    ctx->pc = 0x16DFE4u;
    SET_GPR_U32(ctx, 31, 0x16DFECu);
    ctx->pc = 0x16DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFE4u;
    // 0x16dfe8: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EC10u, 0x16DFE4u, 0x16DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DFECu;
}
