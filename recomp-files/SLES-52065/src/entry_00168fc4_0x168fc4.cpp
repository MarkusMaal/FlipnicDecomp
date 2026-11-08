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

// Function: entry_00168fc4
// Address: 0x168fc4 - 0x168fe0
void entry_00168fc4_0x168fc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168fc4_0x168fc4");
#endif

    ctx->pc = 0x168fc4u;

    // 0x168fc4: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x168fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x168fc8: 0x82082a  slt         $at, $a0, $v0
    ctx->pc = 0x168fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x168fcc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x168FCCu;
    {
        const bool branch_taken_0x168fcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x168fcc) {
            ctx->pc = 0x168FE0u;
            return;
        }
    }
    ctx->pc = 0x168FD4u;
    // 0x168fd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x168fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x168fd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x168FD8u;
    {
        const bool branch_taken_0x168fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD8u;
        // 0x168fdc: 0xae020240  sw          $v0, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fd8) {
            ctx->pc = 0x169008u;
            return;
        }
    }
    ctx->pc = 0x168FE0u;
}
