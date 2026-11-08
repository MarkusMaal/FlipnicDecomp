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

// Function: entry_00179ed4
// Address: 0x179ed4 - 0x179ef0
void entry_00179ed4_0x179ed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179ed4_0x179ed4");
#endif

    ctx->pc = 0x179ed4u;

    // 0x179ed4: 0x0  nop
    ctx->pc = 0x179ed4u;
    // NOP
    // 0x179ed8: 0xc6406000  lwc1        $f0, 0x6000($s2)
    ctx->pc = 0x179ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179edc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x179edcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x179ee0: 0x0  nop
    ctx->pc = 0x179ee0u;
    // NOP
    // 0x179ee4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x179EE4u;
    {
        const bool branch_taken_0x179ee4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x179ee4) {
            ctx->pc = 0x179EF0u;
            return;
        }
    }
    ctx->pc = 0x179EECu;
    // 0x179eec: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x179eecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x179ef0u;
}
