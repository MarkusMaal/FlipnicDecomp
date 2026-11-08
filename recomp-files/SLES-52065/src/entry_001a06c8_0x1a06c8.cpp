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

// Function: entry_001a06c8
// Address: 0x1a06c8 - 0x1a06d8
void entry_001a06c8_0x1a06c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a06c8_0x1a06c8");
#endif

    ctx->pc = 0x1a06c8u;

    // 0x1a06c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A06C8u;
    {
        const bool branch_taken_0x1a06c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06c8) {
            ctx->pc = 0x1A06D8u;
            return;
        }
    }
    ctx->pc = 0x1A06D0u;
    // 0x1a06d0: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1a06d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1a06d4: 0xae430328  sw          $v1, 0x328($s2)
    ctx->pc = 0x1a06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 3));
    ctx->pc = 0x1a06d8u;
}
