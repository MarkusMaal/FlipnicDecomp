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

// Function: entry_001c26f4
// Address: 0x1c26f4 - 0x1c2700
void entry_001c26f4_0x1c26f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c26f4_0x1c26f4");
#endif

    ctx->pc = 0x1c26f4u;

    // 0x1c26f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c26f8: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x1C26F8u;
    {
        const bool branch_taken_0x1c26f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26F8u;
        // 0x1c26fc: 0xae220248  sw          $v0, 0x248($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26f8) {
            ctx->pc = 0x1C2C70u;
            return;
        }
    }
    ctx->pc = 0x1C2700u;
}
