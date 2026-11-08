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

// Function: entry_0010bb5c
// Address: 0x10bb5c - 0x10bb6c
void entry_0010bb5c_0x10bb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010bb5c_0x10bb5c");
#endif

    ctx->pc = 0x10bb5cu;

    // 0x10bb5c: 0x0  nop
    ctx->pc = 0x10bb5cu;
    // NOP
    // 0x10bb60: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x10bb60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x10bb64: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x10BB64u;
    {
        const bool branch_taken_0x10bb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB64u;
        // 0x10bb68: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb64) {
            ctx->pc = 0x10BB38u;
            return;
        }
    }
    ctx->pc = 0x10BB6Cu;
}
