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

// Function: entry_001c6170
// Address: 0x1c6170 - 0x1c617c
void entry_001c6170_0x1c6170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6170_0x1c6170");
#endif

    ctx->pc = 0x1c6170u;

    // 0x1c6170: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6170u;
    {
        const bool branch_taken_0x1c6170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6170u;
        // 0x1c6174: 0x3c010023  lui         $at, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6170) {
            ctx->pc = 0x1C617Cu;
            return;
        }
    }
    ctx->pc = 0x1C6178u;
    // 0x1c6178: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x1c6178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
    ctx->pc = 0x1c617cu;
}
