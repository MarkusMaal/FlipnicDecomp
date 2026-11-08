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

// Function: entry_0013c674
// Address: 0x13c674 - 0x13c684
void entry_0013c674_0x13c674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c674_0x13c674");
#endif

    switch (ctx->pc) {
        case 0x13c680u: goto label_13c680;
        default: break;
    }

    ctx->pc = 0x13c674u;

    // 0x13c674: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x13c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    // 0x13c678: 0xc0509a4  jal         func_142690
    ctx->pc = 0x13C678u;
    SET_GPR_U32(ctx, 31, 0x13C680u);
    ctx->pc = 0x13C67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C678u;
    // 0x13c67c: 0xae70011c  sw          $s0, 0x11C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142690u, 0x13C678u, 0x13C680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C680u;
label_13c680:
    // 0x13c680: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13c680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13c684u;
}
