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

// Function: entry_001e1ec0
// Address: 0x1e1ec0 - 0x1e1efc
void entry_001e1ec0_0x1e1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1ec0_0x1e1ec0");
#endif

    switch (ctx->pc) {
        case 0x1e1ee4u: goto label_1e1ee4;
        default: break;
    }

    ctx->pc = 0x1e1ec0u;

    // 0x1e1ec0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e1ec4: 0x2484b700  addiu       $a0, $a0, -0x4900
    ctx->pc = 0x1e1ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
    // 0x1e1ec8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E1EC8u;
    {
        const bool branch_taken_0x1e1ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ec8) {
            ctx->pc = 0x1E1EFCu;
            return;
        }
    }
    ctx->pc = 0x1E1ED0u;
    // 0x1e1ed0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e1ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e1ed4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e1ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1ed8: 0x24c6b9d0  addiu       $a2, $a2, -0x4630
    ctx->pc = 0x1e1ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949328));
    // 0x1e1edc: 0xc078c74  jal         func_1E31D0
    ctx->pc = 0x1E1EDCu;
    SET_GPR_U32(ctx, 31, 0x1E1EE4u);
    ctx->pc = 0x1E1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EDCu;
    // 0x1e1ee0: 0xafdd00a4  sw          $sp, 0xA4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E31D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E31D0u, 0x1E1EDCu, 0x1E1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EE4u;
label_1e1ee4:
    // 0x1e1ee4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1EE4u;
    {
        const bool branch_taken_0x1e1ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1ee4) {
            ctx->pc = 0x1E1EFCu;
            return;
        }
    }
    ctx->pc = 0x1E1EECu;
    // 0x1e1eec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e1eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e1ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1ef4: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E1EF4u;
    SET_GPR_U32(ctx, 31, 0x1E1EFCu);
    ctx->pc = 0x1E1EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1EF4u;
    // 0x1e1ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E1EF4u, 0x1E1EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1EFCu;
}
