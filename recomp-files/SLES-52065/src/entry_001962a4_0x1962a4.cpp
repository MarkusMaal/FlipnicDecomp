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

// Function: entry_001962a4
// Address: 0x1962a4 - 0x1962d8
void entry_001962a4_0x1962a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001962a4_0x1962a4");
#endif

    switch (ctx->pc) {
        case 0x1962acu: goto label_1962ac;
        case 0x1962bcu: goto label_1962bc;
        default: break;
    }

    ctx->pc = 0x1962a4u;

    // 0x1962a4: 0xc063e14  jal         func_18F850
    ctx->pc = 0x1962A4u;
    SET_GPR_U32(ctx, 31, 0x1962ACu);
    ctx->pc = 0x1962A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962A4u;
    // 0x1962a8: 0xae600670  sw          $zero, 0x670($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 1648), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x1962A4u, 0x1962ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962ACu;
label_1962ac:
    // 0x1962ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1962acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1962b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1962b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962b4: 0xc064918  jal         func_192460
    ctx->pc = 0x1962B4u;
    SET_GPR_U32(ctx, 31, 0x1962BCu);
    ctx->pc = 0x1962B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962B4u;
    // 0x1962b8: 0x24a50090  addiu       $a1, $a1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x1962B4u, 0x1962BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962BCu;
label_1962bc:
    // 0x1962bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1962bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1962c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1962c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1962c4: 0xae620674  sw          $v0, 0x674($s3)
    ctx->pc = 0x1962c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1652), GPR_U32(ctx, 2));
    // 0x1962c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1962c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962cc: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x1962ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x1962d0: 0xc064a64  jal         func_192990
    ctx->pc = 0x1962D0u;
    SET_GPR_U32(ctx, 31, 0x1962D8u);
    ctx->pc = 0x1962D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1962D0u;
    // 0x1962d4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192990u, 0x1962D0u, 0x1962D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1962D8u;
}
