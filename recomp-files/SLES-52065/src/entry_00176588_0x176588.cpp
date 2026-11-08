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

// Function: entry_00176588
// Address: 0x176588 - 0x176590
void entry_00176588_0x176588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176588_0x176588");
#endif

    ctx->pc = 0x176588u;

    // 0x176588: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x176588u;
    {
        const bool branch_taken_0x176588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176588u;
        // 0x17658c: 0x306200ff  andi        $v0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x176588) {
            ctx->pc = 0x176618u;
            return;
        }
    }
    ctx->pc = 0x176590u;
}
