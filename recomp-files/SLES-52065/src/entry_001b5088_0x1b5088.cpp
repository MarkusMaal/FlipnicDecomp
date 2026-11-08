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

// Function: entry_001b5088
// Address: 0x1b5088 - 0x1b50ac
void entry_001b5088_0x1b5088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5088_0x1b5088");
#endif

    ctx->pc = 0x1b5088u;

    // 0x1b5088: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b508c: 0x8022e770  lb          $v0, -0x1890($at)
    ctx->pc = 0x1b508cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36E770u));
    // 0x1b5090: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5090u;
    {
        const bool branch_taken_0x1b5090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5090) {
            ctx->pc = 0x1B50ACu;
            return;
        }
    }
    ctx->pc = 0x1B5098u;
    // 0x1b5098: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b5098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b509c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b50a0: 0xa020e768  sb          $zero, -0x1898($at)
    ctx->pc = 0x1b50a0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x36E768u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E768u, _value); } while (0);
    // 0x1b50a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b50a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b50a8: 0xa022e770  sb          $v0, -0x1890($at)
    ctx->pc = 0x1b50a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36E770u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36E770u, _value); } while (0);
    ctx->pc = 0x1b50acu;
}
