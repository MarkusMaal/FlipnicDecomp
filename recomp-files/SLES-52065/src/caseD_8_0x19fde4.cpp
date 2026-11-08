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

// Function: caseD_8
// Address: 0x19fde4 - 0x19fdf0
void caseD_8_0x19fde4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x19fde4");
#endif

    ctx->pc = 0x19fde4u;

    // 0x19fde4: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x19fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x19fde8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x19FDE8u;
    {
        const bool branch_taken_0x19fde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FDE8u;
        // 0x19fdec: 0xac6628e4  sw          $a2, 0x28E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10468), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fde8) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FDF0u;
}
