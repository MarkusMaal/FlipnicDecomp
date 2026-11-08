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

// Function: entry_001c6f94
// Address: 0x1c6f94 - 0x1c6fa0
void entry_001c6f94_0x1c6f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6f94_0x1c6f94");
#endif

    ctx->pc = 0x1c6f94u;

    // 0x1c6f94: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c6f98: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x1C6F98u;
    {
        const bool branch_taken_0x1c6f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6F98u;
        // 0x1c6f9c: 0xae020060  sw          $v0, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6f98) {
            ctx->pc = 0x1C7784u;
            return;
        }
    }
    ctx->pc = 0x1C6FA0u;
}
