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

// Function: entry_00205348
// Address: 0x205348 - 0x205374
void entry_00205348_0x205348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00205348_0x205348");
#endif

    ctx->pc = 0x205348u;

label_205348:
    // 0x205348: 0x82d00000  lb          $s0, 0x0($s6)
    ctx->pc = 0x205348u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_20534c:
    // 0x20534c: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x20534cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_205350:
    // 0x205350: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
label_205354:
    if (ctx->pc == 0x205354u) {
        ctx->pc = 0x205354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205350u;
        // 0x205354: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x205358u;
        goto label_205358;
    }
    ctx->pc = 0x205350u;
    {
        const bool branch_taken_0x205350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x205354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205350u;
        // 0x205354: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x205350) {
            ctx->pc = 0x205554u;
            return;
        }
    }
    ctx->pc = 0x205358u;
label_205358:
    // 0x205358: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x205358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_20535c:
    // 0x20535c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x20535cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_205360:
    // 0x205360: 0x244253c0  addiu       $v0, $v0, 0x53C0
    ctx->pc = 0x205360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21440));
label_205364:
    // 0x205364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x205364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_205368:
    // 0x205368: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x205368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20536c:
    // 0x20536c: 0x800008  jr          $a0
label_205370:
    if (ctx->pc == 0x205370u) {
        ctx->pc = 0x205374u;
        goto label_fallthrough_0x20536c;
    }
    ctx->pc = 0x20536Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20536Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x20536c:
    ctx->pc = 0x205374u;
}
