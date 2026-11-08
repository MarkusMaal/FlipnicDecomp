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

// Function: FUN_001009f0
// Address: 0x1009f0 - 0x100c74
void FUN_001009f0_0x1009f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001009f0_0x1009f0");
#endif

    switch (ctx->pc) {
        case 0x1009f0u: goto label_1009f0;
        case 0x1009f4u: goto label_1009f4;
        case 0x1009f8u: goto label_1009f8;
        case 0x1009fcu: goto label_1009fc;
        case 0x100a00u: goto label_100a00;
        case 0x100a04u: goto label_100a04;
        case 0x100a08u: goto label_100a08;
        case 0x100a0cu: goto label_100a0c;
        case 0x100a10u: goto label_100a10;
        case 0x100a14u: goto label_100a14;
        case 0x100a18u: goto label_100a18;
        case 0x100a1cu: goto label_100a1c;
        case 0x100a20u: goto label_100a20;
        case 0x100a24u: goto label_100a24;
        case 0x100a28u: goto label_100a28;
        case 0x100a2cu: goto label_100a2c;
        case 0x100a30u: goto label_100a30;
        case 0x100a34u: goto label_100a34;
        case 0x100a38u: goto label_100a38;
        case 0x100a3cu: goto label_100a3c;
        case 0x100a40u: goto label_100a40;
        case 0x100a44u: goto label_100a44;
        case 0x100a48u: goto label_100a48;
        case 0x100a4cu: goto label_100a4c;
        case 0x100a50u: goto label_100a50;
        case 0x100a54u: goto label_100a54;
        case 0x100a58u: goto label_100a58;
        case 0x100a5cu: goto label_100a5c;
        case 0x100a60u: goto label_100a60;
        case 0x100a64u: goto label_100a64;
        case 0x100a68u: goto label_100a68;
        case 0x100a6cu: goto label_100a6c;
        case 0x100a70u: goto label_100a70;
        case 0x100a74u: goto label_100a74;
        case 0x100a78u: goto label_100a78;
        case 0x100a7cu: goto label_100a7c;
        case 0x100a80u: goto label_100a80;
        case 0x100a84u: goto label_100a84;
        case 0x100a88u: goto label_100a88;
        case 0x100a8cu: goto label_100a8c;
        case 0x100a90u: goto label_100a90;
        case 0x100a94u: goto label_100a94;
        case 0x100a98u: goto label_100a98;
        case 0x100a9cu: goto label_100a9c;
        case 0x100aa0u: goto label_100aa0;
        case 0x100aa4u: goto label_100aa4;
        case 0x100aa8u: goto label_100aa8;
        case 0x100aacu: goto label_100aac;
        case 0x100ab0u: goto label_100ab0;
        case 0x100ab4u: goto label_100ab4;
        case 0x100ab8u: goto label_100ab8;
        case 0x100abcu: goto label_100abc;
        case 0x100ac0u: goto label_100ac0;
        case 0x100ac4u: goto label_100ac4;
        case 0x100ac8u: goto label_100ac8;
        case 0x100accu: goto label_100acc;
        case 0x100ad0u: goto label_100ad0;
        case 0x100ad4u: goto label_100ad4;
        case 0x100ad8u: goto label_100ad8;
        case 0x100adcu: goto label_100adc;
        case 0x100ae0u: goto label_100ae0;
        case 0x100ae4u: goto label_100ae4;
        case 0x100ae8u: goto label_100ae8;
        case 0x100aecu: goto label_100aec;
        case 0x100af0u: goto label_100af0;
        case 0x100af4u: goto label_100af4;
        case 0x100af8u: goto label_100af8;
        case 0x100afcu: goto label_100afc;
        case 0x100b00u: goto label_100b00;
        case 0x100b04u: goto label_100b04;
        case 0x100b08u: goto label_100b08;
        case 0x100b0cu: goto label_100b0c;
        case 0x100b10u: goto label_100b10;
        case 0x100b14u: goto label_100b14;
        case 0x100b18u: goto label_100b18;
        case 0x100b1cu: goto label_100b1c;
        case 0x100b20u: goto label_100b20;
        case 0x100b24u: goto label_100b24;
        case 0x100b28u: goto label_100b28;
        case 0x100b2cu: goto label_100b2c;
        case 0x100b30u: goto label_100b30;
        case 0x100b34u: goto label_100b34;
        case 0x100b38u: goto label_100b38;
        case 0x100b3cu: goto label_100b3c;
        case 0x100b40u: goto label_100b40;
        case 0x100b44u: goto label_100b44;
        case 0x100b48u: goto label_100b48;
        case 0x100b4cu: goto label_100b4c;
        case 0x100b50u: goto label_100b50;
        case 0x100b54u: goto label_100b54;
        case 0x100b58u: goto label_100b58;
        case 0x100b5cu: goto label_100b5c;
        case 0x100b60u: goto label_100b60;
        case 0x100b64u: goto label_100b64;
        case 0x100b68u: goto label_100b68;
        case 0x100b6cu: goto label_100b6c;
        case 0x100b70u: goto label_100b70;
        case 0x100b74u: goto label_100b74;
        case 0x100b78u: goto label_100b78;
        case 0x100b7cu: goto label_100b7c;
        case 0x100b80u: goto label_100b80;
        case 0x100b84u: goto label_100b84;
        case 0x100b88u: goto label_100b88;
        case 0x100b8cu: goto label_100b8c;
        case 0x100b90u: goto label_100b90;
        case 0x100b94u: goto label_100b94;
        case 0x100b98u: goto label_100b98;
        case 0x100b9cu: goto label_100b9c;
        case 0x100ba0u: goto label_100ba0;
        case 0x100ba4u: goto label_100ba4;
        case 0x100ba8u: goto label_100ba8;
        case 0x100bacu: goto label_100bac;
        case 0x100bb0u: goto label_100bb0;
        case 0x100bb4u: goto label_100bb4;
        case 0x100bb8u: goto label_100bb8;
        case 0x100bbcu: goto label_100bbc;
        case 0x100bc0u: goto label_100bc0;
        case 0x100bc4u: goto label_100bc4;
        case 0x100bc8u: goto label_100bc8;
        case 0x100bccu: goto label_100bcc;
        case 0x100bd0u: goto label_100bd0;
        case 0x100bd4u: goto label_100bd4;
        case 0x100bd8u: goto label_100bd8;
        case 0x100bdcu: goto label_100bdc;
        case 0x100be0u: goto label_100be0;
        case 0x100be4u: goto label_100be4;
        case 0x100be8u: goto label_100be8;
        case 0x100becu: goto label_100bec;
        case 0x100bf0u: goto label_100bf0;
        case 0x100bf4u: goto label_100bf4;
        case 0x100bf8u: goto label_100bf8;
        case 0x100bfcu: goto label_100bfc;
        case 0x100c00u: goto label_100c00;
        case 0x100c04u: goto label_100c04;
        case 0x100c08u: goto label_100c08;
        case 0x100c0cu: goto label_100c0c;
        case 0x100c10u: goto label_100c10;
        case 0x100c14u: goto label_100c14;
        case 0x100c18u: goto label_100c18;
        case 0x100c1cu: goto label_100c1c;
        case 0x100c20u: goto label_100c20;
        case 0x100c24u: goto label_100c24;
        case 0x100c28u: goto label_100c28;
        case 0x100c2cu: goto label_100c2c;
        case 0x100c30u: goto label_100c30;
        case 0x100c34u: goto label_100c34;
        case 0x100c38u: goto label_100c38;
        case 0x100c3cu: goto label_100c3c;
        case 0x100c40u: goto label_100c40;
        case 0x100c44u: goto label_100c44;
        case 0x100c48u: goto label_100c48;
        case 0x100c4cu: goto label_100c4c;
        case 0x100c50u: goto label_100c50;
        case 0x100c54u: goto label_100c54;
        case 0x100c58u: goto label_100c58;
        case 0x100c5cu: goto label_100c5c;
        case 0x100c60u: goto label_100c60;
        case 0x100c64u: goto label_100c64;
        case 0x100c68u: goto label_100c68;
        case 0x100c6cu: goto label_100c6c;
        case 0x100c70u: goto label_100c70;
        default: break;
    }

    ctx->pc = 0x1009f0u;

