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

// Function: FUN_001bd940
// Address: 0x1bd940 - 0x1bd9dc
void FUN_001bd940_0x1bd940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001bd940_0x1bd940");
#endif

    ctx->pc = 0x1bd940u;

    // 0x1bd940: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1bd940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1bd944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd948: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x1bd948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x1bd94c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bd94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1bd950: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1bd950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1bd954: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1bd954u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1bd958: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1bd958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bd95c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1BD95Cu;
    {
        const bool branch_taken_0x1bd95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD95Cu;
        // 0x1bd960: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd95c) {
            ctx->pc = 0x1BD9D4u;
            goto label_1bd9d4;
        }
    }
    ctx->pc = 0x1BD964u;
    // 0x1bd964: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bd964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd968: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bd968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bd96c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1bd96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd970: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD970u;
    {
        const bool branch_taken_0x1bd970 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BD974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD970u;
        // 0x1bd974: 0x23083  sra         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd970) {
            ctx->pc = 0x1BD980u;
            goto label_1bd980;
        }
    }
    ctx->pc = 0x1BD978u;
    // 0x1bd978: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1bd978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1bd97c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1bd97cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1bd980:
    // 0x1bd980: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bd980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd984: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bd984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1bd988: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1bd988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1bd98c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bd98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd990: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1bd990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1bd994: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1bd994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x1bd998: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd99c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bd99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd9a0: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1bd9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bd9a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bd9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bd9a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bd9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd9ac: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD9ACu;
    {
        const bool branch_taken_0x1bd9ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bd9ac) {
            ctx->pc = 0x1BD9B8u;
            goto label_1bd9b8;
        }
    }
    ctx->pc = 0x1BD9B4u;
    // 0x1bd9b4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1bd9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_1bd9b8:
    // 0x1bd9b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1bd9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1bd9bc: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1bd9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1bd9c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd9c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1bd9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bd9c8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1bd9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x1bd9cc: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bd9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1bd9d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bd9d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bd9d4:
    // 0x1bd9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD9DCu;
}
