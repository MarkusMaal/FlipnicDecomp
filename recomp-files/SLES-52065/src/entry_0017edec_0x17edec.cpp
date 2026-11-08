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

// Function: entry_0017edec
// Address: 0x17edec - 0x17edfc
void entry_0017edec_0x17edec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017edec_0x17edec");
#endif

    switch (ctx->pc) {
        case 0x17edf4u: goto label_17edf4;
        default: break;
    }

    ctx->pc = 0x17edecu;

    // 0x17edec: 0xc05fb94  jal         func_17EE50
    ctx->pc = 0x17EDECu;
    SET_GPR_U32(ctx, 31, 0x17EDF4u);
    ctx->pc = 0x17EE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EE50u, 0x17EDECu, 0x17EDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EDF4u;
label_17edf4:
    // 0x17edf4: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x17edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x17edf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x17edfcu;
}
