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

// Function: entry_00127094
// Address: 0x127094 - 0x1270a8
void entry_00127094_0x127094(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127094_0x127094");
#endif

    ctx->pc = 0x127094u;

    // 0x127094: 0x0  nop
    ctx->pc = 0x127094u;
    // NOP
    // 0x127098: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x127098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x12709c: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x12709cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1270a0: 0x1440ff59  bnez        $v0, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x1270A0u;
    {
        const bool branch_taken_0x1270a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1270A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1270A0u;
        // 0x1270a4: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1270a0) {
            ctx->pc = 0x126E08u;
            return;
        }
    }
    ctx->pc = 0x1270A8u;
}
