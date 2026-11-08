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

// Function: entry_0018b258
// Address: 0x18b258 - 0x18b290
void entry_0018b258_0x18b258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b258_0x18b258");
#endif

    switch (ctx->pc) {
        case 0x18b280u: goto label_18b280;
        default: break;
    }

    ctx->pc = 0x18b258u;

    // 0x18b258: 0x141240  sll         $v0, $s4, 9
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 9));
    // 0x18b25c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18b260: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x18b264: 0x80420acc  lb          $v0, 0xACC($v0)
    ctx->pc = 0x18b264u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2764)));
    // 0x18b268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18B268u;
    {
        const bool branch_taken_0x18b268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B268u;
        // 0x18b26c: 0x141140  sll         $v0, $s4, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b268) {
            ctx->pc = 0x18B290u;
            return;
        }
    }
    ctx->pc = 0x18B270u;
    // 0x18b270: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18b274: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b278: 0xc077dc0  jal         func_1DF700
    ctx->pc = 0x18B278u;
    SET_GPR_U32(ctx, 31, 0x18B280u);
    ctx->pc = 0x18B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B278u;
    // 0x18b27c: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF700u, 0x18B278u, 0x18B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B280u;
label_18b280:
    // 0x18b280: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B280u;
    {
        const bool branch_taken_0x18b280 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18b280) {
            ctx->pc = 0x18B290u;
            return;
        }
    }
    ctx->pc = 0x18B288u;
    // 0x18b288: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18B288u;
    {
        const bool branch_taken_0x18b288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B288u;
        // 0x18b28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b288) {
            ctx->pc = 0x18B2A8u;
            return;
        }
    }
    ctx->pc = 0x18B290u;
}
