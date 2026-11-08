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

// Function: entry_0010cd84
// Address: 0x10cd84 - 0x10cf64
void entry_0010cd84_0x10cd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cd84_0x10cd84");
#endif

    switch (ctx->pc) {
        case 0x10cda8u: goto label_10cda8;
        case 0x10cdecu: goto label_10cdec;
        case 0x10ce28u: goto label_10ce28;
        case 0x10ce84u: goto label_10ce84;
        case 0x10cefcu: goto label_10cefc;
        case 0x10cf2cu: goto label_10cf2c;
        default: break;
    }

    ctx->pc = 0x10cd84u;

label_10cd84:
    // 0x10cd84: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cd88:
    // 0x10cd88: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x10cd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_10cd8c:
    // 0x10cd8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10cd8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cd90:
    // 0x10cd90: 0x0  nop
    ctx->pc = 0x10cd90u;
    // NOP
label_10cd94:
    // 0x10cd94: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x10cd94u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_10cd98:
    // 0x10cd98: 0x0  nop
    ctx->pc = 0x10cd98u;
    // NOP
label_10cd9c:
    // 0x10cd9c: 0x0  nop
    ctx->pc = 0x10cd9cu;
    // NOP
label_10cda0:
    // 0x10cda0: 0xc0802aa  jal         func_200AA8
label_10cda4:
    if (ctx->pc == 0x10CDA4u) {
        ctx->pc = 0x10CDA8u;
        goto label_10cda8;
    }
    ctx->pc = 0x10CDA0u;
    SET_GPR_U32(ctx, 31, 0x10CDA8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CDA0u, 0x10CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDA8u;
label_10cda8:
    // 0x10cda8: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x10cda8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cdac:
    // 0x10cdac: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x10cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_10cdb0:
    // 0x10cdb0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x10cdb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10cdb4:
    // 0x10cdb4: 0xc6202304  lwc1        $f0, 0x2304($s1)
    ctx->pc = 0x10cdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cdb8:
    // 0x10cdb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10cdb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cdbc:
    // 0x10cdbc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x10cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_10cdc0:
    // 0x10cdc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10cdc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10cdc4:
    // 0x10cdc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10cdc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cdc8:
    // 0x10cdc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10cdc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10cdcc:
    // 0x10cdcc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cdccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cdd0:
    // 0x10cdd0: 0x46801860  cvt.s.w     $f1, $f3
    ctx->pc = 0x10cdd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10cdd4:
    // 0x10cdd4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10cdd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10cdd8:
    // 0x10cdd8: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x10cdd8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_10cddc:
    // 0x10cddc: 0x0  nop
    ctx->pc = 0x10cddcu;
    // NOP
label_10cde0:
    // 0x10cde0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x10cde0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10cde4:
    // 0x10cde4: 0xc0802aa  jal         func_200AA8
label_10cde8:
    if (ctx->pc == 0x10CDE8u) {
        ctx->pc = 0x10CDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CDE4u;
        // 0x10cde8: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CDECu;
        goto label_10cdec;
    }
    ctx->pc = 0x10CDE4u;
    SET_GPR_U32(ctx, 31, 0x10CDECu);
    ctx->pc = 0x10CDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CDE4u;
    // 0x10cde8: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CDE4u, 0x10CDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CDECu;
label_10cdec:
    // 0x10cdec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cdecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cdf0:
    // 0x10cdf0: 0x0  nop
    ctx->pc = 0x10cdf0u;
    // NOP
label_10cdf4:
    // 0x10cdf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10cdf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10cdf8:
    // 0x10cdf8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10cdfc:
    // 0x10cdfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x10cdfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_10ce00:
    // 0x10ce00: 0x0  nop
    ctx->pc = 0x10ce00u;
    // NOP
label_10ce04:
    // 0x10ce04: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x10ce04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_10ce08:
    // 0x10ce08: 0x3c024e80  lui         $v0, 0x4E80
    ctx->pc = 0x10ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20096 << 16));
label_10ce0c:
    // 0x10ce0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ce0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ce10:
    // 0x10ce10: 0x0  nop
    ctx->pc = 0x10ce10u;
    // NOP
label_10ce14:
    // 0x10ce14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10ce14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10ce18:
    // 0x10ce18: 0x0  nop
    ctx->pc = 0x10ce18u;
    // NOP
label_10ce1c:
    // 0x10ce1c: 0x0  nop
    ctx->pc = 0x10ce1cu;
    // NOP
label_10ce20:
    // 0x10ce20: 0xc0802aa  jal         func_200AA8
