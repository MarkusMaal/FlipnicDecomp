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

// Function: entry_001e5e7c
// Address: 0x1e5e7c - 0x1e5ea4
void entry_001e5e7c_0x1e5e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5e7c_0x1e5e7c");
#endif

    switch (ctx->pc) {
        case 0x1e5e84u: goto label_1e5e84;
        default: break;
    }

    ctx->pc = 0x1e5e7cu;

    // 0x1e5e7c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E5E7Cu;
    SET_GPR_U32(ctx, 31, 0x1E5E84u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E5E7Cu, 0x1E5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5E84u;
label_1e5e84:
    // 0x1e5e84: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5E84u;
    {
        const bool branch_taken_0x1e5e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E84u;
        // 0x1e5e88: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e84) {
            ctx->pc = 0x1E5EA4u;
            return;
        }
    }
    ctx->pc = 0x1E5E8Cu;
    // 0x1e5e8c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e5e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e5e90: 0x24848850  addiu       $a0, $a0, -0x77B0
    ctx->pc = 0x1e5e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936656));
    // 0x1e5e94: 0x2463c2a0  addiu       $v1, $v1, -0x3D60
    ctx->pc = 0x1e5e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951584));
    // 0x1e5e98: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e5e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1e5e9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e5ea0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e5ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e5ea4u;
}
