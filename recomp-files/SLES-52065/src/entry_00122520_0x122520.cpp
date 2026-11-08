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

// Function: entry_00122520
// Address: 0x122520 - 0x122554
void entry_00122520_0x122520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122520_0x122520");
#endif

    ctx->pc = 0x122520u;

    // 0x122520: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x122520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x122524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122528: 0x93838048  lbu         $v1, -0x7FB8($gp)
    ctx->pc = 0x122528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934600)));
    // 0x12252c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x12252cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x122530: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x122530u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x122534: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x122534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x122538: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x122538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12253c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12253cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122540: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x122540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x122544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x122548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12254c: 0x3e00008  jr          $ra
    ctx->pc = 0x12254Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12254Cu;
        // 0x122550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12254Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122554u;
}
