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

// Function: entry_0013577c
// Address: 0x13577c - 0x13578c
void entry_0013577c_0x13577c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013577c_0x13577c");
#endif

    switch (ctx->pc) {
        case 0x135784u: goto label_135784;
        default: break;
    }

    ctx->pc = 0x13577cu;

    // 0x13577c: 0xc04e71c  jal         func_139C70
    ctx->pc = 0x13577Cu;
    SET_GPR_U32(ctx, 31, 0x135784u);
    ctx->pc = 0x139C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139C70u, 0x13577Cu, 0x135784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135784u;
label_135784:
    // 0x135784: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x135788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13578cu;
}
