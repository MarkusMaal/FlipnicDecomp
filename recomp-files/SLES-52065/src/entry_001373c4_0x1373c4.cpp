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

// Function: entry_001373c4
// Address: 0x1373c4 - 0x1373e0
void entry_001373c4_0x1373c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001373c4_0x1373c4");
#endif

    switch (ctx->pc) {
        case 0x1373ccu: goto label_1373cc;
        default: break;
    }

    ctx->pc = 0x1373c4u;

    // 0x1373c4: 0xc0802aa  jal         func_200AA8
    ctx->pc = 0x1373C4u;
    SET_GPR_U32(ctx, 31, 0x1373CCu);
    ctx->pc = 0x200AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200AA8u, 0x1373C4u, 0x1373CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1373CCu;
label_1373cc:
    // 0x1373cc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1373CCu;
    {
        const bool branch_taken_0x1373cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1373D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373CCu;
        // 0x1373d0: 0x3045003f  andi        $a1, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373cc) {
            ctx->pc = 0x1373E0u;
            return;
        }
    }
    ctx->pc = 0x1373D4u;
    // 0x1373d4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1373D4u;
    {
        const bool branch_taken_0x1373d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1373d4) {
            ctx->pc = 0x1373E0u;
            return;
        }
    }
    ctx->pc = 0x1373DCu;
    // 0x1373dc: 0x24a5ffc0  addiu       $a1, $a1, -0x40
    ctx->pc = 0x1373dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967232));
    ctx->pc = 0x1373e0u;
}
