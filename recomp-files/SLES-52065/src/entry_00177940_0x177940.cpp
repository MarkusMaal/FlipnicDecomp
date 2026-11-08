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

// Function: entry_00177940
// Address: 0x177940 - 0x17799c
void entry_00177940_0x177940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177940_0x177940");
#endif

    ctx->pc = 0x177940u;

    // 0x177940: 0xc7828028  lwc1        $f2, -0x7FD8($gp)
    ctx->pc = 0x177940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x177944: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x177944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x177948: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x177948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17794c: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x17794cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x177950: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x177950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
    // 0x177954: 0x3443d97c  ori         $v1, $v0, 0xD97C
    ctx->pc = 0x177954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x177958: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x177958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x17795c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17795cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x177960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x177960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x177964: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x177964u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x177968: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x177968u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x17796c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x17796cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x177970: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x177970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x177974: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x177974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x177978: 0x0  nop
    ctx->pc = 0x177978u;
    // NOP
    // 0x17797c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17797cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x177980: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x177980u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x177984: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x177984u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x177988: 0x0  nop
    ctx->pc = 0x177988u;
    // NOP
    // 0x17798c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x17798Cu;
    {
        const bool branch_taken_0x17798c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x177990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17798Cu;
        // 0x177990: 0xe480002c  swc1        $f0, 0x2C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17798c) {
            ctx->pc = 0x17799Cu;
            return;
        }
    }
    ctx->pc = 0x177994u;
    // 0x177994: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x177994u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x177998: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x177998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    ctx->pc = 0x17799cu;
}
