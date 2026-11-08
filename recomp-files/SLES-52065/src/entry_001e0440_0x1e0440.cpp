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

// Function: entry_001e0440
// Address: 0x1e0440 - 0x1e0458
void entry_001e0440_0x1e0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0440_0x1e0440");
#endif

    ctx->pc = 0x1e0440u;

    // 0x1e0440: 0x92020068  lbu         $v0, 0x68($s0)
    ctx->pc = 0x1e0440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1e0444: 0xa2020069  sb          $v0, 0x69($s0)
    ctx->pc = 0x1e0444u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e0448: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e044c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E044Cu;
    {
        const bool branch_taken_0x1e044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E044Cu;
        // 0x1e0450: 0xae03006c  sw          $v1, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e044c) {
            ctx->pc = 0x1E04A8u;
            return;
        }
    }
    ctx->pc = 0x1E0454u;
    // 0x1e0454: 0x0  nop
    ctx->pc = 0x1e0454u;
    // NOP
    ctx->pc = 0x1e0458u;
}
