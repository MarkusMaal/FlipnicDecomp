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

// Function: entry_0019fcfc
// Address: 0x19fcfc - 0x19fd0c
void entry_0019fcfc_0x19fcfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fcfc_0x19fcfc");
#endif

    ctx->pc = 0x19fcfcu;

    // 0x19fcfc: 0x0  nop
    ctx->pc = 0x19fcfcu;
    // NOP
    // 0x19fd00: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x19fd00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x19fd04: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x19FD04u;
    {
        const bool branch_taken_0x19fd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FD04u;
        // 0x19fd08: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fd04) {
            ctx->pc = 0x19FCE4u;
            return;
        }
    }
    ctx->pc = 0x19FD0Cu;
}
