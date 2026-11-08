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

// Function: entry_001eac0c
// Address: 0x1eac0c - 0x1eac30
void entry_001eac0c_0x1eac0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eac0c_0x1eac0c");
#endif

    ctx->pc = 0x1eac0cu;

    // 0x1eac0c: 0x0  nop
    ctx->pc = 0x1eac0cu;
    // NOP
    // 0x1eac10: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1eac14: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x1eac14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x1eac18: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1eac18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1eac1c: 0x90082b  sltu        $at, $a0, $s0
    ctx->pc = 0x1eac1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1eac20: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAC20u;
    {
        const bool branch_taken_0x1eac20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC20u;
        // 0x1eac24: 0x25090001  addiu       $t1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac20) {
            ctx->pc = 0x1EAC30u;
            return;
        }
    }
    ctx->pc = 0x1EAC28u;
    // 0x1eac28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAC28u;
    {
        const bool branch_taken_0x1eac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC28u;
        // 0x1eac2c: 0xe9082a  slt         $at, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac28) {
            ctx->pc = 0x1EAC3Cu;
            return;
        }
    }
    ctx->pc = 0x1EAC30u;
}
