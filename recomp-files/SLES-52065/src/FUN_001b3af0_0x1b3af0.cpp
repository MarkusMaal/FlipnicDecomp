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

// Function: FUN_001b3af0
// Address: 0x1b3af0 - 0x1b3be0
void FUN_001b3af0_0x1b3af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b3af0_0x1b3af0");
#endif

    switch (ctx->pc) {
        case 0x1b3b24u: goto label_1b3b24;
        case 0x1b3b68u: goto label_1b3b68;
        case 0x1b3b90u: goto label_1b3b90;
        case 0x1b3bb8u: goto label_1b3bb8;
        default: break;
    }

    ctx->pc = 0x1b3af0u;

    // 0x1b3af0: 0xac80283c  sw          $zero, 0x283C($a0)
    ctx->pc = 0x1b3af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10300), GPR_U32(ctx, 0));
    // 0x1b3af4: 0xac802840  sw          $zero, 0x2840($a0)
    ctx->pc = 0x1b3af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10304), GPR_U32(ctx, 0));
    // 0x1b3af8: 0xac802844  sw          $zero, 0x2844($a0)
    ctx->pc = 0x1b3af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10308), GPR_U32(ctx, 0));
    // 0x1b3afc: 0xac80284c  sw          $zero, 0x284C($a0)
    ctx->pc = 0x1b3afcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10316), GPR_U32(ctx, 0));
    // 0x1b3b00: 0xac802850  sw          $zero, 0x2850($a0)
    ctx->pc = 0x1b3b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10320), GPR_U32(ctx, 0));
    // 0x1b3b04: 0xac802854  sw          $zero, 0x2854($a0)
    ctx->pc = 0x1b3b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10324), GPR_U32(ctx, 0));
    // 0x1b3b08: 0xa48028d8  sh          $zero, 0x28D8($a0)
    ctx->pc = 0x1b3b08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 10456), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b3b0c: 0xac8028ec  sw          $zero, 0x28EC($a0)
    ctx->pc = 0x1b3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10476), GPR_U32(ctx, 0));
    // 0x1b3b10: 0xac802848  sw          $zero, 0x2848($a0)
    ctx->pc = 0x1b3b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10312), GPR_U32(ctx, 0));
    // 0x1b3b14: 0xac802838  sw          $zero, 0x2838($a0)
    ctx->pc = 0x1b3b14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10296), GPR_U32(ctx, 0));
    // 0x1b3b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3B1Cu;
    {
        const bool branch_taken_0x1b3b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b1c) {
            ctx->pc = 0x1B3B34u;
            goto label_1b3b34;
        }
    }
    ctx->pc = 0x1B3B24u;
label_1b3b24:
    // 0x1b3b24: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3b2c: 0xac602858  sw          $zero, 0x2858($v1)
    ctx->pc = 0x1b3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10328), GPR_U32(ctx, 0));
    // 0x1b3b30: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b3b34:
    // 0x1b3b34: 0x0  nop
    ctx->pc = 0x1b3b34u;
    // NOP
    // 0x1b3b38: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1b3b38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b3b3c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B3B3Cu;
    {
        const bool branch_taken_0x1b3b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b3c) {
            ctx->pc = 0x1B3B24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3b24;
        }
    }
    ctx->pc = 0x1B3B44u;
    // 0x1b3b44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3b48: 0xac8328e0  sw          $v1, 0x28E0($a0)
    ctx->pc = 0x1b3b48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10464), GPR_U32(ctx, 3));
    // 0x1b3b4c: 0xac8328dc  sw          $v1, 0x28DC($a0)
    ctx->pc = 0x1b3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10460), GPR_U32(ctx, 3));
    // 0x1b3b50: 0xac8028e8  sw          $zero, 0x28E8($a0)
    ctx->pc = 0x1b3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10472), GPR_U32(ctx, 0));
    // 0x1b3b54: 0xa08028f4  sb          $zero, 0x28F4($a0)
    ctx->pc = 0x1b3b54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10484), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3b58: 0xa08028f5  sb          $zero, 0x28F5($a0)
    ctx->pc = 0x1b3b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10485), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3b5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3B60u;
    {
        const bool branch_taken_0x1b3b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b60) {
            ctx->pc = 0x1B3B74u;
            goto label_1b3b74;
        }
    }
    ctx->pc = 0x1B3B68u;
label_1b3b68:
    // 0x1b3b68: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1b3b6c: 0xa0602784  sb          $zero, 0x2784($v1)
    ctx->pc = 0x1b3b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10116), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b3b70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b3b74:
    // 0x1b3b74: 0x0  nop
    ctx->pc = 0x1b3b74u;
    // NOP
    // 0x1b3b78: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1b3b78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1b3b7c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3B7Cu;
    {
        const bool branch_taken_0x1b3b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b7c) {
            ctx->pc = 0x1B3B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3b68;
        }
    }
    ctx->pc = 0x1B3B84u;
    // 0x1b3b84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3b88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3B88u;
    {
        const bool branch_taken_0x1b3b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b88) {
            ctx->pc = 0x1B3BA0u;
            goto label_1b3ba0;
        }
    }
    ctx->pc = 0x1B3B90u;
label_1b3b90:
    // 0x1b3b90: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1b3b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3b94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3b98: 0xac602794  sw          $zero, 0x2794($v1)
    ctx->pc = 0x1b3b98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10132), GPR_U32(ctx, 0));
    // 0x1b3b9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b3ba0:
    // 0x1b3ba0: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x1b3ba0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1b3ba4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3BA4u;
    {
        const bool branch_taken_0x1b3ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3ba4) {
            ctx->pc = 0x1B3B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3b90;
        }
    }
    ctx->pc = 0x1B3BACu;
    // 0x1b3bac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b3bacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3bb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3BB0u;
    {
        const bool branch_taken_0x1b3bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bb0) {
            ctx->pc = 0x1B3BC8u;
            goto label_1b3bc8;
        }
    }
    ctx->pc = 0x1B3BB8u;
label_1b3bb8:
    // 0x1b3bb8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1b3bbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b3bc0: 0xfc602818  sd          $zero, 0x2818($v1)
    ctx->pc = 0x1b3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 10264), GPR_U64(ctx, 0));
    // 0x1b3bc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b3bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b3bc8:
    // 0x1b3bc8: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x1b3bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b3bcc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B3BCCu;
    {
        const bool branch_taken_0x1b3bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b3bcc) {
            ctx->pc = 0x1B3BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b3bb8;
        }
    }
    ctx->pc = 0x1B3BD4u;
    // 0x1b3bd4: 0xac802834  sw          $zero, 0x2834($a0)
    ctx->pc = 0x1b3bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10292), GPR_U32(ctx, 0));
    // 0x1b3bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3BE0u;
}
