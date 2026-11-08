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

// Function: entry_00110d28
// Address: 0x110d28 - 0x110d40
void entry_00110d28_0x110d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110d28_0x110d28");
#endif

    ctx->pc = 0x110d28u;

    // 0x110d28: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x110d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x110d2c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x110d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x110d30: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x110D30u;
    {
        const bool branch_taken_0x110d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D30u;
        // 0x110d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d30) {
            ctx->pc = 0x110CD0u;
            return;
        }
    }
    ctx->pc = 0x110D38u;
    // 0x110d38: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x110D38u;
    {
        const bool branch_taken_0x110d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110D38u;
        // 0x110d3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110d38) {
            ctx->pc = 0x110DB8u;
            return;
        }
    }
    ctx->pc = 0x110D40u;
}
