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

// Function: entry_00126eb4
// Address: 0x126eb4 - 0x126ec8
void entry_00126eb4_0x126eb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126eb4_0x126eb4");
#endif

    ctx->pc = 0x126eb4u;

    // 0x126eb4: 0x0  nop
    ctx->pc = 0x126eb4u;
    // NOP
    // 0x126eb8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x126eb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x126ebc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x126ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x126ec0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x126ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x126ec4: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x126ec4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x126ec8u;
}
