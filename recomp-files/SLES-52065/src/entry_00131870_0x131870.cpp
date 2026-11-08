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

// Function: entry_00131870
// Address: 0x131870 - 0x13188c
void entry_00131870_0x131870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131870_0x131870");
#endif

    switch (ctx->pc) {
        case 0x13187cu: goto label_13187c;
        default: break;
    }

    ctx->pc = 0x131870u;

    // 0x131870: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x131870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x131874: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x131874u;
    SET_GPR_U32(ctx, 31, 0x13187Cu);
    ctx->pc = 0x131878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131874u;
    // 0x131878: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x131874u, 0x13187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13187Cu;
label_13187c:
    // 0x13187c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13187Cu;
    {
        const bool branch_taken_0x13187c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13187Cu;
        // 0x131880: 0x26040058  addiu       $a0, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13187c) {
            ctx->pc = 0x13188Cu;
            return;
        }
    }
    ctx->pc = 0x131884u;
    // 0x131884: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x131884u;
    {
        const bool branch_taken_0x131884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131884u;
        // 0x131888: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131884) {
            ctx->pc = 0x131924u;
            return;
        }
    }
    ctx->pc = 0x13188Cu;
}
