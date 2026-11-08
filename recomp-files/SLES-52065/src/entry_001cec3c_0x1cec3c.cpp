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

// Function: entry_001cec3c
// Address: 0x1cec3c - 0x1cec58
void entry_001cec3c_0x1cec3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cec3c_0x1cec3c");
#endif

    switch (ctx->pc) {
        case 0x1cec44u: goto label_1cec44;
        default: break;
    }

    ctx->pc = 0x1cec3cu;

    // 0x1cec3c: 0xc060014  jal         func_180050
    ctx->pc = 0x1CEC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC44u);
    ctx->pc = 0x180050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180050u, 0x1CEC3Cu, 0x1CEC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC44u;
label_1cec44:
    // 0x1cec44: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cec44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cec48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cec48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec4c: 0x24a59450  addiu       $a1, $a1, -0x6BB0
    ctx->pc = 0x1cec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939728));
    // 0x1cec50: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CEC50u;
    SET_GPR_U32(ctx, 31, 0x1CEC58u);
    ctx->pc = 0x1CEC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC50u;
    // 0x1cec54: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CEC50u, 0x1CEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC58u;
}
