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

// Function: entry_001e5f5c
// Address: 0x1e5f5c - 0x1e5f84
void entry_001e5f5c_0x1e5f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5f5c_0x1e5f5c");
#endif

    switch (ctx->pc) {
        case 0x1e5f64u: goto label_1e5f64;
        default: break;
    }

    ctx->pc = 0x1e5f5cu;

    // 0x1e5f5c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1E5F5Cu;
    SET_GPR_U32(ctx, 31, 0x1E5F64u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1E5F5Cu, 0x1E5F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5F64u;
label_1e5f64:
    // 0x1e5f64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5F64u;
    {
        const bool branch_taken_0x1e5f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F64u;
        // 0x1e5f68: 0x3c040023  lui         $a0, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f64) {
            ctx->pc = 0x1E5F84u;
            return;
        }
    }
    ctx->pc = 0x1E5F6Cu;
    // 0x1e5f6c: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1e5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1e5f70: 0x24848850  addiu       $a0, $a0, -0x77B0
    ctx->pc = 0x1e5f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936656));
    // 0x1e5f74: 0x2463c270  addiu       $v1, $v1, -0x3D90
    ctx->pc = 0x1e5f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951536));
    // 0x1e5f78: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1e5f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1e5f7c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e5f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e5f80: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e5f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1e5f84u;
}
