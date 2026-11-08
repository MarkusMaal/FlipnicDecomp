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

// Function: entry_001af294
// Address: 0x1af294 - 0x1af29c
void entry_001af294_0x1af294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af294_0x1af294");
#endif

    ctx->pc = 0x1af294u;

    // 0x1af294: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1AF294u;
    {
        const bool branch_taken_0x1af294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF294u;
        // 0x1af298: 0x64100001  daddiu      $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af294) {
            ctx->pc = 0x1AF3D8u;
            return;
        }
    }
    ctx->pc = 0x1AF29Cu;
}
