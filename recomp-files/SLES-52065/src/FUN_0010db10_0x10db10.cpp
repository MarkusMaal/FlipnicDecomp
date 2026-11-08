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

// Function: FUN_0010db10
// Address: 0x10db10 - 0x10dba4
void FUN_0010db10_0x10db10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010db10_0x10db10");
#endif

    switch (ctx->pc) {
        case 0x10db10u: goto label_10db10;
        case 0x10db14u: goto label_10db14;
        case 0x10db18u: goto label_10db18;
        case 0x10db1cu: goto label_10db1c;
        case 0x10db20u: goto label_10db20;
        case 0x10db24u: goto label_10db24;
        case 0x10db28u: goto label_10db28;
        case 0x10db2cu: goto label_10db2c;
        case 0x10db30u: goto label_10db30;
        case 0x10db34u: goto label_10db34;
        case 0x10db38u: goto label_10db38;
        case 0x10db3cu: goto label_10db3c;
        case 0x10db40u: goto label_10db40;
        case 0x10db44u: goto label_10db44;
        case 0x10db48u: goto label_10db48;
        case 0x10db4cu: goto label_10db4c;
        case 0x10db50u: goto label_10db50;
        case 0x10db54u: goto label_10db54;
        case 0x10db58u: goto label_10db58;
        case 0x10db5cu: goto label_10db5c;
        case 0x10db60u: goto label_10db60;
        case 0x10db64u: goto label_10db64;
        case 0x10db68u: goto label_10db68;
        case 0x10db6cu: goto label_10db6c;
        case 0x10db70u: goto label_10db70;
        case 0x10db74u: goto label_10db74;
        case 0x10db78u: goto label_10db78;
        case 0x10db7cu: goto label_10db7c;
        case 0x10db80u: goto label_10db80;
        case 0x10db84u: goto label_10db84;
        case 0x10db88u: goto label_10db88;
        case 0x10db8cu: goto label_10db8c;
        case 0x10db90u: goto label_10db90;
        case 0x10db94u: goto label_10db94;
        case 0x10db98u: goto label_10db98;
        case 0x10db9cu: goto label_10db9c;
        case 0x10dba0u: goto label_10dba0;
        default: break;
    }

    ctx->pc = 0x10db10u;

label_10db10:
    // 0x10db10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10db10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10db14:
    // 0x10db14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10db14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_10db18:
    // 0x10db18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10db18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10db1c:
    // 0x10db1c: 0xc0563cc  jal         func_158F30
label_10db20:
    if (ctx->pc == 0x10DB20u) {
        ctx->pc = 0x10DB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB1Cu;
        // 0x10db20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB24u;
        goto label_10db24;
    }
    ctx->pc = 0x10DB1Cu;
    SET_GPR_U32(ctx, 31, 0x10DB24u);
    ctx->pc = 0x10DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB1Cu;
    // 0x10db20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F30u, 0x10DB1Cu, 0x10DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB24u;
label_10db24:
    // 0x10db24: 0xa20001d0  sb          $zero, 0x1D0($s0)
    ctx->pc = 0x10db24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 464), (uint8_t)GPR_U32(ctx, 0));
label_10db28:
    // 0x10db28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10db2c:
    // 0x10db2c: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x10db2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_10db30:
    // 0x10db30: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10db30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10db34:
    // 0x10db34: 0x320f809  jalr        $t9
label_10db38:
    if (ctx->pc == 0x10DB38u) {
        ctx->pc = 0x10DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB34u;
        // 0x10db38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB3Cu;
        goto label_10db3c;
    }
    ctx->pc = 0x10DB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DB3Cu);
        ctx->pc = 0x10DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB34u;
        // 0x10db38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB34u, 0x10DB3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DB3Cu;
label_10db3c:
    // 0x10db3c: 0xa600024e  sh          $zero, 0x24E($s0)
    ctx->pc = 0x10db3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 590), (uint16_t)GPR_U32(ctx, 0));
label_10db40:
    // 0x10db40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10db44:
    // 0x10db44: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x10db44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
label_10db48:
    // 0x10db48: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x10db48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
label_10db4c:
    // 0x10db4c: 0xa203007a  sb          $v1, 0x7A($s0)
    ctx->pc = 0x10db4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 3));
label_10db50:
    // 0x10db50: 0x86030254  lh          $v1, 0x254($s0)
    ctx->pc = 0x10db50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 596)));
label_10db54:
    // 0x10db54: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
label_10db58:
    if (ctx->pc == 0x10DB58u) {
        ctx->pc = 0x10DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB54u;
        // 0x10db58: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB5Cu;
        goto label_10db5c;
    }
    ctx->pc = 0x10DB54u;
    {
        const bool branch_taken_0x10db54 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x10DB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB54u;
        // 0x10db58: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db54) {
            ctx->pc = 0x10DB88u;
            goto label_10db88;
        }
    }
    ctx->pc = 0x10DB5Cu;
label_10db5c:
    // 0x10db5c: 0x86020256  lh          $v0, 0x256($s0)
    ctx->pc = 0x10db5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 598)));
label_10db60:
    // 0x10db60: 0x8f8383a8  lw          $v1, -0x7C58($gp)
    ctx->pc = 0x10db60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
label_10db64:
    // 0x10db64: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x10db64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10db68:
    // 0x10db68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x10db68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10db6c:
    // 0x10db6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x10db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_10db70:
    // 0x10db70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10db70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10db74:
    // 0x10db74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10db74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10db78:
    // 0x10db78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10db78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10db7c:
    // 0x10db7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x10db7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_10db80:
    // 0x10db80: 0x320f809  jalr        $t9
label_10db84:
    if (ctx->pc == 0x10DB84u) {
        ctx->pc = 0x10DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB80u;
        // 0x10db84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DB88u;
        goto label_10db88;
    }
    ctx->pc = 0x10DB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DB88u);
        ctx->pc = 0x10DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB80u;
        // 0x10db84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB80u, 0x10DB88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DB88u;
label_10db88:
    // 0x10db88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10db8c:
    // 0x10db8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10db90:
    // 0x10db90: 0xa0640028  sb          $a0, 0x28($v1)
    ctx->pc = 0x10db90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 4));
label_10db94:
    // 0x10db94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10db94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10db98:
    // 0x10db98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10db98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10db9c:
    // 0x10db9c: 0x3e00008  jr          $ra
label_10dba0:
    if (ctx->pc == 0x10DBA0u) {
        ctx->pc = 0x10DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB9Cu;
        // 0x10dba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DBA4u;
        goto label_fallthrough_0x10db9c;
    }
    ctx->pc = 0x10DB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB9Cu;
        // 0x10dba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10db9c:
    ctx->pc = 0x10DBA4u;
}
