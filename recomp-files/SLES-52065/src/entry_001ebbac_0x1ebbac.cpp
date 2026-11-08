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

// Function: entry_001ebbac
// Address: 0x1ebbac - 0x1ebbd4
void entry_001ebbac_0x1ebbac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ebbac_0x1ebbac");
#endif

    switch (ctx->pc) {
        case 0x1ebbb4u: goto label_1ebbb4;
        default: break;
    }

    ctx->pc = 0x1ebbacu;

    // 0x1ebbac: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1EBBACu;
    SET_GPR_U32(ctx, 31, 0x1EBBB4u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1EBBACu, 0x1EBBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBB4u;
label_1ebbb4:
    // 0x1ebbb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ebbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ebbb8: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x1ebbb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x1ebbbc: 0xac23f000  sw          $v1, -0x1000($at)
    ctx->pc = 0x1ebbbcu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 3));
    // 0x1ebbc0: 0xf  sync
    ctx->pc = 0x1ebbc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1ebbc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EBBC4u;
    {
        const bool branch_taken_0x1ebbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebbc4) {
            ctx->pc = 0x1EBBD4u;
            return;
        }
    }
    ctx->pc = 0x1EBBCCu;
    // 0x1ebbcc: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1EBBCCu;
    SET_GPR_U32(ctx, 31, 0x1EBBD4u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1EBBCCu, 0x1EBBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EBBD4u;
}
