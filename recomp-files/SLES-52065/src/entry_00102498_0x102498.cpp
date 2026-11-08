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

// Function: entry_00102498
// Address: 0x102498 - 0x1024c4
void entry_00102498_0x102498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102498_0x102498");
#endif

    ctx->pc = 0x102498u;

label_102498:
    // 0x102498: 0x8f858214  lw          $a1, -0x7DEC($gp)
    ctx->pc = 0x102498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x10249c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1024a0: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x1024a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1024a4: 0x2843000a  slti        $v1, $v0, 0xA
    ctx->pc = 0x1024a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1024a8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1024a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1024ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1024acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1024b0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1024b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1024b4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1024b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1024b8: 0x24e703d0  addiu       $a3, $a3, 0x3D0
    ctx->pc = 0x1024b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 976));
    // 0x1024bc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1024BCu;
    {
        const bool branch_taken_0x1024bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024BCu;
        // 0x1024c0: 0xac85023c  sw          $a1, 0x23C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 572), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024bc) {
            ctx->pc = 0x102498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102498;
        }
    }
    ctx->pc = 0x1024C4u;
}
