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

// Function: FUN_0010df60
// Address: 0x10df60 - 0x10e280
void FUN_0010df60_0x10df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010df60_0x10df60");
#endif

    switch (ctx->pc) {
        case 0x10df60u: goto label_10df60;
        case 0x10df64u: goto label_10df64;
        case 0x10df68u: goto label_10df68;
        case 0x10df6cu: goto label_10df6c;
        case 0x10df70u: goto label_10df70;
        case 0x10df74u: goto label_10df74;
        case 0x10df78u: goto label_10df78;
        case 0x10df7cu: goto label_10df7c;
        case 0x10df80u: goto label_10df80;
        case 0x10df84u: goto label_10df84;
        case 0x10df88u: goto label_10df88;
        case 0x10df8cu: goto label_10df8c;
        case 0x10df90u: goto label_10df90;
        case 0x10df94u: goto label_10df94;
        case 0x10df98u: goto label_10df98;
        case 0x10df9cu: goto label_10df9c;
        case 0x10dfa0u: goto label_10dfa0;
        case 0x10dfa4u: goto label_10dfa4;
        case 0x10dfa8u: goto label_10dfa8;
        case 0x10dfacu: goto label_10dfac;
        case 0x10dfb0u: goto label_10dfb0;
        case 0x10dfb4u: goto label_10dfb4;
        case 0x10dfb8u: goto label_10dfb8;
        case 0x10dfbcu: goto label_10dfbc;
        case 0x10dfc0u: goto label_10dfc0;
        case 0x10dfc4u: goto label_10dfc4;
        case 0x10dfc8u: goto label_10dfc8;
        case 0x10dfccu: goto label_10dfcc;
        case 0x10dfd0u: goto label_10dfd0;
        case 0x10dfd4u: goto label_10dfd4;
        case 0x10dfd8u: goto label_10dfd8;
        case 0x10dfdcu: goto label_10dfdc;
        case 0x10dfe0u: goto label_10dfe0;
        case 0x10dfe4u: goto label_10dfe4;
        case 0x10dfe8u: goto label_10dfe8;
        case 0x10dfecu: goto label_10dfec;
        case 0x10dff0u: goto label_10dff0;
        case 0x10dff4u: goto label_10dff4;
        case 0x10dff8u: goto label_10dff8;
        case 0x10dffcu: goto label_10dffc;
        case 0x10e000u: goto label_10e000;
        case 0x10e004u: goto label_10e004;
        case 0x10e008u: goto label_10e008;
        case 0x10e00cu: goto label_10e00c;
        case 0x10e010u: goto label_10e010;
        case 0x10e014u: goto label_10e014;
        case 0x10e018u: goto label_10e018;
        case 0x10e01cu: goto label_10e01c;
        case 0x10e020u: goto label_10e020;
        case 0x10e024u: goto label_10e024;
        case 0x10e028u: goto label_10e028;
        case 0x10e02cu: goto label_10e02c;
        case 0x10e030u: goto label_10e030;
        case 0x10e034u: goto label_10e034;
        case 0x10e038u: goto label_10e038;
        case 0x10e03cu: goto label_10e03c;
        case 0x10e040u: goto label_10e040;
        case 0x10e044u: goto label_10e044;
        case 0x10e048u: goto label_10e048;
        case 0x10e04cu: goto label_10e04c;
        case 0x10e050u: goto label_10e050;
        case 0x10e054u: goto label_10e054;
        case 0x10e058u: goto label_10e058;
        case 0x10e05cu: goto label_10e05c;
        case 0x10e060u: goto label_10e060;
        case 0x10e064u: goto label_10e064;
        case 0x10e068u: goto label_10e068;
        case 0x10e06cu: goto label_10e06c;
        case 0x10e070u: goto label_10e070;
        case 0x10e074u: goto label_10e074;
        case 0x10e078u: goto label_10e078;
        case 0x10e07cu: goto label_10e07c;
        case 0x10e080u: goto label_10e080;
        case 0x10e084u: goto label_10e084;
        case 0x10e088u: goto label_10e088;
        case 0x10e08cu: goto label_10e08c;
        case 0x10e090u: goto label_10e090;
        case 0x10e094u: goto label_10e094;
        case 0x10e098u: goto label_10e098;
        case 0x10e09cu: goto label_10e09c;
        case 0x10e0a0u: goto label_10e0a0;
        case 0x10e0a4u: goto label_10e0a4;
        case 0x10e0a8u: goto label_10e0a8;
        case 0x10e0acu: goto label_10e0ac;
        case 0x10e0b0u: goto label_10e0b0;
        case 0x10e0b4u: goto label_10e0b4;
        case 0x10e0b8u: goto label_10e0b8;
        case 0x10e0bcu: goto label_10e0bc;
        case 0x10e0c0u: goto label_10e0c0;
        case 0x10e0c4u: goto label_10e0c4;
        case 0x10e0c8u: goto label_10e0c8;
        case 0x10e0ccu: goto label_10e0cc;
        case 0x10e0d0u: goto label_10e0d0;
        case 0x10e0d4u: goto label_10e0d4;
        case 0x10e0d8u: goto label_10e0d8;
        case 0x10e0dcu: goto label_10e0dc;
        case 0x10e0e0u: goto label_10e0e0;
        case 0x10e0e4u: goto label_10e0e4;
        case 0x10e0e8u: goto label_10e0e8;
        case 0x10e0ecu: goto label_10e0ec;
        case 0x10e0f0u: goto label_10e0f0;
        case 0x10e0f4u: goto label_10e0f4;
        case 0x10e0f8u: goto label_10e0f8;
        case 0x10e0fcu: goto label_10e0fc;
        case 0x10e100u: goto label_10e100;
        case 0x10e104u: goto label_10e104;
        case 0x10e108u: goto label_10e108;
        case 0x10e10cu: goto label_10e10c;
        case 0x10e110u: goto label_10e110;
        case 0x10e114u: goto label_10e114;
        case 0x10e118u: goto label_10e118;
        case 0x10e11cu: goto label_10e11c;
        case 0x10e120u: goto label_10e120;
        case 0x10e124u: goto label_10e124;
        case 0x10e128u: goto label_10e128;
        case 0x10e12cu: goto label_10e12c;
        case 0x10e130u: goto label_10e130;
        case 0x10e134u: goto label_10e134;
        case 0x10e138u: goto label_10e138;
        case 0x10e13cu: goto label_10e13c;
        case 0x10e140u: goto label_10e140;
        case 0x10e144u: goto label_10e144;
        case 0x10e148u: goto label_10e148;
        case 0x10e14cu: goto label_10e14c;
        case 0x10e150u: goto label_10e150;
        case 0x10e154u: goto label_10e154;
        case 0x10e158u: goto label_10e158;
        case 0x10e15cu: goto label_10e15c;
        case 0x10e160u: goto label_10e160;
        case 0x10e164u: goto label_10e164;
        case 0x10e168u: goto label_10e168;
        case 0x10e16cu: goto label_10e16c;
        case 0x10e170u: goto label_10e170;
        case 0x10e174u: goto label_10e174;
        case 0x10e178u: goto label_10e178;
        case 0x10e17cu: goto label_10e17c;
        case 0x10e180u: goto label_10e180;
        case 0x10e184u: goto label_10e184;
        case 0x10e188u: goto label_10e188;
        case 0x10e18cu: goto label_10e18c;
        case 0x10e190u: goto label_10e190;
        case 0x10e194u: goto label_10e194;
        case 0x10e198u: goto label_10e198;
        case 0x10e19cu: goto label_10e19c;
        case 0x10e1a0u: goto label_10e1a0;
        case 0x10e1a4u: goto label_10e1a4;
        case 0x10e1a8u: goto label_10e1a8;
        case 0x10e1acu: goto label_10e1ac;
        case 0x10e1b0u: goto label_10e1b0;
        case 0x10e1b4u: goto label_10e1b4;
        case 0x10e1b8u: goto label_10e1b8;
        case 0x10e1bcu: goto label_10e1bc;
        case 0x10e1c0u: goto label_10e1c0;
        case 0x10e1c4u: goto label_10e1c4;
        case 0x10e1c8u: goto label_10e1c8;
        case 0x10e1ccu: goto label_10e1cc;
        case 0x10e1d0u: goto label_10e1d0;
        case 0x10e1d4u: goto label_10e1d4;
        case 0x10e1d8u: goto label_10e1d8;
        case 0x10e1dcu: goto label_10e1dc;
        case 0x10e1e0u: goto label_10e1e0;
        case 0x10e1e4u: goto label_10e1e4;
        case 0x10e1e8u: goto label_10e1e8;
        case 0x10e1ecu: goto label_10e1ec;
        case 0x10e1f0u: goto label_10e1f0;
        case 0x10e1f4u: goto label_10e1f4;
        case 0x10e1f8u: goto label_10e1f8;
        case 0x10e1fcu: goto label_10e1fc;
        case 0x10e200u: goto label_10e200;
        case 0x10e204u: goto label_10e204;
        case 0x10e208u: goto label_10e208;
        case 0x10e20cu: goto label_10e20c;
        case 0x10e210u: goto label_10e210;
        case 0x10e214u: goto label_10e214;
        case 0x10e218u: goto label_10e218;
        case 0x10e21cu: goto label_10e21c;
        case 0x10e220u: goto label_10e220;
        case 0x10e224u: goto label_10e224;
        case 0x10e228u: goto label_10e228;
        case 0x10e22cu: goto label_10e22c;
        case 0x10e230u: goto label_10e230;
        case 0x10e234u: goto label_10e234;
        case 0x10e238u: goto label_10e238;
        case 0x10e23cu: goto label_10e23c;
        case 0x10e240u: goto label_10e240;
        case 0x10e244u: goto label_10e244;
        case 0x10e248u: goto label_10e248;
        case 0x10e24cu: goto label_10e24c;
        case 0x10e250u: goto label_10e250;
        case 0x10e254u: goto label_10e254;
        case 0x10e258u: goto label_10e258;
        case 0x10e25cu: goto label_10e25c;
        case 0x10e260u: goto label_10e260;
        case 0x10e264u: goto label_10e264;
        case 0x10e268u: goto label_10e268;
        case 0x10e26cu: goto label_10e26c;
        case 0x10e270u: goto label_10e270;
        case 0x10e274u: goto label_10e274;
        case 0x10e278u: goto label_10e278;
        case 0x10e27cu: goto label_10e27c;
        default: break;
    }

    ctx->pc = 0x10df60u;