label_10ce24:
    if (ctx->pc == 0x10CE24u) {
        ctx->pc = 0x10CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE20u;
        // 0x10ce24: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CE28u;
        goto label_10ce28;
    }
    ctx->pc = 0x10CE20u;
    SET_GPR_U32(ctx, 31, 0x10CE28u);
    ctx->pc = 0x10CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE20u;
    // 0x10ce24: 0x46020581  sub.s       $f22, $f0, $f2 (Delay Slot)
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CE20u, 0x10CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE28u;
label_10ce28:
    // 0x10ce28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ce28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ce2c:
    // 0x10ce2c: 0x3c034e80  lui         $v1, 0x4E80
    ctx->pc = 0x10ce2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20096 << 16));
label_10ce30:
    // 0x10ce30: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x10ce30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10ce34:
    // 0x10ce34: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x10ce34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_10ce38:
    // 0x10ce38: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x10ce38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_10ce3c:
    // 0x10ce3c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x10ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ce40:
    // 0x10ce40: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x10ce40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_10ce44:
    // 0x10ce44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10ce48:
    // 0x10ce48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10ce48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10ce4c:
    // 0x10ce4c: 0x0  nop
    ctx->pc = 0x10ce4cu;
    // NOP
label_10ce50:
    // 0x10ce50: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x10ce50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_10ce54:
    // 0x10ce54: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x10ce54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_10ce58:
    // 0x10ce58: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x10ce58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_10ce5c:
    // 0x10ce5c: 0xe6200230  swc1        $f0, 0x230($s1)
    ctx->pc = 0x10ce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
label_10ce60:
    // 0x10ce60: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x10ce60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ce64:
    // 0x10ce64: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x10ce64u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_10ce68:
    // 0x10ce68: 0xe6200234  swc1        $f0, 0x234($s1)
    ctx->pc = 0x10ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
label_10ce6c:
    // 0x10ce6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x10ce6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10ce70:
    // 0x10ce70: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x10ce70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_10ce74:
    // 0x10ce74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10ce74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10ce78:
    // 0x10ce78: 0xe6200238  swc1        $f0, 0x238($s1)
    ctx->pc = 0x10ce78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
label_10ce7c:
    // 0x10ce7c: 0xc0802aa  jal         func_200AA8
label_10ce80:
    if (ctx->pc == 0x10CE80u) {
        ctx->pc = 0x10CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CE7Cu;
        // 0x10ce80: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CE84u;
        goto label_10ce84;
    }
    ctx->pc = 0x10CE7Cu;
    SET_GPR_U32(ctx, 31, 0x10CE84u);
    ctx->pc = 0x10CE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CE7Cu;
    // 0x10ce80: 0xae22023c  sw          $v0, 0x23C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x10CE7Cu, 0x10CE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CE84u;
label_10ce84:
    // 0x10ce84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x10ce84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10ce88:
    // 0x10ce88: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x10ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
label_10ce8c:
    // 0x10ce8c: 0x26250230  addiu       $a1, $s1, 0x230
    ctx->pc = 0x10ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
label_10ce90:
    // 0x10ce90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x10ce90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_10ce94:
    // 0x10ce94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x10ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_10ce98:
    // 0x10ce98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10ce98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ce9c:
    // 0x10ce9c: 0x0  nop
    ctx->pc = 0x10ce9cu;
    // NOP
label_10cea0:
    // 0x10cea0: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x10cea0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_10cea4:
    // 0x10cea4: 0x3c023eae  lui         $v0, 0x3EAE
    ctx->pc = 0x10cea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16046 << 16));
label_10cea8:
    // 0x10cea8: 0x3443147b  ori         $v1, $v0, 0x147B
    ctx->pc = 0x10cea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_10ceac:
    // 0x10ceac: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x10ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_10ceb0:
    // 0x10ceb0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x10ceb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_10ceb4:
    // 0x10ceb4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x10ceb4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ceb8:
    // 0x10ceb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x10ceb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_10cebc:
    // 0x10cebc: 0x0  nop
    ctx->pc = 0x10cebcu;
    // NOP
label_10cec0:
    // 0x10cec0: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x10cec0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_10cec4:
    // 0x10cec4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10cec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10cec8:
    // 0x10cec8: 0x0  nop
    ctx->pc = 0x10cec8u;
    // NOP
label_10cecc:
    // 0x10cecc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x10ceccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_10ced0:
    // 0x10ced0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x10ced0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_10ced4:
    // 0x10ced4: 0x7a260230  lq          $a2, 0x230($s1)
    ctx->pc = 0x10ced4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 560)));
