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

// Function: entry_00188fe0
// Address: 0x188fe0 - 0x18901c
void entry_00188fe0_0x188fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188fe0_0x188fe0");
#endif

    ctx->pc = 0x188fe0u;

    // 0x188fe0: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x188fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188fe4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x188fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x188fe8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188fe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188fec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x188fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x188ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188ff4: 0x0  nop
    ctx->pc = 0x188ff4u;
    // NOP
    // 0x188ff8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x188ff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x188ffc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x188ffcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x189000: 0x0  nop
    ctx->pc = 0x189000u;
    // NOP
    // 0x189004: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x189004u;
    {
        const bool branch_taken_0x189004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x189004) {
            ctx->pc = 0x18901Cu;
            return;
        }
    }
    ctx->pc = 0x18900Cu;
    // 0x18900c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18900cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189010: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x189014u;
    {
        const bool branch_taken_0x189014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189014u;
        // 0x189018: 0xa3a3007c  sb          $v1, 0x7C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 124), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189014) {
            ctx->pc = 0x189038u;
            return;
        }
    }
    ctx->pc = 0x18901Cu;
}
