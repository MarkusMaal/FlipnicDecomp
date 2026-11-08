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

// Function: entry_0015db28
// Address: 0x15db28 - 0x15db34
void entry_0015db28_0x15db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015db28_0x15db28");
#endif

    ctx->pc = 0x15db28u;

    // 0x15db28: 0x1b0082a  slt         $at, $t5, $s0
    ctx->pc = 0x15db28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x15db2c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x15DB2Cu;
    {
        const bool branch_taken_0x15db2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DB2Cu;
        // 0x15db30: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15db2c) {
            ctx->pc = 0x15DB78u;
            return;
        }
    }
    ctx->pc = 0x15DB34u;
}
