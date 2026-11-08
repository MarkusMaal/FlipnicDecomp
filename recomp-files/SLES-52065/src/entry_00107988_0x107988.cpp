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

// Function: entry_00107988
// Address: 0x107988 - 0x1079c8
void entry_00107988_0x107988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107988_0x107988");
#endif

    ctx->pc = 0x107988u;

    // 0x107988: 0x4616c601  sub.s       $f24, $f24, $f22
    ctx->pc = 0x107988u;
    ctx->f[24] = FPU_SUB_S(ctx->f[24], ctx->f[22]);
    // 0x10798c: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x10798cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x107990: 0x46180036  c.le.s      $f0, $f24
    ctx->pc = 0x107990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x107994: 0x0  nop
    ctx->pc = 0x107994u;
    // NOP
    // 0x107998: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x107998u;
    {
        const bool branch_taken_0x107998 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107998u;
        // 0x10799c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107998) {
            ctx->pc = 0x1079C8u;
            return;
        }
    }
    ctx->pc = 0x1079A0u;
    // 0x1079a0: 0x0  nop
    ctx->pc = 0x1079a0u;
    // NOP
    // 0x1079a4: 0x0  nop
    ctx->pc = 0x1079a4u;
    // NOP
    // 0x1079a8: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x1079a8u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[24]); }
    // 0x1079ac: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x1079acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x1079b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1079b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1079b4: 0x0  nop
    ctx->pc = 0x1079b4u;
    // NOP
    // 0x1079b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1079b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1079bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1079bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1079c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1079c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1079c4: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x1079c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    ctx->pc = 0x1079c8u;
}
