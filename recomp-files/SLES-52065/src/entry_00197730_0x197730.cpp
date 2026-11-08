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

// Function: entry_00197730
// Address: 0x197730 - 0x197758
void entry_00197730_0x197730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197730_0x197730");
#endif

    ctx->pc = 0x197730u;

    // 0x197730: 0x8ea606d0  lw          $a2, 0x6D0($s5)
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1744)));
    // 0x197734: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x197734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x197738: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19773c: 0x3408f600  ori         $t0, $zero, 0xF600
    ctx->pc = 0x19773cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62976);
    // 0x197740: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x197740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197744: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x197744u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197748: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x19774c: 0x8cc60024  lw          $a2, 0x24($a2)
    ctx->pc = 0x19774cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x197750: 0xc064cb4  jal         func_1932D0
    ctx->pc = 0x197750u;
    SET_GPR_U32(ctx, 31, 0x197758u);
    ctx->pc = 0x197754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197750u;
    // 0x197754: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1932D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932D0u, 0x197750u, 0x197758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197758u;
}
