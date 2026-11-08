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

// Function: entry_001e6334
// Address: 0x1e6334 - 0x1e6360
void entry_001e6334_0x1e6334(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6334_0x1e6334");
#endif

    switch (ctx->pc) {
        case 0x1e634cu: goto label_1e634c;
        default: break;
    }

    ctx->pc = 0x1e6334u;

    // 0x1e6334: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e6334u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e6338: 0x27a20068  addiu       $v0, $sp, 0x68
    ctx->pc = 0x1e6338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e633c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e6340: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x1e6340u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e6344: 0xc080dea  jal         func_2037A8
    ctx->pc = 0x1E6344u;
    SET_GPR_U32(ctx, 31, 0x1E634Cu);
    ctx->pc = 0x1E6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6344u;
    // 0x1e6348: 0x8e850024  lw          $a1, 0x24($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2037A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2037A8u, 0x1E6344u, 0x1E634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E634Cu;
label_1e634c:
    // 0x1e634c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e634cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6350: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6350u;
    {
        const bool branch_taken_0x1e6350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6350) {
            ctx->pc = 0x1E6360u;
            return;
        }
    }
    ctx->pc = 0x1E6358u;
    // 0x1e6358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E6358u;
    {
        const bool branch_taken_0x1e6358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E635Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6358u;
        // 0x1e635c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6358) {
            ctx->pc = 0x1E6370u;
            return;
        }
    }
    ctx->pc = 0x1E6360u;
}
