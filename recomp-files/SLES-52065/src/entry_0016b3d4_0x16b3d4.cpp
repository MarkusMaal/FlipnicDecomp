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

// Function: entry_0016b3d4
// Address: 0x16b3d4 - 0x16b3ec
void entry_0016b3d4_0x16b3d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b3d4_0x16b3d4");
#endif

    ctx->pc = 0x16b3d4u;

    // 0x16b3d4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x16b3d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x16b3d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16b3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16b3dc: 0x0  nop
    ctx->pc = 0x16b3dcu;
    // NOP
    // 0x16b3e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16B3E0u;
    {
        const bool branch_taken_0x16b3e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16b3e0) {
            ctx->pc = 0x16B3ECu;
            return;
        }
    }
    ctx->pc = 0x16B3E8u;
    // 0x16b3e8: 0xe6210238  swc1        $f1, 0x238($s1)
    ctx->pc = 0x16b3e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 568), bits); }
    ctx->pc = 0x16b3ecu;
}
