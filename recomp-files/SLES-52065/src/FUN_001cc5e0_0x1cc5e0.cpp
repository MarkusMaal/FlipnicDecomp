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

// Function: FUN_001cc5e0
// Address: 0x1cc5e0 - 0x1cc624
void FUN_001cc5e0_0x1cc5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cc5e0_0x1cc5e0");
#endif

    ctx->pc = 0x1cc5e0u;

    // 0x1cc5e0: 0x3c010023  lui         $at, 0x23
    ctx->pc = 0x1cc5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)35 << 16));
    // 0x1cc5e4: 0x8c23ca84  lw          $v1, -0x357C($at)
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x22CA84u));
    // 0x1cc5e8: 0x9062282b  lbu         $v0, 0x282B($v1)
    ctx->pc = 0x1cc5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10283)));
    // 0x1cc5ec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CC5ECu;
    {
        const bool branch_taken_0x1cc5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC5ECu;
        // 0x1cc5f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5ec) {
            ctx->pc = 0x1CC61Cu;
            goto label_1cc61c;
        }
    }
    ctx->pc = 0x1CC5F4u;
    // 0x1cc5f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc5f8: 0x9063282a  lbu         $v1, 0x282A($v1)
    ctx->pc = 0x1cc5f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10282)));
    // 0x1cc5fc: 0x8c24f948  lw          $a0, -0x6B8($at)
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x36F948u));
    // 0x1cc600: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1cc600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1cc604: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1cc604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1cc608: 0x8c22f958  lw          $v0, -0x6A8($at)
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965592)));
    // 0x1cc60c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1cc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1cc610: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CC610u;
    {
        const bool branch_taken_0x1cc610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC610u;
        // 0x1cc614: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc610) {
            ctx->pc = 0x1CC61Cu;
            goto label_1cc61c;
        }
    }
    ctx->pc = 0x1CC618u;
    // 0x1cc618: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x1cc618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_1cc61c:
    // 0x1cc61c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC624u;
}
