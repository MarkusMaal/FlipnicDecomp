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

// Function: entry_0014e1a8
// Address: 0x14e1a8 - 0x14e1c8
void entry_0014e1a8_0x14e1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e1a8_0x14e1a8");
#endif

    switch (ctx->pc) {
        case 0x14e1c0u: goto label_14e1c0;
        default: break;
    }

    ctx->pc = 0x14e1a8u;

    // 0x14e1a8: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14e1a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14e1ac: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14e1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14e1b0: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14e1b4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14e1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14e1b8: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14E1B8u;
    SET_GPR_U32(ctx, 31, 0x14E1C0u);
    ctx->pc = 0x14E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E1B8u;
    // 0x14e1bc: 0x24a5f2a0  addiu       $a1, $a1, -0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14E1B8u, 0x14E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1C0u;
label_14e1c0:
    // 0x14e1c0: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14E1C0u;
    SET_GPR_U32(ctx, 31, 0x14E1C8u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14E1C0u, 0x14E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E1C8u;
}
