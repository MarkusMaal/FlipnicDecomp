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

// Function: FUN_001d4368
// Address: 0x1d4368 - 0x1d43c4
void FUN_001d4368_0x1d4368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4368_0x1d4368");
#endif

    ctx->pc = 0x1d4368u;

    // 0x1d4368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d436c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d436cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4374: 0xac8602cc  sw          $a2, 0x2CC($a0)
    ctx->pc = 0x1d4374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 716), GPR_U32(ctx, 6));
    // 0x1d4378: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d4378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d437c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x1d437cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1d4380: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4380u;
    {
        const bool branch_taken_0x1d4380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4380u;
        // 0x1d4384: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4380) {
            ctx->pc = 0x1D43B8u;
            goto label_1d43b8;
        }
    }
    ctx->pc = 0x1D4388u;
    // 0x1d4388: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1d4388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d438c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1d438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d4390: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D4390u;
    {
        const bool branch_taken_0x1d4390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4390) {
            ctx->pc = 0x1D4394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4390u;
            // 0x1d4394: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4398u;
            goto label_1d4398;
        }
    }
    ctx->pc = 0x1D4398u;
label_1d4398:
    // 0x1d4398: 0xdc8400a0  ld          $a0, 0xA0($a0)
    ctx->pc = 0x1d4398u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x1d439c: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x1d439cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1d43a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d43a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d43a4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1d43a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d43a8: 0x2812  mflo        $a1
    ctx->pc = 0x1d43a8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1d43ac: 0x80782a4  j           func_1E0A90
    ctx->pc = 0x1D43ACu;
    ctx->pc = 0x1D43B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43ACu;
    // 0x1d43b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A90u;
    FUN_001e0a90_0x1e0a90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D43B4u;
    // 0x1d43b4: 0x0  nop
    ctx->pc = 0x1d43b4u;
    // NOP
label_1d43b8:
    // 0x1d43b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d43b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d43bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D43BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43BCu;
        // 0x1d43c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D43BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D43C4u;
}
