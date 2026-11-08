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

// Function: entry_00160cb4
// Address: 0x160cb4 - 0x160ccc
void entry_00160cb4_0x160cb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160cb4_0x160cb4");
#endif

    ctx->pc = 0x160cb4u;

    // 0x160cb4: 0x0  nop
    ctx->pc = 0x160cb4u;
    // NOP
    // 0x160cb8: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x160cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x160cbc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x160CBCu;
    {
        const bool branch_taken_0x160cbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x160CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160CBCu;
        // 0x160cc0: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160cbc) {
            ctx->pc = 0x160CF8u;
            return;
        }
    }
    ctx->pc = 0x160CC4u;
    // 0x160cc4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x160cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x160cc8: 0x43900  sll         $a3, $a0, 4
    ctx->pc = 0x160cc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x160cccu;
}
