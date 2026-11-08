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

// Function: entry_00109898
// Address: 0x109898 - 0x1098b0
void entry_00109898_0x109898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109898_0x109898");
#endif

    switch (ctx->pc) {
        case 0x1098acu: goto label_1098ac;
        default: break;
    }

    ctx->pc = 0x109898u;

    // 0x109898: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x109898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x10989c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10989cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1098a0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1098a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1098a4: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x1098A4u;
    SET_GPR_U32(ctx, 31, 0x1098ACu);
    ctx->pc = 0x1098A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1098A4u;
    // 0x1098a8: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x1098A4u, 0x1098ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1098ACu;
label_1098ac:
    // 0x1098ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1098acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1098b0u;
}
