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

// Function: entry_001e3f10
// Address: 0x1e3f10 - 0x1e3f28
void entry_001e3f10_0x1e3f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3f10_0x1e3f10");
#endif

    ctx->pc = 0x1e3f10u;

    // 0x1e3f10: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1e3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e3f14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e3f18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1e3f18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3f1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e3f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e3f20: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1E3F20u;
    {
        const bool branch_taken_0x1e3f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3F20u;
        // 0x1e3f24: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f20) {
            ctx->pc = 0x1E3FDCu;
            return;
        }
    }
    ctx->pc = 0x1E3F28u;
}
