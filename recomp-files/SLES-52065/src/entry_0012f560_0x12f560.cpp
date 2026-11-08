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

// Function: entry_0012f560
// Address: 0x12f560 - 0x12f584
void entry_0012f560_0x12f560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f560_0x12f560");
#endif

    switch (ctx->pc) {
        case 0x12f578u: goto label_12f578;
        default: break;
    }

    ctx->pc = 0x12f560u;

    // 0x12f560: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x12f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x12f564: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x12f564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x12f568: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12f568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x12f56c: 0x27a51a20  addiu       $a1, $sp, 0x1A20
    ctx->pc = 0x12f56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 6688));
    // 0x12f570: 0xc080702  jal         func_201C08
    ctx->pc = 0x12F570u;
    SET_GPR_U32(ctx, 31, 0x12F578u);
    ctx->pc = 0x12F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F570u;
    // 0x12f574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x12F570u, 0x12F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F578u;
label_12f578:
    // 0x12f578: 0x26940100  addiu       $s4, $s4, 0x100
    ctx->pc = 0x12f578u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    // 0x12f57c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F57Cu;
    {
        const bool branch_taken_0x12f57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F57Cu;
        // 0x12f580: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f57c) {
            ctx->pc = 0x12F590u;
            return;
        }
    }
    ctx->pc = 0x12F584u;
}
