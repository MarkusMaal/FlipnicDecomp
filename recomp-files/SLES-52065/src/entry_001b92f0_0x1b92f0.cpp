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

// Function: entry_001b92f0
// Address: 0x1b92f0 - 0x1b9318
void entry_001b92f0_0x1b92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b92f0_0x1b92f0");
#endif

    ctx->pc = 0x1b92f0u;

    // 0x1b92f0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b92f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b92f4: 0x8023f458  lb          $v1, -0xBA8($at)
    ctx->pc = 0x1b92f4u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x36F458u));
    // 0x1b92f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B92F8u;
    {
        const bool branch_taken_0x1b92f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b92f8) {
            ctx->pc = 0x1B9318u;
            return;
        }
    }
    ctx->pc = 0x1B9300u;
    // 0x1b9300: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x1b9300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1b9304: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9308: 0xac24f450  sw          $a0, -0xBB0($at)
    ctx->pc = 0x1b9308u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x36F450u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F450u, _value); } while (0);
    // 0x1b930c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b9310: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b9310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b9314: 0xa023f458  sb          $v1, -0xBA8($at)
    ctx->pc = 0x1b9314u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F458u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F458u, _value); } while (0);
    ctx->pc = 0x1b9318u;
}
