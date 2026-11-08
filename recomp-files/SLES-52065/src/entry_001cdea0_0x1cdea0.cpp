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

// Function: entry_001cdea0
// Address: 0x1cdea0 - 0x1cdec8
void entry_001cdea0_0x1cdea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cdea0_0x1cdea0");
#endif

    ctx->pc = 0x1cdea0u;

    // 0x1cdea0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdea4: 0x8022fa50  lb          $v0, -0x5B0($at)
    ctx->pc = 0x1cdea4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FA50u));
    // 0x1cdea8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDEA8u;
    {
        const bool branch_taken_0x1cdea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdea8) {
            ctx->pc = 0x1CDEC8u;
            return;
        }
    }
    ctx->pc = 0x1CDEB0u;
    // 0x1cdeb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cdeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1cdeb4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdeb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdeb8: 0xac23fa48  sw          $v1, -0x5B8($at)
    ctx->pc = 0x1cdeb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FA48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FA48u, _value); } while (0);
    // 0x1cdebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdec0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cdec4: 0xa022fa50  sb          $v0, -0x5B0($at)
    ctx->pc = 0x1cdec4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FA50u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FA50u, _value); } while (0);
    ctx->pc = 0x1cdec8u;
}
