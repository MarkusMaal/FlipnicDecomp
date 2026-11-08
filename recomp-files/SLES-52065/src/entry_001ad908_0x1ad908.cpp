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

// Function: entry_001ad908
// Address: 0x1ad908 - 0x1ad918
void entry_001ad908_0x1ad908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad908_0x1ad908");
#endif

    ctx->pc = 0x1ad908u;

    // 0x1ad908: 0x8e230800  lw          $v1, 0x800($s1)
    ctx->pc = 0x1ad908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2048)));
    // 0x1ad90c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ad90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ad910: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1AD910u;
    {
        const bool branch_taken_0x1ad910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD910u;
        // 0x1ad914: 0xae230800  sw          $v1, 0x800($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad910) {
            ctx->pc = 0x1ADAB0u;
            return;
        }
    }
    ctx->pc = 0x1AD918u;
}
