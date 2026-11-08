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

// Function: entry_0016af8c
// Address: 0x16af8c - 0x16af98
void entry_0016af8c_0x16af8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016af8c_0x16af8c");
#endif

    switch (ctx->pc) {
        case 0x16af94u: goto label_16af94;
        default: break;
    }

    ctx->pc = 0x16af8cu;

    // 0x16af8c: 0xc05a924  jal         func_16A490
    ctx->pc = 0x16AF8Cu;
    SET_GPR_U32(ctx, 31, 0x16AF94u);
    ctx->pc = 0x16AF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AF8Cu;
    // 0x16af90: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A490u, 0x16AF8Cu, 0x16AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF94u;
label_16af94:
    // 0x16af94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16af94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16af98u;
}
