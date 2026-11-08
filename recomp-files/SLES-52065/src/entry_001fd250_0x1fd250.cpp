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

// Function: entry_001fd250
// Address: 0x1fd250 - 0x1fd26c
void entry_001fd250_0x1fd250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fd250_0x1fd250");
#endif

    switch (ctx->pc) {
        case 0x1fd264u: goto label_1fd264;
        default: break;
    }

    ctx->pc = 0x1fd250u;

    // 0x1fd250: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1fd250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fd254: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fd254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd258: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1fd258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fd25c: 0xc07fed6  jal         func_1FFB58
    ctx->pc = 0x1FD25Cu;
    SET_GPR_U32(ctx, 31, 0x1FD264u);
    ctx->pc = 0x1FD260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD25Cu;
    // 0x1fd260: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFB58u, 0x1FD25Cu, 0x1FD264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD264u;
label_1fd264:
    // 0x1fd264: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1fd264u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1fd268: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1fd268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x1fd26cu;
}
