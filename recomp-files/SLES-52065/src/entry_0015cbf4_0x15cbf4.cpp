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

// Function: entry_0015cbf4
// Address: 0x15cbf4 - 0x15cc0c
void entry_0015cbf4_0x15cbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cbf4_0x15cbf4");
#endif

    ctx->pc = 0x15cbf4u;

    // 0x15cbf4: 0x0  nop
    ctx->pc = 0x15cbf4u;
    // NOP
    // 0x15cbf8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15cbf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15cbfc: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x15cbfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15cc00: 0x26d60050  addiu       $s6, $s6, 0x50
    ctx->pc = 0x15cc00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 80));
    // 0x15cc04: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x15CC04u;
    {
        const bool branch_taken_0x15cc04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC04u;
        // 0x15cc08: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc04) {
            ctx->pc = 0x15CBA4u;
            return;
        }
    }
    ctx->pc = 0x15CC0Cu;
}
