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

// Function: entry_00133e14
// Address: 0x133e14 - 0x133e30
void entry_00133e14_0x133e14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133e14_0x133e14");
#endif

    ctx->pc = 0x133e14u;

    // 0x133e14: 0x8fa202f0  lw          $v0, 0x2F0($sp)
    ctx->pc = 0x133e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x133e18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133E18u;
    {
        const bool branch_taken_0x133e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133E18u;
        // 0x133e1c: 0x26830010  addiu       $v1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133e18) {
            ctx->pc = 0x133E30u;
            return;
        }
    }
    ctx->pc = 0x133E20u;
    // 0x133e20: 0x26820054  addiu       $v0, $s4, 0x54
    ctx->pc = 0x133e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 84));
    // 0x133e24: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x133e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x133e28: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x133e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x133e2c: 0xae54001c  sw          $s4, 0x1C($s2)
    ctx->pc = 0x133e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 20));
    ctx->pc = 0x133e30u;
}
