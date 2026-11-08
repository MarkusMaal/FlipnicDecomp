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

// Function: caseD_a
// Address: 0x1ab480 - 0x1ab498
void caseD_a_0x1ab480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1ab480");
#endif

    ctx->pc = 0x1ab480u;

    // 0x1ab480: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1ab484: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1ab484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1ab488: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB488u;
    {
        const bool branch_taken_0x1ab488 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AB48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB488u;
        // 0x1ab48c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab488) {
            ctx->pc = 0x1AB498u;
            return;
        }
    }
    ctx->pc = 0x1AB490u;
    // 0x1ab490: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AB490u;
    {
        const bool branch_taken_0x1ab490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB490u;
        // 0x1ab494: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab490) {
            ctx->pc = 0x1AB4B0u;
            return;
        }
    }
    ctx->pc = 0x1AB498u;
}
