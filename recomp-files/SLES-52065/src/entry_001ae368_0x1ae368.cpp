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

// Function: entry_001ae368
// Address: 0x1ae368 - 0x1ae3a8
void entry_001ae368_0x1ae368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae368_0x1ae368");
#endif

    switch (ctx->pc) {
        case 0x1ae378u: goto label_1ae378;
        case 0x1ae384u: goto label_1ae384;
        default: break;
    }

    ctx->pc = 0x1ae368u;

label_1ae368:
    // 0x1ae368: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1ae368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1ae36c:
    // 0x1ae36c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ae36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ae370:
    // 0x1ae370: 0xc055c78  jal         func_1571E0
label_1ae374:
    if (ctx->pc == 0x1AE374u) {
        ctx->pc = 0x1AE378u;
        goto label_1ae378;
    }
    ctx->pc = 0x1AE370u;
    SET_GPR_U32(ctx, 31, 0x1AE378u);
    ctx->pc = 0x1571E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1571E0u, 0x1AE370u, 0x1AE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE378u;
label_1ae378:
    // 0x1ae378: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1ae378u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ae37c:
    // 0x1ae37c: 0xc063dd4  jal         func_18F750
label_1ae380:
    if (ctx->pc == 0x1AE380u) {
        ctx->pc = 0x1AE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE37Cu;
        // 0x1ae380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE384u;
        goto label_1ae384;
    }
    ctx->pc = 0x1AE37Cu;
    SET_GPR_U32(ctx, 31, 0x1AE384u);
    ctx->pc = 0x1AE380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE37Cu;
    // 0x1ae380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x1AE37Cu, 0x1AE384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE384u;
label_1ae384:
    // 0x1ae384: 0x2c41000e  sltiu       $at, $v0, 0xE
    ctx->pc = 0x1ae384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_1ae388:
    // 0x1ae388: 0x1020028b  beqz        $at, . + 4 + (0x28B << 2)
label_1ae38c:
    if (ctx->pc == 0x1AE38Cu) {
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AE390u;
        goto label_1ae390;
    }
    ctx->pc = 0x1AE388u;
    {
        const bool branch_taken_0x1ae388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE388u;
        // 0x1ae38c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae388) {
            ctx->pc = 0x1AEDB8u;
            return;
        }
    }
    ctx->pc = 0x1AE390u;
label_1ae390:
    // 0x1ae390: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ae390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1ae394:
    // 0x1ae394: 0x24840b10  addiu       $a0, $a0, 0xB10
    ctx->pc = 0x1ae394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2832));
label_1ae398:
    // 0x1ae398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ae398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1ae39c:
    // 0x1ae39c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ae39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ae3a0:
    // 0x1ae3a0: 0x600008  jr          $v1
label_1ae3a4:
    if (ctx->pc == 0x1AE3A4u) {
        ctx->pc = 0x1AE3A8u;
        goto label_fallthrough_0x1ae3a0;
    }
    ctx->pc = 0x1AE3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE3A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1ae3a0:
    ctx->pc = 0x1AE3A8u;
}