label_1009f0:
    // 0x1009f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1009f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1009f4:
    // 0x1009f4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1009f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1009f8:
    // 0x1009f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1009f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1009fc:
    // 0x1009fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1009fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_100a00:
    // 0x100a00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x100a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_100a04:
    // 0x100a04: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x100a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_100a08:
    // 0x100a08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_100a0c:
    // 0x100a0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_100a10:
    // 0x100a10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_100a14:
    // 0x100a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100a18:
    // 0x100a18: 0x3c117000  lui         $s1, 0x7000
    ctx->pc = 0x100a18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)28672 << 16));
label_100a1c:
    // 0x100a1c: 0x8f868218  lw          $a2, -0x7DE8($gp)
    ctx->pc = 0x100a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_100a20:
    // 0x100a20: 0x8cc32c1c  lw          $v1, 0x2C1C($a2)
    ctx->pc = 0x100a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11292)));
label_100a24:
    // 0x100a24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_100a28:
    // 0x100a28: 0x8466000a  lh          $a2, 0xA($v1)
    ctx->pc = 0x100a28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_100a2c:
    // 0x100a2c: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x100a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_100a30:
    // 0x100a30: 0x8464000c  lh          $a0, 0xC($v1)
    ctx->pc = 0x100a30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_100a34:
    // 0x100a34: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x100a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_100a38:
    // 0x100a38: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x100a38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_100a3c:
    // 0x100a3c: 0x859821  addu        $s3, $a0, $a1
    ctx->pc = 0x100a3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_100a40:
    // 0x100a40: 0x10000080  b           . + 4 + (0x80 << 2)
