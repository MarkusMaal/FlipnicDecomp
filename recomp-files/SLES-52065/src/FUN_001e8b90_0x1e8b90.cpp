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

// Function: FUN_001e8b90
// Address: 0x1e8b90 - 0x1e8bf4
void FUN_001e8b90_0x1e8b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e8b90_0x1e8b90");
#endif

    ctx->pc = 0x1e8b90u;

    // 0x1e8b90: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e8b94: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e8b98: 0x24428850  addiu       $v0, $v0, -0x77B0
    ctx->pc = 0x1e8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936656));
    // 0x1e8b9c: 0x2463a190  addiu       $v1, $v1, -0x5E70
    ctx->pc = 0x1e8b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943120));
    // 0x1e8ba0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e8ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e8ba4: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x1e8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x1e8ba8: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x1e8ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x1e8bac: 0x2442c330  addiu       $v0, $v0, -0x3CD0
    ctx->pc = 0x1e8bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951728));
    // 0x1e8bb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e8bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1e8bb4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e8bb8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1e8bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1e8bbc: 0x2442a290  addiu       $v0, $v0, -0x5D70
    ctx->pc = 0x1e8bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943376));
    // 0x1e8bc0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1e8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1e8bc4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1e8bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1e8bc8: 0xa0860014  sb          $a2, 0x14($a0)
    ctx->pc = 0x1e8bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e8bcc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1e8bd0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8BD0u;
    {
        const bool branch_taken_0x1e8bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8BD0u;
        // 0x1e8bd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e8bd0) {
            ctx->pc = 0x1E8BECu;
            goto label_1e8bec;
        }
    }
    ctx->pc = 0x1E8BD8u;
    // 0x1e8bd8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e8bdc: 0x2442a090  addiu       $v0, $v0, -0x5F70
    ctx->pc = 0x1e8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942864));
    // 0x1e8be0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1e8be0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1e8be4: 0xa0800014  sb          $zero, 0x14($a0)
    ctx->pc = 0x1e8be4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e8be8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e8be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e8bec:
    // 0x1e8bec: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8BECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8BF4u;
}
