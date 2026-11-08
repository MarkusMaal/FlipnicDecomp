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

// Function: entry_00197a40
// Address: 0x197a40 - 0x197a5c
void entry_00197a40_0x197a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a40_0x197a40");
#endif

    ctx->pc = 0x197a40u;

label_197a40:
    // 0x197a40: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x197a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_197a44:
    // 0x197a44: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x197a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_197a48:
    // 0x197a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x197a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197a4c:
    // 0x197a4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x197a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197a50:
    // 0x197a50: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197a54:
    // 0x197a54: 0x320f809  jalr        $t9
label_197a58:
    if (ctx->pc == 0x197A58u) {
        ctx->pc = 0x197A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A54u;
        // 0x197a58: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197A5Cu;
        goto label_fallthrough_0x197a54;
    }
    ctx->pc = 0x197A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x197A5Cu);
        ctx->pc = 0x197A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197A54u;
        // 0x197a58: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197A54u, 0x197A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x197a54:
    ctx->pc = 0x197A5Cu;
}
