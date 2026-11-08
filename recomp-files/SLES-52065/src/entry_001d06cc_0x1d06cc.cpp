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

// Function: entry_001d06cc
// Address: 0x1d06cc - 0x1d06f4
void entry_001d06cc_0x1d06cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d06cc_0x1d06cc");
#endif

    ctx->pc = 0x1d06ccu;

    // 0x1d06cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06d0: 0x8022fc00  lb          $v0, -0x400($at)
    ctx->pc = 0x1d06d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FC00u));
    // 0x1d06d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D06D4u;
    {
        const bool branch_taken_0x1d06d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d06d4) {
            ctx->pc = 0x1D06F4u;
            return;
        }
    }
    ctx->pc = 0x1D06DCu;
    // 0x1d06dc: 0x2403017c  addiu       $v1, $zero, 0x17C
    ctx->pc = 0x1d06dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    // 0x1d06e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06e4: 0xac23fbf8  sw          $v1, -0x408($at)
    ctx->pc = 0x1d06e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FBF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FBF8u, _value); } while (0);
    // 0x1d06e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d06e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d06ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d06ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d06f0: 0xa022fc00  sb          $v0, -0x400($at)
    ctx->pc = 0x1d06f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC00u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC00u, _value); } while (0);
    ctx->pc = 0x1d06f4u;
}
