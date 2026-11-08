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

// Function: entry_00140d34
// Address: 0x140d34 - 0x140d54
void entry_00140d34_0x140d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140d34_0x140d34");
#endif

    switch (ctx->pc) {
        case 0x140d4cu: goto label_140d4c;
        default: break;
    }

    ctx->pc = 0x140d34u;

    // 0x140d34: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x140d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x140d38: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x140d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x140d3c: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x140d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x140d40: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x140d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x140d44: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x140D44u;
    SET_GPR_U32(ctx, 31, 0x140D4Cu);
    ctx->pc = 0x140D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D44u;
    // 0x140d48: 0x24a5f100  addiu       $a1, $a1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x140D44u, 0x140D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D4Cu;
label_140d4c:
    // 0x140d4c: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x140D4Cu;
    SET_GPR_U32(ctx, 31, 0x140D54u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x140D4Cu, 0x140D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D54u;
}
