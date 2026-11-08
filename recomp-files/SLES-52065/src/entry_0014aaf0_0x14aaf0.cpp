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

// Function: entry_0014aaf0
// Address: 0x14aaf0 - 0x14ab10
void entry_0014aaf0_0x14aaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aaf0_0x14aaf0");
#endif

    switch (ctx->pc) {
        case 0x14aaf8u: goto label_14aaf8;
        default: break;
    }

    ctx->pc = 0x14aaf0u;

    // 0x14aaf0: 0xc050224  jal         func_140890
    ctx->pc = 0x14AAF0u;
    SET_GPR_U32(ctx, 31, 0x14AAF8u);
    ctx->pc = 0x14AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAF0u;
    // 0x14aaf4: 0x27a40760  addiu       $a0, $sp, 0x760 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14AAF0u, 0x14AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAF8u;
label_14aaf8:
    // 0x14aaf8: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x14aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14aafc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ab00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ab04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14ab08: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14ab08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14ab0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x14ab10u;
}