label_100a44:
    if (ctx->pc == 0x100A44u) {
        ctx->pc = 0x100A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A40u;
        // 0x100a44: 0x2638021  addu        $s0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A48u;
        goto label_100a48;
    }
    ctx->pc = 0x100A40u;
    {
        const bool branch_taken_0x100a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A40u;
        // 0x100a44: 0x2638021  addu        $s0, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a40) {
            ctx->pc = 0x100C44u;
            goto label_100c44;
        }
    }
    ctx->pc = 0x100A48u;
label_100a48:
    // 0x100a48: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x100a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
label_100a4c:
    // 0x100a4c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x100a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_100a50:
    // 0x100a50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_100a54:
    // 0x100a54: 0x8c722cd8  lw          $s2, 0x2CD8($v1)
    ctx->pc = 0x100a54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_100a58:
    // 0x100a58: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x100a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_100a5c:
    // 0x100a5c: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_100a60:
    if (ctx->pc == 0x100A60u) {
        ctx->pc = 0x100A64u;
        goto label_100a64;
    }
    ctx->pc = 0x100A5Cu;
    {
        const bool branch_taken_0x100a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a5c) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100A64u;
label_100a64:
    // 0x100a64: 0x924301d3  lbu         $v1, 0x1D3($s2)
    ctx->pc = 0x100a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 467)));
label_100a68:
    // 0x100a68: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
label_100a6c:
    if (ctx->pc == 0x100A6Cu) {
        ctx->pc = 0x100A70u;
        goto label_100a70;
    }
    ctx->pc = 0x100A68u;
    {
        const bool branch_taken_0x100a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a68) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100A70u;
label_100a70:
    // 0x100a70: 0x8e540004  lw          $s4, 0x4($s2)
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_100a74:
    // 0x100a74: 0x12800071  beqz        $s4, . + 4 + (0x71 << 2)
label_100a78:
    if (ctx->pc == 0x100A78u) {
        ctx->pc = 0x100A7Cu;
        goto label_100a7c;
    }
    ctx->pc = 0x100A74u;
    {
        const bool branch_taken_0x100a74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a74) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100A7Cu;
