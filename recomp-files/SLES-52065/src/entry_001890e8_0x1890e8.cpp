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

// Function: entry_001890e8
// Address: 0x1890e8 - 0x189124
void entry_001890e8_0x1890e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001890e8_0x1890e8");
#endif

    ctx->pc = 0x1890e8u;

    // 0x1890e8: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x1890e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x1890ec: 0xc661003c  lwc1        $f1, 0x3C($s3)
    ctx->pc = 0x1890ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1890f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1890f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1890f4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1890f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1890f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1890f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1890fc: 0x0  nop
    ctx->pc = 0x1890fcu;
    // NOP
    // 0x189100: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x189100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x189104: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x189104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189108: 0x0  nop
    ctx->pc = 0x189108u;
    // NOP
    // 0x18910c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x18910Cu;
    {
        const bool branch_taken_0x18910c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18910c) {
            ctx->pc = 0x189124u;
            return;
        }
    }
    ctx->pc = 0x189114u;
    // 0x189114: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x189114u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189118: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189118u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18911c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18911Cu;
    {
        const bool branch_taken_0x18911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18911Cu;
        // 0x189120: 0xa3a3007f  sb          $v1, 0x7F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18911c) {
            ctx->pc = 0x189140u;
            return;
        }
    }
    ctx->pc = 0x189124u;
}
