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

// Function: FUN_001eaf30
// Address: 0x1eaf30 - 0x1eb1c0
void FUN_001eaf30_0x1eaf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eaf30_0x1eaf30");
#endif

    switch (ctx->pc) {
        case 0x1eb03cu: goto label_1eb03c;
        case 0x1eb0a8u: goto label_1eb0a8;
        case 0x1eb11cu: goto label_1eb11c;
        case 0x1eb188u: goto label_1eb188;
        default: break;
    }

    ctx->pc = 0x1eaf30u;

    // 0x1eaf30: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1eaf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1eaf34: 0x8c860228  lw          $a2, 0x228($a0)
    ctx->pc = 0x1eaf34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x1eaf38: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1eaf38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eaf3c: 0x9c850220  lwu         $a1, 0x220($a0)
    ctx->pc = 0x1eaf3cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1eaf40: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x1eaf40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1eaf44: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1EAF44u;
    {
        const bool branch_taken_0x1eaf44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAF44u;
        // 0x1eaf48: 0x9c870224  lwu         $a3, 0x224($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf44) {
            ctx->pc = 0x1EAFACu;
            goto label_1eafac;
        }
    }
    ctx->pc = 0x1EAF4Cu;
    // 0x1eaf4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1eaf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1eaf50: 0x9c890234  lwu         $t1, 0x234($a0)
    ctx->pc = 0x1eaf50u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x1eaf54: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x1eaf54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eaf58: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x1eaf58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1eaf5c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1eaf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1eaf60: 0x8c8a0018  lw          $t2, 0x18($a0)
    ctx->pc = 0x1eaf60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1eaf64: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x1eaf64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x1eaf68: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1eaf68u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1eaf6c: 0x34e7fff0  ori         $a3, $a3, 0xFFF0
    ctx->pc = 0x1eaf6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65520);
    // 0x1eaf70: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1eaf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x1eaf74: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1eaf74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1eaf78: 0x940b8  dsll        $t0, $t1, 2
    ctx->pc = 0x1eaf78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 2);
    // 0x1eaf7c: 0x6508000f  daddiu      $t0, $t0, 0xF
    ctx->pc = 0x1eaf7cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)15);
    // 0x1eaf80: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1eaf80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1eaf84: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1eaf88: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1eaf88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1eaf8c: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1eaf8cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1eaf90: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1eaf90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1eaf94: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x1eaf94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1eaf98: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1eaf98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1eaf9c: 0xe2102d  daddu       $v0, $a3, $v0
    ctx->pc = 0x1eaf9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1eafa0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1eafa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eafa4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EAFA4u;
    {
        const bool branch_taken_0x1eafa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFA4u;
        // 0x1eafa8: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafa4) {
            ctx->pc = 0x1EAFCCu;
            goto label_1eafcc;
        }
    }
    ctx->pc = 0x1EAFACu;
label_1eafac:
    // 0x1eafac: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x1eafacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1eafb0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1eafb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x1eafb4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1eafb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1eafb8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1eafb8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1eafbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1eafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1eafc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1eafc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1eafc4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1eafc8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1eafcc:
    // 0x1eafcc: 0x8c880230  lw          $t0, 0x230($a0)
    ctx->pc = 0x1eafccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x1eafd0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAFD0u;
    {
        const bool branch_taken_0x1eafd0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eafd0) {
            ctx->pc = 0x1EAFDCu;
            goto label_1eafdc;
        }
    }
    ctx->pc = 0x1EAFD8u;
    // 0x1eafd8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1eafd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1eafdc:
    // 0x1eafdc: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAFDCu;
    {
        const bool branch_taken_0x1eafdc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFDCu;
        // 0x1eafe0: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafdc) {
            ctx->pc = 0x1EAFF4u;
            goto label_1eaff4;
        }
    }
    ctx->pc = 0x1EAFE4u;
    // 0x1eafe4: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1eafe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1eafe8: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x1eafe8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eafec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EAFECu;
    {
        const bool branch_taken_0x1eafec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFECu;
        // 0x1eaff0: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eafec) {
            ctx->pc = 0x1EB010u;
            goto label_1eb010;
        }
    }
    ctx->pc = 0x1EAFF4u;
label_1eaff4:
    // 0x1eaff4: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x1eaff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1eaff8: 0x14c80006  bne         $a2, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EAFF8u;
    {
        const bool branch_taken_0x1eaff8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x1EAFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAFF8u;
        // 0x1eaffc: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaff8) {
            ctx->pc = 0x1EB014u;
            goto label_1eb014;
        }
    }
    ctx->pc = 0x1EB000u;
    // 0x1eb000: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x1eb000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1eb004: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x1eb004u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x1eb008: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x1eb008u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eb00c: 0x7c880200  sq          $t0, 0x200($a0)
    ctx->pc = 0x1eb00cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
