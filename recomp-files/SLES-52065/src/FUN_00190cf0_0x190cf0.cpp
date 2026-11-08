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

// Function: FUN_00190cf0
// Address: 0x190cf0 - 0x190d84
void FUN_00190cf0_0x190cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190cf0_0x190cf0");
#endif

    switch (ctx->pc) {
        case 0x190d1cu: goto label_190d1c;
        case 0x190d2cu: goto label_190d2c;
        default: break;
    }

    ctx->pc = 0x190cf0u;

    // 0x190cf0: 0x8c830324  lw          $v1, 0x324($a0)
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 804)));
    // 0x190cf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x190cf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cf8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x190cf8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cfc: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x190cfcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d00: 0xac830330  sw          $v1, 0x330($a0)
    ctx->pc = 0x190d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 816), GPR_U32(ctx, 3));
    // 0x190d04: 0xac800324  sw          $zero, 0x324($a0)
    ctx->pc = 0x190d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 804), GPR_U32(ctx, 0));
    // 0x190d08: 0xac80033c  sw          $zero, 0x33C($a0)
    ctx->pc = 0x190d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 828), GPR_U32(ctx, 0));
    // 0x190d0c: 0xac800340  sw          $zero, 0x340($a0)
    ctx->pc = 0x190d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 832), GPR_U32(ctx, 0));
    // 0x190d10: 0xac800344  sw          $zero, 0x344($a0)
    ctx->pc = 0x190d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 836), GPR_U32(ctx, 0));
    // 0x190d14: 0x3c070022  lui         $a3, 0x22
    ctx->pc = 0x190d14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)34 << 16));
    // 0x190d18: 0x24e7fe10  addiu       $a3, $a3, -0x1F0
    ctx->pc = 0x190d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966800));
label_190d1c:
    // 0x190d1c: 0x8b1821  addu        $v1, $a0, $t3
    ctx->pc = 0x190d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x190d20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x190d20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d24: 0x7c600350  sq          $zero, 0x350($v1)
    ctx->pc = 0x190d24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 848), GPR_VEC(ctx, 0));
    // 0x190d28: 0x246a0350  addiu       $t2, $v1, 0x350
    ctx->pc = 0x190d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 848));
label_190d2c:
    // 0x190d2c: 0x0  nop
    ctx->pc = 0x190d2cu;
    // NOP
    // 0x190d30: 0xe92821  addu        $a1, $a3, $t1
    ctx->pc = 0x190d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x190d34: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x190d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190d38: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x190D38u;
    {
        const bool branch_taken_0x190d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d38) {
            ctx->pc = 0x190D58u;
            goto label_190d58;
        }
    }
    ctx->pc = 0x190D40u;
    // 0x190d40: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x190d40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x190d44: 0x1492821  addu        $a1, $t2, $t1
    ctx->pc = 0x190d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x190d48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x190d4c: 0x29230010  slti        $v1, $t1, 0x10
    ctx->pc = 0x190d4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190d50: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x190D50u;
    {
        const bool branch_taken_0x190d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D50u;
        // 0x190d54: 0xa0a60000  sb          $a2, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d50) {
            ctx->pc = 0x190D2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d2c;
        }
    }
    ctx->pc = 0x190D58u;
label_190d58:
    // 0x190d58: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x190d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x190d5c: 0xac600450  sw          $zero, 0x450($v1)
    ctx->pc = 0x190d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 0));
    // 0x190d60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x190d64: 0xac600510  sw          $zero, 0x510($v1)
    ctx->pc = 0x190d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1296), GPR_U32(ctx, 0));
    // 0x190d68: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x190d68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x190d6c: 0xac6004d0  sw          $zero, 0x4D0($v1)
    ctx->pc = 0x190d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 0));
    // 0x190d70: 0x29030010  slti        $v1, $t0, 0x10
    ctx->pc = 0x190d70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x190d74: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x190D74u;
    {
        const bool branch_taken_0x190d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x190D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190D74u;
        // 0x190d78: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190d74) {
            ctx->pc = 0x190D1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190d1c;
        }
    }
    ctx->pc = 0x190D7Cu;
    // 0x190d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x190D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190D84u;
}
