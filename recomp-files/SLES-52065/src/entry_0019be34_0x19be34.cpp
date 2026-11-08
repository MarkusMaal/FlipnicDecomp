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

// Function: entry_0019be34
// Address: 0x19be34 - 0x19be58
void entry_0019be34_0x19be34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019be34_0x19be34");
#endif

    ctx->pc = 0x19be34u;

    // 0x19be34: 0x0  nop
    ctx->pc = 0x19be34u;
    // NOP
    // 0x19be38: 0x8e220824  lw          $v0, 0x824($s1)
    ctx->pc = 0x19be38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2084)));
    // 0x19be3c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19be3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19be40: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19BE40u;
    {
        const bool branch_taken_0x19be40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE40u;
        // 0x19be44: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be40) {
            ctx->pc = 0x19BE1Cu;
            return;
        }
    }
    ctx->pc = 0x19BE48u;
    // 0x19be48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19be48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19be4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19BE4Cu;
    {
        const bool branch_taken_0x19be4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BE4Cu;
        // 0x19be50: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be4c) {
            ctx->pc = 0x19BE70u;
            return;
        }
    }
    ctx->pc = 0x19BE54u;
    // 0x19be54: 0x233a021  addu        $s4, $s1, $s3
    ctx->pc = 0x19be54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    ctx->pc = 0x19be58u;
}