label_1eb010:
    // 0x1eb010: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x1eb010u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_1eb014:
    // 0x1eb014: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x1eb014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1eb018: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1eb018u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1eb01c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1eb01cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb020: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x1eb020u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x1eb024: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EB024u;
    {
        const bool branch_taken_0x1eb024 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB024u;
        // 0x1eb028: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb024) {
            ctx->pc = 0x1EB0D4u;
            goto label_1eb0d4;
        }
    }
    ctx->pc = 0x1EB02Cu;
    // 0x1eb02c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x1eb02cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb030: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EB030u;
    {
        const bool branch_taken_0x1eb030 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB030u;
        // 0x1eb034: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb030) {
            ctx->pc = 0x1EB09Cu;
            goto label_1eb09c;
        }
    }
    ctx->pc = 0x1EB038u;
    // 0x1eb038: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1eb038u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb03c:
    // 0x1eb03c: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1eb03cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eb040: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x1eb040u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x1eb044: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1eb044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1eb048: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x1eb048u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x1eb04c: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1eb04cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb050: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1eb050u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1eb054: 0x16d582b  sltu        $t3, $t3, $t5
    ctx->pc = 0x1eb054u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x1eb058: 0x7dec0120  sq          $t4, 0x120($t7)
    ctx->pc = 0x1eb058u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 288), GPR_VEC(ctx, 12));
    // 0x1eb05c: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x1eb05cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1eb060: 0x7dec0130  sq          $t4, 0x130($t7)
    ctx->pc = 0x1eb060u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 304), GPR_VEC(ctx, 12));
    // 0x1eb064: 0x78ec0020  lq          $t4, 0x20($a3)
    ctx->pc = 0x1eb064u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1eb068: 0x7dec0140  sq          $t4, 0x140($t7)
    ctx->pc = 0x1eb068u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 320), GPR_VEC(ctx, 12));
    // 0x1eb06c: 0x78ec0030  lq          $t4, 0x30($a3)
    ctx->pc = 0x1eb06cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1eb070: 0x7dec0150  sq          $t4, 0x150($t7)
    ctx->pc = 0x1eb070u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 336), GPR_VEC(ctx, 12));
    // 0x1eb074: 0x78ec0040  lq          $t4, 0x40($a3)
    ctx->pc = 0x1eb074u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1eb078: 0x7dec0160  sq          $t4, 0x160($t7)
    ctx->pc = 0x1eb078u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 352), GPR_VEC(ctx, 12));
    // 0x1eb07c: 0x78ec0050  lq          $t4, 0x50($a3)
    ctx->pc = 0x1eb07cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1eb080: 0x7dec0170  sq          $t4, 0x170($t7)
    ctx->pc = 0x1eb080u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 368), GPR_VEC(ctx, 12));
    // 0x1eb084: 0x78ec0060  lq          $t4, 0x60($a3)
    ctx->pc = 0x1eb084u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1eb088: 0x7dec0180  sq          $t4, 0x180($t7)
    ctx->pc = 0x1eb088u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 384), GPR_VEC(ctx, 12));
    // 0x1eb08c: 0x78ec0070  lq          $t4, 0x70($a3)
    ctx->pc = 0x1eb08cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x1eb090: 0x7dec0190  sq          $t4, 0x190($t7)
    ctx->pc = 0x1eb090u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 400), GPR_VEC(ctx, 12));
    // 0x1eb094: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EB094u;
    {
        const bool branch_taken_0x1eb094 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB094u;
        // 0x1eb098: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb094) {
            ctx->pc = 0x1EB03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb03c;
        }
    }
    ctx->pc = 0x1EB09Cu;
label_1eb09c:
    // 0x1eb09c: 0x0  nop
    ctx->pc = 0x1eb09cu;
    // NOP
    // 0x1eb0a0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB0A0u;
    {
        const bool branch_taken_0x1eb0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0A0u;
        // 0x1eb0a4: 0x86900  sll         $t5, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb0a0) {
            ctx->pc = 0x1EB0C0u;
            goto label_1eb0c0;
        }
    }
    ctx->pc = 0x1EB0A8u;
label_1eb0a8:
    // 0x1eb0a8: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1eb0a8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1eb0ac: 0x8d5821  addu        $t3, $a0, $t5
    ctx->pc = 0x1eb0acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1eb0b0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x1eb0b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1eb0b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1eb0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1eb0b8: 0x7d6c0120  sq          $t4, 0x120($t3)
    ctx->pc = 0x1eb0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 288), GPR_VEC(ctx, 12));
    // 0x1eb0bc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1eb0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1eb0c0:
    // 0x1eb0c0: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1eb0c0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1eb0c4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1eb0c4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1eb0c8: 0x166582b  sltu        $t3, $t3, $a2
    ctx->pc = 0x1eb0c8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1eb0cc: 0x1560fff6  bnez        $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EB0CCu;
    {
        const bool branch_taken_0x1eb0cc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb0cc) {
            ctx->pc = 0x1EB0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb0a8;
        }
    }
    ctx->pc = 0x1EB0D4u;
