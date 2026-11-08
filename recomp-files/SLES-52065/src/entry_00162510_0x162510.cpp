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

// Function: entry_00162510
// Address: 0x162510 - 0x162528
void entry_00162510_0x162510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162510_0x162510");
#endif

    ctx->pc = 0x162510u;

    // 0x162510: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x162514: 0x24430002  addiu       $v1, $v0, 0x2
    ctx->pc = 0x162514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x162518: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x162518u;
    {
        const bool branch_taken_0x162518 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x16251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162518u;
        // 0x16251c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162518) {
            ctx->pc = 0x162528u;
            return;
        }
    }
    ctx->pc = 0x162520u;
    // 0x162520: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x162520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162524: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x162524u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x162528u;
}
