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

// Function: entry_00133774
// Address: 0x133774 - 0x13378c
void entry_00133774_0x133774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133774_0x133774");
#endif

    switch (ctx->pc) {
        case 0x133784u: goto label_133784;
        default: break;
    }

    ctx->pc = 0x133774u;

    // 0x133774: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x133778: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x133778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x13377c: 0xc07d38e  jal         func_1F4E38
    ctx->pc = 0x13377Cu;
    SET_GPR_U32(ctx, 31, 0x133784u);
    ctx->pc = 0x133780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13377Cu;
    // 0x133780: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x13377Cu, 0x133784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133784u;
label_133784:
    // 0x133784: 0x26730010  addiu       $s3, $s3, 0x10
    ctx->pc = 0x133784u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x133788: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x133788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x13378cu;
}
