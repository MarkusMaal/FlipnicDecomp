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

// Function: entry_0015ce2c
// Address: 0x15ce2c - 0x15ce44
void entry_0015ce2c_0x15ce2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ce2c_0x15ce2c");
#endif

    ctx->pc = 0x15ce2cu;

    // 0x15ce2c: 0x0  nop
    ctx->pc = 0x15ce2cu;
    // NOP
    // 0x15ce30: 0x92a3002e  lbu         $v1, 0x2E($s5)
    ctx->pc = 0x15ce30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 46)));
    // 0x15ce34: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15CE34u;
    {
        const bool branch_taken_0x15ce34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE34u;
        // 0x15ce38: 0x292082a  slt         $at, $s4, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce34) {
            ctx->pc = 0x15CE88u;
            return;
        }
    }
    ctx->pc = 0x15CE3Cu;
    // 0x15ce3c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x15CE3Cu;
    {
        const bool branch_taken_0x15ce3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CE3Cu;
        // 0x15ce40: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce3c) {
            ctx->pc = 0x15CE88u;
            return;
        }
    }
    ctx->pc = 0x15CE44u;
}
