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

// Function: entry_0012e6b4
// Address: 0x12e6b4 - 0x12e6d4
void entry_0012e6b4_0x12e6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e6b4_0x12e6b4");
#endif

    switch (ctx->pc) {
        case 0x12e6ccu: goto label_12e6cc;
        default: break;
    }

    ctx->pc = 0x12e6b4u;

    // 0x12e6b4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x12e6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x12e6b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12e6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12e6bc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x12e6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x12e6c0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x12e6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x12e6c4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x12E6C4u;
    SET_GPR_U32(ctx, 31, 0x12E6CCu);
    ctx->pc = 0x12E6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E6C4u;
    // 0x12e6c8: 0x24a5ed10  addiu       $a1, $a1, -0x12F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x12E6C4u, 0x12E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6CCu;
label_12e6cc:
    // 0x12e6cc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x12E6CCu;
    SET_GPR_U32(ctx, 31, 0x12E6D4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x12E6CCu, 0x12E6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E6D4u;
}