label_10df60:
    // 0x10df60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10df64:
    // 0x10df64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10df68:
    // 0x10df68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10df6c:
    // 0x10df6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10df70:
    // 0x10df70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10df74:
    // 0x10df74: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10df74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10df78:
    // 0x10df78: 0x10000020  b           . + 4 + (0x20 << 2)
label_10df7c:
    if (ctx->pc == 0x10DF7Cu) {
        ctx->pc = 0x10DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF78u;
        // 0x10df7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DF80u;
        goto label_10df80;
    }
    ctx->pc = 0x10DF78u;
    {
        const bool branch_taken_0x10df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DF78u;
        // 0x10df7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10df78) {
            ctx->pc = 0x10DFFCu;
            goto label_10dffc;
        }
    }
    ctx->pc = 0x10DF80u;
label_10df80:
    // 0x10df80: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x10df80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10df84:
    // 0x10df84: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10df84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10df88:
    // 0x10df88: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10df88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10df8c:
    // 0x10df8c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x10df8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_10df90:
    // 0x10df90: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x10df90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_10df94:
    // 0x10df94: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10df98:
    // 0x10df98: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10df98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10df9c:
    // 0x10df9c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10df9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10dfa0:
    // 0x10dfa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10dfa4:
    // 0x10dfa4: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10dfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10dfa8:
    // 0x10dfa8: 0x8c8301fc  lw          $v1, 0x1FC($a0)
    ctx->pc = 0x10dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
