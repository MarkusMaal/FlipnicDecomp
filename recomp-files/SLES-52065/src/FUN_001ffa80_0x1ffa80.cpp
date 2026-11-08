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

// Function: FUN_001ffa80
// Address: 0x1ffa80 - 0x1ffb28
void FUN_001ffa80_0x1ffa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ffa80_0x1ffa80");
#endif

    switch (ctx->pc) {
        case 0x1ffaacu: goto label_1ffaac;
        case 0x1ffaf0u: goto label_1ffaf0;
        default: break;
    }

    ctx->pc = 0x1ffa80u;

    // 0x1ffa80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ffa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ffa84: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ffa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ffa88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ffa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ffa8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ffa8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ffa90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ffa90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffa94: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1ffa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ffa98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FFA98u;
    {
        const bool branch_taken_0x1ffa98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FFA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFA98u;
        // 0x1ffa9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffa98) {
            ctx->pc = 0x1FFAB8u;
            goto label_1ffab8;
        }
    }
    ctx->pc = 0x1FFAA0u;
    // 0x1ffaa0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ffaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ffaa4: 0xc07efb8  jal         func_1FBEE0
    ctx->pc = 0x1FFAA4u;
    SET_GPR_U32(ctx, 31, 0x1FFAACu);
    ctx->pc = 0x1FFAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAA4u;
    // 0x1ffaa8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE0u, 0x1FFAA4u, 0x1FFAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAACu;
label_1ffaac:
    // 0x1ffaac: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FFAACu;
    {
        const bool branch_taken_0x1ffaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAACu;
        // 0x1ffab0: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffaac) {
            ctx->pc = 0x1FFAFCu;
            goto label_1ffafc;
        }
    }
    ctx->pc = 0x1FFAB4u;
    // 0x1ffab4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ffab4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ffab8:
    // 0x1ffab8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ffab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ffabc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ffabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ffac0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ffac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ffac4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FFAC4u;
    {
        const bool branch_taken_0x1ffac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAC4u;
        // 0x1ffac8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffac4) {
            ctx->pc = 0x1FFAD8u;
            goto label_1ffad8;
        }
    }
    ctx->pc = 0x1FFACCu;
    // 0x1ffacc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ffaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ffad0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1FFAD0u;
    {
        const bool branch_taken_0x1ffad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAD0u;
        // 0x1ffad4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffad0) {
            ctx->pc = 0x1FFB08u;
            goto label_1ffb08;
        }
    }
    ctx->pc = 0x1FFAD8u;
label_1ffad8:
    // 0x1ffad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ffad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffadc: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x1ffadcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1ffae0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ffae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ffae4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1ffae4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ffae8: 0xc07efb8  jal         func_1FBEE0
    ctx->pc = 0x1FFAE8u;
    SET_GPR_U32(ctx, 31, 0x1FFAF0u);
    ctx->pc = 0x1FFAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFAE8u;
    // 0x1ffaec: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBEE0u, 0x1FFAE8u, 0x1FFAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFAF0u;
label_1ffaf0:
    // 0x1ffaf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ffaf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffaf4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFAF4u;
    {
        const bool branch_taken_0x1ffaf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ffaf4) {
            ctx->pc = 0x1FFAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FFAF4u;
            // 0x1ffaf8: 0xac710004  sw          $s1, 0x4($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FFB04u;
            goto label_1ffb04;
        }
    }
    ctx->pc = 0x1FFAFCu;
label_1ffafc:
    // 0x1ffafc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FFAFCu;
    {
        const bool branch_taken_0x1ffafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFAFCu;
        // 0x1ffb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffafc) {
            ctx->pc = 0x1FFB14u;
            goto label_1ffb14;
        }
    }
    ctx->pc = 0x1FFB04u;
label_1ffb04:
    // 0x1ffb04: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1ffb04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_1ffb08:
    // 0x1ffb08: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1ffb08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1ffb0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1ffb0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ffb10: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1ffb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_1ffb14:
    // 0x1ffb14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ffb14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ffb18: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ffb18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ffb1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ffb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ffb20: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFB20u;
        // 0x1ffb24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFB28u;
}
