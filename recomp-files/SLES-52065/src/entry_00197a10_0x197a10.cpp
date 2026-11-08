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

// Function: entry_00197a10
// Address: 0x197a10 - 0x197a40
void entry_00197a10_0x197a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a10_0x197a10");
#endif

    switch (ctx->pc) {
        case 0x197a38u: goto label_197a38;
        default: break;
    }

    ctx->pc = 0x197a10u;

    // 0x197a10: 0x8ea606d0  lw          $a2, 0x6D0($s5)
    ctx->pc = 0x197a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
    // 0x197a14: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x197a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a1c: 0x3408f600  ori         $t0, $zero, 0xF600
    ctx->pc = 0x197a1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
    // 0x197a20: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197a24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x197a24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197a28: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x197a2c: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x197a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x197a30: 0xc064cb4  jal         func_1932D0
    ctx->pc = 0x197A30u;
    SET_GPR_U32(ctx, 31, 0x197A38u);
    ctx->pc = 0x197A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A30u;
    // 0x197a34: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932D0u, 0x197A30u, 0x197A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A38u;
label_197a38:
    // 0x197a38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197A38u;
    {
        const bool branch_taken_0x197a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197a38) {
            ctx->pc = 0x197A5Cu;
            return;
        }
    }
    ctx->pc = 0x197A40u;
}
