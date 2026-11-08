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

// Function: entry_002008fc
// Address: 0x2008fc - 0x200918
void entry_002008fc_0x2008fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002008fc_0x2008fc");
#endif

    ctx->pc = 0x2008fcu;

    // 0x2008fc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2008FCu;
    {
        const bool branch_taken_0x2008fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x200900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2008FCu;
        // 0x200900: 0x24a2fbcd  addiu       $v0, $a1, -0x433 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2008fc) {
            ctx->pc = 0x200918u;
            return;
        }
    }
    ctx->pc = 0x200904u;
    // 0x200904: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x200904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x200908: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x200908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x20090c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x20090cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x200910: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x200910u;
    {
        const bool branch_taken_0x200910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200910u;
        // 0x200914: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200910) {
            ctx->pc = 0x200938u;
            return;
        }
    }
    ctx->pc = 0x200918u;
}