label_10dfac:
    // 0x10dfac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10dfacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10dfb0:
    // 0x10dfb0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_10dfb4:
    if (ctx->pc == 0x10DFB4u) {
        ctx->pc = 0x10DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB0u;
        // 0x10dfb4: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFB8u;
        goto label_10dfb8;
    }
    ctx->pc = 0x10DFB0u;
    {
        const bool branch_taken_0x10dfb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFB0u;
        // 0x10dfb4: 0x3082a  slt         $at, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfb0) {
            ctx->pc = 0x10DFF8u;
            goto label_10dff8;
        }
    }
    ctx->pc = 0x10DFB8u;
label_10dfb8:
    // 0x10dfb8: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_10dfbc:
    if (ctx->pc == 0x10DFBCu) {
        ctx->pc = 0x10DFC0u;
        goto label_10dfc0;
    }
    ctx->pc = 0x10DFB8u;
    {
        const bool branch_taken_0x10dfb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10dfb8) {
            ctx->pc = 0x10DFF8u;
            goto label_10dff8;
        }
    }
    ctx->pc = 0x10DFC0u;
label_10dfc0:
    // 0x10dfc0: 0xa48001fa  sh          $zero, 0x1FA($a0)
    ctx->pc = 0x10dfc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 506), (uint16_t)GPR_U32(ctx, 0));
