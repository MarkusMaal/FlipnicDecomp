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

// Function: entry_00197dd8
// Address: 0x197dd8 - 0x197dfc
void entry_00197dd8_0x197dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197dd8_0x197dd8");
#endif

    switch (ctx->pc) {
        case 0x197de0u: goto label_197de0;
        default: break;
    }

    ctx->pc = 0x197dd8u;

    // 0x197dd8: 0xc057ff8  jal         func_15FFE0
    ctx->pc = 0x197DD8u;
    SET_GPR_U32(ctx, 31, 0x197DE0u);
    ctx->pc = 0x197DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197DD8u;
    // 0x197ddc: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FFE0u, 0x197DD8u, 0x197DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197DE0u;
label_197de0:
    // 0x197de0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x197de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x197de4: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x197de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x197de8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197DE8u;
    {
        const bool branch_taken_0x197de8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x197DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DE8u;
        // 0x197dec: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197de8) {
            ctx->pc = 0x197DFCu;
            return;
        }
    }
    ctx->pc = 0x197DF0u;
    // 0x197df0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197DF0u;
    {
        const bool branch_taken_0x197df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197DF0u;
        // 0x197df4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197df0) {
            ctx->pc = 0x197E14u;
            return;
        }
    }
    ctx->pc = 0x197DF8u;
    // 0x197df8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x197df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    ctx->pc = 0x197dfcu;
}
