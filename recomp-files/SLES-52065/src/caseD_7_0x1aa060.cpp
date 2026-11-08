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

// Function: caseD_7
// Address: 0x1aa060 - 0x1aa080
void caseD_7_0x1aa060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1aa060");
#endif

    switch (ctx->pc) {
        case 0x1aa068u: goto label_1aa068;
        case 0x1aa078u: goto label_1aa078;
        default: break;
    }

    ctx->pc = 0x1aa060u;

    // 0x1aa060: 0xc06977c  jal         func_1A5DF0
    ctx->pc = 0x1AA060u;
    SET_GPR_U32(ctx, 31, 0x1AA068u);
    ctx->pc = 0x1AA064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA060u;
    // 0x1aa064: 0x26a40820  addiu       $a0, $s5, 0x820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5DF0u, 0x1AA060u, 0x1AA068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA068u;
label_1aa068:
    // 0x1aa068: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1AA068u;
    {
        const bool branch_taken_0x1aa068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa068) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1AA070u;
    // 0x1aa070: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1AA070u;
    SET_GPR_U32(ctx, 31, 0x1AA078u);
    ctx->pc = 0x1AA074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA070u;
    // 0x1aa074: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1AA070u, 0x1AA078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA078u;
label_1aa078:
    // 0x1aa078: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1AA078u;
    {
        const bool branch_taken_0x1aa078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa078) {
            ctx->pc = 0x1AA0ECu;
            return;
        }
    }
    ctx->pc = 0x1AA080u;
}
