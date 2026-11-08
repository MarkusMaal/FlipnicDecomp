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

// Function: entry_0014aa08
// Address: 0x14aa08 - 0x14aa28
void entry_0014aa08_0x14aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014aa08_0x14aa08");
#endif

    switch (ctx->pc) {
        case 0x14aa10u: goto label_14aa10;
        default: break;
    }

    ctx->pc = 0x14aa08u;

    // 0x14aa08: 0xc050224  jal         func_140890
    ctx->pc = 0x14AA08u;
    SET_GPR_U32(ctx, 31, 0x14AA10u);
    ctx->pc = 0x14AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AA08u;
    // 0x14aa0c: 0x27a40700  addiu       $a0, $sp, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140890u, 0x14AA08u, 0x14AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AA10u;
label_14aa10:
    // 0x14aa10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14aa14: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14aa18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14aa18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14aa1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x14aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x14aa20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14aa24: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x14aa24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x14aa28u;
}
