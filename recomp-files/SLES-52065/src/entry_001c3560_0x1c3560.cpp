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

// Function: entry_001c3560
// Address: 0x1c3560 - 0x1c35a0
void entry_001c3560_0x1c3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3560_0x1c3560");
#endif

    switch (ctx->pc) {
        case 0x1c3568u: goto label_1c3568;
        case 0x1c3578u: goto label_1c3578;
        case 0x1c3594u: goto label_1c3594;
        default: break;
    }

    ctx->pc = 0x1c3560u;

    // 0x1c3560: 0xc06e008  jal         func_1B8020
    ctx->pc = 0x1C3560u;
    SET_GPR_U32(ctx, 31, 0x1C3568u);
    ctx->pc = 0x1C3564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3560u;
    // 0x1c3564: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8020u, 0x1C3560u, 0x1C3568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3568u;
label_1c3568:
    // 0x1c3568: 0x104003a7  beqz        $v0, . + 4 + (0x3A7 << 2)
    ctx->pc = 0x1C3568u;
    {
        const bool branch_taken_0x1c3568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3568u;
        // 0x1c356c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3568) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C3570u;
    // 0x1c3570: 0xc06ddc0  jal         func_1B7700
    ctx->pc = 0x1C3570u;
    SET_GPR_U32(ctx, 31, 0x1C3578u);
    ctx->pc = 0x1C3574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3570u;
    // 0x1c3574: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7700u, 0x1C3570u, 0x1C3578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3578u;
label_1c3578:
    // 0x1c3578: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x1c3578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1c357c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3580: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C3580u;
    {
        const bool branch_taken_0x1c3580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C3584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3580u;
        // 0x1c3584: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3580) {
            ctx->pc = 0x1C35A0u;
            return;
        }
    }
    ctx->pc = 0x1C3588u;
    // 0x1c3588: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c358c: 0xc071160  jal         func_1C4580
    ctx->pc = 0x1C358Cu;
    SET_GPR_U32(ctx, 31, 0x1C3594u);
    ctx->pc = 0x1C3590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C358Cu;
    // 0x1c3590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4580u, 0x1C358Cu, 0x1C3594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3594u;
label_1c3594:
    // 0x1c3594: 0xa2000264  sb          $zero, 0x264($s0)
    ctx->pc = 0x1c3594u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 612), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c3598: 0x1000039b  b           . + 4 + (0x39B << 2)
    ctx->pc = 0x1C3598u;
    {
        const bool branch_taken_0x1c3598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3598u;
        // 0x1c359c: 0xae00007c  sw          $zero, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3598) {
            ctx->pc = 0x1C4408u;
            return;
        }
    }
    ctx->pc = 0x1C35A0u;
}
