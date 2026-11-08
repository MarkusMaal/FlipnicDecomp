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

// Function: entry_0018b77c
// Address: 0x18b77c - 0x18b7a0
void entry_0018b77c_0x18b77c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b77c_0x18b77c");
#endif

    switch (ctx->pc) {
        case 0x18b790u: goto label_18b790;
        default: break;
    }

    ctx->pc = 0x18b77cu;

    // 0x18b77c: 0x0  nop
    ctx->pc = 0x18b77cu;
    // NOP
    // 0x18b780: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18b780u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18b784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18b784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b788: 0xc06cf0c  jal         func_1B3C30
    ctx->pc = 0x18B788u;
    SET_GPR_U32(ctx, 31, 0x18B790u);
    ctx->pc = 0x18B78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B788u;
    // 0x18b78c: 0x24a5fd10  addiu       $a1, $a1, -0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x18B788u, 0x18B790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B790u;
label_18b790:
    // 0x18b790: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B790u;
    {
        const bool branch_taken_0x18b790 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18b790) {
            ctx->pc = 0x18B7A0u;
            return;
        }
    }
    ctx->pc = 0x18B798u;
    // 0x18b798: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x18B798u;
    {
        const bool branch_taken_0x18b798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B798u;
        // 0x18b79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b798) {
            ctx->pc = 0x18B870u;
            return;
        }
    }
    ctx->pc = 0x18B7A0u;
}
