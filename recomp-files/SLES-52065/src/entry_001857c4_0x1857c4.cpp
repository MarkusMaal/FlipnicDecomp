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

// Function: entry_001857c4
// Address: 0x1857c4 - 0x1857fc
void entry_001857c4_0x1857c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001857c4_0x1857c4");
#endif

    ctx->pc = 0x1857c4u;

    // 0x1857c4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1857c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x1857c8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1857c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1857cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1857ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1857d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1857d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1857d4: 0x0  nop
    ctx->pc = 0x1857d4u;
    // NOP
    // 0x1857d8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1857d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1857dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1857dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1857e0: 0x0  nop
    ctx->pc = 0x1857e0u;
    // NOP
    // 0x1857e4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1857E4u;
    {
        const bool branch_taken_0x1857e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1857e4) {
            ctx->pc = 0x1857FCu;
            return;
        }
    }
    ctx->pc = 0x1857ECu;
    // 0x1857ec: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1857ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1857f0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1857f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1857f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1857F4u;
    {
        const bool branch_taken_0x1857f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1857f4) {
            ctx->pc = 0x185814u;
            return;
        }
    }
    ctx->pc = 0x1857FCu;
}
