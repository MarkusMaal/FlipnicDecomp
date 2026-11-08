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

// Function: entry_0018a2c0
// Address: 0x18a2c0 - 0x18a2e0
void entry_0018a2c0_0x18a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a2c0_0x18a2c0");
#endif

    ctx->pc = 0x18a2c0u;

    // 0x18a2c0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x18a2c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18a2c4: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x18A2C4u;
    {
        const bool branch_taken_0x18a2c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a2c4) {
            ctx->pc = 0x18A200u;
            return;
        }
    }
    ctx->pc = 0x18A2CCu;
    // 0x18a2cc: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x18a2ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x18a2d0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x18A2D0u;
    {
        const bool branch_taken_0x18a2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18a2d0) {
            ctx->pc = 0x18A200u;
            return;
        }
    }
    ctx->pc = 0x18A2D8u;
    // 0x18a2d8: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x18a2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a2dc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x18a2dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x18a2e0u;
}
