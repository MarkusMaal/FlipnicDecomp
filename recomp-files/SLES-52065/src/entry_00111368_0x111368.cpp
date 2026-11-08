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

// Function: entry_00111368
// Address: 0x111368 - 0x111394
void entry_00111368_0x111368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111368_0x111368");
#endif

    ctx->pc = 0x111368u;

label_111368:
    // 0x111368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x111368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11136c:
    // 0x11136c: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x11136cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_111370:
    // 0x111370: 0x10200199  beqz        $at, . + 4 + (0x199 << 2)
label_111374:
    if (ctx->pc == 0x111374u) {
        ctx->pc = 0x111374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111370u;
        // 0x111374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111378u;
        goto label_111378;
    }
    ctx->pc = 0x111370u;
    {
        const bool branch_taken_0x111370 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x111374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111370u;
        // 0x111374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111370) {
            ctx->pc = 0x1119D8u;
            return;
        }
    }
    ctx->pc = 0x111378u;
label_111378:
    // 0x111378: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x111378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_11137c:
    // 0x11137c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x11137cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_111380:
    // 0x111380: 0x2463e420  addiu       $v1, $v1, -0x1BE0
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960160));
label_111384:
    // 0x111384: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x111384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_111388:
    // 0x111388: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x111388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11138c:
    // 0x11138c: 0x400008  jr          $v0
label_111390:
    if (ctx->pc == 0x111390u) {
        ctx->pc = 0x111394u;
        goto label_fallthrough_0x11138c;
    }
    ctx->pc = 0x11138Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11138Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x11138c:
    ctx->pc = 0x111394u;
}
