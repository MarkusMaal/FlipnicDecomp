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

// Function: entry_00184fe0
// Address: 0x184fe0 - 0x185018
void entry_00184fe0_0x184fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184fe0_0x184fe0");
#endif

    ctx->pc = 0x184fe0u;

    // 0x184fe0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x184fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x184fe4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x184fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x184fe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x184fe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x184fec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x184ff0: 0x0  nop
    ctx->pc = 0x184ff0u;
    // NOP
    // 0x184ff4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x184ff4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x184ff8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x184ff8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x184ffc: 0x0  nop
    ctx->pc = 0x184ffcu;
    // NOP
    // 0x185000: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x185000u;
    {
        const bool branch_taken_0x185000 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185000) {
            ctx->pc = 0x185018u;
            return;
        }
    }
    ctx->pc = 0x185008u;
    // 0x185008: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x185008u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x18500c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x18500cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x185010: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x185010u;
    {
        const bool branch_taken_0x185010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185010) {
            ctx->pc = 0x185030u;
            return;
        }
    }
    ctx->pc = 0x185018u;
}
