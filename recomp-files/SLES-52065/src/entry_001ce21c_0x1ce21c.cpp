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

// Function: entry_001ce21c
// Address: 0x1ce21c - 0x1ce244
void entry_001ce21c_0x1ce21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce21c_0x1ce21c");
#endif

    ctx->pc = 0x1ce21cu;

    // 0x1ce21c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce220: 0x8022fb28  lb          $v0, -0x4D8($at)
    ctx->pc = 0x1ce220u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36FB28u));
    // 0x1ce224: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CE224u;
    {
        const bool branch_taken_0x1ce224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce224) {
            ctx->pc = 0x1CE244u;
            return;
        }
    }
    ctx->pc = 0x1CE22Cu;
    // 0x1ce22c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ce22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce230: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce234: 0xac23fb20  sw          $v1, -0x4E0($at)
    ctx->pc = 0x1ce234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36FB20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36FB20u, _value); } while (0);
    // 0x1ce238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ce23c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1ce23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1ce240: 0xa022fb28  sb          $v0, -0x4D8($at)
    ctx->pc = 0x1ce240u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36FB28u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36FB28u, _value); } while (0);
    ctx->pc = 0x1ce244u;
}
