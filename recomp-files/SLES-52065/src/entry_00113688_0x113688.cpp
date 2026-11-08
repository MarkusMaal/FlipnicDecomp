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

// Function: entry_00113688
// Address: 0x113688 - 0x113690
void entry_00113688_0x113688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113688_0x113688");
#endif

    ctx->pc = 0x113688u;

    // 0x113688: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x113688u;
    {
        const bool branch_taken_0x113688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113688u;
        // 0x11368c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113688) {
            ctx->pc = 0x1136C0u;
            return;
        }
    }
    ctx->pc = 0x113690u;
}
