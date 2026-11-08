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

// Function: FUN_001dd518
// Address: 0x1dd518 - 0x1dd568
void FUN_001dd518_0x1dd518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd518_0x1dd518");
#endif

    ctx->pc = 0x1dd518u;

    // 0x1dd518: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd518u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd51c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1dd51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd520: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dd520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd524: 0x24c7003c  addiu       $a3, $a2, 0x3C
    ctx->pc = 0x1dd524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
    // 0x1dd528: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1DD528u;
    {
        const bool branch_taken_0x1dd528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD528u;
        // 0x1dd52c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd528) {
            ctx->pc = 0x1DD560u;
            goto label_1dd560;
        }
    }
    ctx->pc = 0x1DD530u;
    // 0x1dd530: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dd530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dd534: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1dd534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1dd538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dd538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dd53c: 0x24847330  addiu       $a0, $a0, 0x7330
    ctx->pc = 0x1dd53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29488));
    // 0x1dd540: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dd540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dd544: 0x24430090  addiu       $v1, $v0, 0x90
    ctx->pc = 0x1dd544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dd548: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1dd548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dd54c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x1dd54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1dd550: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd554: 0xac46008c  sw          $a2, 0x8C($v0)
    ctx->pc = 0x1dd554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 6));
    // 0x1dd558: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dd558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dd55c: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x1dd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
label_1dd560:
    // 0x1dd560: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD568u;
}
