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

// Function: entry_0016f760
// Address: 0x16f760 - 0x16f76c
void entry_0016f760_0x16f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f760_0x16f760");
#endif

    ctx->pc = 0x16f760u;

    // 0x16f760: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x16f760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16f764: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x16F764u;
    {
        const bool branch_taken_0x16f764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F764u;
        // 0x16f768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f764) {
            ctx->pc = 0x16F694u;
            return;
        }
    }
    ctx->pc = 0x16F76Cu;
}
