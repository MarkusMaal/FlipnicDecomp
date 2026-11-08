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

// Function: entry_00104294
// Address: 0x104294 - 0x1042d0
void entry_00104294_0x104294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104294_0x104294");
#endif

    switch (ctx->pc) {
        case 0x10429cu: goto label_10429c;
        case 0x1042acu: goto label_1042ac;
        default: break;
    }

    ctx->pc = 0x104294u;

    // 0x104294: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x104294u;
    SET_GPR_U32(ctx, 31, 0x10429Cu);
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x104294u, 0x10429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10429Cu;
label_10429c:
    // 0x10429c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10429Cu;
    {
        const bool branch_taken_0x10429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1042A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10429Cu;
        // 0x1042a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10429c) {
            ctx->pc = 0x1042D0u;
            return;
        }
    }
    ctx->pc = 0x1042A4u;
    // 0x1042a4: 0xc0416a8  jal         func_105AA0
    ctx->pc = 0x1042A4u;
    SET_GPR_U32(ctx, 31, 0x1042ACu);
    ctx->pc = 0x1042A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042A4u;
    // 0x1042a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105AA0u, 0x1042A4u, 0x1042ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1042ACu;
label_1042ac:
    // 0x1042ac: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1042acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1042b0: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x1042b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
    // 0x1042b4: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x1042b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x1042b8: 0x2463a070  addiu       $v1, $v1, -0x5F90
    ctx->pc = 0x1042b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942832));
    // 0x1042bc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1042bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1042c0: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1042c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1042c4: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1042c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1042c8: 0x2442a010  addiu       $v0, $v0, -0x5FF0
    ctx->pc = 0x1042c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942736));
    // 0x1042cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1042ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1042d0u;
}
