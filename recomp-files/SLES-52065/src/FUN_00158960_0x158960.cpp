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

// Function: FUN_00158960
// Address: 0x158960 - 0x1589c0
void FUN_00158960_0x158960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00158960_0x158960");
#endif

    ctx->pc = 0x158960u;

    // 0x158960: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x158960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x158964: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x158968: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15896c: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x15896cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x158970: 0x7c6600b0  sq          $a2, 0xB0($v1)
    ctx->pc = 0x158970u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 176), GPR_VEC(ctx, 6));
    // 0x158974: 0x78860010  lq          $a2, 0x10($a0)
    ctx->pc = 0x158974u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x158978: 0x7c660130  sq          $a2, 0x130($v1)
    ctx->pc = 0x158978u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 304), GPR_VEC(ctx, 6));
    // 0x15897c: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x15897cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x158980: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x158980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x158984: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x158984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x158988: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x158988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x15898c: 0x8c850064  lw          $a1, 0x64($a0)
    ctx->pc = 0x15898cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x158990: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158990u;
    {
        const bool branch_taken_0x158990 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x158990) {
            ctx->pc = 0x15899Cu;
            goto label_15899c;
        }
    }
    ctx->pc = 0x158998u;
    // 0x158998: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x158998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_15899c:
    // 0x15899c: 0x78860020  lq          $a2, 0x20($a0)
    ctx->pc = 0x15899cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1589a0: 0x78870030  lq          $a3, 0x30($a0)
    ctx->pc = 0x1589a0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1589a4: 0x78880040  lq          $t0, 0x40($a0)
    ctx->pc = 0x1589a4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1589a8: 0x78890050  lq          $t1, 0x50($a0)
    ctx->pc = 0x1589a8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1589ac: 0x7c860070  sq          $a2, 0x70($a0)
    ctx->pc = 0x1589acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), GPR_VEC(ctx, 6));
    // 0x1589b0: 0x7c870080  sq          $a3, 0x80($a0)
    ctx->pc = 0x1589b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 7));
    // 0x1589b4: 0x7c880090  sq          $t0, 0x90($a0)
    ctx->pc = 0x1589b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), GPR_VEC(ctx, 8));
    // 0x1589b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1589B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1589BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B8u;
        // 0x1589bc: 0x7c8900a0  sq          $t1, 0xA0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1589B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1589C0u;
}
