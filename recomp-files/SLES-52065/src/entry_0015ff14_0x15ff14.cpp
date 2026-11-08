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

// Function: entry_0015ff14
// Address: 0x15ff14 - 0x15ff2c
void entry_0015ff14_0x15ff14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ff14_0x15ff14");
#endif

    ctx->pc = 0x15ff14u;

    // 0x15ff14: 0x0  nop
    ctx->pc = 0x15ff14u;
    // NOP
    // 0x15ff18: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x15ff18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x15ff1c: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15FF1Cu;
    {
        const bool branch_taken_0x15ff1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF1Cu;
        // 0x15ff20: 0x21900  sll         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff1c) {
            ctx->pc = 0x15FEE0u;
            return;
        }
    }
    ctx->pc = 0x15FF24u;
    // 0x15ff24: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15FF24u;
    {
        const bool branch_taken_0x15ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF24u;
        // 0x15ff28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff24) {
            ctx->pc = 0x15FFD4u;
            return;
        }
    }
    ctx->pc = 0x15FF2Cu;
}
