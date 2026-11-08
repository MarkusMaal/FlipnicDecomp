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

// Function: entry_001f7900
// Address: 0x1f7900 - 0x1f7910
void entry_001f7900_0x1f7900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7900_0x1f7900");
#endif

    switch (ctx->pc) {
        case 0x1f790cu: goto label_1f790c;
        default: break;
    }

    ctx->pc = 0x1f7900u;

    // 0x1f7900: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1f7900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1f7904: 0xc07ba5a  jal         func_1EE968
    ctx->pc = 0x1F7904u;
    SET_GPR_U32(ctx, 31, 0x1F790Cu);
    ctx->pc = 0x1F7908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7904u;
    // 0x1f7908: 0x2484d680  addiu       $a0, $a0, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE968u, 0x1F7904u, 0x1F790Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F790Cu;
label_1f790c:
    // 0x1f790c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f790cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1f7910u;
}
