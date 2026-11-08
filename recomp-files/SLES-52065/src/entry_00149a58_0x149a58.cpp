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

// Function: entry_00149a58
// Address: 0x149a58 - 0x149a78
void entry_00149a58_0x149a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149a58_0x149a58");
#endif

    switch (ctx->pc) {
        case 0x149a70u: goto label_149a70;
        default: break;
    }

    ctx->pc = 0x149a58u;

    // 0x149a58: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x149a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x149a5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x149a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x149a60: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x149a60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x149a64: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x149a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x149a68: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x149A68u;
    SET_GPR_U32(ctx, 31, 0x149A70u);
    ctx->pc = 0x149A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A68u;
    // 0x149a6c: 0x24a5f1e0  addiu       $a1, $a1, -0xE20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x149A68u, 0x149A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A70u;
label_149a70:
    // 0x149a70: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x149A70u;
    SET_GPR_U32(ctx, 31, 0x149A78u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x149A70u, 0x149A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A78u;
}
