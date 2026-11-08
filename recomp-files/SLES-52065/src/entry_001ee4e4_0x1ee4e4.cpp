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

// Function: entry_001ee4e4
// Address: 0x1ee4e4 - 0x1ee4ec
void entry_001ee4e4_0x1ee4e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee4e4_0x1ee4e4");
#endif

    ctx->pc = 0x1ee4e4u;

    // 0x1ee4e4: 0x54a0fff4  bnel        $a1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1EE4E4u;
    {
        const bool branch_taken_0x1ee4e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4e4) {
            ctx->pc = 0x1EE4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EE4E4u;
            // 0x1ee4e8: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE4B8u;
            return;
        }
    }
    ctx->pc = 0x1EE4ECu;
}
