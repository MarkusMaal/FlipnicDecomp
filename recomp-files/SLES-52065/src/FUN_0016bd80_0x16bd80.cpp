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

// Function: FUN_0016bd80
// Address: 0x16bd80 - 0x16be04
void FUN_0016bd80_0x16bd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016bd80_0x16bd80");
#endif

    switch (ctx->pc) {
        case 0x16bd80u: goto label_16bd80;
        case 0x16bd84u: goto label_16bd84;
        case 0x16bd88u: goto label_16bd88;
        case 0x16bd8cu: goto label_16bd8c;
        case 0x16bd90u: goto label_16bd90;
        case 0x16bd94u: goto label_16bd94;
        case 0x16bd98u: goto label_16bd98;
        case 0x16bd9cu: goto label_16bd9c;
        case 0x16bda0u: goto label_16bda0;
        case 0x16bda4u: goto label_16bda4;
        case 0x16bda8u: goto label_16bda8;
        case 0x16bdacu: goto label_16bdac;
        case 0x16bdb0u: goto label_16bdb0;
        case 0x16bdb4u: goto label_16bdb4;
        case 0x16bdb8u: goto label_16bdb8;
        case 0x16bdbcu: goto label_16bdbc;
        case 0x16bdc0u: goto label_16bdc0;
        case 0x16bdc4u: goto label_16bdc4;
        case 0x16bdc8u: goto label_16bdc8;
        case 0x16bdccu: goto label_16bdcc;
        case 0x16bdd0u: goto label_16bdd0;
        case 0x16bdd4u: goto label_16bdd4;
        case 0x16bdd8u: goto label_16bdd8;
        case 0x16bddcu: goto label_16bddc;
        case 0x16bde0u: goto label_16bde0;
        case 0x16bde4u: goto label_16bde4;
        case 0x16bde8u: goto label_16bde8;
        case 0x16bdecu: goto label_16bdec;
        case 0x16bdf0u: goto label_16bdf0;
        case 0x16bdf4u: goto label_16bdf4;
        case 0x16bdf8u: goto label_16bdf8;
        case 0x16bdfcu: goto label_16bdfc;
        case 0x16be00u: goto label_16be00;
        default: break;
    }

    ctx->pc = 0x16bd80u;

label_16bd80:
    // 0x16bd80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16bd84:
    // 0x16bd84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16bd88:
    // 0x16bd88: 0x93838488  lbu         $v1, -0x7B78($gp)
    ctx->pc = 0x16bd88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_16bd8c:
    // 0x16bd8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_16bd90:
    if (ctx->pc == 0x16BD90u) {
        ctx->pc = 0x16BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD8Cu;
        // 0x16bd90: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BD94u;
        goto label_16bd94;
    }
    ctx->pc = 0x16BD8Cu;
    {
        const bool branch_taken_0x16bd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BD8Cu;
        // 0x16bd90: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bd8c) {
            ctx->pc = 0x16BDA0u;
            goto label_16bda0;
        }
    }
    ctx->pc = 0x16BD94u;
label_16bd94:
    // 0x16bd94: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x16bd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
label_16bd98:
    // 0x16bd98: 0x90262eb5  lbu         $a2, 0x2EB5($at)
    ctx->pc = 0x16bd98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 11957)));
label_16bd9c:
    // 0x16bd9c: 0x0  nop
    ctx->pc = 0x16bd9cu;
    // NOP
label_16bda0:
    // 0x16bda0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
label_16bda4:
    if (ctx->pc == 0x16BDA4u) {
        ctx->pc = 0x16BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA0u;
        // 0x16bda4: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BDA8u;
        goto label_16bda8;
    }
    ctx->pc = 0x16BDA0u;
    {
        const bool branch_taken_0x16bda0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x16BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA0u;
        // 0x16bda4: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bda0) {
            ctx->pc = 0x16BDB0u;
            goto label_16bdb0;
        }
    }
    ctx->pc = 0x16BDA8u;