label_10dfc4:
    // 0x10dfc4: 0xac8001fc  sw          $zero, 0x1FC($a0)
    ctx->pc = 0x10dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 508), GPR_U32(ctx, 0));
label_10dfc8:
    // 0x10dfc8: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10dfc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10dfcc:
    // 0x10dfcc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10dfccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10dfd0:
    // 0x10dfd0: 0x320f809  jalr        $t9
label_10dfd4:
    if (ctx->pc == 0x10DFD4u) {
        ctx->pc = 0x10DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD0u;
        // 0x10dfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFD8u;
        goto label_10dfd8;
    }
    ctx->pc = 0x10DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10DFD8u);
        ctx->pc = 0x10DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFD0u;
        // 0x10dfd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DFD0u, 0x10DFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10DFD8u;
label_10dfd8:
    // 0x10dfd8: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x10dfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_10dfdc:
    // 0x10dfdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10dfe0:
    // 0x10dfe0: 0xae030234  sw          $v1, 0x234($s0)
    ctx->pc = 0x10dfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 3));
label_10dfe4:
    // 0x10dfe4: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x10dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_10dfe8:
    // 0x10dfe8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_10dfec:
    if (ctx->pc == 0x10DFECu) {
        ctx->pc = 0x10DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFE8u;
        // 0x10dfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10DFF0u;
        goto label_10dff0;
    }
    ctx->pc = 0x10DFE8u;
    {
        const bool branch_taken_0x10dfe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DFE8u;
        // 0x10dfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dfe8) {
            ctx->pc = 0x10DFF8u;
            goto label_10dff8;
        }
    }
    ctx->pc = 0x10DFF0u;
label_10dff0:
    // 0x10dff0: 0xc043774  jal         func_10DDD0
label_10dff4:
    if (ctx->pc == 0x10DFF4u) {
        ctx->pc = 0x10DFF8u;
        goto label_10dff8;
    }
    ctx->pc = 0x10DFF0u;
    SET_GPR_U32(ctx, 31, 0x10DFF8u);
    ctx->pc = 0x10DDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DDD0u, 0x10DFF0u, 0x10DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DFF8u;
label_10dff8:
    // 0x10dff8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10dff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10dffc:
    // 0x10dffc: 0x0  nop
    ctx->pc = 0x10dffcu;
    // NOP
label_10e000:
    // 0x10e000: 0x8e030224  lw          $v1, 0x224($s0)
    ctx->pc = 0x10e000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_10e004:
    // 0x10e004: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10e004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e008:
    // 0x10e008: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_10e00c:
    if (ctx->pc == 0x10E00Cu) {
        ctx->pc = 0x10E010u;
        goto label_10e010;
    }
    ctx->pc = 0x10E008u;
    {
        const bool branch_taken_0x10e008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e008) {
            ctx->pc = 0x10DF80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10df80;
        }
    }
    ctx->pc = 0x10E010u;
label_10e010:
    // 0x10e010: 0x10000026  b           . + 4 + (0x26 << 2)
label_10e014:
    if (ctx->pc == 0x10E014u) {
        ctx->pc = 0x10E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E010u;
        // 0x10e014: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E018u;
        goto label_10e018;
    }
    ctx->pc = 0x10E010u;
    {
        const bool branch_taken_0x10e010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E010u;
        // 0x10e014: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e010) {
            ctx->pc = 0x10E0ACu;
            goto label_10e0ac;
        }
    }
    ctx->pc = 0x10E018u;
label_10e018:
    // 0x10e018: 0x8e060220  lw          $a2, 0x220($s0)
    ctx->pc = 0x10e018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e01c:
    // 0x10e01c: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x10e01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_10e020:
    // 0x10e020: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10e020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e024:
    // 0x10e024: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e028:
    // 0x10e028: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x10e028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_10e02c:
    // 0x10e02c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x10e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_10e030:
    // 0x10e030: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x10e030u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_10e034:
    // 0x10e034: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10e034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10e038:
    // 0x10e038: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10e038u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10e03c:
    // 0x10e03c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10e040:
    // 0x10e040: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e044:
    // 0x10e044: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x10e044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10e048:
    // 0x10e048: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x10e048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_10e04c:
    // 0x10e04c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10e04cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e050:
    // 0x10e050: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
