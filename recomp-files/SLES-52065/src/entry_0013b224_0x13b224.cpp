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

// Function: entry_0013b224
// Address: 0x13b224 - 0x13b244
void entry_0013b224_0x13b224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b224_0x13b224");
#endif

    switch (ctx->pc) {
        case 0x13b23cu: goto label_13b23c;
        default: break;
    }

    ctx->pc = 0x13b224u;

    // 0x13b224: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x13b224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x13b228: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x13b228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x13b22c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x13b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x13b230: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x13b230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13b234: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x13B234u;
    SET_GPR_U32(ctx, 31, 0x13B23Cu);
    ctx->pc = 0x13B238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B234u;
    // 0x13b238: 0x24a5ef70  addiu       $a1, $a1, -0x1090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x13B234u, 0x13B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B23Cu;
label_13b23c:
    // 0x13b23c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x13B23Cu;
    SET_GPR_U32(ctx, 31, 0x13B244u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x13B23Cu, 0x13B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B244u;
}