label_100a7c:
    // 0x100a7c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100a80:
    // 0x100a80: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x100a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_100a84:
    // 0x100a84: 0x320f809  jalr        $t9
label_100a88:
    if (ctx->pc == 0x100A88u) {
        ctx->pc = 0x100A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A84u;
        // 0x100a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100A8Cu;
        goto label_100a8c;
    }
    ctx->pc = 0x100A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100A8Cu);
        ctx->pc = 0x100A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A84u;
        // 0x100a88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100A84u, 0x100A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100A8Cu;
label_100a8c:
    // 0x100a8c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_100a90:
    if (ctx->pc == 0x100A90u) {
        ctx->pc = 0x100A94u;
        goto label_100a94;
    }
    ctx->pc = 0x100A8Cu;
    {
        const bool branch_taken_0x100a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a8c) {
            ctx->pc = 0x100BA0u;
            goto label_100ba0;
        }
    }
    ctx->pc = 0x100A94u;
label_100a94:
    // 0x100a94: 0x9242007a  lbu         $v0, 0x7A($s2)
    ctx->pc = 0x100a94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 122)));
label_100a98:
    // 0x100a98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_100a9c:
    if (ctx->pc == 0x100A9Cu) {
        ctx->pc = 0x100AA0u;
        goto label_100aa0;
    }
    ctx->pc = 0x100A98u;
    {
        const bool branch_taken_0x100a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100a98) {
            ctx->pc = 0x100ABCu;
            goto label_100abc;
        }
    }
    ctx->pc = 0x100AA0u;
label_100aa0:
    // 0x100aa0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100aa4:
    // 0x100aa4: 0x8f3900f0  lw          $t9, 0xF0($t9)
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 240)));
label_100aa8:
    // 0x100aa8: 0x320f809  jalr        $t9
label_100aac:
    if (ctx->pc == 0x100AACu) {
        ctx->pc = 0x100AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA8u;
        // 0x100aac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AB0u;
        goto label_100ab0;
    }
    ctx->pc = 0x100AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100AB0u);
        ctx->pc = 0x100AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AA8u;
        // 0x100aac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AA8u, 0x100AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100AB0u;
label_100ab0:
    // 0x100ab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100ab4:
    // 0x100ab4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_100ab8:
    if (ctx->pc == 0x100AB8u) {
        ctx->pc = 0x100ABCu;
        goto label_100abc;
    }
    ctx->pc = 0x100AB4u;
    {
        const bool branch_taken_0x100ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x100ab4) {
            ctx->pc = 0x100AE0u;
            goto label_100ae0;
        }
    }
    ctx->pc = 0x100ABCu;
label_100abc:
    // 0x100abc: 0x0  nop
    ctx->pc = 0x100abcu;
    // NOP
label_100ac0:
    // 0x100ac0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100ac4:
    // 0x100ac4: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_100ac8:
    // 0x100ac8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100acc:
    // 0x100acc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_100ad0:
    // 0x100ad0: 0x320f809  jalr        $t9
label_100ad4:
    if (ctx->pc == 0x100AD4u) {
        ctx->pc = 0x100AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AD0u;
        // 0x100ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100AD8u;
        goto label_100ad8;
    }
    ctx->pc = 0x100AD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100AD8u);
        ctx->pc = 0x100AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AD0u;
        // 0x100ad4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100AD0u, 0x100AD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100AD8u;
label_100ad8:
    // 0x100ad8: 0x10000058  b           . + 4 + (0x58 << 2)
label_100adc:
    if (ctx->pc == 0x100ADCu) {
        ctx->pc = 0x100AE0u;
        goto label_100ae0;
    }
    ctx->pc = 0x100AD8u;
    {
        const bool branch_taken_0x100ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ad8) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100AE0u;
label_100ae0:
    // 0x100ae0: 0x92430078  lbu         $v1, 0x78($s2)
    ctx->pc = 0x100ae0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
