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

// Function: entry_00197604
// Address: 0x197604 - 0x197624
void entry_00197604_0x197604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197604_0x197604");
#endif

    switch (ctx->pc) {
        case 0x19761cu: goto label_19761c;
        default: break;
    }

    ctx->pc = 0x197604u;

label_197604:
    // 0x197604: 0x8c4401fc  lw          $a0, 0x1FC($v0)
    ctx->pc = 0x197604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
label_197608:
    // 0x197608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19760c:
    // 0x19760c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x19760cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_197610:
    // 0x197610: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x197610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_197614:
    // 0x197614: 0x320f809  jalr        $t9
label_197618:
    if (ctx->pc == 0x197618u) {
        ctx->pc = 0x197618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197614u;
        // 0x197618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19761Cu;
        goto label_19761c;
    }
    ctx->pc = 0x197614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19761Cu);
        ctx->pc = 0x197618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197614u;
        // 0x197618: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197614u, 0x19761Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19761Cu;
label_19761c:
    // 0x19761c: 0x10000010  b           . + 4 + (0x10 << 2)
label_197620:
    if (ctx->pc == 0x197620u) {
        ctx->pc = 0x197624u;
        goto label_fallthrough_0x19761c;
    }
    ctx->pc = 0x19761Cu;
    {
        const bool branch_taken_0x19761c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19761c) {
            ctx->pc = 0x197660u;
            return;
        }
    }
label_fallthrough_0x19761c:
    ctx->pc = 0x197624u;
}
