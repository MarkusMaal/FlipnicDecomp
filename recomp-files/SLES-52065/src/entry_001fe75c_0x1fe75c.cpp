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

// Function: entry_001fe75c
// Address: 0x1fe75c - 0x1fe764
void entry_001fe75c_0x1fe75c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe75c_0x1fe75c");
#endif

    ctx->pc = 0x1fe75cu;

    // 0x1fe75c: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FE75Cu;
    {
        const bool branch_taken_0x1fe75c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1FE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE75Cu;
        // 0x1fe760: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe75c) {
            ctx->pc = 0x1FE740u;
            return;
        }
    }
    ctx->pc = 0x1FE764u;
}
