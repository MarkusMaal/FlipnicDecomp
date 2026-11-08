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

// Function: entry_001119c4
// Address: 0x1119c4 - 0x1119d4
void entry_001119c4_0x1119c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001119c4_0x1119c4");
#endif

    ctx->pc = 0x1119c4u;

    // 0x1119c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1119c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1119c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1119c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1119cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1119CCu;
    {
        const bool branch_taken_0x1119cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1119D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1119CCu;
        // 0x1119d0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1119cc) {
            ctx->pc = 0x1119D8u;
            return;
        }
    }
    ctx->pc = 0x1119D4u;
}
