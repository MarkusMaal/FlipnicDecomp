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

// Function: FUN_0014fb50
// Address: 0x14fb50 - 0x14feac
void FUN_0014fb50_0x14fb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014fb50_0x14fb50");
#endif

    switch (ctx->pc) {
        case 0x14fbd4u: goto label_14fbd4;
        case 0x14fc94u: goto label_14fc94;
        case 0x14fca0u: goto label_14fca0;
        case 0x14fca8u: goto label_14fca8;
        case 0x14fcb0u: goto label_14fcb0;
        case 0x14fcb8u: goto label_14fcb8;
        case 0x14fce4u: goto label_14fce4;
        case 0x14fd10u: goto label_14fd10;
        case 0x14fd60u: goto label_14fd60;
        case 0x14fd70u: goto label_14fd70;
        case 0x14fd80u: goto label_14fd80;
        case 0x14fda4u: goto label_14fda4;
        case 0x14fdb4u: goto label_14fdb4;
        case 0x14fdc4u: goto label_14fdc4;
        case 0x14fdd4u: goto label_14fdd4;
        case 0x14fe60u: goto label_14fe60;
        default: break;
    }

    ctx->pc = 0x14fb50u;

    // 0x14fb50: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14fb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x14fb54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14fb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x14fb58: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x14fb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x14fb5c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x14fb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x14fb60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14fb60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb64: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14fb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14fb68: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14fb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14fb6c: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x14fb6cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x14fb70: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x14fb70u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14fb74: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x14fb74u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14fb78: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x14fb78u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14fb7c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x14fb7cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x14fb80: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x14fb80u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14fb84: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x14fb84u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14fb88: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x14fb88u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x14fb8c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x14fb8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x14fb90: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x14fb90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14fb94: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14fb94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x14fb98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14fb98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x14fb9c: 0xc49d00f0  lwc1        $f29, 0xF0($a0)
    ctx->pc = 0x14fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x14fba0: 0x8c82011c  lw          $v0, 0x11C($a0)
    ctx->pc = 0x14fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 284)));
    // 0x14fba4: 0xc4820100  lwc1        $f2, 0x100($a0)
    ctx->pc = 0x14fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fba8: 0xc49e00f4  lwc1        $f30, 0xF4($a0)
    ctx->pc = 0x14fba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x14fbac: 0xc4810104  lwc1        $f1, 0x104($a0)
    ctx->pc = 0x14fbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fbb0: 0xc49f00f8  lwc1        $f31, 0xF8($a0)
    ctx->pc = 0x14fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x14fbb4: 0xc4800108  lwc1        $f0, 0x108($a0)
    ctx->pc = 0x14fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fbb8: 0x461d1501  sub.s       $f20, $f2, $f29
    ctx->pc = 0x14fbb8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[29]);
    // 0x14fbbc: 0x461e0d41  sub.s       $f21, $f1, $f30
    ctx->pc = 0x14fbbcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[30]);
    // 0x14fbc0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FBC0u;
    {
        const bool branch_taken_0x14fbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FBC0u;
        // 0x14fbc4: 0x461f0581  sub.s       $f22, $f0, $f31 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[31]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbc0) {
            ctx->pc = 0x14FBD8u;
            goto label_14fbd8;
        }
    }
    ctx->pc = 0x14FBC8u;
    // 0x14fbc8: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x14fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x14fbcc: 0xc040168  jal         func_1005A0
    ctx->pc = 0x14FBCCu;
    SET_GPR_U32(ctx, 31, 0x14FBD4u);
    ctx->pc = 0x14FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FBCCu;
    // 0x14fbd0: 0x22180  sll         $a0, $v0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1005A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1005A0u, 0x14FBCCu, 0x14FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FBD4u;
label_14fbd4:
    // 0x14fbd4: 0xae62011c  sw          $v0, 0x11C($s3)
    ctx->pc = 0x14fbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 2));
