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

// Function: entry_0013c390
// Address: 0x13c390 - 0x13c3c0
void entry_0013c390_0x13c390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c390_0x13c390");
#endif

    switch (ctx->pc) {
        case 0x13c3acu: goto label_13c3ac;
        default: break;
    }

    ctx->pc = 0x13c390u;

    // 0x13c390: 0x2644019c  addiu       $a0, $s2, 0x19C
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 412));
    // 0x13c394: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x13C394u;
    {
        const bool branch_taken_0x13c394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c394) {
            ctx->pc = 0x13C3C0u;
            return;
        }
    }
    ctx->pc = 0x13C39Cu;
    // 0x13c39c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C39Cu;
    {
        const bool branch_taken_0x13c39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c39c) {
            ctx->pc = 0x13C3C0u;
            return;
        }
    }
    ctx->pc = 0x13C3A4u;
    // 0x13c3a4: 0xc04fc50  jal         func_13F140
    ctx->pc = 0x13C3A4u;
    SET_GPR_U32(ctx, 31, 0x13C3ACu);
    ctx->pc = 0x13F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F140u, 0x13C3A4u, 0x13C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3ACu;
label_13c3ac:
    // 0x13c3ac: 0x264401a0  addiu       $a0, $s2, 0x1A0
    ctx->pc = 0x13c3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 416));
    // 0x13c3b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C3B0u;
    {
        const bool branch_taken_0x13c3b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3B0u;
        // 0x13c3b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c3b0) {
            ctx->pc = 0x13C3C0u;
            return;
        }
    }
    ctx->pc = 0x13C3B8u;
    // 0x13c3b8: 0xc04f118  jal         func_13C460
    ctx->pc = 0x13C3B8u;
    SET_GPR_U32(ctx, 31, 0x13C3C0u);
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x13C3B8u, 0x13C3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3C0u;
}
