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

// Function: entry_001c4ca4
// Address: 0x1c4ca4 - 0x1c4ccc
void entry_001c4ca4_0x1c4ca4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ca4_0x1c4ca4");
#endif

    ctx->pc = 0x1c4ca4u;

    // 0x1c4ca4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4ca8: 0x8022f858  lb          $v0, -0x7A8($at)
    ctx->pc = 0x1c4ca8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F858u));
    // 0x1c4cac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4CACu;
    {
        const bool branch_taken_0x1c4cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4cac) {
            ctx->pc = 0x1C4CCCu;
            return;
        }
    }
    ctx->pc = 0x1C4CB4u;
    // 0x1c4cb4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1c4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c4cb8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cbc: 0xac23f850  sw          $v1, -0x7B0($at)
    ctx->pc = 0x1c4cbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x36F850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x36F850u, _value); } while (0);
    // 0x1c4cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4cc4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c4cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c4cc8: 0xa022f858  sb          $v0, -0x7A8($at)
    ctx->pc = 0x1c4cc8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F858u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F858u, _value); } while (0);
    ctx->pc = 0x1c4cccu;
}