label_100ae4:
    // 0x100ae4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_100ae8:
    if (ctx->pc == 0x100AE8u) {
        ctx->pc = 0x100AECu;
        goto label_100aec;
    }
    ctx->pc = 0x100AE4u;
    {
        const bool branch_taken_0x100ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x100ae4) {
            ctx->pc = 0x100AF8u;
            goto label_100af8;
        }
    }
    ctx->pc = 0x100AECu;
label_100aec:
    // 0x100aec: 0x92430079  lbu         $v1, 0x79($s2)
    ctx->pc = 0x100aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
label_100af0:
    // 0x100af0: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
label_100af4:
    if (ctx->pc == 0x100AF4u) {
        ctx->pc = 0x100AF8u;
        goto label_100af8;
    }
    ctx->pc = 0x100AF0u;
    {
        const bool branch_taken_0x100af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100af0) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100AF8u;
label_100af8:
    // 0x100af8: 0x9242007b  lbu         $v0, 0x7B($s2)
    ctx->pc = 0x100af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 123)));
label_100afc:
    // 0x100afc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_100b00:
    if (ctx->pc == 0x100B00u) {
        ctx->pc = 0x100B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AFCu;
        // 0x100b00: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B04u;
        goto label_100b04;
    }
    ctx->pc = 0x100AFCu;
    {
        const bool branch_taken_0x100afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AFCu;
        // 0x100b00: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100afc) {
            ctx->pc = 0x100B40u;
            goto label_100b40;
        }
    }
    ctx->pc = 0x100B04u;
label_100b04:
    // 0x100b04: 0xc05622c  jal         func_1588B0
label_100b08:
    if (ctx->pc == 0x100B08u) {
        ctx->pc = 0x100B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B04u;
        // 0x100b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B0Cu;
        goto label_100b0c;
    }
    ctx->pc = 0x100B04u;
    SET_GPR_U32(ctx, 31, 0x100B0Cu);
    ctx->pc = 0x100B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B04u;
    // 0x100b08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588B0u, 0x100B04u, 0x100B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B0Cu;
label_100b0c:
    // 0x100b0c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b10:
    // 0x100b10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b14:
    // 0x100b14: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100b18:
    // 0x100b18: 0x320f809  jalr        $t9
label_100b1c:
    if (ctx->pc == 0x100B1Cu) {
        ctx->pc = 0x100B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B18u;
        // 0x100b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B20u;
        goto label_100b20;
    }
    ctx->pc = 0x100B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B20u);
        ctx->pc = 0x100B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B18u;
        // 0x100b1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B18u, 0x100B20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B20u;
label_100b20:
    // 0x100b20: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b24:
    // 0x100b24: 0x26460030  addiu       $a2, $s2, 0x30
    ctx->pc = 0x100b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_100b28:
    // 0x100b28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b2c:
    // 0x100b2c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x100b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_100b30:
    // 0x100b30: 0x320f809  jalr        $t9
label_100b34:
    if (ctx->pc == 0x100B34u) {
        ctx->pc = 0x100B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B30u;
        // 0x100b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B38u;
        goto label_100b38;
    }
    ctx->pc = 0x100B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B38u);
        ctx->pc = 0x100B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B30u;
        // 0x100b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B30u, 0x100B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B38u;
label_100b38:
    // 0x100b38: 0x10000040  b           . + 4 + (0x40 << 2)
label_100b3c:
    if (ctx->pc == 0x100B3Cu) {
        ctx->pc = 0x100B40u;
        goto label_100b40;
    }
    ctx->pc = 0x100B38u;
    {
        const bool branch_taken_0x100b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b38) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100B40u;
label_100b40:
    // 0x100b40: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x100b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_100b44:
    // 0x100b44: 0xc056200  jal         func_158800
label_100b48:
    if (ctx->pc == 0x100B48u) {
        ctx->pc = 0x100B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B44u;
        // 0x100b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B4Cu;
        goto label_100b4c;
    }
    ctx->pc = 0x100B44u;
    SET_GPR_U32(ctx, 31, 0x100B4Cu);
    ctx->pc = 0x100B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B44u;
    // 0x100b48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158800u, 0x100B44u, 0x100B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B4Cu;
