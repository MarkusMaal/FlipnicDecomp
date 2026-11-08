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

// Function: FUN_0013dcc0
// Address: 0x13dcc0 - 0x13dd50
void FUN_0013dcc0_0x13dcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013dcc0_0x13dcc0");
#endif

    switch (ctx->pc) {
        case 0x13dcc0u: goto label_13dcc0;
        case 0x13dcc4u: goto label_13dcc4;
        case 0x13dcc8u: goto label_13dcc8;
        case 0x13dcccu: goto label_13dccc;
        case 0x13dcd0u: goto label_13dcd0;
        case 0x13dcd4u: goto label_13dcd4;
        case 0x13dcd8u: goto label_13dcd8;
        case 0x13dcdcu: goto label_13dcdc;
        case 0x13dce0u: goto label_13dce0;
        case 0x13dce4u: goto label_13dce4;
        case 0x13dce8u: goto label_13dce8;
        case 0x13dcecu: goto label_13dcec;
        case 0x13dcf0u: goto label_13dcf0;
        case 0x13dcf4u: goto label_13dcf4;
        case 0x13dcf8u: goto label_13dcf8;
        case 0x13dcfcu: goto label_13dcfc;
        case 0x13dd00u: goto label_13dd00;
        case 0x13dd04u: goto label_13dd04;
        case 0x13dd08u: goto label_13dd08;
        case 0x13dd0cu: goto label_13dd0c;
        case 0x13dd10u: goto label_13dd10;
        case 0x13dd14u: goto label_13dd14;
        case 0x13dd18u: goto label_13dd18;
        case 0x13dd1cu: goto label_13dd1c;
        case 0x13dd20u: goto label_13dd20;
        case 0x13dd24u: goto label_13dd24;
        case 0x13dd28u: goto label_13dd28;
        case 0x13dd2cu: goto label_13dd2c;
        case 0x13dd30u: goto label_13dd30;
        case 0x13dd34u: goto label_13dd34;
        case 0x13dd38u: goto label_13dd38;
        case 0x13dd3cu: goto label_13dd3c;
        case 0x13dd40u: goto label_13dd40;
        case 0x13dd44u: goto label_13dd44;
        case 0x13dd48u: goto label_13dd48;
        case 0x13dd4cu: goto label_13dd4c;
        default: break;
    }

    ctx->pc = 0x13dcc0u;

label_13dcc0:
    // 0x13dcc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_13dcc4:
    // 0x13dcc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13dcc8:
    // 0x13dcc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13dccc:
    // 0x13dccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13dcd0:
    // 0x13dcd0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_13dcd4:
    if (ctx->pc == 0x13DCD4u) {
        ctx->pc = 0x13DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCD0u;
        // 0x13dcd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DCD8u;
        goto label_13dcd8;
    }
    ctx->pc = 0x13DCD0u;
    {
        const bool branch_taken_0x13dcd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCD0u;
        // 0x13dcd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcd0) {
            ctx->pc = 0x13DCECu;
            goto label_13dcec;
        }
    }
    ctx->pc = 0x13DCD8u;
label_13dcd8:
    // 0x13dcd8: 0x9222018a  lbu         $v0, 0x18A($s1)
    ctx->pc = 0x13dcd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 394)));
label_13dcdc:
    // 0x13dcdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13dce0:
    if (ctx->pc == 0x13DCE0u) {
        ctx->pc = 0x13DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCDCu;
        // 0x13dce0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DCE4u;
        goto label_13dce4;
    }
    ctx->pc = 0x13DCDCu;
    {
        const bool branch_taken_0x13dcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCDCu;
        // 0x13dce0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcdc) {
            ctx->pc = 0x13DCECu;
            goto label_13dcec;
        }
    }
    ctx->pc = 0x13DCE4u;
label_13dce4:
    // 0x13dce4: 0x10000016  b           . + 4 + (0x16 << 2)
