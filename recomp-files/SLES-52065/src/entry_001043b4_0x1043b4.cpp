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

// Function: entry_001043b4
// Address: 0x1043b4 - 0x1043f0
void entry_001043b4_0x1043b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001043b4_0x1043b4");
#endif

    switch (ctx->pc) {
        case 0x1043bcu: goto label_1043bc;
        case 0x1043ccu: goto label_1043cc;
        default: break;
    }

    ctx->pc = 0x1043b4u;

    // 0x1043b4: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1043B4u;
    SET_GPR_U32(ctx, 31, 0x1043BCu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1043B4u, 0x1043BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043BCu;
label_1043bc:
    // 0x1043bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1043BCu;
    {
        const bool branch_taken_0x1043bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1043C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1043BCu;
        // 0x1043c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1043bc) {
            ctx->pc = 0x1043F0u;
            return;
        }
    }
    ctx->pc = 0x1043C4u;
    // 0x1043c4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1043C4u;
    SET_GPR_U32(ctx, 31, 0x1043CCu);
    ctx->pc = 0x1043C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1043C4u;
    // 0x1043c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1043C4u, 0x1043CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1043CCu;
label_1043cc:
    // 0x1043cc: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1043ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1043d0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1043d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1043d4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1043d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1043d8: 0x2463a070  addiu       $v1, $v1, -0x5F90
    ctx->pc = 0x1043d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942832));
    // 0x1043dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1043dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1043e0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1043e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1043e4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1043e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1043e8: 0x2442a2b0  addiu       $v0, $v0, -0x5D50
    ctx->pc = 0x1043e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
    // 0x1043ec: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1043ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1043f0u;
}
