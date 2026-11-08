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

// Function: entry_001764a4
// Address: 0x1764a4 - 0x1764ac
void entry_001764a4_0x1764a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001764a4_0x1764a4");
#endif

    ctx->pc = 0x1764a4u;

    // 0x1764a4: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x1764A4u;
    {
        const bool branch_taken_0x1764a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764A4u;
        // 0x1764a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764a4) {
            ctx->pc = 0x176A68u;
            return;
        }
    }
    ctx->pc = 0x1764ACu;
}
