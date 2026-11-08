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

// Function: entry_0014a430
// Address: 0x14a430 - 0x14a450
void entry_0014a430_0x14a430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a430_0x14a430");
#endif

    switch (ctx->pc) {
        case 0x14a438u: goto label_14a438;
        default: break;
    }

    ctx->pc = 0x14a430u;

    // 0x14a430: 0xc050224  jal         func_140890
    ctx->pc = 0x14A430u;
    SET_GPR_U32(ctx, 31, 0x14A438u);
    ctx->pc = 0x14A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A430u;
    // 0x14a434: 0x27a405c0  addiu       $a0, $sp, 0x5C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A430u, 0x14A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A438u;
label_14a438:
    // 0x14a438: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x14a438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a43c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x14a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14a440: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a444: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a448: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a44c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a44cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x14a450u;
}