label_14fbd8:
    // 0x14fbd8: 0xc66100b0  lwc1        $f1, 0xB0($s3)
    ctx->pc = 0x14fbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fbdc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14fbe0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fbe0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fbe4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14fbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbe8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14fbe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fbec: 0xe6610140  swc1        $f1, 0x140($s3)
    ctx->pc = 0x14fbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 320), bits); }
    // 0x14fbf0: 0xc66300c0  lwc1        $f3, 0xC0($s3)
    ctx->pc = 0x14fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fbf4: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x14fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fbf8: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x14fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fbfc: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x14fbfcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x14fc00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14fc00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14fc04: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x14fc04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14fc08: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14fc08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x14fc0c: 0xe6610150  swc1        $f1, 0x150($s3)
    ctx->pc = 0x14fc0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 336), bits); }
    // 0x14fc10: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x14fc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc14: 0xe6610144  swc1        $f1, 0x144($s3)
    ctx->pc = 0x14fc14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 324), bits); }
    // 0x14fc18: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x14fc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc1c: 0xc66300c4  lwc1        $f3, 0xC4($s3)
    ctx->pc = 0x14fc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fc20: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x14fc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fc24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14fc24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14fc28: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x14fc28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x14fc2c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x14fc2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14fc30: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14fc30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x14fc34: 0xe6610154  swc1        $f1, 0x154($s3)
    ctx->pc = 0x14fc34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 340), bits); }
    // 0x14fc38: 0xc66100b8  lwc1        $f1, 0xB8($s3)
    ctx->pc = 0x14fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc3c: 0xe6610148  swc1        $f1, 0x148($s3)
    ctx->pc = 0x14fc3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 328), bits); }
    // 0x14fc40: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x14fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc44: 0xc66300c8  lwc1        $f3, 0xC8($s3)
    ctx->pc = 0x14fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fc48: 0xc66200b8  lwc1        $f2, 0xB8($s3)
    ctx->pc = 0x14fc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fc4c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14fc4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14fc50: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x14fc50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x14fc54: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x14fc54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14fc58: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14fc58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x14fc5c: 0xe6610158  swc1        $f1, 0x158($s3)
    ctx->pc = 0x14fc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 344), bits); }
    // 0x14fc60: 0xc66100bc  lwc1        $f1, 0xBC($s3)
    ctx->pc = 0x14fc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc64: 0xe661014c  swc1        $f1, 0x14C($s3)
    ctx->pc = 0x14fc64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 332), bits); }
    // 0x14fc68: 0xc66300cc  lwc1        $f3, 0xCC($s3)
    ctx->pc = 0x14fc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14fc6c: 0xc66200bc  lwc1        $f2, 0xBC($s3)
    ctx->pc = 0x14fc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fc70: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x14fc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fc74: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x14fc74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x14fc78: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x14fc78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14fc7c: 0x46800820  cvt.s.w     $f0, $f1
    ctx->pc = 0x14fc7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x14fc80: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x14fc80u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x14fc84: 0x0  nop
    ctx->pc = 0x14fc84u;
    // NOP
    // 0x14fc88: 0x0  nop
    ctx->pc = 0x14fc88u;
    // NOP
    // 0x14fc8c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x14FC8Cu;
    {
        const bool branch_taken_0x14fc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FC8Cu;
        // 0x14fc90: 0xe660015c  swc1        $f0, 0x15C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 348), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc8c) {
            ctx->pc = 0x14FE48u;
            goto label_14fe48;
        }
    }
    ctx->pc = 0x14FC94u;
label_14fc94:
    // 0x14fc94: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x14fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x14fc98: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FC98u;
    SET_GPR_U32(ctx, 31, 0x14FCA0u);
    ctx->pc = 0x14FC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FC98u;
    // 0x14fc9c: 0x528821  addu        $s1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FC98u, 0x14FCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCA0u;
