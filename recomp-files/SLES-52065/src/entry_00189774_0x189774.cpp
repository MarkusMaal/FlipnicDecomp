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

// Function: entry_00189774
// Address: 0x189774 - 0x189790
void entry_00189774_0x189774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189774_0x189774");
#endif

    ctx->pc = 0x189774u;

    // 0x189774: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x189774u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x189778: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x189778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x18977c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18977cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189780: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x189780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x189784: 0x0  nop
    ctx->pc = 0x189784u;
    // NOP
    // 0x189788: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18978c: 0xa3a300df  sb          $v1, 0xDF($sp)
    ctx->pc = 0x18978cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x189790u;
}
