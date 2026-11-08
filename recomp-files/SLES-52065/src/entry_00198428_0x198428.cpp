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

// Function: entry_00198428
// Address: 0x198428 - 0x198440
void entry_00198428_0x198428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198428_0x198428");
#endif

    ctx->pc = 0x198428u;

    // 0x198428: 0x8ea30678  lw          $v1, 0x678($s5)
    ctx->pc = 0x198428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
    // 0x19842c: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x19842cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198430: 0x1460ff8c  bnez        $v1, . + 4 + (-0x74 << 2)
    ctx->pc = 0x198430u;
    {
        const bool branch_taken_0x198430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198430u;
        // 0x198434: 0x2b61821  addu        $v1, $s5, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198430) {
            ctx->pc = 0x198264u;
            return;
        }
    }
    ctx->pc = 0x198438u;
    // 0x198438: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x198438u;
    {
        const bool branch_taken_0x198438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198438) {
            ctx->pc = 0x198464u;
            return;
        }
    }
    ctx->pc = 0x198440u;
}
