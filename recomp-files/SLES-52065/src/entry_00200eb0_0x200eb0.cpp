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

// Function: entry_00200eb0
// Address: 0x200eb0 - 0x200ed8
void entry_00200eb0_0x200eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200eb0_0x200eb0");
#endif

    ctx->pc = 0x200eb0u;

    // 0x200eb0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200eb4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x200eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x200eb8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200ebc: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x200ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x200ec0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200ec4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x200ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x200ec8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x200ecc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x200eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x200ed0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x200ED0u;
    {
        const bool branch_taken_0x200ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ED0u;
        // 0x200ed4: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ed0) {
            ctx->pc = 0x201008u;
            return;
        }
    }
    ctx->pc = 0x200ED8u;
}
