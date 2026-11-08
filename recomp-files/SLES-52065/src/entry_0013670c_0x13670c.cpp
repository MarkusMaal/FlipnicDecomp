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

// Function: entry_0013670c
// Address: 0x13670c - 0x13672c
void entry_0013670c_0x13670c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013670c_0x13670c");
#endif

    switch (ctx->pc) {
        case 0x13671cu: goto label_13671c;
        default: break;
    }

    ctx->pc = 0x13670cu;

    // 0x13670c: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x13670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x136710: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x136710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x136714: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x136714u;
    SET_GPR_U32(ctx, 31, 0x13671Cu);
    ctx->pc = 0x136718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136714u;
    // 0x136718: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x136714u, 0x13671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13671Cu;
label_13671c:
    // 0x13671c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13671Cu;
    {
        const bool branch_taken_0x13671c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13671Cu;
        // 0x136720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13671c) {
            ctx->pc = 0x13672Cu;
            return;
        }
    }
    ctx->pc = 0x136724u;
    // 0x136724: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x136724u;
    SET_GPR_U32(ctx, 31, 0x13672Cu);
    ctx->pc = 0x131300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131300u, 0x136724u, 0x13672Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13672Cu;
}
