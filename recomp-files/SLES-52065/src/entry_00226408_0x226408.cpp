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

// Function: entry_00226408
// Address: 0x226408 - 0x226420
void entry_00226408_0x226408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226408_0x226408");
#endif

    ctx->pc = 0x226408u;

    // 0x226408: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x226408u;
    {
        const bool branch_taken_0x226408 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22640Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226408u;
        // 0x22640c: 0x74080  sll         $t0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226408) {
            ctx->pc = 0x226444u;
            return;
        }
    }
    ctx->pc = 0x226410u;
    // 0x226410: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x226410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x226414: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x226414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x226418: 0x24a566e0  addiu       $a1, $a1, 0x66E0
    ctx->pc = 0x226418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26336));
    // 0x22641c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x22641cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x226420u;
}
