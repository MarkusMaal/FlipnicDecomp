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

// Function: FUN_0015afa0
// Address: 0x15afa0 - 0x15b068
void FUN_0015afa0_0x15afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0015afa0_0x15afa0");
#endif

    switch (ctx->pc) {
        case 0x15afa0u: goto label_15afa0;
        case 0x15afa4u: goto label_15afa4;
        case 0x15afa8u: goto label_15afa8;
        case 0x15afacu: goto label_15afac;
        case 0x15afb0u: goto label_15afb0;
        case 0x15afb4u: goto label_15afb4;
        case 0x15afb8u: goto label_15afb8;
        case 0x15afbcu: goto label_15afbc;
        case 0x15afc0u: goto label_15afc0;
        case 0x15afc4u: goto label_15afc4;
        case 0x15afc8u: goto label_15afc8;
        case 0x15afccu: goto label_15afcc;
        case 0x15afd0u: goto label_15afd0;
        case 0x15afd4u: goto label_15afd4;
        case 0x15afd8u: goto label_15afd8;
        case 0x15afdcu: goto label_15afdc;
        case 0x15afe0u: goto label_15afe0;
        case 0x15afe4u: goto label_15afe4;
        case 0x15afe8u: goto label_15afe8;
        case 0x15afecu: goto label_15afec;
        case 0x15aff0u: goto label_15aff0;
        case 0x15aff4u: goto label_15aff4;
        case 0x15aff8u: goto label_15aff8;
        case 0x15affcu: goto label_15affc;
        case 0x15b000u: goto label_15b000;
        case 0x15b004u: goto label_15b004;
        case 0x15b008u: goto label_15b008;
        case 0x15b00cu: goto label_15b00c;
        case 0x15b010u: goto label_15b010;
        case 0x15b014u: goto label_15b014;
        case 0x15b018u: goto label_15b018;
        case 0x15b01cu: goto label_15b01c;
        case 0x15b020u: goto label_15b020;
        case 0x15b024u: goto label_15b024;
        case 0x15b028u: goto label_15b028;
        case 0x15b02cu: goto label_15b02c;
        case 0x15b030u: goto label_15b030;
        case 0x15b034u: goto label_15b034;
        case 0x15b038u: goto label_15b038;
        case 0x15b03cu: goto label_15b03c;
        case 0x15b040u: goto label_15b040;
        case 0x15b044u: goto label_15b044;
        case 0x15b048u: goto label_15b048;
        case 0x15b04cu: goto label_15b04c;
        case 0x15b050u: goto label_15b050;
        case 0x15b054u: goto label_15b054;
        case 0x15b058u: goto label_15b058;
        case 0x15b05cu: goto label_15b05c;
        case 0x15b060u: goto label_15b060;
        case 0x15b064u: goto label_15b064;
        default: break;
    }

    ctx->pc = 0x15afa0u;

label_15afa0:
    // 0x15afa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_15afa4:
    // 0x15afa4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_15afa8:
    // 0x15afa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15afac:
    // 0x15afac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_15afb0:
    // 0x15afb0: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x15afb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
label_15afb4:
    // 0x15afb4: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x15afb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
label_15afb8:
    // 0x15afb8: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x15afb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_15afbc:
    // 0x15afbc: 0x8225002a  lb          $a1, 0x2A($s1)
    ctx->pc = 0x15afbcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
label_15afc0:
    // 0x15afc0: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x15afc0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_15afc4:
    // 0x15afc4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_15afc8:
    if (ctx->pc == 0x15AFC8u) {
        ctx->pc = 0x15AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC4u;
        // 0x15afc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFCCu;
        goto label_15afcc;
    }
    ctx->pc = 0x15AFC4u;
    {
        const bool branch_taken_0x15afc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFC4u;
        // 0x15afc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afc4) {
            ctx->pc = 0x15AFD4u;
            goto label_15afd4;
        }
    }
    ctx->pc = 0x15AFCCu;
label_15afcc:
    // 0x15afcc: 0xc042570  jal         func_1095C0
label_15afd0:
    if (ctx->pc == 0x15AFD0u) {
        ctx->pc = 0x15AFD4u;
        goto label_15afd4;
    }
    ctx->pc = 0x15AFCCu;
    SET_GPR_U32(ctx, 31, 0x15AFD4u);
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15AFCCu, 0x15AFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFD4u;
label_15afd4:
    // 0x15afd4: 0x82220029  lb          $v0, 0x29($s1)
    ctx->pc = 0x15afd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
