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

// Function: entry_001fc7b0
// Address: 0x1fc7b0 - 0x1fc7cc
void entry_001fc7b0_0x1fc7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fc7b0_0x1fc7b0");
#endif

    switch (ctx->pc) {
        case 0x1fc7c8u: goto label_1fc7c8;
        default: break;
    }

    ctx->pc = 0x1fc7b0u;

    // 0x1fc7b0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1fc7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1fc7b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC7B4u;
    {
        const bool branch_taken_0x1fc7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B4u;
        // 0x1fc7b8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7b4) {
            ctx->pc = 0x1FC7CCu;
            return;
        }
    }
    ctx->pc = 0x1FC7BCu;
    // 0x1fc7bc: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1fc7bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fc7c0: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1FC7C0u;
    SET_GPR_U32(ctx, 31, 0x1FC7C8u);
    ctx->pc = 0x1FC7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7C0u;
    // 0x1fc7c4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1FC7C0u, 0x1FC7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7C8u;
label_1fc7c8:
    // 0x1fc7c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1fc7c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1fc7ccu;
}
