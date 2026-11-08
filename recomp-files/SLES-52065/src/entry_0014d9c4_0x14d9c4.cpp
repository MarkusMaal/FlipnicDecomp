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

// Function: entry_0014d9c4
// Address: 0x14d9c4 - 0x14d9e4
void entry_0014d9c4_0x14d9c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d9c4_0x14d9c4");
#endif

    switch (ctx->pc) {
        case 0x14d9dcu: goto label_14d9dc;
        default: break;
    }

    ctx->pc = 0x14d9c4u;

    // 0x14d9c4: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x14d9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x14d9c8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x14d9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x14d9cc: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x14d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x14d9d0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14d9d4: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x14D9D4u;
    SET_GPR_U32(ctx, 31, 0x14D9DCu);
    ctx->pc = 0x14D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9D4u;
    // 0x14d9d8: 0x24a5f2a0  addiu       $a1, $a1, -0xD60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x14D9D4u, 0x14D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9DCu;
label_14d9dc:
    // 0x14d9dc: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x14D9DCu;
    SET_GPR_U32(ctx, 31, 0x14D9E4u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x14D9DCu, 0x14D9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9E4u;
}
