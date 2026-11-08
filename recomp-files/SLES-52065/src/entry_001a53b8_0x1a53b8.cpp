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

// Function: entry_001a53b8
// Address: 0x1a53b8 - 0x1a53e4
void entry_001a53b8_0x1a53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a53b8_0x1a53b8");
#endif

    switch (ctx->pc) {
        case 0x1a53c0u: goto label_1a53c0;
        case 0x1a53c8u: goto label_1a53c8;
        case 0x1a53d0u: goto label_1a53d0;
        default: break;
    }

    ctx->pc = 0x1a53b8u;

label_1a53b8:
    // 0x1a53b8: 0xc069538  jal         func_1A54E0
label_1a53bc:
    if (ctx->pc == 0x1A53BCu) {
        ctx->pc = 0x1A53C0u;
        goto label_1a53c0;
    }
    ctx->pc = 0x1A53B8u;
    SET_GPR_U32(ctx, 31, 0x1A53C0u);
    ctx->pc = 0x1A54E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A54E0u, 0x1A53B8u, 0x1A53C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53C0u;
label_1a53c0:
    // 0x1a53c0: 0xc06957c  jal         func_1A55F0
label_1a53c4:
    if (ctx->pc == 0x1A53C4u) {
        ctx->pc = 0x1A53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C0u;
        // 0x1a53c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53C8u;
        goto label_1a53c8;
    }
    ctx->pc = 0x1A53C0u;
    SET_GPR_U32(ctx, 31, 0x1A53C8u);
    ctx->pc = 0x1A53C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53C0u;
    // 0x1a53c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A55F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A55F0u, 0x1A53C0u, 0x1A53C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53C8u;
label_1a53c8:
    // 0x1a53c8: 0xc0695ac  jal         func_1A56B0
label_1a53cc:
    if (ctx->pc == 0x1A53CCu) {
        ctx->pc = 0x1A53CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53C8u;
        // 0x1a53cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A53D0u;
        goto label_1a53d0;
    }
    ctx->pc = 0x1A53C8u;
    SET_GPR_U32(ctx, 31, 0x1A53D0u);
    ctx->pc = 0x1A53CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A53C8u;
    // 0x1a53cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A56B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A56B0u, 0x1A53C8u, 0x1A53D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A53D0u;
label_1a53d0:
    // 0x1a53d0: 0x8e640a60  lw          $a0, 0xA60($s3)
    ctx->pc = 0x1a53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2656)));
label_1a53d4:
    // 0x1a53d4: 0x8c990004  lw          $t9, 0x4($a0)
    ctx->pc = 0x1a53d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a53d8:
    // 0x1a53d8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1a53d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1a53dc:
    // 0x1a53dc: 0x320f809  jalr        $t9
label_1a53e0:
    if (ctx->pc == 0x1A53E0u) {
        ctx->pc = 0x1A53E4u;
        goto label_fallthrough_0x1a53dc;
    }
    ctx->pc = 0x1A53DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A53E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53DCu, 0x1A53E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a53dc:
    ctx->pc = 0x1A53E4u;
}
