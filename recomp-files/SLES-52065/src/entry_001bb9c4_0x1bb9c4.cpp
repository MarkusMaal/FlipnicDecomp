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

// Function: entry_001bb9c4
// Address: 0x1bb9c4 - 0x1bb9dc
void entry_001bb9c4_0x1bb9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb9c4_0x1bb9c4");
#endif

    ctx->pc = 0x1bb9c4u;

    // 0x1bb9c4: 0x0  nop
    ctx->pc = 0x1bb9c4u;
    // NOP
    // 0x1bb9c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb9cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1bb9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1bb9d0: 0x1464ffdc  bne         $v1, $a0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BB9D0u;
    {
        const bool branch_taken_0x1bb9d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9D0u;
        // 0x1bb9d4: 0x24740008  addiu       $s4, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb9d0) {
            ctx->pc = 0x1BB944u;
            return;
        }
    }
    ctx->pc = 0x1BB9D8u;
    // 0x1bb9d8: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x1bb9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1bb9dcu;
}