label_14fca0:
    // 0x14fca0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCA0u;
    SET_GPR_U32(ctx, 31, 0x14FCA8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCA0u, 0x14FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCA8u;
label_14fca8:
    // 0x14fca8: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCA8u;
    SET_GPR_U32(ctx, 31, 0x14FCB0u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCA8u, 0x14FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCB0u;
label_14fcb0:
    // 0x14fcb0: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCB0u;
    SET_GPR_U32(ctx, 31, 0x14FCB8u);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCB0u, 0x14FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCB8u;
label_14fcb8:
    // 0x14fcb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fcb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fcbc: 0xc6610070  lwc1        $f1, 0x70($s3)
    ctx->pc = 0x14fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcc0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x14fcc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14fcc4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14fcc8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14fcc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fccc: 0xc6600068  lwc1        $f0, 0x68($s3)
    ctx->pc = 0x14fcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcd0: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x14fcd0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x14fcd4: 0x0  nop
    ctx->pc = 0x14fcd4u;
    // NOP
    // 0x14fcd8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14fcd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14fcdc: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FCDCu;
    SET_GPR_U32(ctx, 31, 0x14FCE4u);
    ctx->pc = 0x14FCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FCDCu;
    // 0x14fce0: 0x460105c0  add.s       $f23, $f0, $f1 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FCDCu, 0x14FCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FCE4u;
label_14fce4:
    // 0x14fce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fce8: 0xc6610074  lwc1        $f1, 0x74($s3)
    ctx->pc = 0x14fce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fcec: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x14fcecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14fcf0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14fcf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14fcf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14fcf8: 0xc660006c  lwc1        $f0, 0x6C($s3)
    ctx->pc = 0x14fcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fcfc: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x14fcfcu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x14fd00: 0x0  nop
    ctx->pc = 0x14fd00u;
    // NOP
    // 0x14fd04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14fd04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14fd08: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x14FD08u;
    SET_GPR_U32(ctx, 31, 0x14FD10u);
    ctx->pc = 0x14FD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD08u;
    // 0x14fd0c: 0x46010600  add.s       $f24, $f0, $f1 (Delay Slot)
    ctx->f[24] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x14FD08u, 0x14FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD10u;
label_14fd10:
    // 0x14fd10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd18: 0xc662007c  lwc1        $f2, 0x7C($s3)
    ctx->pc = 0x14fd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fd1c: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x14fd1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14fd20: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x14fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x14fd24: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14fd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fd28: 0xc6610078  lwc1        $f1, 0x78($s3)
    ctx->pc = 0x14fd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14fd2c: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x14fd2cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x14fd30: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14fd34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14fd34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14fd38: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x14fd38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14fd3c: 0x46020e40  add.s       $f25, $f1, $f2
    ctx->pc = 0x14fd3cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x14fd40: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x14fd40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14fd44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fd44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fd48: 0x0  nop
    ctx->pc = 0x14fd48u;
    // NOP
    // 0x14fd4c: 0x46000e83  div.s       $f26, $f1, $f0
    ctx->pc = 0x14fd4cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14fd50: 0x0  nop
    ctx->pc = 0x14fd50u;
    // NOP
    // 0x14fd54: 0x0  nop
    ctx->pc = 0x14fd54u;
    // NOP
    // 0x14fd58: 0xc054160  jal         func_150580
    ctx->pc = 0x14FD58u;
    SET_GPR_U32(ctx, 31, 0x14FD60u);
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x14FD58u, 0x14FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD60u;
label_14fd60:
    // 0x14fd60: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x14fd60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x14fd64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd68: 0xc054160  jal         func_150580
    ctx->pc = 0x14FD68u;
    SET_GPR_U32(ctx, 31, 0x14FD70u);
    ctx->pc = 0x14FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD68u;
    // 0x14fd6c: 0x4600eec0  add.s       $f27, $f29, $f0 (Delay Slot)
    ctx->f[27] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x14FD68u, 0x14FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD70u;
label_14fd70:
    // 0x14fd70: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x14fd70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x14fd74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd78: 0xc054160  jal         func_150580
    ctx->pc = 0x14FD78u;
    SET_GPR_U32(ctx, 31, 0x14FD80u);
    ctx->pc = 0x14FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD78u;
    // 0x14fd7c: 0x4600f700  add.s       $f28, $f30, $f0 (Delay Slot)
    ctx->f[28] = FPU_ADD_S(ctx->f[30], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150580u, 0x14FD78u, 0x14FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD80u;
label_14fd80:
    // 0x14fd80: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x14fd80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x14fd84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd88: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fd88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fd8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14fd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fd90: 0x4600f800  add.s       $f0, $f31, $f0
    ctx->pc = 0x14fd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], ctx->f[0]);
    // 0x14fd94: 0xe63b0000  swc1        $f27, 0x0($s1)
    ctx->pc = 0x14fd94u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x14fd98: 0xe63c0004  swc1        $f28, 0x4($s1)
    ctx->pc = 0x14fd98u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x14fd9c: 0xc054110  jal         func_150440
    ctx->pc = 0x14FD9Cu;
    SET_GPR_U32(ctx, 31, 0x14FDA4u);
    ctx->pc = 0x14FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD9Cu;
    // 0x14fda0: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150440u, 0x14FD9Cu, 0x14FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDA4u;
label_14fda4:
    // 0x14fda4: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x14fda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x14fda8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fdac: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x14FDACu;
    SET_GPR_U32(ctx, 31, 0x14FDB4u);
    ctx->pc = 0x14FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDACu;
    // 0x14fdb0: 0x266600d0  addiu       $a2, $s3, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x14FDACu, 0x14FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDB4u;
label_14fdb4:
    // 0x14fdb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdb8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fdbc: 0xc054110  jal         func_150440
    ctx->pc = 0x14FDBCu;
    SET_GPR_U32(ctx, 31, 0x14FDC4u);
    ctx->pc = 0x14FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDBCu;
    // 0x14fdc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150440u, 0x14FDBCu, 0x14FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDC4u;
label_14fdc4:
    // 0x14fdc4: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x14fdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x14fdc8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14fdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14fdcc: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x14FDCCu;
    SET_GPR_U32(ctx, 31, 0x14FDD4u);
    ctx->pc = 0x14FDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDCCu;
    // 0x14fdd0: 0x266600e0  addiu       $a2, $s3, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4B88u, 0x14FDCCu, 0x14FDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDD4u;
label_14fdd4:
    // 0x14fdd4: 0x4617c001  sub.s       $f0, $f24, $f23
    ctx->pc = 0x14fdd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[23]);
    // 0x14fdd8: 0x3c034480  lui         $v1, 0x4480
    ctx->pc = 0x14fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17536 << 16));
    // 0x14fddc: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14fde0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x14fde4: 0x461a0043  div.s       $f1, $f0, $f26
    ctx->pc = 0x14fde4u;
    { if (ctx->f[26] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[26]); }
    // 0x14fde8: 0x461ad002  mul.s       $f0, $f26, $f26
    ctx->pc = 0x14fde8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x14fdec: 0x4600c803  div.s       $f0, $f25, $f0
    ctx->pc = 0x14fdecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[25], ctx->f[0]); }
    // 0x14fdf0: 0xe637000c  swc1        $f23, 0xC($s1)
    ctx->pc = 0x14fdf0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x14fdf4: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x14fdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x14fdf8: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x14fdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
    // 0x14fdfc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14fdfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14fe00: 0xc6620064  lwc1        $f2, 0x64($s3)
    ctx->pc = 0x14fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14fe04: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x14fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x14fe08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14fe08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14fe0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14fe0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14fe10: 0x701023  subu        $v0, $v1, $s0
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14fe14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x14fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14fe18: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14fe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14fe1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x14fe1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14fe20: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14fe20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14fe24: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x14fe24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x14fe28: 0x460320c3  div.s       $f3, $f4, $f3
    ctx->pc = 0x14fe28u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x14fe2c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14fe2cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14fe30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x14fe30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14fe34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x14fe34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x14fe38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14fe38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14fe3c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x14fe3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14fe40: 0x0  nop
    ctx->pc = 0x14fe40u;
    // NOP
    // 0x14fe44: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x14fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_14fe48:
    // 0x14fe48: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x14fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x14fe4c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x14fe4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14fe50: 0x1440ff90  bnez        $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x14FE50u;
    {
        const bool branch_taken_0x14fe50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE50u;
        // 0x14fe54: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fe50) {
            ctx->pc = 0x14FC94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14fc94;
        }
    }
    ctx->pc = 0x14FE58u;
    // 0x14fe58: 0xc054050  jal         func_150140
    ctx->pc = 0x14FE58u;
    SET_GPR_U32(ctx, 31, 0x14FE60u);
    ctx->pc = 0x150140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150140u, 0x14FE58u, 0x14FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE60u;
label_14fe60:
    // 0x14fe60: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14fe60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fe64: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x14fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x14fe68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x14fe68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fe6c: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x14fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x14fe70: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x14fe70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fe74: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x14fe74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x14fe78: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14fe78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fe7c: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x14fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x14fe80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14fe80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe84: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x14fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x14fe88: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x14fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x14fe8c: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x14fe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x14fe90: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x14fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x14fe94: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x14fe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x14fe98: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x14fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x14fe9c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x14fea0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14fea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14fea4: 0x3e00008  jr          $ra
    ctx->pc = 0x14FEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FEA4u;
        // 0x14fea8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FEACu;
}
