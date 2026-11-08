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

// Function: entry_0010cc38
// Address: 0x10cc38 - 0x10cd84
void entry_0010cc38_0x10cc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cc38_0x10cc38");
#endif

    switch (ctx->pc) {
        case 0x10cc5cu: goto label_10cc5c;
        case 0x10cca0u: goto label_10cca0;
        case 0x10ccdcu: goto label_10ccdc;
        case 0x10cd50u: goto label_10cd50;
        default: break;
    }

    ctx->pc = 0x10cc38u;

    // 0x10cc38: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cc3c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x10cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x10cc40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10cc40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cc44: 0x0  nop
    ctx->pc = 0x10cc44u;
    // NOP
    // 0x10cc48: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x10cc48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x10cc4c: 0x0  nop
    ctx->pc = 0x10cc4cu;
    // NOP
    // 0x10cc50: 0x0  nop
    ctx->pc = 0x10cc50u;
    // NOP
    // 0x10cc54: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10CC54u;
    SET_GPR_U32(ctx, 31, 0x10CC5Cu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CC54u, 0x10CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC5Cu;
label_10cc5c:
    // 0x10cc5c: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x10cc5cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cc60: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x10cc64: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10cc64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10cc68: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cc6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10cc6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10cc70: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x10cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x10cc74: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10cc74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10cc78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10cc78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cc7c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10cc7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10cc80: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cc80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10cc84: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x10cc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10cc88: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10cc88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x10cc8c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x10cc8cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x10cc90: 0x0  nop
    ctx->pc = 0x10cc90u;
    // NOP
    // 0x10cc94: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10cc94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10cc98: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10CC98u;
    SET_GPR_U32(ctx, 31, 0x10CCA0u);
    ctx->pc = 0x10CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC98u;
    // 0x10cc9c: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CC98u, 0x10CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCA0u;
label_10cca0:
    // 0x10cca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cca4: 0x0  nop
    ctx->pc = 0x10cca4u;
    // NOP
    // 0x10cca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10cca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10ccac: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10ccacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x10ccb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10ccb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x10ccb4: 0x0  nop
    ctx->pc = 0x10ccb4u;
    // NOP
    // 0x10ccb8: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x10ccb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x10ccbc: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x10ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
    // 0x10ccc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ccc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ccc4: 0x0  nop
    ctx->pc = 0x10ccc4u;
    // NOP
    // 0x10ccc8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10ccc8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10cccc: 0x0  nop
    ctx->pc = 0x10ccccu;
    // NOP
    // 0x10ccd0: 0x0  nop
    ctx->pc = 0x10ccd0u;
    // NOP
    // 0x10ccd4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10CCD4u;
    SET_GPR_U32(ctx, 31, 0x10CCDCu);
    ctx->pc = 0x10CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CCD4u;
    // 0x10ccd8: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CCD4u, 0x10CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CCDCu;
label_10ccdc:
    // 0x10ccdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ccdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cce0: 0x3c034e80  lui         $v1, 0x4E80
    ctx->pc = 0x10cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20096 << 16));
    // 0x10cce4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x10cce4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10cce8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10cce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x10ccec: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10ccecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10ccf0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10ccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10ccf4: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x10ccf4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x10ccf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x10ccfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10ccfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cd00: 0x0  nop
    ctx->pc = 0x10cd00u;
    // NOP
    // 0x10cd04: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x10cd04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x10cd08: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x10cd08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x10cd0c: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x10cd0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x10cd10: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x10cd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x10cd14: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cd18: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x10cd18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x10cd1c: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x10cd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x10cd20: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10cd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10cd24: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10cd24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x10cd28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10cd28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10cd2c: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x10cd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x10cd30: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x10cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x10cd34: 0x7a260010  lq          $a2, 0x10($s1)
    ctx->pc = 0x10cd34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10cd38: 0x7e260060  sq          $a2, 0x60($s1)
    ctx->pc = 0x10cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 6));
    // 0x10cd3c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x10cd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cd40: 0x6410010  bgez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x10CD40u;
    {
        const bool branch_taken_0x10cd40 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x10CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CD40u;
        // 0x10cd44: 0x8e302300  lw          $s0, 0x2300($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cd40) {
            ctx->pc = 0x10CD84u;
            return;
        }
    }
    ctx->pc = 0x10CD48u;
    // 0x10cd48: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x10CD48u;
    SET_GPR_U32(ctx, 31, 0x10CD50u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CD48u, 0x10CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CD50u;
label_10cd50:
    // 0x10cd50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10cd50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cd54: 0x0  nop
    ctx->pc = 0x10cd54u;
    // NOP
    // 0x10cd58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10cd58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x10cd5c: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x10cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x10cd60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cd60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cd64: 0x0  nop
    ctx->pc = 0x10cd64u;
    // NOP
    // 0x10cd68: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x10cd68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10cd6c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x10cd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x10cd70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cd70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10cd74: 0x0  nop
    ctx->pc = 0x10cd74u;
    // NOP
    // 0x10cd78: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cd78u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x10cd7c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10cd7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x10cd80: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x10cd80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    ctx->pc = 0x10cd84u;
}