label_100b4c:
    // 0x100b4c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b50:
    // 0x100b50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b54:
    // 0x100b54: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100b58:
    // 0x100b58: 0x320f809  jalr        $t9
label_100b5c:
    if (ctx->pc == 0x100B5Cu) {
        ctx->pc = 0x100B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B58u;
        // 0x100b5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B60u;
        goto label_100b60;
    }
    ctx->pc = 0x100B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B60u);
        ctx->pc = 0x100B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B58u;
        // 0x100b5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B58u, 0x100B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B60u;
label_100b60:
    // 0x100b60: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b64:
    // 0x100b64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b68:
    // 0x100b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100b6c:
    // 0x100b6c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_100b70:
    // 0x100b70: 0x320f809  jalr        $t9
label_100b74:
    if (ctx->pc == 0x100B74u) {
        ctx->pc = 0x100B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B70u;
        // 0x100b74: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B78u;
        goto label_100b78;
    }
    ctx->pc = 0x100B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B78u);
        ctx->pc = 0x100B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B70u;
        // 0x100b74: 0x26460030  addiu       $a2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B70u, 0x100B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B78u;
label_100b78:
    // 0x100b78: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_100b7c:
    // 0x100b7c: 0xc05622c  jal         func_1588B0
label_100b80:
    if (ctx->pc == 0x100B80u) {
        ctx->pc = 0x100B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B7Cu;
        // 0x100b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B84u;
        goto label_100b84;
    }
    ctx->pc = 0x100B7Cu;
    SET_GPR_U32(ctx, 31, 0x100B84u);
    ctx->pc = 0x100B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B7Cu;
    // 0x100b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588B0u, 0x100B7Cu, 0x100B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B84u;
label_100b84:
    // 0x100b84: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100b84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100b88:
    // 0x100b88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100b8c:
    // 0x100b8c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100b90:
    // 0x100b90: 0x320f809  jalr        $t9
label_100b94:
    if (ctx->pc == 0x100B94u) {
        ctx->pc = 0x100B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B90u;
        // 0x100b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100B98u;
        goto label_100b98;
    }
    ctx->pc = 0x100B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100B98u);
        ctx->pc = 0x100B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B90u;
        // 0x100b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B90u, 0x100B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100B98u;
label_100b98:
    // 0x100b98: 0x10000028  b           . + 4 + (0x28 << 2)
label_100b9c:
    if (ctx->pc == 0x100B9Cu) {
        ctx->pc = 0x100BA0u;
        goto label_100ba0;
    }
    ctx->pc = 0x100B98u;
    {
        const bool branch_taken_0x100b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b98) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100BA0u;
label_100ba0:
    // 0x100ba0: 0x9243007a  lbu         $v1, 0x7A($s2)
    ctx->pc = 0x100ba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 122)));
label_100ba4:
    // 0x100ba4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_100ba8:
    if (ctx->pc == 0x100BA8u) {
        ctx->pc = 0x100BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BA4u;
        // 0x100ba8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BACu;
        goto label_100bac;
    }
    ctx->pc = 0x100BA4u;
    {
        const bool branch_taken_0x100ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BA4u;
        // 0x100ba8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ba4) {
            ctx->pc = 0x100BC8u;
            goto label_100bc8;
        }
    }
    ctx->pc = 0x100BACu;
label_100bac:
    // 0x100bac: 0xc04c6dc  jal         func_131B70
label_100bb0:
    if (ctx->pc == 0x100BB0u) {
        ctx->pc = 0x100BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BACu;
        // 0x100bb0: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BB4u;
        goto label_100bb4;
    }
    ctx->pc = 0x100BACu;
    SET_GPR_U32(ctx, 31, 0x100BB4u);
    ctx->pc = 0x100BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BACu;
    // 0x100bb0: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x100BACu, 0x100BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BB4u;