label_15afd8:
    // 0x15afd8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x15afd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_15afdc:
    // 0x15afdc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_15afe0:
    if (ctx->pc == 0x15AFE0u) {
        ctx->pc = 0x15AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFDCu;
        // 0x15afe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFE4u;
        goto label_15afe4;
    }
    ctx->pc = 0x15AFDCu;
    {
        const bool branch_taken_0x15afdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFDCu;
        // 0x15afe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15afdc) {
            ctx->pc = 0x15AFE8u;
            goto label_15afe8;
        }
    }
    ctx->pc = 0x15AFE4u;
label_15afe4:
    // 0x15afe4: 0xa20201d3  sb          $v0, 0x1D3($s0)
    ctx->pc = 0x15afe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 2));
label_15afe8:
    // 0x15afe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15afe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15afec:
    // 0x15afec: 0xc042570  jal         func_1095C0
label_15aff0:
    if (ctx->pc == 0x15AFF0u) {
        ctx->pc = 0x15AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AFECu;
        // 0x15aff0: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AFF4u;
        goto label_15aff4;
    }
    ctx->pc = 0x15AFECu;
    SET_GPR_U32(ctx, 31, 0x15AFF4u);
    ctx->pc = 0x15AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AFECu;
    // 0x15aff0: 0xa20001d3  sb          $zero, 0x1D3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 467), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15AFECu, 0x15AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AFF4u;
label_15aff4:
    // 0x15aff4: 0x8e190008  lw          $t9, 0x8($s0)
    ctx->pc = 0x15aff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_15aff8:
    // 0x15aff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15aff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15affc:
    // 0x15affc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x15affcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_15b000:
    // 0x15b000: 0x320f809  jalr        $t9
label_15b004:
    if (ctx->pc == 0x15B004u) {
        ctx->pc = 0x15B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B000u;
        // 0x15b004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B008u;
        goto label_15b008;
    }
    ctx->pc = 0x15B000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15B008u);
        ctx->pc = 0x15B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B000u;
        // 0x15b004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B000u, 0x15B008u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B008u;
label_15b008:
    // 0x15b008: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x15b008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15b00c:
    // 0x15b00c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x15b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_15b010:
    // 0x15b010: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15b010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15b014:
    // 0x15b014: 0x80620024  lb          $v0, 0x24($v1)
    ctx->pc = 0x15b014u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
label_15b018:
    // 0x15b018: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x15b018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
label_15b01c:
    // 0x15b01c: 0x80620022  lb          $v0, 0x22($v1)
    ctx->pc = 0x15b01cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
label_15b020:
    // 0x15b020: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x15b020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
label_15b024:
    // 0x15b024: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x15b024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_15b028:
    // 0x15b028: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_15b02c:
    // 0x15b02c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x15b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15b030:
    // 0x15b030: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_15b034:
    // 0x15b034: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x15b034u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_15b038:
    // 0x15b038: 0x0  nop
    ctx->pc = 0x15b038u;
    // NOP
label_15b03c:
    // 0x15b03c: 0x0  nop
    ctx->pc = 0x15b03cu;
    // NOP
label_15b040:
    // 0x15b040: 0x1810  mfhi        $v1
    ctx->pc = 0x15b040u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_15b044:
    // 0x15b044: 0xa043002b  sb          $v1, 0x2B($v0)
    ctx->pc = 0x15b044u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 43), (uint8_t)GPR_U32(ctx, 3));
label_15b048:
    // 0x15b048: 0x8e0501d4  lw          $a1, 0x1D4($s0)
    ctx->pc = 0x15b048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
label_15b04c:
    // 0x15b04c: 0xc0425a4  jal         func_109690
label_15b050:
    if (ctx->pc == 0x15B050u) {
        ctx->pc = 0x15B050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B04Cu;
        // 0x15b050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B054u;
        goto label_15b054;
    }
    ctx->pc = 0x15B04Cu;
    SET_GPR_U32(ctx, 31, 0x15B054u);
    ctx->pc = 0x15B050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B04Cu;
    // 0x15b050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x15B04Cu, 0x15B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B054u;
label_15b054:
    // 0x15b054: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15b058:
    // 0x15b058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15b05c:
    // 0x15b05c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15b060:
    // 0x15b060: 0x3e00008  jr          $ra
label_15b064:
    if (ctx->pc == 0x15B064u) {
        ctx->pc = 0x15B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B060u;
        // 0x15b064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B068u;
        goto label_fallthrough_0x15b060;
    }
    ctx->pc = 0x15B060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B060u;
        // 0x15b064: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b060:
    ctx->pc = 0x15B068u;
}