label_13dce8:
    if (ctx->pc == 0x13DCE8u) {
        ctx->pc = 0x13DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCE4u;
        // 0x13dce8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DCECu;
        goto label_13dcec;
    }
    ctx->pc = 0x13DCE4u;
    {
        const bool branch_taken_0x13dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCE4u;
        // 0x13dce8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dce4) {
            ctx->pc = 0x13DD40u;
            goto label_13dd40;
        }
    }
    ctx->pc = 0x13DCECu;
label_13dcec:
    // 0x13dcec: 0x8e220194  lw          $v0, 0x194($s1)
    ctx->pc = 0x13dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
label_13dcf0:
    // 0x13dcf0: 0xa2082b  sltu        $at, $a1, $v0
    ctx->pc = 0x13dcf0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13dcf4:
    // 0x13dcf4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_13dcf8:
    if (ctx->pc == 0x13DCF8u) {
        ctx->pc = 0x13DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCF4u;
        // 0x13dcf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DCFCu;
        goto label_13dcfc;
    }
    ctx->pc = 0x13DCF4u;
    {
        const bool branch_taken_0x13dcf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCF4u;
        // 0x13dcf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcf4) {
            ctx->pc = 0x13DD04u;
            goto label_13dd04;
        }
    }
    ctx->pc = 0x13DCFCu;
label_13dcfc:
    // 0x13dcfc: 0x1000000f  b           . + 4 + (0xF << 2)
label_13dd00:
    if (ctx->pc == 0x13DD00u) {
        ctx->pc = 0x13DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCFCu;
        // 0x13dd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DD04u;
        goto label_13dd04;
    }
    ctx->pc = 0x13DCFCu;
    {
        const bool branch_taken_0x13dcfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DCFCu;
        // 0x13dd00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dcfc) {
            ctx->pc = 0x13DD3Cu;
            goto label_13dd3c;
        }
    }
    ctx->pc = 0x13DD04u;
label_13dd04:
    // 0x13dd04: 0x9222018a  lbu         $v0, 0x18A($s1)
    ctx->pc = 0x13dd04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 394)));
label_13dd08:
    // 0x13dd08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13dd0c:
    if (ctx->pc == 0x13DD0Cu) {
        ctx->pc = 0x13DD10u;
        goto label_13dd10;
    }
    ctx->pc = 0x13DD08u;
    {
        const bool branch_taken_0x13dd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd08) {
            ctx->pc = 0x13DD28u;
            goto label_13dd28;
        }
    }
    ctx->pc = 0x13DD10u;
label_13dd10:
    // 0x13dd10: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x13dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_13dd14:
    // 0x13dd14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13dd18:
    // 0x13dd18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x13dd18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_13dd1c:
    // 0x13dd1c: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x13dd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_13dd20:
    // 0x13dd20: 0x320f809  jalr        $t9
label_13dd24:
    if (ctx->pc == 0x13DD24u) {
        ctx->pc = 0x13DD28u;
        goto label_13dd28;
    }
    ctx->pc = 0x13DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13DD28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD20u, 0x13DD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13DD28u;
label_13dd28:
    // 0x13dd28: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x13dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
label_13dd2c:
    // 0x13dd2c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x13dd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13dd30:
    // 0x13dd30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13dd34:
    // 0x13dd34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13dd38:
    // 0x13dd38: 0x0  nop
    ctx->pc = 0x13dd38u;
    // NOP
label_13dd3c:
    // 0x13dd3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13dd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13dd40:
    // 0x13dd40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dd40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13dd44:
    // 0x13dd44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dd44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13dd48:
    // 0x13dd48: 0x3e00008  jr          $ra
label_13dd4c:
    if (ctx->pc == 0x13DD4Cu) {
        ctx->pc = 0x13DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD48u;
        // 0x13dd4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13DD50u;
        goto label_fallthrough_0x13dd48;
    }
    ctx->pc = 0x13DD48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD48u;
        // 0x13dd4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DD48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13dd48:
    ctx->pc = 0x13DD50u;
}
