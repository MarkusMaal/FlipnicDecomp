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

// Function: entry_001e48f4
// Address: 0x1e48f4 - 0x1e4904
void entry_001e48f4_0x1e48f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e48f4_0x1e48f4");
#endif

    ctx->pc = 0x1e48f4u;

    // 0x1e48f4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E48F4u;
    {
        const bool branch_taken_0x1e48f4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1E48F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48F4u;
        // 0x1e48f8: 0x14203c  dsll32      $a0, $s4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e48f4) {
            ctx->pc = 0x1E4904u;
            return;
        }
    }
    ctx->pc = 0x1E48FCu;
    // 0x1e48fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1e48fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4900: 0x14203c  dsll32      $a0, $s4, 0
    ctx->pc = 0x1e4900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) << (32 + 0));
    ctx->pc = 0x1e4904u;
}
