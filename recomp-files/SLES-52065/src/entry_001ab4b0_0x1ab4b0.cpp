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

// Function: entry_001ab4b0
// Address: 0x1ab4b0 - 0x1ab4e8
void entry_001ab4b0_0x1ab4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab4b0_0x1ab4b0");
#endif

    switch (ctx->pc) {
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4e0u: goto label_1ab4e0;
        default: break;
    }

    ctx->pc = 0x1ab4b0u;

    // 0x1ab4b0: 0xc055c40  jal         func_157100
    ctx->pc = 0x1AB4B0u;
    SET_GPR_U32(ctx, 31, 0x1AB4B8u);
    ctx->pc = 0x157100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157100u, 0x1AB4B0u, 0x1AB4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4B8u;
label_1ab4b8:
    // 0x1ab4b8: 0x8e8306e0  lw          $v1, 0x6E0($s4)
    ctx->pc = 0x1ab4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1760)));
    // 0x1ab4bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ab4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ab4c0: 0x1c600070  bgtz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x1AB4C0u;
    {
        const bool branch_taken_0x1ab4c0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1AB4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB4C0u;
        // 0x1ab4c4: 0xae8306e0  sw          $v1, 0x6E0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1760), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4c0) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB4C8u;
    // 0x1ab4c8: 0x8e8206c8  lw          $v0, 0x6C8($s4)
    ctx->pc = 0x1ab4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1736)));
    // 0x1ab4cc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ab4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab4d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ab4d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ab4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ab4d8: 0xc063e08  jal         func_18F820
    ctx->pc = 0x1AB4D8u;
    SET_GPR_U32(ctx, 31, 0x1AB4E0u);
    ctx->pc = 0x1AB4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB4D8u;
    // 0x1ab4dc: 0xae8206cc  sw          $v0, 0x6CC($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 1740), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x1AB4D8u, 0x1AB4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB4E0u;
label_1ab4e0:
    // 0x1ab4e0: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1AB4E0u;
    {
        const bool branch_taken_0x1ab4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab4e0) {
            ctx->pc = 0x1AB684u;
            return;
        }
    }
    ctx->pc = 0x1AB4E8u;
}
