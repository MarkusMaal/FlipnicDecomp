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

// Function: FUN_001d4590
// Address: 0x1d4590 - 0x1d45c0
void FUN_001d4590_0x1d4590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4590_0x1d4590");
#endif

    ctx->pc = 0x1d4590u;

    // 0x1d4590: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d4590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d4594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4598: 0x24420478  addiu       $v0, $v0, 0x478
    ctx->pc = 0x1d4598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1144));
    // 0x1d459c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d459cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d45a0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1d45a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x370478u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x370478u, _value); } while (0);
    // 0x1d45a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D45A4u;
    {
        const bool branch_taken_0x1d45a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45A4u;
        // 0x1d45a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45a4) {
            ctx->pc = 0x1D45B8u;
            goto label_1d45b8;
        }
    }
    ctx->pc = 0x1D45ACu;
    // 0x1d45ac: 0x80750a2  j           func_1D4288
    ctx->pc = 0x1D45ACu;
    ctx->pc = 0x1D45B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D45ACu;
    // 0x1d45b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4288u;
    FUN_001d4288_0x1d4288(rdram, ctx, runtime); return;
    ctx->pc = 0x1D45B4u;
    // 0x1d45b4: 0x0  nop
    ctx->pc = 0x1d45b4u;
    // NOP
label_1d45b8:
    // 0x1d45b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D45B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D45BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45B8u;
        // 0x1d45bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D45B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D45C0u;
}
