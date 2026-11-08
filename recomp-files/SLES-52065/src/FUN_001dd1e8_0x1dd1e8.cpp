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

// Function: FUN_001dd1e8
// Address: 0x1dd1e8 - 0x1dd220
void FUN_001dd1e8_0x1dd1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd1e8_0x1dd1e8");
#endif

    ctx->pc = 0x1dd1e8u;

    // 0x1dd1e8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1dd1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1dd1ec: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dd1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dd1f0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1dd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd1f4: 0x24427330  addiu       $v0, $v0, 0x7330
    ctx->pc = 0x1dd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29488));
    // 0x1dd1f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1dd1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dd1fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dd200: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dd204: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1dd204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dd208: 0xac850058  sw          $a1, 0x58($a0)
    ctx->pc = 0x1dd208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
    // 0x1dd20c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dd20cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd210: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd214: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1dd214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1dd218: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD218u;
        // 0x1dd21c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD220u;
}