label_10e054:
    if (ctx->pc == 0x10E054u) {
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E058u;
        goto label_10e058;
    }
    ctx->pc = 0x10E050u;
    {
        const bool branch_taken_0x10e050 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E050u;
        // 0x10e054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e050) {
            ctx->pc = 0x10E0A8u;
            goto label_10e0a8;
        }
    }
    ctx->pc = 0x10E058u;
label_10e058:
    // 0x10e058: 0xc043918  jal         func_10E460
label_10e05c:
    if (ctx->pc == 0x10E05Cu) {
        ctx->pc = 0x10E060u;
        goto label_10e060;
    }
    ctx->pc = 0x10E058u;
    SET_GPR_U32(ctx, 31, 0x10E060u);
    ctx->pc = 0x10E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E460u, 0x10E058u, 0x10E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E060u;
label_10e060:
    // 0x10e060: 0x8e070220  lw          $a3, 0x220($s0)
    ctx->pc = 0x10e060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e064:
    // 0x10e064: 0x8e060224  lw          $a2, 0x224($s0)
    ctx->pc = 0x10e064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_10e068:
    // 0x10e068: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x10e068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_10e06c:
    // 0x10e06c: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x10e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e070:
    // 0x10e070: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e074:
    // 0x10e074: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x10e074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
label_10e078:
    // 0x10e078: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x10e078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_10e07c:
    // 0x10e07c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x10e07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_10e080:
    // 0x10e080: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10e080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10e084:
    // 0x10e084: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e088:
    // 0x10e088: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10e08c:
    // 0x10e08c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e08cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e090:
    // 0x10e090: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e094:
    // 0x10e094: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e098:
    // 0x10e098: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10e098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e09c:
    // 0x10e09c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e0a0:
    // 0x10e0a0: 0x320f809  jalr        $t9
label_10e0a4:
    if (ctx->pc == 0x10E0A4u) {
        ctx->pc = 0x10E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0A0u;
        // 0x10e0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0A8u;
        goto label_10e0a8;
    }
    ctx->pc = 0x10E0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E0A8u);
        ctx->pc = 0x10E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0A0u;
        // 0x10e0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E0A0u, 0x10E0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E0A8u;
label_10e0a8:
    // 0x10e0a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10e0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10e0ac:
    // 0x10e0ac: 0x0  nop
    ctx->pc = 0x10e0acu;
    // NOP
label_10e0b0:
    // 0x10e0b0: 0x8e040228  lw          $a0, 0x228($s0)
    ctx->pc = 0x10e0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
label_10e0b4:
    // 0x10e0b4: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x10e0b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_10e0b8:
    // 0x10e0b8: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
label_10e0bc:
    if (ctx->pc == 0x10E0BCu) {
        ctx->pc = 0x10E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B8u;
        // 0x10e0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E0C0u;
        goto label_10e0c0;
    }
    ctx->pc = 0x10E0B8u;
    {
        const bool branch_taken_0x10e0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B8u;
        // 0x10e0bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0b8) {
            ctx->pc = 0x10E018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e018;
        }
    }
    ctx->pc = 0x10E0C0u;
label_10e0c0:
    // 0x10e0c0: 0x1485001a  bne         $a0, $a1, . + 4 + (0x1A << 2)
label_10e0c4:
    if (ctx->pc == 0x10E0C4u) {
        ctx->pc = 0x10E0C8u;
        goto label_10e0c8;
    }
    ctx->pc = 0x10E0C0u;
    {
        const bool branch_taken_0x10e0c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x10e0c0) {
            ctx->pc = 0x10E12Cu;
            goto label_10e12c;
        }
    }
    ctx->pc = 0x10E0C8u;
label_10e0c8:
    // 0x10e0c8: 0x8e04022c  lw          $a0, 0x22C($s0)
    ctx->pc = 0x10e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 556)));
