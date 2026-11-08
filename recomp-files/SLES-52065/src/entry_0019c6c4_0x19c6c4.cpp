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

// Function: entry_0019c6c4
// Address: 0x19c6c4 - 0x19c6d0
void entry_0019c6c4_0x19c6c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c6c4_0x19c6c4");
#endif

    ctx->pc = 0x19c6c4u;

    // 0x19c6c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x19c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19c6c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x19C6C8u;
    {
        const bool branch_taken_0x19c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C6C8u;
        // 0x19c6cc: 0xae030900  sw          $v1, 0x900($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2304), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6c8) {
            ctx->pc = 0x19C720u;
            return;
        }
    }
    ctx->pc = 0x19C6D0u;
}
