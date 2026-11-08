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

// Function: entry_0012c678
// Address: 0x12c678 - 0x12c68c
void entry_0012c678_0x12c678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c678_0x12c678");
#endif

    ctx->pc = 0x12c678u;

    // 0x12c678: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C678u;
    {
        const bool branch_taken_0x12c678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x12C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C678u;
        // 0x12c67c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c678) {
            ctx->pc = 0x12C68Cu;
            return;
        }
    }
    ctx->pc = 0x12C680u;
    // 0x12c680: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12c680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c684: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x12C684u;
    {
        const bool branch_taken_0x12c684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C684u;
        // 0x12c688: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c684) {
            ctx->pc = 0x12C6C4u;
            return;
        }
    }
    ctx->pc = 0x12C68Cu;
}
