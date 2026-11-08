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

// Function: entry_0019c848
// Address: 0x19c848 - 0x19c858
void entry_0019c848_0x19c848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c848_0x19c848");
#endif

    ctx->pc = 0x19c848u;

    // 0x19c848: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C848u;
    {
        const bool branch_taken_0x19c848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C848u;
        // 0x19c84c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c848) {
            ctx->pc = 0x19C858u;
            return;
        }
    }
    ctx->pc = 0x19C850u;
    // 0x19c850: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19C850u;
    {
        const bool branch_taken_0x19c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C850u;
        // 0x19c854: 0xae43068c  sw          $v1, 0x68C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c850) {
            ctx->pc = 0x19C8ACu;
            return;
        }
    }
    ctx->pc = 0x19C858u;
}
