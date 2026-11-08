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

// Function: entry_0013ebbc
// Address: 0x13ebbc - 0x13ebc8
void entry_0013ebbc_0x13ebbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ebbc_0x13ebbc");
#endif

    switch (ctx->pc) {
        case 0x13ebc4u: goto label_13ebc4;
        default: break;
    }

    ctx->pc = 0x13ebbcu;

    // 0x13ebbc: 0xc05ff20  jal         func_17FC80
    ctx->pc = 0x13EBBCu;
    SET_GPR_U32(ctx, 31, 0x13EBC4u);
    ctx->pc = 0x13EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EBBCu;
    // 0x13ebc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FC80u, 0x13EBBCu, 0x13EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBC4u;
label_13ebc4:
    // 0x13ebc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ebc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13ebc8u;
}
