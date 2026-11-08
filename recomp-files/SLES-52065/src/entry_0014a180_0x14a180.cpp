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

// Function: entry_0014a180
// Address: 0x14a180 - 0x14a1a0
void entry_0014a180_0x14a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a180_0x14a180");
#endif

    switch (ctx->pc) {
        case 0x14a188u: goto label_14a188;
        default: break;
    }

    ctx->pc = 0x14a180u;

    // 0x14a180: 0xc050224  jal         func_140890
    ctx->pc = 0x14A180u;
    SET_GPR_U32(ctx, 31, 0x14A188u);
    ctx->pc = 0x14A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A180u;
    // 0x14a184: 0x27a40540  addiu       $a0, $sp, 0x540 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14A180u, 0x14A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A188u;
label_14a188:
    // 0x14a188: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a18c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14a190: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14a190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14a194: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a198: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x14a198u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x14a19c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x14a1a0u;
}
