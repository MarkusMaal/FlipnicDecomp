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

// Function: FUN_001a2cc0
// Address: 0x1a2cc0 - 0x1a2d2c
void FUN_001a2cc0_0x1a2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a2cc0_0x1a2cc0");
#endif

    switch (ctx->pc) {
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2cc4u: goto label_1a2cc4;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cd0u: goto label_1a2cd0;
        case 0x1a2cd4u: goto label_1a2cd4;
        case 0x1a2cd8u: goto label_1a2cd8;
        case 0x1a2cdcu: goto label_1a2cdc;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2ce8u: goto label_1a2ce8;
        case 0x1a2cecu: goto label_1a2cec;
        case 0x1a2cf0u: goto label_1a2cf0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2cf8u: goto label_1a2cf8;
        case 0x1a2cfcu: goto label_1a2cfc;
        case 0x1a2d00u: goto label_1a2d00;
        case 0x1a2d04u: goto label_1a2d04;
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d14u: goto label_1a2d14;
        case 0x1a2d18u: goto label_1a2d18;
        case 0x1a2d1cu: goto label_1a2d1c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d24u: goto label_1a2d24;
        case 0x1a2d28u: goto label_1a2d28;
        default: break;
    }

    ctx->pc = 0x1a2cc0u;

label_1a2cc0:
    // 0x1a2cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1a2cc4:
    // 0x1a2cc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a2cc8:
    // 0x1a2cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a2ccc:
    // 0x1a2ccc: 0x8c850664  lw          $a1, 0x664($a0)
    ctx->pc = 0x1a2cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1636)));
label_1a2cd0:
    // 0x1a2cd0: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x1a2cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1a2cd4:
    // 0x1a2cd4: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_1a2cd8:
    if (ctx->pc == 0x1A2CD8u) {
        ctx->pc = 0x1A2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CD4u;
        // 0x1a2cd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CDCu;
        goto label_1a2cdc;
    }
    ctx->pc = 0x1A2CD4u;
    {
        const bool branch_taken_0x1a2cd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CD4u;
        // 0x1a2cd8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cd4) {
            ctx->pc = 0x1A2D04u;
            goto label_1a2d04;
        }
    }
    ctx->pc = 0x1A2CDCu;
label_1a2cdc:
    // 0x1a2cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a2cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2ce0:
    // 0x1a2ce0: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_1a2ce4:
    if (ctx->pc == 0x1A2CE4u) {
        ctx->pc = 0x1A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE0u;
        // 0x1a2ce4: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CE8u;
        goto label_1a2ce8;
    }
    ctx->pc = 0x1A2CE0u;
    {
        const bool branch_taken_0x1a2ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CE0u;
        // 0x1a2ce4: 0x240300c8  addiu       $v1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ce0) {
            ctx->pc = 0x1A2CF8u;
            goto label_1a2cf8;
        }
    }
    ctx->pc = 0x1A2CE8u;
label_1a2ce8:
    // 0x1a2ce8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1a2cec:
    if (ctx->pc == 0x1A2CECu) {
        ctx->pc = 0x1A2CF0u;
        goto label_1a2cf0;
    }
    ctx->pc = 0x1A2CE8u;
    {
        const bool branch_taken_0x1a2ce8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ce8) {
            ctx->pc = 0x1A2D08u;
            goto label_1a2d08;
        }
    }
    ctx->pc = 0x1A2CF0u;
label_1a2cf0:
    // 0x1a2cf0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1a2cf4:
    if (ctx->pc == 0x1A2CF4u) {
        ctx->pc = 0x1A2CF8u;
        goto label_1a2cf8;
    }
    ctx->pc = 0x1A2CF0u;
    {
        const bool branch_taken_0x1a2cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cf0) {
            ctx->pc = 0x1A2D08u;
            goto label_1a2d08;
        }
    }
    ctx->pc = 0x1A2CF8u;
label_1a2cf8:
    // 0x1a2cf8: 0xaf808244  sw          $zero, -0x7DBC($gp)
    ctx->pc = 0x1a2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935108), GPR_U32(ctx, 0));
label_1a2cfc:
    // 0x1a2cfc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a2d00:
    if (ctx->pc == 0x1A2D00u) {
        ctx->pc = 0x1A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CFCu;
        // 0x1a2d00: 0xaf83824c  sw          $v1, -0x7DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D04u;
        goto label_1a2d04;
    }
    ctx->pc = 0x1A2CFCu;
    {
        const bool branch_taken_0x1a2cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CFCu;
        // 0x1a2d00: 0xaf83824c  sw          $v1, -0x7DB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cfc) {
            ctx->pc = 0x1A2D08u;
            goto label_1a2d08;
        }
    }
    ctx->pc = 0x1A2D04u;
label_1a2d04:
    // 0x1a2d04: 0xa3838250  sb          $v1, -0x7DB0($gp)
    ctx->pc = 0x1a2d04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935120), (uint8_t)GPR_U32(ctx, 3));
label_1a2d08:
    // 0x1a2d08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a2d0c:
    if (ctx->pc == 0x1A2D0Cu) {
        ctx->pc = 0x1A2D10u;
        goto label_1a2d10;
    }
    ctx->pc = 0x1A2D08u;
    {
        const bool branch_taken_0x1a2d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d08) {
            ctx->pc = 0x1A2D20u;
            goto label_1a2d20;
        }
    }
    ctx->pc = 0x1A2D10u;
label_1a2d10:
    // 0x1a2d10: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x1a2d10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_1a2d14:
    // 0x1a2d14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a2d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a2d18:
    // 0x1a2d18: 0x320f809  jalr        $t9
label_1a2d1c:
    if (ctx->pc == 0x1A2D1Cu) {
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D20u;
        goto label_1a2d20;
    }
    ctx->pc = 0x1A2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A2D20u);
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D18u, 0x1A2D20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2D20u;
label_1a2d20:
    // 0x1a2d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2d24:
    // 0x1a2d24: 0x3e00008  jr          $ra
label_1a2d28:
    if (ctx->pc == 0x1A2D28u) {
        ctx->pc = 0x1A2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D24u;
        // 0x1a2d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D2Cu;
        goto label_fallthrough_0x1a2d24;
    }
    ctx->pc = 0x1A2D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D24u;
        // 0x1a2d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2d24:
    ctx->pc = 0x1A2D2Cu;
}
