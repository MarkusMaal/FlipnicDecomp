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

// Function: entry_00204044
// Address: 0x204044 - 0x204054
void entry_00204044_0x204044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204044_0x204044");
#endif

    ctx->pc = 0x204044u;

    // 0x204044: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204044u;
    {
        const bool branch_taken_0x204044 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x204048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204044u;
        // 0x204048: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204044) {
            ctx->pc = 0x204054u;
            return;
        }
    }
    ctx->pc = 0x20404Cu;
    // 0x20404c: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x20404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x204050: 0x45a823  subu        $s5, $v0, $a1
    ctx->pc = 0x204050u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->pc = 0x204054u;
}