label_16bda8:
    // 0x16bda8: 0x10000009  b           . + 4 + (0x9 << 2)
label_16bdac:
    if (ctx->pc == 0x16BDACu) {
        ctx->pc = 0x16BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA8u;
        // 0x16bdac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BDB0u;
        goto label_16bdb0;
    }
    ctx->pc = 0x16BDA8u;
    {
        const bool branch_taken_0x16bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDA8u;
        // 0x16bdac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bda8) {
            ctx->pc = 0x16BDD0u;
            goto label_16bdd0;
        }
    }
    ctx->pc = 0x16BDB0u;
label_16bdb0:
    // 0x16bdb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_16bdb4:
    // 0x16bdb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16bdb8:
    // 0x16bdb8: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x16bdb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_16bdbc:
    // 0x16bdbc: 0x14660003  bne         $v1, $a2, . + 4 + (0x3 << 2)
label_16bdc0:
    if (ctx->pc == 0x16BDC0u) {
        ctx->pc = 0x16BDC4u;
        goto label_16bdc4;
    }
    ctx->pc = 0x16BDBCu;
    {
        const bool branch_taken_0x16bdbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x16bdbc) {
            ctx->pc = 0x16BDCCu;
            goto label_16bdcc;
        }
    }
    ctx->pc = 0x16BDC4u;
label_16bdc4:
    // 0x16bdc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_16bdc8:
    if (ctx->pc == 0x16BDC8u) {
        ctx->pc = 0x16BDCCu;
        goto label_16bdcc;
    }
    ctx->pc = 0x16BDC4u;
    {
        const bool branch_taken_0x16bdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bdc4) {
            ctx->pc = 0x16BDD0u;
            goto label_16bdd0;
        }
    }
    ctx->pc = 0x16BDCCu;
label_16bdcc:
    // 0x16bdcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16bdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16bdd0:
    // 0x16bdd0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_16bdd4:
    if (ctx->pc == 0x16BDD4u) {
        ctx->pc = 0x16BDD8u;
        goto label_16bdd8;
    }
    ctx->pc = 0x16BDD0u;
    {
        const bool branch_taken_0x16bdd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16bdd0) {
            ctx->pc = 0x16BDF8u;
            goto label_16bdf8;
        }
    }
    ctx->pc = 0x16BDD8u;
label_16bdd8:
    // 0x16bdd8: 0x8c8501d4  lw          $a1, 0x1D4($a0)
    ctx->pc = 0x16bdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
label_16bddc:
    // 0x16bddc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16bddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16bde0:
    // 0x16bde0: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_16bde4:
    if (ctx->pc == 0x16BDE4u) {
        ctx->pc = 0x16BDE8u;
        goto label_16bde8;
    }
    ctx->pc = 0x16BDE0u;
    {
        const bool branch_taken_0x16bde0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x16bde0) {
            ctx->pc = 0x16BDF8u;
            goto label_16bdf8;
        }
    }
    ctx->pc = 0x16BDE8u;
label_16bde8:
    // 0x16bde8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x16bde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_16bdec:
    // 0x16bdec: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x16bdecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_16bdf0:
    // 0x16bdf0: 0x320f809  jalr        $t9
label_16bdf4:
    if (ctx->pc == 0x16BDF4u) {
        ctx->pc = 0x16BDF8u;
        goto label_16bdf8;
    }
    ctx->pc = 0x16BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16BDF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BDF0u, 0x16BDF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16BDF8u;
label_16bdf8:
    // 0x16bdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16bdfc:
    // 0x16bdfc: 0x3e00008  jr          $ra
label_16be00:
    if (ctx->pc == 0x16BE00u) {
        ctx->pc = 0x16BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDFCu;
        // 0x16be00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16BE04u;
        goto label_fallthrough_0x16bdfc;
    }
    ctx->pc = 0x16BDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BDFCu;
        // 0x16be00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BDFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x16bdfc:
    ctx->pc = 0x16BE04u;
}
