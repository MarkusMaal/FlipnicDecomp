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

// Function: entry_0016fb40
// Address: 0x16fb40 - 0x16fb54
void entry_0016fb40_0x16fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fb40_0x16fb40");
#endif

    switch (ctx->pc) {
        case 0x16fb50u: goto label_16fb50;
        default: break;
    }

    ctx->pc = 0x16fb40u;

    // 0x16fb40: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x16fb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x16fb44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16fb48: 0xc054f5c  jal         func_153D70
    ctx->pc = 0x16FB48u;
    SET_GPR_U32(ctx, 31, 0x16FB50u);
    ctx->pc = 0x16FB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB48u;
    // 0x16fb4c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153D70u, 0x16FB48u, 0x16FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB50u;
label_16fb50:
    // 0x16fb50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x16fb54u;
}
