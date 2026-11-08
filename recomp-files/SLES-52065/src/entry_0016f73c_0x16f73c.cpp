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

// Function: entry_0016f73c
// Address: 0x16f73c - 0x16f754
void entry_0016f73c_0x16f73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f73c_0x16f73c");
#endif

    ctx->pc = 0x16f73cu;

    // 0x16f73c: 0x0  nop
    ctx->pc = 0x16f73cu;
    // NOP
    // 0x16f740: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x16f740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16f744: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16F744u;
    {
        const bool branch_taken_0x16f744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F744u;
        // 0x16f748: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f744) {
            ctx->pc = 0x16F730u;
            return;
        }
    }
    ctx->pc = 0x16F74Cu;
    // 0x16f74c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16F74Cu;
    {
        const bool branch_taken_0x16f74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f74c) {
            ctx->pc = 0x16F76Cu;
            return;
        }
    }
    ctx->pc = 0x16F754u;
}
