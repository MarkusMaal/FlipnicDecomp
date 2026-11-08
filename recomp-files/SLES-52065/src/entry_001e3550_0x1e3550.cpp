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

// Function: entry_001e3550
// Address: 0x1e3550 - 0x1e3594
void entry_001e3550_0x1e3550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3550_0x1e3550");
#endif

    switch (ctx->pc) {
        case 0x1e3564u: goto label_1e3564;
        case 0x1e3574u: goto label_1e3574;
        default: break;
    }

    ctx->pc = 0x1e3550u;

label_1e3550:
    // 0x1e3550: 0x8e64002c  lw          $a0, 0x2C($s3)
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_1e3554:
    // 0x1e3554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3558:
    // 0x1e3558: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e355c:
    // 0x1e355c: 0x320f809  jalr        $t9
label_1e3560:
    if (ctx->pc == 0x1E3560u) {
        ctx->pc = 0x1E3564u;
        goto label_1e3564;
    }
    ctx->pc = 0x1E355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3564u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E355Cu, 0x1E3564u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3564u;
label_1e3564:
    // 0x1e3564: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e3568:
    if (ctx->pc == 0x1E3568u) {
        ctx->pc = 0x1E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3564u;
        // 0x1e3568: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E356Cu;
        goto label_1e356c;
    }
    ctx->pc = 0x1E3564u;
    {
        const bool branch_taken_0x1e3564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3564u;
        // 0x1e3568: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3564) {
            ctx->pc = 0x1E3594u;
            return;
        }
    }
    ctx->pc = 0x1E356Cu;
label_1e356c:
    // 0x1e356c: 0xc07a704  jal         func_1E9C10
label_1e3570:
    if (ctx->pc == 0x1E3570u) {
        ctx->pc = 0x1E3570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E356Cu;
        // 0x1e3570: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3574u;
        goto label_1e3574;
    }
    ctx->pc = 0x1E356Cu;
    SET_GPR_U32(ctx, 31, 0x1E3574u);
    ctx->pc = 0x1E3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E356Cu;
    // 0x1e3570: 0x27c40080  addiu       $a0, $fp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9C10u, 0x1E356Cu, 0x1E3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3574u;
label_1e3574:
    // 0x1e3574: 0x0  nop
    ctx->pc = 0x1e3574u;
    // NOP
label_1e3578:
    // 0x1e3578: 0x0  nop
    ctx->pc = 0x1e3578u;
    // NOP
label_1e357c:
    // 0x1e357c: 0x0  nop
    ctx->pc = 0x1e357cu;
    // NOP
label_1e3580:
    // 0x1e3580: 0x0  nop
    ctx->pc = 0x1e3580u;
    // NOP
label_1e3584:
    // 0x1e3584: 0x0  nop
    ctx->pc = 0x1e3584u;
    // NOP
label_1e3588:
    // 0x1e3588: 0x0  nop
    ctx->pc = 0x1e3588u;
    // NOP
label_1e358c:
    // 0x1e358c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
label_1e3590:
    if (ctx->pc == 0x1E3590u) {
        ctx->pc = 0x1E3594u;
        goto label_fallthrough_0x1e358c;
    }
    ctx->pc = 0x1E358Cu;
    {
        const bool branch_taken_0x1e358c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e358c) {
            ctx->pc = 0x1E3574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e3574;
        }
    }
label_fallthrough_0x1e358c:
    ctx->pc = 0x1E3594u;
}
