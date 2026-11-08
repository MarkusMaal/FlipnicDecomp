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

// Function: entry_001ecc90
// Address: 0x1ecc90 - 0x1ecc9c
void entry_001ecc90_0x1ecc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecc90_0x1ecc90");
#endif

    ctx->pc = 0x1ecc90u;

    // 0x1ecc90: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x1ecc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1ecc94: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1ECC94u;
    {
        const bool branch_taken_0x1ecc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECC94u;
        // 0x1ecc98: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecc94) {
            ctx->pc = 0x1ECC28u;
            return;
        }
    }
    ctx->pc = 0x1ECC9Cu;
}