label_10ced8:
    // 0x10ced8: 0x7e260230  sq          $a2, 0x230($s1)
    ctx->pc = 0x10ced8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 560), GPR_VEC(ctx, 6));
label_10cedc:
    // 0x10cedc: 0x26240220  addiu       $a0, $s1, 0x220
    ctx->pc = 0x10cedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_10cee0:
    // 0x10cee0: 0x7a260060  lq          $a2, 0x60($s1)
    ctx->pc = 0x10cee0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 17), 96)));
label_10cee4:
    // 0x10cee4: 0x7e260220  sq          $a2, 0x220($s1)
    ctx->pc = 0x10cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 544), GPR_VEC(ctx, 6));
label_10cee8:
    // 0x10cee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10cee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10ceec:
    // 0x10ceec: 0xc6210234  lwc1        $f1, 0x234($s1)
    ctx->pc = 0x10ceecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10cef0:
    // 0x10cef0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x10cef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_10cef4:
    // 0x10cef4: 0xc0433dc  jal         func_10CF70
label_10cef8:
    if (ctx->pc == 0x10CEF8u) {
        ctx->pc = 0x10CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CEF4u;
        // 0x10cef8: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CEFCu;
        goto label_10cefc;
    }
    ctx->pc = 0x10CEF4u;
    SET_GPR_U32(ctx, 31, 0x10CEFCu);
    ctx->pc = 0x10CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CEF4u;
    // 0x10cef8: 0xe6200234  swc1        $f0, 0x234($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 564), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x10CEF4u, 0x10CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CEFCu;
label_10cefc:
    // 0x10cefc: 0xe6200240  swc1        $f0, 0x240($s1)
    ctx->pc = 0x10cefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 576), bits); }
label_10cf00:
    // 0x10cf00: 0xc7818020  lwc1        $f1, -0x7FE0($gp)
    ctx->pc = 0x10cf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_10cf04:
    // 0x10cf04: 0xc6200240  lwc1        $f0, 0x240($s1)
    ctx->pc = 0x10cf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10cf08:
    // 0x10cf08: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x10cf08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_10cf0c:
    // 0x10cf0c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x10cf0cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_10cf10:
    // 0x10cf10: 0xe6200248  swc1        $f0, 0x248($s1)
    ctx->pc = 0x10cf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 584), bits); }
label_10cf14:
    // 0x10cf14: 0xae200244  sw          $zero, 0x244($s1)
    ctx->pc = 0x10cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 580), GPR_U32(ctx, 0));
label_10cf18:
    // 0x10cf18: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10cf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10cf1c:
    // 0x10cf1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10cf1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10cf20:
    // 0x10cf20: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x10cf20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_10cf24:
    // 0x10cf24: 0x320f809  jalr        $t9
label_10cf28:
    if (ctx->pc == 0x10CF28u) {
        ctx->pc = 0x10CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF24u;
        // 0x10cf28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CF2Cu;
        goto label_10cf2c;
    }
    ctx->pc = 0x10CF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10CF2Cu);
        ctx->pc = 0x10CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF24u;
        // 0x10cf28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF24u, 0x10CF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CF2Cu;
label_10cf2c:
    // 0x10cf2c: 0xa220007a  sb          $zero, 0x7A($s1)
    ctx->pc = 0x10cf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 122), (uint8_t)GPR_U32(ctx, 0));
label_10cf30:
    // 0x10cf30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cf34:
    // 0x10cf34: 0xa2230078  sb          $v1, 0x78($s1)
    ctx->pc = 0x10cf34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 3));
label_10cf38:
    // 0x10cf38: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10cf38u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
label_10cf3c:
    // 0x10cf3c: 0xa623024e  sh          $v1, 0x24E($s1)
    ctx->pc = 0x10cf3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 590), (uint16_t)GPR_U32(ctx, 3));
label_10cf40:
    // 0x10cf40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10cf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10cf44:
    // 0x10cf44: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x10cf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_10cf48:
    // 0x10cf48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10cf48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10cf4c:
    // 0x10cf4c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x10cf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_10cf50:
    // 0x10cf50: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10cf50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10cf54:
    // 0x10cf54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10cf58:
    // 0x10cf58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10cf58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10cf5c:
    // 0x10cf5c: 0x3e00008  jr          $ra
label_10cf60:
    if (ctx->pc == 0x10CF60u) {
        ctx->pc = 0x10CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF5Cu;
        // 0x10cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CF64u;
        goto label_fallthrough_0x10cf5c;
    }
    ctx->pc = 0x10CF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CF5Cu;
        // 0x10cf60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10cf5c:
    ctx->pc = 0x10CF64u;
}
