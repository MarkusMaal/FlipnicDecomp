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

// Function: entry_001e1e88
// Address: 0x1e1e88 - 0x1e1ec0
void entry_001e1e88_0x1e1e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1e88_0x1e1e88");
#endif

    switch (ctx->pc) {
        case 0x1e1ea8u: goto label_1e1ea8;
        default: break;
    }

    ctx->pc = 0x1e1e88u;

    // 0x1e1e88: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e1e8c: 0x2484b760  addiu       $a0, $a0, -0x48A0
    ctx->pc = 0x1e1e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948704));
    // 0x1e1e90: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E1E90u;
    {
        const bool branch_taken_0x1e1e90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1E90u;
        // 0x1e1e94: 0x3c060039  lui         $a2, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1e90) {
            ctx->pc = 0x1E1EC0u;
            return;
        }
    }
    ctx->pc = 0x1E1E98u;
    // 0x1e1e98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1e9c: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x1e1e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
    // 0x1e1ea0: 0xc078c74  jal         func_1E31D0
    ctx->pc = 0x1E1EA0u;
    SET_GPR_U32(ctx, 31, 0x1E1EA8u);
    ctx->pc = 0x1E1EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EA0u;
    // 0x1e1ea4: 0xafdd0084  sw          $sp, 0x84($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 132), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31D0u, 0x1E1EA0u, 0x1E1EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EA8u;
label_1e1ea8:
    // 0x1e1ea8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1EA8u;
    {
        const bool branch_taken_0x1e1ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ea8) {
            ctx->pc = 0x1E1EC0u;
            return;
        }
    }
    ctx->pc = 0x1E1EB0u;
    // 0x1e1eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1eb8: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E1EB8u;
    SET_GPR_U32(ctx, 31, 0x1E1EC0u);
    ctx->pc = 0x1E1EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EB8u;
    // 0x1e1ebc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1EB8u, 0x1E1EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EC0u;
}
