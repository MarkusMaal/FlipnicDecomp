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

// Function: entry_00141e9c
// Address: 0x141e9c - 0x141eac
void entry_00141e9c_0x141e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e9c_0x141e9c");
#endif

    ctx->pc = 0x141e9cu;

    // 0x141e9c: 0x0  nop
    ctx->pc = 0x141e9cu;
    // NOP
    // 0x141ea0: 0xa0e30018  sb          $v1, 0x18($a3)
    ctx->pc = 0x141ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x141ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141EA4u;
    {
        const bool branch_taken_0x141ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141EA4u;
        // 0x141ea8: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x141ea4) {
            ctx->pc = 0x141EB4u;
            return;
        }
    }
    ctx->pc = 0x141EACu;
}
