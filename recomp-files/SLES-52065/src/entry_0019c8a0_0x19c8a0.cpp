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

// Function: entry_0019c8a0
// Address: 0x19c8a0 - 0x19c8ac
void entry_0019c8a0_0x19c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c8a0_0x19c8a0");
#endif

    ctx->pc = 0x19c8a0u;

    // 0x19c8a0: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C8A0u;
    {
        const bool branch_taken_0x19c8a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8A0u;
        // 0x19c8a4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8a0) {
            ctx->pc = 0x19C8ACu;
            return;
        }
    }
    ctx->pc = 0x19C8A8u;
    // 0x19c8a8: 0xae43068c  sw          $v1, 0x68C($s2)
    ctx->pc = 0x19c8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1676), GPR_U32(ctx, 3));
    ctx->pc = 0x19c8acu;
}
