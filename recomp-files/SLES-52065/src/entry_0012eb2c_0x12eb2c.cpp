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

// Function: entry_0012eb2c
// Address: 0x12eb2c - 0x12eb4c
void entry_0012eb2c_0x12eb2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eb2c_0x12eb2c");
#endif

    ctx->pc = 0x12eb2cu;

    // 0x12eb2c: 0x0  nop
    ctx->pc = 0x12eb2cu;
    // NOP
    // 0x12eb30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x12eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eb34: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x12eb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x12eb38: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x12eb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x12eb3c: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x12eb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12eb40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12eb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12eb44: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12EB44u;
    {
        const bool branch_taken_0x12eb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EB44u;
        // 0x12eb48: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb44) {
            ctx->pc = 0x12EAE4u;
            return;
        }
    }
    ctx->pc = 0x12EB4Cu;
}
