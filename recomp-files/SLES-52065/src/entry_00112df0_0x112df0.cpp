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

// Function: entry_00112df0
// Address: 0x112df0 - 0x112e0c
void entry_00112df0_0x112df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112df0_0x112df0");
#endif

    ctx->pc = 0x112df0u;

    // 0x112df0: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x112df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x112df4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x112df4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x112df8: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x112DF8u;
    {
        const bool branch_taken_0x112df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112df8) {
            ctx->pc = 0x112D8Cu;
            return;
        }
    }
    ctx->pc = 0x112E00u;
    // 0x112e00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x112e00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112e04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112E04u;
    {
        const bool branch_taken_0x112e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E04u;
        // 0x112e08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e04) {
            ctx->pc = 0x112E44u;
            return;
        }
    }
    ctx->pc = 0x112E0Cu;
}
