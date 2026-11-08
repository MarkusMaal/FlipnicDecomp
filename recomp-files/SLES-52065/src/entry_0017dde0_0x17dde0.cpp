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

// Function: entry_0017dde0
// Address: 0x17dde0 - 0x17de7c
void entry_0017dde0_0x17dde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dde0_0x17dde0");
#endif

    ctx->pc = 0x17dde0u;

    // 0x17dde0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x17dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x17dde4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x17dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x17dde8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x17dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x17ddec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17ddecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17ddf0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x17ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x17ddf4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x17ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x17ddf8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x17ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x17ddfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17de00: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x17de00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x17de04: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x17de04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17de08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x17de0c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x17de0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de10: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17de10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x17de14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17de14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de18: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17de1c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17de1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17de20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17de20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17de24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17de24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17de28: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x17de28u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17de2c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17de2cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17de30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17de30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17de34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17de34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17de38: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x17de38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
    // 0x17de3c: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x17de3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x17de40: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x17de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17de44: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x17de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17de48: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x17de48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x17de4c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x17de4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x17de50: 0x46170843  div.s       $f1, $f1, $f23
    ctx->pc = 0x17de50u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[23]); }
    // 0x17de54: 0x46170003  div.s       $f0, $f0, $f23
    ctx->pc = 0x17de54u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[23]); }
    // 0x17de58: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x17de58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x17de5c: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x17de5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x17de60: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17de60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x17de64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17de64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17de68: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x17de68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x17de6c: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x17de6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x17de70: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17DE70u;
    {
        const bool branch_taken_0x17de70 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17DE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE70u;
        // 0x17de74: 0x4600bd06  mov.s       $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de70) {
            ctx->pc = 0x17DE7Cu;
            return;
        }
    }
    ctx->pc = 0x17DE78u;
    // 0x17de78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17de78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17de7cu;
}
