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

// Function: FUN_00150d30
// Address: 0x150d30 - 0x150dcc
void FUN_00150d30_0x150d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00150d30_0x150d30");
#endif

    ctx->pc = 0x150d30u;

    // 0x150d30: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x150d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150d38: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x150d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x150d3c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x150d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x150d40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x150d44: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x150d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x150d48: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x150d4c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x150D4Cu;
    {
        const bool branch_taken_0x150d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x150D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D4Cu;
        // 0x150d50: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d4c) {
            ctx->pc = 0x150DC4u;
            goto label_150dc4;
        }
    }
    ctx->pc = 0x150D54u;
    // 0x150d54: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x150d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150d58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150d5c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x150d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150d60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150D60u;
    {
        const bool branch_taken_0x150d60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x150D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150D60u;
        // 0x150d64: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150d60) {
            ctx->pc = 0x150D70u;
            goto label_150d70;
        }
    }
    ctx->pc = 0x150D68u;
    // 0x150d68: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x150d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x150d6c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x150d6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_150d70:
    // 0x150d70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150d74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150d78: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x150d78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x150d7c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x150d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150d80: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x150d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x150d84: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x150d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x150d88: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150d8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150d90: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x150d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x150d94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150d98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150d9c: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150D9Cu;
    {
        const bool branch_taken_0x150d9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x150d9c) {
            ctx->pc = 0x150DA8u;
            goto label_150da8;
        }
    }
    ctx->pc = 0x150DA4u;
    // 0x150da4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x150da4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_150da8:
    // 0x150da8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x150da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x150dac: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x150dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x150db0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150db4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x150db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150db8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x150db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x150dbc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x150dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x150dc0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x150dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_150dc4:
    // 0x150dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x150DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150DCCu;
}
