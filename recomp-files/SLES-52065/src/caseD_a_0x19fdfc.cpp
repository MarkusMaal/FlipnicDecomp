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

// Function: caseD_a
// Address: 0x19fdfc - 0x19fe14
void caseD_a_0x19fdfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x19fdfc");
#endif

    ctx->pc = 0x19fdfcu;

    // 0x19fdfc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FDFCu;
    {
        const bool branch_taken_0x19fdfc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fdfc) {
            ctx->pc = 0x19FE14u;
            return;
        }
    }
    ctx->pc = 0x19FE04u;
    // 0x19fe04: 0x8f838214  lw          $v1, -0x7DEC($gp)
    ctx->pc = 0x19fe04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935060)));
    // 0x19fe08: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x19fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x19fe0c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19FE0Cu;
    {
        const bool branch_taken_0x19fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FE0Cu;
        // 0x19fe10: 0xac6002dc  sw          $zero, 0x2DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fe0c) {
            ctx->pc = 0x19FE6Cu;
            return;
        }
    }
    ctx->pc = 0x19FE14u;
}
