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

// Function: entry_0013d768
// Address: 0x13d768 - 0x13d778
void entry_0013d768_0x13d768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d768_0x13d768");
#endif

    ctx->pc = 0x13d768u;

    // 0x13d768: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13d76c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13D76Cu;
    {
        const bool branch_taken_0x13d76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D76Cu;
        // 0x13d770: 0xae220184  sw          $v0, 0x184($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d76c) {
            ctx->pc = 0x13D77Cu;
            return;
        }
    }
    ctx->pc = 0x13D774u;
    // 0x13d774: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13d774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x13d778u;
}
