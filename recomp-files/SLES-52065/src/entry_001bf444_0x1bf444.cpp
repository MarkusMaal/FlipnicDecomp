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

// Function: entry_001bf444
// Address: 0x1bf444 - 0x1bf474
void entry_001bf444_0x1bf444(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf444_0x1bf444");
#endif

    ctx->pc = 0x1bf444u;

label_1bf444:
    // 0x1bf444: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1bf448:
    // 0x1bf448: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bf448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964456)));
label_1bf44c:
    // 0x1bf44c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x1bf44cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1bf450:
    // 0x1bf450: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
label_1bf454:
    if (ctx->pc == 0x1BF454u) {
        ctx->pc = 0x1BF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF450u;
        // 0x1bf454: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF458u;
        goto label_1bf458;
    }
    ctx->pc = 0x1BF450u;
    {
        const bool branch_taken_0x1bf450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF450u;
        // 0x1bf454: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf450) {
            ctx->pc = 0x1BF548u;
            return;
        }
    }
    ctx->pc = 0x1BF458u;
label_1bf458:
    // 0x1bf458: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1bf45c:
    // 0x1bf45c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bf460:
    // 0x1bf460: 0x24a513f0  addiu       $a1, $a1, 0x13F0
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5104));
label_1bf464:
    // 0x1bf464: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1bf468:
    // 0x1bf468: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bf468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf46c:
    // 0x1bf46c: 0x600008  jr          $v1
label_1bf470:
    if (ctx->pc == 0x1BF470u) {
        ctx->pc = 0x1BF474u;
        goto label_fallthrough_0x1bf46c;
    }
    ctx->pc = 0x1BF46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF46Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1bf46c:
    ctx->pc = 0x1BF474u;
}
