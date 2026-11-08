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

// Function: entry_00143d54
// Address: 0x143d54 - 0x143d74
void entry_00143d54_0x143d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143d54_0x143d54");
#endif

    switch (ctx->pc) {
        case 0x143d6cu: goto label_143d6c;
        default: break;
    }

    ctx->pc = 0x143d54u;

    // 0x143d54: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x143d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x143d58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x143d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x143d5c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x143d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x143d60: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x143d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x143d64: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x143D64u;
    SET_GPR_U32(ctx, 31, 0x143D6Cu);
    ctx->pc = 0x143D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143D64u;
    // 0x143d68: 0x24a5f120  addiu       $a1, $a1, -0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x143D64u, 0x143D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D6Cu;
label_143d6c:
    // 0x143d6c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x143D6Cu;
    SET_GPR_U32(ctx, 31, 0x143D74u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x143D6Cu, 0x143D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D74u;
}
