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

// Function: entry_0010502c
// Address: 0x10502c - 0x105050
void entry_0010502c_0x10502c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010502c_0x10502c");
#endif

    switch (ctx->pc) {
        case 0x105034u: goto label_105034;
        case 0x105044u: goto label_105044;
        default: break;
    }

    ctx->pc = 0x10502cu;

    // 0x10502c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x10502Cu;
    SET_GPR_U32(ctx, 31, 0x105034u);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x10502Cu, 0x105034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105034u;
label_105034:
    // 0x105034: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x105034u;
    {
        const bool branch_taken_0x105034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x105034) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x10503Cu;
    // 0x10503c: 0xc05e820  jal         func_17A080
    ctx->pc = 0x10503Cu;
    SET_GPR_U32(ctx, 31, 0x105044u);
    ctx->pc = 0x105040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10503Cu;
    // 0x105040: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A080u, 0x10503Cu, 0x105044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105044u;
label_105044:
    // 0x105044: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x105044u;
    {
        const bool branch_taken_0x105044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105044) {
            ctx->pc = 0x105218u;
            return;
        }
    }
    ctx->pc = 0x10504Cu;
    // 0x10504c: 0x240402b0  addiu       $a0, $zero, 0x2B0
    ctx->pc = 0x10504cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 688));
    ctx->pc = 0x105050u;
}
