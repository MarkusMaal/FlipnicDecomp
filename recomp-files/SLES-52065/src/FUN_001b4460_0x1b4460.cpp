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

// Function: FUN_001b4460
// Address: 0x1b4460 - 0x1b44bc
void FUN_001b4460_0x1b4460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b4460_0x1b4460");
#endif

    ctx->pc = 0x1b4460u;

    // 0x1b4460: 0x8c870028  lw          $a3, 0x28($a0)
    ctx->pc = 0x1b4460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b4464: 0x3c0307ff  lui         $v1, 0x7FF
    ctx->pc = 0x1b4464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2047 << 16));
    // 0x1b4468: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b4468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b446c: 0x3468ffff  ori         $t0, $v1, 0xFFFF
    ctx->pc = 0x1b446cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b4470: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x1b4470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x1b4474: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b4474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4478: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1b4478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b447c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x1b447cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x1b4480: 0x63102  srl         $a2, $a2, 4
    ctx->pc = 0x1b4480u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x1b4484: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x1b4484u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x1b4488: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b4488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b448c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1b448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1b4490: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1b4490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1b4494: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b4494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b4498: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1b4498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1b449c: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x1b449cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x1b44a0: 0x5297e  dsrl32      $a1, $a1, 5
    ctx->pc = 0x1b44a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 5));
    // 0x1b44a4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1b44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1b44a8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1b44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1b44ac: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1b44acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1b44b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b44b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b44b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B44B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B44B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B44B4u;
        // 0x1b44b8: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B44B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B44BCu;
}
