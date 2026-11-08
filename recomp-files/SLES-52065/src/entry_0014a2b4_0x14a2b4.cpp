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

// Function: entry_0014a2b4
// Address: 0x14a2b4 - 0x14a2d4
void entry_0014a2b4_0x14a2b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a2b4_0x14a2b4");
#endif

    switch (ctx->pc) {
        case 0x14a2bcu: goto label_14a2bc;
        default: break;
    }

    ctx->pc = 0x14a2b4u;

    // 0x14a2b4: 0xc050224  jal         func_140890
    ctx->pc = 0x14A2B4u;
    SET_GPR_U32(ctx, 31, 0x14A2BCu);
    ctx->pc = 0x14A2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A2B4u;
    // 0x14a2b8: 0x27a40580  addiu       $a0, $sp, 0x580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A2B4u, 0x14A2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A2BCu;
label_14a2bc:
    // 0x14a2bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a2c0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14a2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a2c4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a2c8: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x14a2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x14a2cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a2d0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x14a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x14a2d4u;
}
