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

// Function: entry_00106f34
// Address: 0x106f34 - 0x106f44
void entry_00106f34_0x106f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106f34_0x106f34");
#endif

    ctx->pc = 0x106f34u;

    // 0x106f34: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106F34u;
    {
        const bool branch_taken_0x106f34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106F34u;
        // 0x106f38: 0x3c020023  lui         $v0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106f34) {
            ctx->pc = 0x106F44u;
            return;
        }
    }
    ctx->pc = 0x106F3Cu;
    // 0x106f3c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x106f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x106f40: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x106f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x106f44u;
}
