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

// Function: entry_001d0720
// Address: 0x1d0720 - 0x1d0748
void entry_001d0720_0x1d0720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0720_0x1d0720");
#endif

    ctx->pc = 0x1d0720u;

    // 0x1d0720: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0724: 0x8022fc20  lb          $v0, -0x3E0($at)
    ctx->pc = 0x1d0724u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FC20u));
    // 0x1d0728: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D0728u;
    {
        const bool branch_taken_0x1d0728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0728) {
            ctx->pc = 0x1D0748u;
            return;
        }
    }
    ctx->pc = 0x1D0730u;
    // 0x1d0730: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d0730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d0734: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0738: 0xac23fc18  sw          $v1, -0x3E8($at)
    ctx->pc = 0x1d0738u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FC18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FC18u, _value); } while (0);
    // 0x1d073c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0740: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d0744: 0xa022fc20  sb          $v0, -0x3E0($at)
    ctx->pc = 0x1d0744u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FC20u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FC20u, _value); } while (0);
    ctx->pc = 0x1d0748u;
}
