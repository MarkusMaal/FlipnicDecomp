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

// Function: FUN_001d7ea0
// Address: 0x1d7ea0 - 0x1d7f34
void FUN_001d7ea0_0x1d7ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d7ea0_0x1d7ea0");
#endif

    ctx->pc = 0x1d7ea0u;

    // 0x1d7ea0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1d7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1d7ea4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7ea4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7ea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7eac: 0x8c44054c  lw          $a0, 0x54C($v0)
    ctx->pc = 0x1d7eacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x37054Cu));
    // 0x1d7eb0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1d7eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1d7eb4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1d7eb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d7eb8: 0x2c63007e  sltiu       $v1, $v1, 0x7E
    ctx->pc = 0x1d7eb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)126) ? 1 : 0);
    // 0x1d7ebc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D7EBCu;
    {
        const bool branch_taken_0x1d7ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EBCu;
        // 0x1d7ec0: 0x3046000f  andi        $a2, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ebc) {
            ctx->pc = 0x1D7F00u;
            goto label_1d7f00;
        }
    }
    ctx->pc = 0x1D7EC4u;
    // 0x1d7ec4: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d7ec8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1d7ecc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7ed0: 0x8c830550  lw          $v1, 0x550($a0)
    ctx->pc = 0x1d7ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
    // 0x1d7ed4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7edc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d7edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7ee0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1d7ee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7ee8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d7ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d7ef0: 0xac4002d0  sw          $zero, 0x2D0($v0)
    ctx->pc = 0x1d7ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 0));
    // 0x1d7ef4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d7ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d7ef8: 0x80776ec  j           func_1DDBB0
    ctx->pc = 0x1D7EF8u;
    ctx->pc = 0x1D7EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EF8u;
    // 0x1d7efc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDBB0u;
    FUN_001ddbb0_0x1ddbb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F00u;
label_1d7f00:
    // 0x1d7f00: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d7f04: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d7f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d7f08: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1d7f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7f0c: 0x8c640550  lw          $a0, 0x550($v1)
    ctx->pc = 0x1d7f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1360)));
    // 0x1d7f10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1d7f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1d7f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d7f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d7f24: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d7f28: 0xac4502d4  sw          $a1, 0x2D4($v0)
    ctx->pc = 0x1d7f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 724), GPR_U32(ctx, 5));
    // 0x1d7f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F2Cu;
        // 0x1d7f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F34u;
}
