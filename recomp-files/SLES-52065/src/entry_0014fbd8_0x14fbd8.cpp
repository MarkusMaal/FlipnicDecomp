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

// Function: entry_0014fbd8
// Address: 0x14fbd8 - 0x14fc94
void entry_0014fbd8_0x14fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fbd8_0x14fbd8");
#endif

    ctx->pc = 0x14fbd8u;

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
            return;
        }
    }
    ctx->pc = 0x14FC94u;
}