label_10e0cc:
    // 0x10e0cc: 0x28810002  slti        $at, $a0, 0x2
    ctx->pc = 0x10e0ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_10e0d0:
    // 0x10e0d0: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_10e0d4:
    if (ctx->pc == 0x10E0D4u) {
        ctx->pc = 0x10E0D8u;
        goto label_10e0d8;
    }
    ctx->pc = 0x10E0D0u;
    {
        const bool branch_taken_0x10e0d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e0d0) {
            ctx->pc = 0x10E12Cu;
            goto label_10e12c;
        }
    }
    ctx->pc = 0x10E0D8u;
label_10e0d8:
    // 0x10e0d8: 0x8e030238  lw          $v1, 0x238($s0)
    ctx->pc = 0x10e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
label_10e0dc:
    // 0x10e0dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_10e0e0:
    // 0x10e0e0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x10e0e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_10e0e4:
    // 0x10e0e4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_10e0e8:
    if (ctx->pc == 0x10E0E8u) {
        ctx->pc = 0x10E0ECu;
        goto label_10e0ec;
    }
    ctx->pc = 0x10E0E4u;
    {
        const bool branch_taken_0x10e0e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e0e4) {
            ctx->pc = 0x10E12Cu;
            goto label_10e12c;
        }
    }
    ctx->pc = 0x10E0ECu;
label_10e0ec:
    // 0x10e0ec: 0xae030238  sw          $v1, 0x238($s0)
    ctx->pc = 0x10e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 3));
label_10e0f0:
    // 0x10e0f0: 0x8e060224  lw          $a2, 0x224($s0)
    ctx->pc = 0x10e0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_10e0f4:
    // 0x10e0f4: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x10e0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e0f8:
    // 0x10e0f8: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x10e0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e0fc:
    // 0x10e0fc: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e100:
    // 0x10e100: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x10e100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_10e104:
    // 0x10e104: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x10e104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_10e108:
    // 0x10e108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e10c:
    // 0x10e10c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e10cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10e110:
    // 0x10e110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e114:
    // 0x10e114: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10e114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10e118:
    // 0x10e118: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e11c:
    // 0x10e11c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10e11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10e120:
    // 0x10e120: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x10e120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_10e124:
    // 0x10e124: 0x320f809  jalr        $t9
label_10e128:
    if (ctx->pc == 0x10E128u) {
        ctx->pc = 0x10E12Cu;
        goto label_10e12c;
    }
    ctx->pc = 0x10E124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10E12Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E124u, 0x10E12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10E12Cu;
label_10e12c:
    // 0x10e12c: 0x8f838714  lw          $v1, -0x78EC($gp)
    ctx->pc = 0x10e12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_10e130:
    // 0x10e130: 0x8c632830  lw          $v1, 0x2830($v1)
    ctx->pc = 0x10e130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10288)));
label_10e134:
    // 0x10e134: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_10e138:
    if (ctx->pc == 0x10E138u) {
        ctx->pc = 0x10E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E134u;
        // 0x10e138: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E13Cu;
        goto label_10e13c;
    }
    ctx->pc = 0x10E134u;
    {
        const bool branch_taken_0x10e134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E134u;
        // 0x10e138: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e134) {
            ctx->pc = 0x10E1D8u;
            goto label_10e1d8;
        }
    }
    ctx->pc = 0x10E13Cu;
label_10e13c:
    // 0x10e13c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x10e13cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e140:
    // 0x10e140: 0x1000001f  b           . + 4 + (0x1F << 2)
label_10e144:
    if (ctx->pc == 0x10E144u) {
        ctx->pc = 0x10E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E140u;
        // 0x10e144: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E148u;
        goto label_10e148;
    }
    ctx->pc = 0x10E140u;
    {
        const bool branch_taken_0x10e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E140u;
        // 0x10e144: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e140) {
            ctx->pc = 0x10E1C0u;
            goto label_10e1c0;
        }
    }
    ctx->pc = 0x10E148u;
label_10e148:
    // 0x10e148: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10e148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e14c:
    // 0x10e14c: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e150:
    // 0x10e150: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x10e150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_10e154:
    // 0x10e154: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10e154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10e158:
    // 0x10e158: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10e158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10e15c:
    // 0x10e15c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e160:
    // 0x10e160: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x10e160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10e164:
    // 0x10e164: 0x8c8301fc  lw          $v1, 0x1FC($a0)
    ctx->pc = 0x10e164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 508)));
