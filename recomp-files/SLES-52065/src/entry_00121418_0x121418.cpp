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

// Function: entry_00121418
// Address: 0x121418 - 0x121438
void entry_00121418_0x121418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121418_0x121418");
#endif

    switch (ctx->pc) {
        case 0x121430u: goto label_121430;
        default: break;
    }

    ctx->pc = 0x121418u;

    // 0x121418: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x12141c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12141cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x121420: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x121420u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x121424: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x121428: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x121428u;
    SET_GPR_U32(ctx, 31, 0x121430u);
    ctx->pc = 0x12142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121428u;
    // 0x12142c: 0x24a5e950  addiu       $a1, $a1, -0x16B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x121428u, 0x121430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121430u;
label_121430:
    // 0x121430: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x121430u;
    SET_GPR_U32(ctx, 31, 0x121438u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x121430u, 0x121438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121438u;
}
