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

// Function: entry_00175c84
// Address: 0x175c84 - 0x175ca0
void entry_00175c84_0x175c84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175c84_0x175c84");
#endif

    ctx->pc = 0x175c84u;

    // 0x175c84: 0x0  nop
    ctx->pc = 0x175c84u;
    // NOP
    // 0x175c88: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x175c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x175c8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175c90: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175C90u;
    {
        const bool branch_taken_0x175c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175c90) {
            ctx->pc = 0x175B18u;
            return;
        }
    }
    ctx->pc = 0x175C98u;
    // 0x175c98: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175C98u;
    {
        const bool branch_taken_0x175c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175C98u;
        // 0x175c9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175c98) {
            ctx->pc = 0x175E0Cu;
            return;
        }
    }
    ctx->pc = 0x175CA0u;
}
