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

// Function: entry_0012c6b8
// Address: 0x12c6b8 - 0x12c6c4
void entry_0012c6b8_0x12c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c6b8_0x12c6b8");
#endif

    ctx->pc = 0x12c6b8u;

    // 0x12c6b8: 0x82430064  lb          $v1, 0x64($s2)
    ctx->pc = 0x12c6b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x12c6bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12C6BCu;
    {
        const bool branch_taken_0x12c6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6BCu;
        // 0x12c6c0: 0xa2430065  sb          $v1, 0x65($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6bc) {
            ctx->pc = 0x12C700u;
            return;
        }
    }
    ctx->pc = 0x12C6C4u;
}
