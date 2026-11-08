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

// Function: entry_001c304c
// Address: 0x1c304c - 0x1c3078
void entry_001c304c_0x1c304c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c304c_0x1c304c");
#endif

    switch (ctx->pc) {
        case 0x1c3054u: goto label_1c3054;
        case 0x1c3060u: goto label_1c3060;
        default: break;
    }

    ctx->pc = 0x1c304cu;

    // 0x1c304c: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C304Cu;
    SET_GPR_U32(ctx, 31, 0x1C3054u);
    ctx->pc = 0x1C3050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C304Cu;
    // 0x1c3050: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C304Cu, 0x1C3054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3054u;
label_1c3054:
    // 0x1c3054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3058: 0xc0711bc  jal         func_1C46F0
    ctx->pc = 0x1C3058u;
    SET_GPR_U32(ctx, 31, 0x1C3060u);
    ctx->pc = 0x1C305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3058u;
    // 0x1c305c: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C46F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C46F0u, 0x1C3058u, 0x1C3060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3060u;
label_1c3060:
    // 0x1c3060: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1c3060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1c3064: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1c3064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
    // 0x1c3068: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C3068u;
    {
        const bool branch_taken_0x1c3068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3068) {
            ctx->pc = 0x1C30A8u;
            return;
        }
    }
    ctx->pc = 0x1C3070u;
    // 0x1c3070: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C3070u;
    {
        const bool branch_taken_0x1c3070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3070u;
        // 0x1c3074: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3070) {
            ctx->pc = 0x1C30A8u;
            return;
        }
    }
    ctx->pc = 0x1C3078u;
}
