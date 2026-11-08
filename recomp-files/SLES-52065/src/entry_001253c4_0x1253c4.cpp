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

// Function: entry_001253c4
// Address: 0x1253c4 - 0x1253e4
void entry_001253c4_0x1253c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001253c4_0x1253c4");
#endif

    switch (ctx->pc) {
        case 0x1253ccu: goto label_1253cc;
        default: break;
    }

    ctx->pc = 0x1253c4u;

    // 0x1253c4: 0xc04925c  jal         func_124970
    ctx->pc = 0x1253C4u;
    SET_GPR_U32(ctx, 31, 0x1253CCu);
    ctx->pc = 0x1253C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253C4u;
    // 0x1253c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124970u, 0x1253C4u, 0x1253CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253CCu;
label_1253cc:
    // 0x1253cc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1253ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1253d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1253d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1253d4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1253D4u;
    {
        const bool branch_taken_0x1253d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1253D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1253D4u;
        // 0x1253d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1253d4) {
            ctx->pc = 0x1253E8u;
            return;
        }
    }
    ctx->pc = 0x1253DCu;
    // 0x1253dc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1253DCu;
    SET_GPR_U32(ctx, 31, 0x1253E4u);
    ctx->pc = 0x1253E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1253DCu;
    // 0x1253e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1253DCu, 0x1253E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1253E4u;
}
