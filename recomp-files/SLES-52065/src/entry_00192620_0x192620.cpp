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

// Function: entry_00192620
// Address: 0x192620 - 0x19265c
void entry_00192620_0x192620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00192620_0x192620");
#endif

    switch (ctx->pc) {
        case 0x192654u: goto label_192654;
        default: break;
    }

    ctx->pc = 0x192620u;

    // 0x192620: 0x7822d6f0  lq          $v0, -0x2910($at)
    ctx->pc = 0x192620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 1), 4294956784)));
    // 0x192624: 0x704510a8  pceqw       $v0, $v0, $a1
    ctx->pc = 0x192624u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x192628: 0x704215c8  ppach       $v0, $v0, $v0
    ctx->pc = 0x192628u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x19262c: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x19262cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x192630: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x192630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x192634: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x192634u;
    {
        const bool branch_taken_0x192634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x192634) {
            ctx->pc = 0x19265Cu;
            return;
        }
    }
    ctx->pc = 0x19263Cu;
    // 0x19263c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x19263cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192640: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x192640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x192644: 0x8f838704  lw          $v1, -0x78FC($gp)
    ctx->pc = 0x192644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936324)));
    // 0x192648: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x192648u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x19264c: 0xc063f40  jal         func_18FD00
    ctx->pc = 0x19264Cu;
    SET_GPR_U32(ctx, 31, 0x192654u);
    ctx->pc = 0x192650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19264Cu;
    // 0x192650: 0x24640210  addiu       $a0, $v1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FD00u, 0x19264Cu, 0x192654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192654u;
label_192654:
    // 0x192654: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x192654u;
    {
        const bool branch_taken_0x192654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192654u;
        // 0x192658: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192654) {
            ctx->pc = 0x192678u;
            return;
        }
    }
    ctx->pc = 0x19265Cu;
}
