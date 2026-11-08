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

// Function: entry_001d127c
// Address: 0x1d127c - 0x1d12b0
void entry_001d127c_0x1d127c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d127c_0x1d127c");
#endif

    ctx->pc = 0x1d127cu;

    // 0x1d127c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d127cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d1280: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1d1280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1d1284: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d1288: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d1288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d128c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d128cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d1290: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d1290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1298: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1d1298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1d129c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d129cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d12a0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d12a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d12a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d12a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d12a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D12A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D12A8u;
        // 0x1d12ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D12A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D12B0u;
}
