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

// Function: entry_001439dc
// Address: 0x1439dc - 0x1439fc
void entry_001439dc_0x1439dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001439dc_0x1439dc");
#endif

    ctx->pc = 0x1439dcu;

    // 0x1439dc: 0x0  nop
    ctx->pc = 0x1439dcu;
    // NOP
    // 0x1439e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1439e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1439e4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1439e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1439e8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1439e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1439ec: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x1439ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1439f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1439f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1439f4: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1439F4u;
    {
        const bool branch_taken_0x1439f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1439F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439F4u;
        // 0x1439f8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439f4) {
            ctx->pc = 0x1439B4u;
            return;
        }
    }
    ctx->pc = 0x1439FCu;
}
