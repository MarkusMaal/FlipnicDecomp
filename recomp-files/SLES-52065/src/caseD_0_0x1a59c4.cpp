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

// Function: caseD_0
// Address: 0x1a59c4 - 0x1a59f8
void caseD_0_0x1a59c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a59c4");
#endif

    switch (ctx->pc) {
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59f4u: goto label_1a59f4;
        default: break;
    }

    ctx->pc = 0x1a59c4u;

    // 0x1a59c4: 0x0  nop
    ctx->pc = 0x1a59c4u;
    // NOP
    // 0x1a59c8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A59C8u;
    {
        const bool branch_taken_0x1a59c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a59c8) {
            ctx->pc = 0x1A5A28u;
            return;
        }
    }
    ctx->pc = 0x1A59D0u;
    // 0x1a59d0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x1a59d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1a59d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A59D4u;
    {
        const bool branch_taken_0x1a59d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a59d4) {
            ctx->pc = 0x1A59F8u;
            return;
        }
    }
    ctx->pc = 0x1A59DCu;
    // 0x1a59dc: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A59DCu;
    SET_GPR_U32(ctx, 31, 0x1A59E4u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A59DCu, 0x1A59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59E4u;
label_1a59e4:
    // 0x1a59e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a59e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a59e8: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1a59ec: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A59ECu;
    SET_GPR_U32(ctx, 31, 0x1A59F4u);
    ctx->pc = 0x1A59F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A59ECu;
    // 0x1a59f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A59ECu, 0x1A59F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A59F4u;
label_1a59f4:
    // 0x1a59f4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x1a59f4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    ctx->pc = 0x1a59f8u;
}
