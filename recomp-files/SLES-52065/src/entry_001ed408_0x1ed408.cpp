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

// Function: entry_001ed408
// Address: 0x1ed408 - 0x1ed430
void entry_001ed408_0x1ed408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed408_0x1ed408");
#endif

    switch (ctx->pc) {
        case 0x1ed41cu: goto label_1ed41c;
        default: break;
    }

    ctx->pc = 0x1ed408u;

label_1ed408:
    // 0x1ed408: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1ed408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_1ed40c:
    // 0x1ed40c: 0x8ea2a3c4  lw          $v0, -0x5C3C($s5)
    ctx->pc = 0x1ed40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294943684)));
label_1ed410:
    // 0x1ed410: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x1ed410u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_1ed414:
    // 0x1ed414: 0x40f809  jalr        $v0
label_1ed418:
    if (ctx->pc == 0x1ED418u) {
        ctx->pc = 0x1ED418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED414u;
        // 0x1ed418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED41Cu;
        goto label_1ed41c;
    }
    ctx->pc = 0x1ED414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ED41Cu);
        ctx->pc = 0x1ED418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED414u;
        // 0x1ed418: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED414u, 0x1ED41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ED41Cu;
label_1ed41c:
    // 0x1ed41c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ed41cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ed420:
    // 0x1ed420: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1ed424:
    if (ctx->pc == 0x1ED424u) {
        ctx->pc = 0x1ED424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED420u;
        // 0x1ed424: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED428u;
        goto label_1ed428;
    }
    ctx->pc = 0x1ED420u;
    {
        const bool branch_taken_0x1ed420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED420u;
        // 0x1ed424: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed420) {
            ctx->pc = 0x1ED408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed408;
        }
    }
    ctx->pc = 0x1ED428u;
label_1ed428:
    // 0x1ed428: 0x10000085  b           . + 4 + (0x85 << 2)
label_1ed42c:
    if (ctx->pc == 0x1ED42Cu) {
        ctx->pc = 0x1ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED428u;
        // 0x1ed42c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ED430u;
        goto label_fallthrough_0x1ed428;
    }
    ctx->pc = 0x1ED428u;
    {
        const bool branch_taken_0x1ed428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED428u;
        // 0x1ed42c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed428) {
            ctx->pc = 0x1ED640u;
            return;
        }
    }
label_fallthrough_0x1ed428:
    ctx->pc = 0x1ED430u;
}
