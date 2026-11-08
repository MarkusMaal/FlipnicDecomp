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

// Function: entry_0017fe98
// Address: 0x17fe98 - 0x17fea4
void entry_0017fe98_0x17fe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fe98_0x17fe98");
#endif

    ctx->pc = 0x17fe98u;

    // 0x17fe98: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x17fe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17fe9c: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FE9Cu;
    {
        const bool branch_taken_0x17fe9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FE9Cu;
        // 0x17fea0: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fe9c) {
            ctx->pc = 0x17FE84u;
            return;
        }
    }
    ctx->pc = 0x17FEA4u;
}