label_100bb4:
    // 0x100bb4: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100bb4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_100bb8:
    // 0x100bb8: 0x7e460010  sq          $a2, 0x10($s2)
    ctx->pc = 0x100bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 6));
label_100bbc:
    // 0x100bbc: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100bbcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_100bc0:
    // 0x100bc0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_100bc4:
    if (ctx->pc == 0x100BC4u) {
        ctx->pc = 0x100BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BC0u;
        // 0x100bc4: 0x7e4601e0  sq          $a2, 0x1E0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BC8u;
        goto label_100bc8;
    }
    ctx->pc = 0x100BC0u;
    {
        const bool branch_taken_0x100bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BC0u;
        // 0x100bc4: 0x7e4601e0  sq          $a2, 0x1E0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bc0) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100BC8u;
label_100bc8:
    // 0x100bc8: 0x92430079  lbu         $v1, 0x79($s2)
    ctx->pc = 0x100bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 121)));
label_100bcc:
    // 0x100bcc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_100bd0:
    if (ctx->pc == 0x100BD0u) {
        ctx->pc = 0x100BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BCCu;
        // 0x100bd0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BD4u;
        goto label_100bd4;
    }
    ctx->pc = 0x100BCCu;
    {
        const bool branch_taken_0x100bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BCCu;
        // 0x100bd0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100bcc) {
            ctx->pc = 0x100C08u;
            goto label_100c08;
        }
    }
    ctx->pc = 0x100BD4u;
label_100bd4:
    // 0x100bd4: 0xc05622c  jal         func_1588B0
label_100bd8:
    if (ctx->pc == 0x100BD8u) {
        ctx->pc = 0x100BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BD4u;
        // 0x100bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BDCu;
        goto label_100bdc;
    }
    ctx->pc = 0x100BD4u;
    SET_GPR_U32(ctx, 31, 0x100BDCu);
    ctx->pc = 0x100BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BD4u;
    // 0x100bd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1588B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588B0u, 0x100BD4u, 0x100BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BDCu;
label_100bdc:
    // 0x100bdc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x100bdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_100be0:
    // 0x100be0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100be4:
    // 0x100be4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_100be8:
    // 0x100be8: 0x320f809  jalr        $t9
label_100bec:
    if (ctx->pc == 0x100BECu) {
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BF0u;
        goto label_100bf0;
    }
    ctx->pc = 0x100BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100BF0u);
        ctx->pc = 0x100BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BE8u;
        // 0x100bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BE8u, 0x100BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100BF0u;
label_100bf0:
    // 0x100bf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100bf4:
    // 0x100bf4: 0xc04c6dc  jal         func_131B70
label_100bf8:
    if (ctx->pc == 0x100BF8u) {
        ctx->pc = 0x100BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100BF4u;
        // 0x100bf8: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100BFCu;
        goto label_100bfc;
    }
    ctx->pc = 0x100BF4u;
    SET_GPR_U32(ctx, 31, 0x100BFCu);
    ctx->pc = 0x100BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100BF4u;
    // 0x100bf8: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x100BF4u, 0x100BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100BFCu;
label_100bfc:
    // 0x100bfc: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100bfcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_100c00:
    // 0x100c00: 0x1000000e  b           . + 4 + (0xE << 2)
label_100c04:
    if (ctx->pc == 0x100C04u) {
        ctx->pc = 0x100C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C00u;
        // 0x100c04: 0x7e4601e0  sq          $a2, 0x1E0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C08u;
        goto label_100c08;
    }
    ctx->pc = 0x100C00u;
    {
        const bool branch_taken_0x100c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C00u;
        // 0x100c04: 0x7e4601e0  sq          $a2, 0x1E0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c00) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100C08u;
label_100c08:
    // 0x100c08: 0x92430078  lbu         $v1, 0x78($s2)
    ctx->pc = 0x100c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 120)));
