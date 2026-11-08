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

// Function: FUN_001cc540
// Address: 0x1cc540 - 0x1cc5c0
void FUN_001cc540_0x1cc540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc540_0x1cc540");
#endif

    ctx->pc = 0x1cc540u;

    // 0x1cc540: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc544: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cc548: 0x8c25ca84  lw          $a1, -0x357C($at)
    ctx->pc = 0x1cc548u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc54c: 0x24422960  addiu       $v0, $v0, 0x2960
    ctx->pc = 0x1cc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10592));
    // 0x1cc550: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc554: 0x24a510c8  addiu       $a1, $a1, 0x10C8
    ctx->pc = 0x1cc554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4296));
    // 0x1cc558: 0x8c23f950  lw          $v1, -0x6B0($at)
    ctx->pc = 0x1cc558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F950u));
    // 0x1cc55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc564: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cc564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cc568: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1cc568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1cc56c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1cc56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1cc570: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1cc574: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1cc574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cc578: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC578u;
    {
        const bool branch_taken_0x1cc578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC578u;
        // 0x1cc57c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc578) {
            ctx->pc = 0x1CC58Cu;
            goto label_1cc58c;
        }
    }
    ctx->pc = 0x1CC580u;
    // 0x1cc580: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1cc584: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1CC584u;
    {
        const bool branch_taken_0x1cc584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC584u;
        // 0x1cc588: 0x244229f8  addiu       $v0, $v0, 0x29F8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc584) {
            ctx->pc = 0x1CC5B8u;
            goto label_1cc5b8;
        }
    }
    ctx->pc = 0x1CC58Cu;
label_1cc58c:
    // 0x1cc58c: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc590: 0x8c24c6f4  lw          $a0, -0x390C($at)
    ctx->pc = 0x1cc590u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x22C6F4u));
    // 0x1cc594: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x1cc594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x1cc598: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1cc59c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cc5a0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1cc5a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc5a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1cc5ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cc5b0: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x1cc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1cc5b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1cc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cc5b8:
    // 0x1cc5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC5C0u;
}
