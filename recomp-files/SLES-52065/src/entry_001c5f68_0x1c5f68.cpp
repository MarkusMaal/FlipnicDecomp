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

// Function: entry_001c5f68
// Address: 0x1c5f68 - 0x1c5f7c
void entry_001c5f68_0x1c5f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5f68_0x1c5f68");
#endif

    ctx->pc = 0x1c5f68u;

    // 0x1c5f68: 0xa242006d  sb          $v0, 0x6D($s2)
    ctx->pc = 0x1c5f68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 109), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c5f6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c5f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c5f70: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x1c5f70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x1c5f74: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C5F74u;
    {
        const bool branch_taken_0x1c5f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5F74u;
        // 0x1c5f78: 0xae400074  sw          $zero, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5f74) {
            ctx->pc = 0x1C5FE8u;
            return;
        }
    }
    ctx->pc = 0x1C5F7Cu;
}
