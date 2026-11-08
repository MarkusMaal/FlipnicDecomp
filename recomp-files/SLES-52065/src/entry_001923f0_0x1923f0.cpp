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

// Function: entry_001923f0
// Address: 0x1923f0 - 0x19242c
void entry_001923f0_0x1923f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001923f0_0x1923f0");
#endif

    switch (ctx->pc) {
        case 0x192424u: goto label_192424;
        default: break;
    }

    ctx->pc = 0x1923f0u;

    // 0x1923f0: 0x7822d6f0  lq          $v0, -0x2910($at)
    ctx->pc = 0x1923f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294956784)));
    // 0x1923f4: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x1923f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1923f8: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1923f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1923fc: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1923fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x192400: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x192400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x192404: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192404u;
    {
        const bool branch_taken_0x192404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192404) {
            ctx->pc = 0x19242Cu;
            return;
        }
    }
    ctx->pc = 0x19240Cu;
    // 0x19240c: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x19240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x192410: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x192410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x192414: 0x78820550  lq          $v0, 0x550($a0)
    ctx->pc = 0x192414u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x192418: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x192418u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x19241c: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x19241Cu;
    SET_GPR_U32(ctx, 31, 0x192424u);
    ctx->pc = 0x192420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19241Cu;
    // 0x192420: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x19241Cu, 0x192424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192424u;
label_192424:
    // 0x192424: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192424u;
    {
        const bool branch_taken_0x192424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192424u;
        // 0x192428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192424) {
            ctx->pc = 0x192448u;
            return;
        }
    }
    ctx->pc = 0x19242Cu;
}
