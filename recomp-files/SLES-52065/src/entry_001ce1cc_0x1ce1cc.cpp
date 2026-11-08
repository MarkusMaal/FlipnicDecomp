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

// Function: entry_001ce1cc
// Address: 0x1ce1cc - 0x1ce1f4
void entry_001ce1cc_0x1ce1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce1cc_0x1ce1cc");
#endif

    ctx->pc = 0x1ce1ccu;

    // 0x1ce1cc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1d0: 0x8022fb08  lb          $v0, -0x4F8($at)
    ctx->pc = 0x1ce1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB08u));
    // 0x1ce1d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE1D4u;
    {
        const bool branch_taken_0x1ce1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce1d4) {
            ctx->pc = 0x1CE1F4u;
            return;
        }
    }
    ctx->pc = 0x1CE1DCu;
    // 0x1ce1dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce1e0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1e4: 0xac23fb00  sw          $v1, -0x500($at)
    ctx->pc = 0x1ce1e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB00u, _value); } while (0);
    // 0x1ce1e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce1ec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce1f0: 0xa022fb08  sb          $v0, -0x4F8($at)
    ctx->pc = 0x1ce1f0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB08u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB08u, _value); } while (0);
    ctx->pc = 0x1ce1f4u;
}
