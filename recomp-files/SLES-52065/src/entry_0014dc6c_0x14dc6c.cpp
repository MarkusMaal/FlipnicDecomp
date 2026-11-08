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

// Function: entry_0014dc6c
// Address: 0x14dc6c - 0x14dc8c
void entry_0014dc6c_0x14dc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dc6c_0x14dc6c");
#endif

    ctx->pc = 0x14dc6cu;

    // 0x14dc6c: 0x0  nop
    ctx->pc = 0x14dc6cu;
    // NOP
    // 0x14dc70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14dc74: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x14dc74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x14dc78: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14dc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x14dc7c: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x14dc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x14dc80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14dc84: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x14DC84u;
    {
        const bool branch_taken_0x14dc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DC84u;
        // 0x14dc88: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dc84) {
            ctx->pc = 0x14DC5Cu;
            return;
        }
    }
    ctx->pc = 0x14DC8Cu;
}