label_10e168:
    // 0x10e168: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10e168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e16c:
    // 0x10e16c: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_10e170:
    if (ctx->pc == 0x10E170u) {
        ctx->pc = 0x10E174u;
        goto label_10e174;
    }
    ctx->pc = 0x10E16Cu;
    {
        const bool branch_taken_0x10e16c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e16c) {
            ctx->pc = 0x10E1B8u;
            goto label_10e1b8;
        }
    }
    ctx->pc = 0x10E174u;
label_10e174:
    // 0x10e174: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10e178:
    // 0x10e178: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e17c:
    // 0x10e17c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e180:
    // 0x10e180: 0xc042584  jal         func_109610
label_10e184:
    if (ctx->pc == 0x10E184u) {
        ctx->pc = 0x10E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E180u;
        // 0x10e184: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E188u;
        goto label_10e188;
    }
    ctx->pc = 0x10E180u;
    SET_GPR_U32(ctx, 31, 0x10E188u);
    ctx->pc = 0x10E184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E180u;
    // 0x10e184: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E180u, 0x10E188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E188u;
label_10e188:
    // 0x10e188: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x10e188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_10e18c:
    // 0x10e18c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10e190:
    // 0x10e190: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10e190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10e194:
    // 0x10e194: 0xc0438f0  jal         func_10E3C0
label_10e198:
    if (ctx->pc == 0x10E198u) {
        ctx->pc = 0x10E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E194u;
        // 0x10e198: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E19Cu;
        goto label_10e19c;
    }
    ctx->pc = 0x10E194u;
    SET_GPR_U32(ctx, 31, 0x10E19Cu);
    ctx->pc = 0x10E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E194u;
    // 0x10e198: 0xae020230  sw          $v0, 0x230($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E3C0u, 0x10E194u, 0x10E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E19Cu;
label_10e19c:
    // 0x10e19c: 0x0  nop
    ctx->pc = 0x10e19cu;
    // NOP
label_10e1a0:
    // 0x10e1a0: 0xc0439e0  jal         func_10E780
label_10e1a4:
    if (ctx->pc == 0x10E1A4u) {
        ctx->pc = 0x10E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1A0u;
        // 0x10e1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1A8u;
        goto label_10e1a8;
    }
    ctx->pc = 0x10E1A0u;
    SET_GPR_U32(ctx, 31, 0x10E1A8u);
    ctx->pc = 0x10E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E1A0u;
    // 0x10e1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10E1A0u, 0x10E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E1A8u;
label_10e1a8:
    // 0x10e1a8: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x10e1a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_10e1ac:
    // 0x10e1ac: 0x0  nop
    ctx->pc = 0x10e1acu;
    // NOP
label_10e1b0:
    // 0x10e1b0: 0x1020fffa  beqz        $at, . + 4 + (-0x6 << 2)
label_10e1b4:
    if (ctx->pc == 0x10E1B4u) {
        ctx->pc = 0x10E1B8u;
        goto label_10e1b8;
    }
    ctx->pc = 0x10E1B0u;
    {
        const bool branch_taken_0x10e1b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e1b0) {
            ctx->pc = 0x10E19Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e19c;
        }
    }
    ctx->pc = 0x10E1B8u;
label_10e1b8:
    // 0x10e1b8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x10e1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_10e1bc:
    // 0x10e1bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10e1bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10e1c0:
    // 0x10e1c0: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x10e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e1c4:
    // 0x10e1c4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10e1c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e1c8:
    // 0x10e1c8: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_10e1cc:
    if (ctx->pc == 0x10E1CCu) {
        ctx->pc = 0x10E1D0u;
        goto label_10e1d0;
    }
    ctx->pc = 0x10E1C8u;
    {
        const bool branch_taken_0x10e1c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e1c8) {
            ctx->pc = 0x10E148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e148;
        }
    }
    ctx->pc = 0x10E1D0u;
label_10e1d0:
    // 0x10e1d0: 0x10000025  b           . + 4 + (0x25 << 2)
label_10e1d4:
    if (ctx->pc == 0x10E1D4u) {
        ctx->pc = 0x10E1D8u;
        goto label_10e1d8;
    }
    ctx->pc = 0x10E1D0u;
    {
        const bool branch_taken_0x10e1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e1d0) {
            ctx->pc = 0x10E268u;
            goto label_10e268;
        }
    }
    ctx->pc = 0x10E1D8u;
