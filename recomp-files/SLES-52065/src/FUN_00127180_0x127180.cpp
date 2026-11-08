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

// Function: FUN_00127180
// Address: 0x127180 - 0x1271d0
void FUN_00127180_0x127180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00127180_0x127180");
#endif

    switch (ctx->pc) {
        case 0x127194u: goto label_127194;
        default: break;
    }

    ctx->pc = 0x127180u;

    // 0x127180: 0x8c8500f4  lw          $a1, 0xF4($a0)
    ctx->pc = 0x127180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 244)));
    // 0x127184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x127184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127188: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x127188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12718c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12718Cu;
    {
        const bool branch_taken_0x12718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12718Cu;
        // 0x127190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12718c) {
            ctx->pc = 0x1271ACu;
            goto label_1271ac;
        }
    }
    ctx->pc = 0x127194u;
label_127194:
    // 0x127194: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x127194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x127198: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x127198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12719c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x12719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1271a0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1271a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1271a4: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1271a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x1271a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1271a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1271ac:
    // 0x1271ac: 0x0  nop
    ctx->pc = 0x1271acu;
    // NOP
    // 0x1271b0: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1271b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1271b4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1271B4u;
    {
        const bool branch_taken_0x1271b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271b4) {
            ctx->pc = 0x1271C4u;
            goto label_1271c4;
        }
    }
    ctx->pc = 0x1271BCu;
    // 0x1271bc: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1271BCu;
    {
        const bool branch_taken_0x1271bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1271bc) {
            ctx->pc = 0x127194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127194;
        }
    }
    ctx->pc = 0x1271C4u;
label_1271c4:
    // 0x1271c4: 0x0  nop
    ctx->pc = 0x1271c4u;
    // NOP
    // 0x1271c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1271C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1271C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1271D0u;
}
