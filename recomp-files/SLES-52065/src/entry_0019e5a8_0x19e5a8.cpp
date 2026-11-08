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

// Function: entry_0019e5a8
// Address: 0x19e5a8 - 0x19e5cc
void entry_0019e5a8_0x19e5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e5a8_0x19e5a8");
#endif

    switch (ctx->pc) {
        case 0x19e5c0u: goto label_19e5c0;
        default: break;
    }

    ctx->pc = 0x19e5a8u;

    // 0x19e5a8: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x19e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x19e5ac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x19e5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19e5b0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x19E5B0u;
    {
        const bool branch_taken_0x19e5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5B0u;
        // 0x19e5b4: 0x233a021  addu        $s4, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5b0) {
            ctx->pc = 0x19E570u;
            return;
        }
    }
    ctx->pc = 0x19E5B8u;
    // 0x19e5b8: 0xc063e14  jal         func_18F850
    ctx->pc = 0x19E5B8u;
    SET_GPR_U32(ctx, 31, 0x19E5C0u);
    ctx->pc = 0x19E5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5B8u;
    // 0x19e5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19E5B8u, 0x19E5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5C0u;
label_19e5c0:
    // 0x19e5c0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x19E5C0u;
    {
        const bool branch_taken_0x19e5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5c0) {
            ctx->pc = 0x19E778u;
            return;
        }
    }
    ctx->pc = 0x19E5C8u;
    // 0x19e5c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19e5ccu;
}
