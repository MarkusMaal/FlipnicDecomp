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

// Function: entry_0016adec
// Address: 0x16adec - 0x16ae08
void entry_0016adec_0x16adec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016adec_0x16adec");
#endif

    ctx->pc = 0x16adecu;

    // 0x16adec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16adecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16adf0: 0x0  nop
    ctx->pc = 0x16adf0u;
    // NOP
    // 0x16adf4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16adf4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16adf8: 0x0  nop
    ctx->pc = 0x16adf8u;
    // NOP
    // 0x16adfc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x16ADFCu;
    {
        const bool branch_taken_0x16adfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16adfc) {
            ctx->pc = 0x16AE08u;
            return;
        }
    }
    ctx->pc = 0x16AE04u;
    // 0x16ae04: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16ae04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x16ae08u;
}
