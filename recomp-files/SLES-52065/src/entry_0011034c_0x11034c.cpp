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

// Function: entry_0011034c
// Address: 0x11034c - 0x11037c
void entry_0011034c_0x11034c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011034c_0x11034c");
#endif

    switch (ctx->pc) {
        case 0x110374u: goto label_110374;
        default: break;
    }

    ctx->pc = 0x11034cu;

    // 0x11034c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11034cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x110350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110354: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x110358: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x110358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x11035c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x11035cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x110360: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110368: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x11036c: 0xc043dec  jal         func_10F7B0
    ctx->pc = 0x11036Cu;
    SET_GPR_U32(ctx, 31, 0x110374u);
    ctx->pc = 0x110370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11036Cu;
    // 0x110370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7B0u, 0x11036Cu, 0x110374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110374u;
label_110374:
    // 0x110374: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x110374u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x110378: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x110378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->pc = 0x11037cu;
}
