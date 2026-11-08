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

// Function: entry_00189090
// Address: 0x189090 - 0x1890cc
void entry_00189090_0x189090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189090_0x189090");
#endif

    ctx->pc = 0x189090u;

    // 0x189090: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x189090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x189094: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x189094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x189098: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x189098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18909c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x18909cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1890a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1890a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1890a4: 0x0  nop
    ctx->pc = 0x1890a4u;
    // NOP
    // 0x1890a8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1890a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1890ac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1890acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1890b0: 0x0  nop
    ctx->pc = 0x1890b0u;
    // NOP
    // 0x1890b4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1890B4u;
    {
        const bool branch_taken_0x1890b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1890b4) {
            ctx->pc = 0x1890CCu;
            return;
        }
    }
    ctx->pc = 0x1890BCu;
    // 0x1890bc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1890bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1890c0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1890c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1890c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1890C4u;
    {
        const bool branch_taken_0x1890c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1890C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1890C4u;
        // 0x1890c8: 0xa3a3007e  sb          $v1, 0x7E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 126), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1890c4) {
            ctx->pc = 0x1890E8u;
            return;
        }
    }
    ctx->pc = 0x1890CCu;
}
