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

// Function: entry_00175974
// Address: 0x175974 - 0x175990
void entry_00175974_0x175974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175974_0x175974");
#endif

    ctx->pc = 0x175974u;

    // 0x175974: 0x0  nop
    ctx->pc = 0x175974u;
    // NOP
    // 0x175978: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x175978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x17597c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x17597cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175980: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x175980u;
    {
        const bool branch_taken_0x175980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175980) {
            ctx->pc = 0x175808u;
            return;
        }
    }
    ctx->pc = 0x175988u;
    // 0x175988: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x175988u;
    {
        const bool branch_taken_0x175988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175988u;
        // 0x17598c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175988) {
            ctx->pc = 0x175AFCu;
            return;
        }
    }
    ctx->pc = 0x175990u;
}
