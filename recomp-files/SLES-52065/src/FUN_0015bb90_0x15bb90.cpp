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

// Function: FUN_0015bb90
// Address: 0x15bb90 - 0x15bc08
void FUN_0015bb90_0x15bb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015bb90_0x15bb90");
#endif

    switch (ctx->pc) {
        case 0x15bb90u: goto label_15bb90;
        case 0x15bb94u: goto label_15bb94;
        case 0x15bb98u: goto label_15bb98;
        case 0x15bb9cu: goto label_15bb9c;
        case 0x15bba0u: goto label_15bba0;
        case 0x15bba4u: goto label_15bba4;
        case 0x15bba8u: goto label_15bba8;
        case 0x15bbacu: goto label_15bbac;
        case 0x15bbb0u: goto label_15bbb0;
        case 0x15bbb4u: goto label_15bbb4;
        case 0x15bbb8u: goto label_15bbb8;
        case 0x15bbbcu: goto label_15bbbc;
        case 0x15bbc0u: goto label_15bbc0;
        case 0x15bbc4u: goto label_15bbc4;
        case 0x15bbc8u: goto label_15bbc8;
        case 0x15bbccu: goto label_15bbcc;
        case 0x15bbd0u: goto label_15bbd0;
        case 0x15bbd4u: goto label_15bbd4;
        case 0x15bbd8u: goto label_15bbd8;
        case 0x15bbdcu: goto label_15bbdc;
        case 0x15bbe0u: goto label_15bbe0;
        case 0x15bbe4u: goto label_15bbe4;
        case 0x15bbe8u: goto label_15bbe8;
        case 0x15bbecu: goto label_15bbec;
        case 0x15bbf0u: goto label_15bbf0;
        case 0x15bbf4u: goto label_15bbf4;
        case 0x15bbf8u: goto label_15bbf8;
        case 0x15bbfcu: goto label_15bbfc;
        case 0x15bc00u: goto label_15bc00;
        case 0x15bc04u: goto label_15bc04;
        default: break;
    }

    ctx->pc = 0x15bb90u;

label_15bb90:
    // 0x15bb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15bb94:
    // 0x15bb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15bb98:
    // 0x15bb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15bb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15bb9c:
    // 0x15bb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15bb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15bba0:
    // 0x15bba0: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x15bba0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
label_15bba4:
    // 0x15bba4: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x15bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
label_15bba8:
    // 0x15bba8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x15bba8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15bbac:
    // 0x15bbac: 0x8205002a  lb          $a1, 0x2A($s0)
    ctx->pc = 0x15bbacu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 42)));
label_15bbb0:
    // 0x15bbb0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x15bbb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_15bbb4:
    // 0x15bbb4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15bbb8:
    if (ctx->pc == 0x15BBB8u) {
        ctx->pc = 0x15BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB4u;
        // 0x15bbb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBBCu;
        goto label_15bbbc;
    }
    ctx->pc = 0x15BBB4u;
    {
        const bool branch_taken_0x15bbb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBB4u;
        // 0x15bbb8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bbb4) {
            ctx->pc = 0x15BBC4u;
            goto label_15bbc4;
        }
    }
    ctx->pc = 0x15BBBCu;
label_15bbbc:
    // 0x15bbbc: 0xc042570  jal         func_1095C0
label_15bbc0:
    if (ctx->pc == 0x15BBC0u) {
        ctx->pc = 0x15BBC4u;
        goto label_15bbc4;
    }
    ctx->pc = 0x15BBBCu;
    SET_GPR_U32(ctx, 31, 0x15BBC4u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15BBBCu, 0x15BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BBC4u;
label_15bbc4:
    // 0x15bbc4: 0x82020029  lb          $v0, 0x29($s0)
    ctx->pc = 0x15bbc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_15bbc8:
    // 0x15bbc8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15bbc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_15bbcc:
    // 0x15bbcc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_15bbd0:
    if (ctx->pc == 0x15BBD0u) {
        ctx->pc = 0x15BBD4u;
        goto label_15bbd4;
    }
    ctx->pc = 0x15BBCCu;
    {
        const bool branch_taken_0x15bbcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bbcc) {
            ctx->pc = 0x15BBD8u;
            goto label_15bbd8;
        }
    }
    ctx->pc = 0x15BBD4u;
label_15bbd4:
    // 0x15bbd4: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15bbd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
label_15bbd8:
    // 0x15bbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bbdc:
    // 0x15bbdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15bbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bbe0:
    // 0x15bbe0: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15bbe0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
label_15bbe4:
    // 0x15bbe4: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x15bbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_15bbe8:
    // 0x15bbe8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x15bbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_15bbec:
    // 0x15bbec: 0x320f809  jalr        $t9
label_15bbf0:
    if (ctx->pc == 0x15BBF0u) {
        ctx->pc = 0x15BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBECu;
        // 0x15bbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BBF4u;
        goto label_15bbf4;
    }
    ctx->pc = 0x15BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15BBF4u);
        ctx->pc = 0x15BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BBECu;
        // 0x15bbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BBECu, 0x15BBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BBF4u;
label_15bbf4:
    // 0x15bbf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15bbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15bbf8:
    // 0x15bbf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15bbf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15bbfc:
    // 0x15bbfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15bbfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15bc00:
    // 0x15bc00: 0x3e00008  jr          $ra
label_15bc04:
    if (ctx->pc == 0x15BC04u) {
        ctx->pc = 0x15BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC00u;
        // 0x15bc04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC08u;
        goto label_fallthrough_0x15bc00;
    }
    ctx->pc = 0x15BC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC00u;
        // 0x15bc04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15bc00:
    ctx->pc = 0x15BC08u;
}