label_100c0c:
    // 0x100c0c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_100c10:
    if (ctx->pc == 0x100C10u) {
        ctx->pc = 0x100C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C0Cu;
        // 0x100c10: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C14u;
        goto label_100c14;
    }
    ctx->pc = 0x100C0Cu;
    {
        const bool branch_taken_0x100c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x100C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C0Cu;
        // 0x100c10: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c0c) {
            ctx->pc = 0x100C3Cu;
            goto label_100c3c;
        }
    }
    ctx->pc = 0x100C14u;
label_100c14:
    // 0x100c14: 0xc05621c  jal         func_158870
label_100c18:
    if (ctx->pc == 0x100C18u) {
        ctx->pc = 0x100C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C14u;
        // 0x100c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C1Cu;
        goto label_100c1c;
    }
    ctx->pc = 0x100C14u;
    SET_GPR_U32(ctx, 31, 0x100C1Cu);
    ctx->pc = 0x100C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C14u;
    // 0x100c18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x100C14u, 0x100C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C1Cu;
label_100c1c:
    // 0x100c1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100c20:
    // 0x100c20: 0xc04c6f0  jal         func_131BC0
label_100c24:
    if (ctx->pc == 0x100C24u) {
        ctx->pc = 0x100C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C20u;
        // 0x100c24: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C28u;
        goto label_100c28;
    }
    ctx->pc = 0x100C20u;
    SET_GPR_U32(ctx, 31, 0x100C28u);
    ctx->pc = 0x100C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C20u;
    // 0x100c24: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131BC0u, 0x100C20u, 0x100C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C28u;
label_100c28:
    // 0x100c28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x100c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_100c2c:
    // 0x100c2c: 0xc04c6dc  jal         func_131B70
label_100c30:
    if (ctx->pc == 0x100C30u) {
        ctx->pc = 0x100C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C2Cu;
        // 0x100c30: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C34u;
        goto label_100c34;
    }
    ctx->pc = 0x100C2Cu;
    SET_GPR_U32(ctx, 31, 0x100C34u);
    ctx->pc = 0x100C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100C2Cu;
    // 0x100c30: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B70u, 0x100C2Cu, 0x100C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C34u;
label_100c34:
    // 0x100c34: 0x7a460060  lq          $a2, 0x60($s2)
    ctx->pc = 0x100c34u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 96)));
label_100c38:
    // 0x100c38: 0x7e4601e0  sq          $a2, 0x1E0($s2)
    ctx->pc = 0x100c38u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 480), GPR_VEC(ctx, 6));
label_100c3c:
    // 0x100c3c: 0x0  nop
    ctx->pc = 0x100c3cu;
    // NOP
label_100c40:
    // 0x100c40: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x100c40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_100c44:
    // 0x100c44: 0x0  nop
    ctx->pc = 0x100c44u;
    // NOP
label_100c48:
    // 0x100c48: 0x270182a  slt         $v1, $s3, $s0
    ctx->pc = 0x100c48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_100c4c:
    // 0x100c4c: 0x1460ff7e  bnez        $v1, . + 4 + (-0x82 << 2)
label_100c50:
    if (ctx->pc == 0x100C50u) {
        ctx->pc = 0x100C54u;
        goto label_100c54;
    }
    ctx->pc = 0x100C4Cu;
    {
        const bool branch_taken_0x100c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x100c4c) {
            ctx->pc = 0x100A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100a48;
        }
    }
    ctx->pc = 0x100C54u;
label_100c54:
    // 0x100c54: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x100c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_100c58:
    // 0x100c58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x100c58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_100c5c:
    // 0x100c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_100c60:
    // 0x100c60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100c60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_100c64:
    // 0x100c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_100c68:
    // 0x100c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100c6c:
    // 0x100c6c: 0x3e00008  jr          $ra
label_100c70:
    if (ctx->pc == 0x100C70u) {
        ctx->pc = 0x100C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C6Cu;
        // 0x100c70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x100C74u;
        goto label_fallthrough_0x100c6c;
    }
    ctx->pc = 0x100C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C6Cu;
        // 0x100c70: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x100c6c:
    ctx->pc = 0x100C74u;
}
