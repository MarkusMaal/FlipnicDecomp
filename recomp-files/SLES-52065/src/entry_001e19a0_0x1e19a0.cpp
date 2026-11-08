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

// Function: entry_001e19a0
// Address: 0x1e19a0 - 0x1e19dc
void entry_001e19a0_0x1e19a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e19a0_0x1e19a0");
#endif

    switch (ctx->pc) {
        case 0x1e19c4u: goto label_1e19c4;
        default: break;
    }

    ctx->pc = 0x1e19a0u;

    // 0x1e19a0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1e19a4: 0x2484b570  addiu       $a0, $a0, -0x4A90
    ctx->pc = 0x1e19a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948208));
    // 0x1e19a8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E19A8u;
    {
        const bool branch_taken_0x1e19a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19a8) {
            ctx->pc = 0x1E19DCu;
            return;
        }
    }
    ctx->pc = 0x1E19B0u;
    // 0x1e19b0: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e19b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e19b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e19b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e19b8: 0x24c6b890  addiu       $a2, $a2, -0x4770
    ctx->pc = 0x1e19b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949008));
    // 0x1e19bc: 0xc078bac  jal         func_1E2EB0
    ctx->pc = 0x1E19BCu;
    SET_GPR_U32(ctx, 31, 0x1E19C4u);
    ctx->pc = 0x1E19C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19BCu;
    // 0x1e19c0: 0xafdd00a4  sw          $sp, 0xA4($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 164), GPR_U32(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2EB0u, 0x1E19BCu, 0x1E19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19C4u;
label_1e19c4:
    // 0x1e19c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E19C4u;
    {
        const bool branch_taken_0x1e19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19c4) {
            ctx->pc = 0x1E19DCu;
            return;
        }
    }
    ctx->pc = 0x1E19CCu;
    // 0x1e19cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e19ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e19d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e19d4: 0xc07ab64  jal         func_1EAD90
    ctx->pc = 0x1E19D4u;
    SET_GPR_U32(ctx, 31, 0x1E19DCu);
    ctx->pc = 0x1E19D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E19D4u;
    // 0x1e19d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD90u, 0x1E19D4u, 0x1E19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19DCu;
}
