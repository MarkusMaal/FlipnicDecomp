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

// Function: entry_001df908
// Address: 0x1df908 - 0x1df918
void entry_001df908_0x1df908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001df908_0x1df908");
#endif

    ctx->pc = 0x1df908u;

    // 0x1df908: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df90c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DF90Cu;
    {
        const bool branch_taken_0x1df90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF90Cu;
        // 0x1df910: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df90c) {
            ctx->pc = 0x1DF9F0u;
            return;
        }
    }
    ctx->pc = 0x1DF914u;
    // 0x1df914: 0x0  nop
    ctx->pc = 0x1df914u;
    // NOP
    ctx->pc = 0x1df918u;
}
