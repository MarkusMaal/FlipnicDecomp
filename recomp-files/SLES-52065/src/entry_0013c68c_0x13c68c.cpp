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

// Function: entry_0013c68c
// Address: 0x13c68c - 0x13c6ac
void entry_0013c68c_0x13c68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c68c_0x13c68c");
#endif

    switch (ctx->pc) {
        case 0x13c694u: goto label_13c694;
        case 0x13c69cu: goto label_13c69c;
        default: break;
    }

    ctx->pc = 0x13c68cu;

    // 0x13c68c: 0xc0509a8  jal         func_1426A0
    ctx->pc = 0x13C68Cu;
    SET_GPR_U32(ctx, 31, 0x13C694u);
    ctx->pc = 0x13C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C68Cu;
    // 0x13c690: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1426A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1426A0u, 0x13C68Cu, 0x13C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C694u;
label_13c694:
    // 0x13c694: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x13C694u;
    SET_GPR_U32(ctx, 31, 0x13C69Cu);
    ctx->pc = 0x13C698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C694u;
    // 0x13c698: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x13C694u, 0x13C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C69Cu;
label_13c69c:
    // 0x13c69c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C69Cu;
    {
        const bool branch_taken_0x13c69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C69Cu;
        // 0x13c6a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c69c) {
            ctx->pc = 0x13C6ACu;
            return;
        }
    }
    ctx->pc = 0x13C6A4u;
    // 0x13c6a4: 0xc04d0f0  jal         func_1343C0
    ctx->pc = 0x13C6A4u;
    SET_GPR_U32(ctx, 31, 0x13C6ACu);
    ctx->pc = 0x1343C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1343C0u, 0x13C6A4u, 0x13C6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C6ACu;
}
