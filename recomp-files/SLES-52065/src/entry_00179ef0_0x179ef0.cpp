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

// Function: entry_00179ef0
// Address: 0x179ef0 - 0x179f08
void entry_00179ef0_0x179ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ef0_0x179ef0");
#endif

    ctx->pc = 0x179ef0u;

    // 0x179ef0: 0xc6405ffc  lwc1        $f0, 0x5FFC($s2)
    ctx->pc = 0x179ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179ef4: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x179ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179ef8: 0x0  nop
    ctx->pc = 0x179ef8u;
    // NOP
    // 0x179efc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x179EFCu;
    {
        const bool branch_taken_0x179efc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x179efc) {
            ctx->pc = 0x179F08u;
            return;
        }
    }
    ctx->pc = 0x179F04u;
    // 0x179f04: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x179f04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x179f08u;
}
