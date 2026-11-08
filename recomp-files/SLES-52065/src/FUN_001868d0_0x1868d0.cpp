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

// Function: FUN_001868d0
// Address: 0x1868d0 - 0x186acc
void FUN_001868d0_0x1868d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001868d0_0x1868d0");
#endif

    switch (ctx->pc) {
        case 0x186918u: goto label_186918;
        case 0x1869ccu: goto label_1869cc;
        case 0x186a34u: goto label_186a34;
        case 0x186ab4u: goto label_186ab4;
        default: break;
    }

    ctx->pc = 0x1868d0u;

    // 0x1868d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1868d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1868d4: 0x3c0244ff  lui         $v0, 0x44FF
    ctx->pc = 0x1868d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17663 << 16));
    // 0x1868d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1868d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1868dc: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x1868dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x1868e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1868e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1868e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1868e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1868e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1868e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1868ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1868ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1868f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1868f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1868f4: 0xc4810154  lwc1        $f1, 0x154($a0)
    ctx->pc = 0x1868f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1868f8: 0xc480015c  lwc1        $f0, 0x15C($a0)
    ctx->pc = 0x1868f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1868fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1868fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x186900: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x186900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x186904: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x186904u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186908: 0x0  nop
    ctx->pc = 0x186908u;
    // NOP
    // 0x18690c: 0x0  nop
    ctx->pc = 0x18690cu;
    // NOP
    // 0x186910: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x186910u;
    SET_GPR_U32(ctx, 31, 0x186918u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x186910u, 0x186918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186918u;
label_186918:
    // 0x186918: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x186918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18691c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x18691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x186920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186924: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x186924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x186928: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x186928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x18692c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x18692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x186930: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x186930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x186934: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x186934u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x186938: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x186938u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x18693c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x18693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186940: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x186940u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x186944: 0xe6010024  swc1        $f1, 0x24($s0)
    ctx->pc = 0x186944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x186948: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x186948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18694c: 0xc6030158  lwc1        $f3, 0x158($s0)
    ctx->pc = 0x18694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186950: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x186950u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x186954: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x186954u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x186958: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x186958u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x18695c: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x18695cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x186960: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x186960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186964: 0xc6030158  lwc1        $f3, 0x158($s0)
    ctx->pc = 0x186964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186968: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x186968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x18696c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18696cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186970: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x186970u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x186974: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186974u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186978: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x186978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x18697c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x18697cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x186980: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x186980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x186984: 0xc6010120  lwc1        $f1, 0x120($s0)
    ctx->pc = 0x186984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186988: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x186988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18698c: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x18698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186990: 0xc603015c  lwc1        $f3, 0x15C($s0)
    ctx->pc = 0x186990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186994: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x186994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186998: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x186998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x18699c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18699cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1869a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1869a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1869a4: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x1869a4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x1869a8: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x1869a8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x1869ac: 0x46030d43  div.s       $f21, $f1, $f3
    ctx->pc = 0x1869acu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x1869b0: 0x0  nop
    ctx->pc = 0x1869b0u;
    // NOP
    // 0x1869b4: 0x0  nop
    ctx->pc = 0x1869b4u;
    // NOP
    // 0x1869b8: 0x46030503  div.s       $f20, $f0, $f3
    ctx->pc = 0x1869b8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1869bc: 0x0  nop
    ctx->pc = 0x1869bcu;
    // NOP
    // 0x1869c0: 0x0  nop
    ctx->pc = 0x1869c0u;
    // NOP
    // 0x1869c4: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x1869C4u;
    SET_GPR_U32(ctx, 31, 0x1869CCu);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x1869C4u, 0x1869CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1869CCu;
label_1869cc:
    // 0x1869cc: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1869ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1869d0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x1869d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x1869d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1869d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1869d8: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x1869d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1869dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1869dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1869e0: 0x46150843  div.s       $f1, $f1, $f21
    ctx->pc = 0x1869e0u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[21]); }
    // 0x1869e4: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x1869e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1869e8: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1869e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1869ec: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x1869ecu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x1869f0: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x1869f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x1869f4: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1869f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1869f8: 0xc6030158  lwc1        $f3, 0x158($s0)
    ctx->pc = 0x1869f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1869fc: 0x46011880  add.s       $f2, $f3, $f1
    ctx->pc = 0x1869fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x186a00: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x186a00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x186a04: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x186a04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x186a08: 0xe6010078  swc1        $f1, 0x78($s0)
    ctx->pc = 0x186a08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x186a0c: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x186a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186a10: 0xc6030158  lwc1        $f3, 0x158($s0)
    ctx->pc = 0x186a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x186a14: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x186a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x186a18: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x186a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186a1c: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x186a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x186a20: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x186a20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x186a24: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x186a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x186a28: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x186a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
    // 0x186a2c: 0xc07d3ac  jal         func_1F4EB0
    ctx->pc = 0x186A2Cu;
    SET_GPR_U32(ctx, 31, 0x186A34u);
    ctx->pc = 0x186A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A2Cu;
    // 0x186a30: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x186A2Cu, 0x186A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186A34u;
label_186a34:
    // 0x186a34: 0xc6010118  lwc1        $f1, 0x118($s0)
    ctx->pc = 0x186a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186a38: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x186a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x186a3c: 0xc6000164  lwc1        $f0, 0x164($s0)
    ctx->pc = 0x186a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186a40: 0x3c034500  lui         $v1, 0x4500
    ctx->pc = 0x186a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17664 << 16));
    // 0x186a44: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186a48: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x186a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x186a4c: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x186a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x186a50: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x186a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x186a54: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x186a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186a58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x186a58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x186a5c: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x186a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x186a60: 0xc601011c  lwc1        $f1, 0x11C($s0)
    ctx->pc = 0x186a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186a64: 0xc6000168  lwc1        $f0, 0x168($s0)
    ctx->pc = 0x186a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186a68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x186a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186a6c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x186a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x186a70: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x186a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x186a74: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x186a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
    // 0x186a78: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x186a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x186a7c: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186a80: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x186a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186a84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186a84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186a88: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x186a88u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x186a8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x186a8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x186a90: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x186a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x186a94: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186a98: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x186a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186a9c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x186a9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x186aa0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x186aa0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x186aa4: 0x0  nop
    ctx->pc = 0x186aa4u;
    // NOP
    // 0x186aa8: 0x0  nop
    ctx->pc = 0x186aa8u;
    // NOP
    // 0x186aac: 0xc07d2ee  jal         func_1F4BB8
    ctx->pc = 0x186AACu;
    SET_GPR_U32(ctx, 31, 0x186AB4u);
    ctx->pc = 0x186AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186AACu;
    // 0x186ab0: 0xe6000108  swc1        $f0, 0x108($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4BB8u, 0x186AACu, 0x186AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186AB4u;
label_186ab4:
    // 0x186ab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186ab8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x186ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x186abc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186ac0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x186AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AC4u;
        // 0x186ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186ACCu;
}
