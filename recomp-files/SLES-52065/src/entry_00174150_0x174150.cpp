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

// Function: entry_00174150
// Address: 0x174150 - 0x174164
void entry_00174150_0x174150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174150_0x174150");
#endif

    ctx->pc = 0x174150u;

    // 0x174150: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x174150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x174154: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x174154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x174158: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x174158u;
    {
        const bool branch_taken_0x174158 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x17415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174158u;
        // 0x17415c: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174158) {
            ctx->pc = 0x174164u;
            return;
        }
    }
    ctx->pc = 0x174160u;
    // 0x174160: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x174160u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x174164u;
}
