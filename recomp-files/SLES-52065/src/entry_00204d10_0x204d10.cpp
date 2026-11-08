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

// Function: entry_00204d10
// Address: 0x204d10 - 0x204d28
void entry_00204d10_0x204d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204d10_0x204d10");
#endif

    ctx->pc = 0x204d10u;

    // 0x204d10: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x204d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x204d14: 0x1a000039  blez        $s0, . + 4 + (0x39 << 2)
    ctx->pc = 0x204D14u;
    {
        const bool branch_taken_0x204d14 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x204D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D14u;
        // 0x204d18: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d14) {
            ctx->pc = 0x204DFCu;
            return;
        }
    }
    ctx->pc = 0x204D1Cu;
    // 0x204d1c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x204D1Cu;
    {
        const bool branch_taken_0x204d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204D1Cu;
        // 0x204d20: 0x3c160022  lui         $s6, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d1c) {
            ctx->pc = 0x204D88u;
            return;
        }
    }
    ctx->pc = 0x204D24u;
    // 0x204d24: 0x0  nop
    ctx->pc = 0x204d24u;
    // NOP
    ctx->pc = 0x204d28u;
}
