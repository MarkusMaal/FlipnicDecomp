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

// Function: entry_001924e4
// Address: 0x1924e4 - 0x192520
void entry_001924e4_0x1924e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001924e4_0x1924e4");
#endif

    switch (ctx->pc) {
        case 0x192518u: goto label_192518;
        default: break;
    }

    ctx->pc = 0x1924e4u;

    // 0x1924e4: 0x7822d6f0  lq          $v0, -0x2910($at)
    ctx->pc = 0x1924e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294956784)));
    // 0x1924e8: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x1924e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x1924ec: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x1924ecu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x1924f0: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x1924f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1924f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1924f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1924f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1924F8u;
    {
        const bool branch_taken_0x1924f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1924f8) {
            ctx->pc = 0x192520u;
            return;
        }
    }
    ctx->pc = 0x192500u;
    // 0x192500: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x192504: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x192504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192508: 0x78820550  lq          $v0, 0x550($a0)
    ctx->pc = 0x192508u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x19250c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x19250cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x192510: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x192510u;
    SET_GPR_U32(ctx, 31, 0x192518u);
    ctx->pc = 0x192514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192510u;
    // 0x192514: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x192510u, 0x192518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192518u;
label_192518:
    // 0x192518: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192518u;
    {
        const bool branch_taken_0x192518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192518u;
        // 0x19251c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192518) {
            ctx->pc = 0x19253Cu;
            return;
        }
    }
    ctx->pc = 0x192520u;
}