label_1eb0d4:
    // 0x1eb0d4: 0x0  nop
    ctx->pc = 0x1eb0d4u;
    // NOP
    // 0x1eb0d8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1eb0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1eb0dc: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1eb0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1eb0e0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1eb0e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1eb0e4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1eb0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1eb0e8: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1EB0E8u;
    {
        const bool branch_taken_0x1eb0e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB0E8u;
        // 0x1eb0ec: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb0e8) {
            ctx->pc = 0x1EB1B4u;
            goto label_1eb1b4;
        }
    }
    ctx->pc = 0x1EB0F0u;
    // 0x1eb0f0: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x1eb0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1eb0f4: 0x9082b  sltu        $at, $zero, $t1
    ctx->pc = 0x1eb0f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1eb0f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eb0f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eb0fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1eb0fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1eb104: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EB104u;
    {
        const bool branch_taken_0x1eb104 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB104u;
        // 0x1eb108: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb104) {
            ctx->pc = 0x1EB1B4u;
            goto label_1eb1b4;
        }
    }
    ctx->pc = 0x1EB10Cu;
    // 0x1eb10c: 0x2d210009  sltiu       $at, $t1, 0x9
    ctx->pc = 0x1eb10cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1eb110: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EB110u;
    {
        const bool branch_taken_0x1eb110 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB110u;
        // 0x1eb114: 0x6526fff8  daddiu      $a2, $t1, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb110) {
            ctx->pc = 0x1EB17Cu;
            goto label_1eb17c;
        }
    }
    ctx->pc = 0x1EB118u;
    // 0x1eb118: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1eb118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eb11c:
    // 0x1eb11c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1eb11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1eb120: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x1eb120u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1eb124: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x1eb124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x1eb128: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1eb128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1eb12c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x1eb12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1eb130: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eb130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eb134: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x1eb134u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1eb138: 0xad050288  sw          $a1, 0x288($t0)
    ctx->pc = 0x1eb138u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 648), GPR_U32(ctx, 5));
    // 0x1eb13c: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x1eb13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1eb140: 0xad05028c  sw          $a1, 0x28C($t0)
    ctx->pc = 0x1eb140u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 652), GPR_U32(ctx, 5));
    // 0x1eb144: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x1eb144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x1eb148: 0xad050290  sw          $a1, 0x290($t0)
    ctx->pc = 0x1eb148u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 656), GPR_U32(ctx, 5));
    // 0x1eb14c: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x1eb150: 0xad050294  sw          $a1, 0x294($t0)
    ctx->pc = 0x1eb150u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 5));
    // 0x1eb154: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x1eb154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x1eb158: 0xad050298  sw          $a1, 0x298($t0)
    ctx->pc = 0x1eb158u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 5));
    // 0x1eb15c: 0x8d450014  lw          $a1, 0x14($t2)
    ctx->pc = 0x1eb15cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x1eb160: 0xad05029c  sw          $a1, 0x29C($t0)
    ctx->pc = 0x1eb160u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 5));
    // 0x1eb164: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x1eb164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1eb168: 0xad0502a0  sw          $a1, 0x2A0($t0)
    ctx->pc = 0x1eb168u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 5));
    // 0x1eb16c: 0x8d45001c  lw          $a1, 0x1C($t2)
    ctx->pc = 0x1eb16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1eb170: 0xad0502a4  sw          $a1, 0x2A4($t0)
    ctx->pc = 0x1eb170u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 676), GPR_U32(ctx, 5));
    // 0x1eb174: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1EB174u;
    {
        const bool branch_taken_0x1eb174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB174u;
        // 0x1eb178: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb174) {
            ctx->pc = 0x1EB11Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb11c;
        }
    }
    ctx->pc = 0x1EB17Cu;
label_1eb17c:
    // 0x1eb17c: 0x0  nop
    ctx->pc = 0x1eb17cu;
    // NOP
    // 0x1eb180: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EB180u;
    {
        const bool branch_taken_0x1eb180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB180u;
        // 0x1eb184: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb180) {
            ctx->pc = 0x1EB1A0u;
            goto label_1eb1a0;
        }
    }
    ctx->pc = 0x1EB188u;
label_1eb188:
    // 0x1eb188: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1eb188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1eb18c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1eb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1eb190: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1eb190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1eb194: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1eb194u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1eb198: 0xac650288  sw          $a1, 0x288($v1)
    ctx->pc = 0x1eb198u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 5));
    // 0x1eb19c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1eb19cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1eb1a0:
    // 0x1eb1a0: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x1eb1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1eb1a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eb1a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eb1a8: 0x69182b  sltu        $v1, $v1, $t1
    ctx->pc = 0x1eb1a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1eb1ac: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1EB1ACu;
    {
        const bool branch_taken_0x1eb1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eb1ac) {
            ctx->pc = 0x1EB188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb188;
        }
    }
    ctx->pc = 0x1EB1B4u;
label_1eb1b4:
    // 0x1eb1b4: 0x0  nop
    ctx->pc = 0x1eb1b4u;
    // NOP
    // 0x1eb1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB1C0u;
}