label_10e1d8:
    // 0x10e1d8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_10e1dc:
    if (ctx->pc == 0x10E1DCu) {
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E1E0u;
        goto label_10e1e0;
    }
    ctx->pc = 0x10E1D8u;
    {
        const bool branch_taken_0x10e1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E1D8u;
        // 0x10e1dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e1d8) {
            ctx->pc = 0x10E258u;
            goto label_10e258;
        }
    }
    ctx->pc = 0x10E1E0u;
label_10e1e0:
    // 0x10e1e0: 0x8e040210  lw          $a0, 0x210($s0)
    ctx->pc = 0x10e1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e1e4:
    // 0x10e1e4: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e1e8:
    // 0x10e1e8: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x10e1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_10e1ec:
    // 0x10e1ec: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10e1ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10e1f0:
    // 0x10e1f0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10e1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10e1f4:
    // 0x10e1f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10e1f8:
    // 0x10e1f8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x10e1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10e1fc:
    // 0x10e1fc: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x10e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_10e200:
    // 0x10e200: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x10e200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e204:
    // 0x10e204: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_10e208:
    if (ctx->pc == 0x10E208u) {
        ctx->pc = 0x10E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E204u;
        // 0x10e208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E20Cu;
        goto label_10e20c;
    }
    ctx->pc = 0x10E204u;
    {
        const bool branch_taken_0x10e204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E204u;
        // 0x10e208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e204) {
            ctx->pc = 0x10E250u;
            goto label_10e250;
        }
    }
    ctx->pc = 0x10E20Cu;
label_10e20c:
    // 0x10e20c: 0xc0439e0  jal         func_10E780
label_10e210:
    if (ctx->pc == 0x10E210u) {
        ctx->pc = 0x10E214u;
        goto label_10e214;
    }
    ctx->pc = 0x10E20Cu;
    SET_GPR_U32(ctx, 31, 0x10E214u);
    ctx->pc = 0x10E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E780u, 0x10E20Cu, 0x10E214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E214u;
label_10e214:
    // 0x10e214: 0x8e030210  lw          $v1, 0x210($s0)
    ctx->pc = 0x10e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
label_10e218:
    // 0x10e218: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x10e218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_10e21c:
    // 0x10e21c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10e21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_10e220:
    // 0x10e220: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10e220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10e224:
    // 0x10e224: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10e228:
    // 0x10e228: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x10e228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_10e22c:
    // 0x10e22c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10e22cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10e230:
    // 0x10e230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10e230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10e234:
    // 0x10e234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10e234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10e238:
    // 0x10e238: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10e238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10e23c:
    // 0x10e23c: 0xc042584  jal         func_109610
label_10e240:
    if (ctx->pc == 0x10E240u) {
        ctx->pc = 0x10E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E23Cu;
        // 0x10e240: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E244u;
        goto label_10e244;
    }
    ctx->pc = 0x10E23Cu;
    SET_GPR_U32(ctx, 31, 0x10E244u);
    ctx->pc = 0x10E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E23Cu;
    // 0x10e240: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109610u, 0x10E23Cu, 0x10E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E244u;
label_10e244:
    // 0x10e244: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x10e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_10e248:
    // 0x10e248: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10e248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_10e24c:
    // 0x10e24c: 0xae030230  sw          $v1, 0x230($s0)
    ctx->pc = 0x10e24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 3));
label_10e250:
    // 0x10e250: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x10e250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_10e254:
    // 0x10e254: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10e254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10e258:
    // 0x10e258: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x10e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_10e25c:
    // 0x10e25c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10e25cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10e260:
    // 0x10e260: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
label_10e264:
    if (ctx->pc == 0x10E264u) {
        ctx->pc = 0x10E268u;
        goto label_10e268;
    }
    ctx->pc = 0x10E260u;
    {
        const bool branch_taken_0x10e260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e260) {
            ctx->pc = 0x10E1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e1e0;
        }
    }
    ctx->pc = 0x10E268u;
label_10e268:
    // 0x10e268: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10e268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10e26c:
    // 0x10e26c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10e26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e270:
    // 0x10e270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10e274:
    // 0x10e274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10e278:
    // 0x10e278: 0x3e00008  jr          $ra
label_10e27c:
    if (ctx->pc == 0x10E27Cu) {
        ctx->pc = 0x10E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E278u;
        // 0x10e27c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10E280u;
        goto label_fallthrough_0x10e278;
    }
    ctx->pc = 0x10E278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E278u;
        // 0x10e27c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10e278:
    ctx->pc = 0x10E280u;
}
