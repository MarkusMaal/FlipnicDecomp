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

// Function: FUN_001e29e0
// Address: 0x1e29e0 - 0x1e2bb4
void FUN_001e29e0_0x1e29e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e29e0_0x1e29e0");
#endif

    switch (ctx->pc) {
        case 0x1e29e0u: goto label_1e29e0;
        case 0x1e29e4u: goto label_1e29e4;
        case 0x1e29e8u: goto label_1e29e8;
        case 0x1e29ecu: goto label_1e29ec;
        case 0x1e29f0u: goto label_1e29f0;
        case 0x1e29f4u: goto label_1e29f4;
        case 0x1e29f8u: goto label_1e29f8;
        case 0x1e29fcu: goto label_1e29fc;
        case 0x1e2a00u: goto label_1e2a00;
        case 0x1e2a04u: goto label_1e2a04;
        case 0x1e2a08u: goto label_1e2a08;
        case 0x1e2a0cu: goto label_1e2a0c;
        case 0x1e2a10u: goto label_1e2a10;
        case 0x1e2a14u: goto label_1e2a14;
        case 0x1e2a18u: goto label_1e2a18;
        case 0x1e2a1cu: goto label_1e2a1c;
        case 0x1e2a20u: goto label_1e2a20;
        case 0x1e2a24u: goto label_1e2a24;
        case 0x1e2a28u: goto label_1e2a28;
        case 0x1e2a2cu: goto label_1e2a2c;
        case 0x1e2a30u: goto label_1e2a30;
        case 0x1e2a34u: goto label_1e2a34;
        case 0x1e2a38u: goto label_1e2a38;
        case 0x1e2a3cu: goto label_1e2a3c;
        case 0x1e2a40u: goto label_1e2a40;
        case 0x1e2a44u: goto label_1e2a44;
        case 0x1e2a48u: goto label_1e2a48;
        case 0x1e2a4cu: goto label_1e2a4c;
        case 0x1e2a50u: goto label_1e2a50;
        case 0x1e2a54u: goto label_1e2a54;
        case 0x1e2a58u: goto label_1e2a58;
        case 0x1e2a5cu: goto label_1e2a5c;
        case 0x1e2a60u: goto label_1e2a60;
        case 0x1e2a64u: goto label_1e2a64;
        case 0x1e2a68u: goto label_1e2a68;
        case 0x1e2a6cu: goto label_1e2a6c;
        case 0x1e2a70u: goto label_1e2a70;
        case 0x1e2a74u: goto label_1e2a74;
        case 0x1e2a78u: goto label_1e2a78;
        case 0x1e2a7cu: goto label_1e2a7c;
        case 0x1e2a80u: goto label_1e2a80;
        case 0x1e2a84u: goto label_1e2a84;
        case 0x1e2a88u: goto label_1e2a88;
        case 0x1e2a8cu: goto label_1e2a8c;
        case 0x1e2a90u: goto label_1e2a90;
        case 0x1e2a94u: goto label_1e2a94;
        case 0x1e2a98u: goto label_1e2a98;
        case 0x1e2a9cu: goto label_1e2a9c;
        case 0x1e2aa0u: goto label_1e2aa0;
        case 0x1e2aa4u: goto label_1e2aa4;
        case 0x1e2aa8u: goto label_1e2aa8;
        case 0x1e2aacu: goto label_1e2aac;
        case 0x1e2ab0u: goto label_1e2ab0;
        case 0x1e2ab4u: goto label_1e2ab4;
        case 0x1e2ab8u: goto label_1e2ab8;
        case 0x1e2abcu: goto label_1e2abc;
        case 0x1e2ac0u: goto label_1e2ac0;
        case 0x1e2ac4u: goto label_1e2ac4;
        case 0x1e2ac8u: goto label_1e2ac8;
        case 0x1e2accu: goto label_1e2acc;
        case 0x1e2ad0u: goto label_1e2ad0;
        case 0x1e2ad4u: goto label_1e2ad4;
        case 0x1e2ad8u: goto label_1e2ad8;
        case 0x1e2adcu: goto label_1e2adc;
        case 0x1e2ae0u: goto label_1e2ae0;
        case 0x1e2ae4u: goto label_1e2ae4;
        case 0x1e2ae8u: goto label_1e2ae8;
        case 0x1e2aecu: goto label_1e2aec;
        case 0x1e2af0u: goto label_1e2af0;
        case 0x1e2af4u: goto label_1e2af4;
        case 0x1e2af8u: goto label_1e2af8;
        case 0x1e2afcu: goto label_1e2afc;
        case 0x1e2b00u: goto label_1e2b00;
        case 0x1e2b04u: goto label_1e2b04;
        case 0x1e2b08u: goto label_1e2b08;
        case 0x1e2b0cu: goto label_1e2b0c;
        case 0x1e2b10u: goto label_1e2b10;
        case 0x1e2b14u: goto label_1e2b14;
        case 0x1e2b18u: goto label_1e2b18;
        case 0x1e2b1cu: goto label_1e2b1c;
        case 0x1e2b20u: goto label_1e2b20;
        case 0x1e2b24u: goto label_1e2b24;
        case 0x1e2b28u: goto label_1e2b28;
        case 0x1e2b2cu: goto label_1e2b2c;
        case 0x1e2b30u: goto label_1e2b30;
        case 0x1e2b34u: goto label_1e2b34;
        case 0x1e2b38u: goto label_1e2b38;
        case 0x1e2b3cu: goto label_1e2b3c;
        case 0x1e2b40u: goto label_1e2b40;
        case 0x1e2b44u: goto label_1e2b44;
        case 0x1e2b48u: goto label_1e2b48;
        case 0x1e2b4cu: goto label_1e2b4c;
        case 0x1e2b50u: goto label_1e2b50;
        case 0x1e2b54u: goto label_1e2b54;
        case 0x1e2b58u: goto label_1e2b58;
        case 0x1e2b5cu: goto label_1e2b5c;
        case 0x1e2b60u: goto label_1e2b60;
        case 0x1e2b64u: goto label_1e2b64;
        case 0x1e2b68u: goto label_1e2b68;
        case 0x1e2b6cu: goto label_1e2b6c;
        case 0x1e2b70u: goto label_1e2b70;
        case 0x1e2b74u: goto label_1e2b74;
        case 0x1e2b78u: goto label_1e2b78;
        case 0x1e2b7cu: goto label_1e2b7c;
        case 0x1e2b80u: goto label_1e2b80;
        case 0x1e2b84u: goto label_1e2b84;
        case 0x1e2b88u: goto label_1e2b88;
        case 0x1e2b8cu: goto label_1e2b8c;
        case 0x1e2b90u: goto label_1e2b90;
        case 0x1e2b94u: goto label_1e2b94;
        case 0x1e2b98u: goto label_1e2b98;
        case 0x1e2b9cu: goto label_1e2b9c;
        case 0x1e2ba0u: goto label_1e2ba0;
        case 0x1e2ba4u: goto label_1e2ba4;
        case 0x1e2ba8u: goto label_1e2ba8;
        case 0x1e2bacu: goto label_1e2bac;
        case 0x1e2bb0u: goto label_1e2bb0;
        default: break;
    }

    ctx->pc = 0x1e29e0u;

label_1e29e0:
    // 0x1e29e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e29e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e29e4:
    // 0x1e29e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e29e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e29e8:
    // 0x1e29e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e29e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e29ec:
    // 0x1e29ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e29ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e29f0:
    // 0x1e29f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e29f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e29f4:
    // 0x1e29f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e29f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e29f8:
    // 0x1e29f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e29f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e29fc:
    // 0x1e29fc: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x1e29fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
label_1e2a00:
    // 0x1e2a00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1e2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1e2a04:
    // 0x1e2a04: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1e2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1e2a08:
    // 0x1e2a08: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e2a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e2a0c:
    // 0x1e2a0c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1e2a10:
    if (ctx->pc == 0x1E2A10u) {
        ctx->pc = 0x1E2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A0Cu;
        // 0x1e2a10: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A14u;
        goto label_1e2a14;
    }
    ctx->pc = 0x1E2A0Cu;
    {
        const bool branch_taken_0x1e2a0c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A0Cu;
        // 0x1e2a10: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a0c) {
            ctx->pc = 0x1E2A1Cu;
            goto label_1e2a1c;
        }
    }
    ctx->pc = 0x1E2A14u;
label_1e2a14:
    // 0x1e2a14: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e2a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e2a18:
    // 0x1e2a18: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1e2a18u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1e2a1c:
    // 0x1e2a1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e2a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1e2a20:
    // 0x1e2a20: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2a20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2a24:
    // 0x1e2a24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1e2a24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1e2a28:
    // 0x1e2a28: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1e2a28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e2a2c:
    // 0x1e2a2c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_1e2a30:
    if (ctx->pc == 0x1E2A30u) {
        ctx->pc = 0x1E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A2Cu;
        // 0x1e2a30: 0xffa30048  sd          $v1, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A34u;
        goto label_1e2a34;
    }
    ctx->pc = 0x1E2A2Cu;
    {
        const bool branch_taken_0x1e2a2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A2Cu;
        // 0x1e2a30: 0xffa30048  sd          $v1, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a2c) {
            ctx->pc = 0x1E2A3Cu;
            goto label_1e2a3c;
        }
    }
    ctx->pc = 0x1E2A34u;
label_1e2a34:
    // 0x1e2a34: 0x10000002  b           . + 4 + (0x2 << 2)
label_1e2a38:
    if (ctx->pc == 0x1E2A38u) {
        ctx->pc = 0x1E2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A34u;
        // 0x1e2a38: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A3Cu;
        goto label_1e2a3c;
    }
    ctx->pc = 0x1E2A34u;
    {
        const bool branch_taken_0x1e2a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A34u;
        // 0x1e2a38: 0x27a20048  addiu       $v0, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a34) {
            ctx->pc = 0x1E2A40u;
            goto label_1e2a40;
        }
    }
    ctx->pc = 0x1E2A3Cu;
label_1e2a3c:
    // 0x1e2a3c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1e2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e2a40:
    // 0x1e2a40: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x1e2a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_1e2a44:
    // 0x1e2a44: 0x1a00004f  blez        $s0, . + 4 + (0x4F << 2)
label_1e2a48:
    if (ctx->pc == 0x1E2A48u) {
        ctx->pc = 0x1E2A4Cu;
        goto label_1e2a4c;
    }
    ctx->pc = 0x1E2A44u;
    {
        const bool branch_taken_0x1e2a44 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x1e2a44) {
            ctx->pc = 0x1E2B84u;
            goto label_1e2b84;
        }
    }
    ctx->pc = 0x1E2A4Cu;
label_1e2a4c:
    // 0x1e2a4c: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x1e2a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e2a50:
    // 0x1e2a50: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1e2a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_1e2a54:
    // 0x1e2a54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1e2a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1e2a58:
    // 0x1e2a58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e2a58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e2a5c:
    // 0x1e2a5c: 0x2082b  sltu        $at, $zero, $v0
    ctx->pc = 0x1e2a5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2a60:
    // 0x1e2a60: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_1e2a64:
    if (ctx->pc == 0x1E2A64u) {
        ctx->pc = 0x1E2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A60u;
        // 0x1e2a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A68u;
        goto label_1e2a68;
    }
    ctx->pc = 0x1E2A60u;
    {
        const bool branch_taken_0x1e2a60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A60u;
        // 0x1e2a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a60) {
            ctx->pc = 0x1E2B04u;
            goto label_1e2b04;
        }
    }
    ctx->pc = 0x1E2A68u;
label_1e2a68:
    // 0x1e2a68: 0x2c410009  sltiu       $at, $v0, 0x9
    ctx->pc = 0x1e2a68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1e2a6c:
    // 0x1e2a6c: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_1e2a70:
    if (ctx->pc == 0x1E2A70u) {
        ctx->pc = 0x1E2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A6Cu;
        // 0x1e2a70: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2A74u;
        goto label_1e2a74;
    }
    ctx->pc = 0x1E2A6Cu;
    {
        const bool branch_taken_0x1e2a6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2A6Cu;
        // 0x1e2a70: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2a6c) {
            ctx->pc = 0x1E2AD0u;
            goto label_1e2ad0;
        }
    }
    ctx->pc = 0x1E2A74u;
label_1e2a74:
    // 0x1e2a74: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e2a74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1e2a78:
    // 0x1e2a78: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e2a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1e2a7c:
    // 0x1e2a7c: 0x24e8000e  addiu       $t0, $a3, 0xE
    ctx->pc = 0x1e2a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
label_1e2a80:
    // 0x1e2a80: 0x24c9000e  addiu       $t1, $a2, 0xE
    ctx->pc = 0x1e2a80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 14));
label_1e2a84:
    // 0x1e2a84: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e2a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e2a88:
    // 0x1e2a88: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x1e2a88u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_1e2a8c:
    // 0x1e2a8c: 0x94e30002  lhu         $v1, 0x2($a3)
    ctx->pc = 0x1e2a8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_1e2a90:
    // 0x1e2a90: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1e2a90u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1e2a94:
    // 0x1e2a94: 0x94e30004  lhu         $v1, 0x4($a3)
    ctx->pc = 0x1e2a94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
label_1e2a98:
    // 0x1e2a98: 0xa4c30004  sh          $v1, 0x4($a2)
    ctx->pc = 0x1e2a98u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 3));
label_1e2a9c:
    // 0x1e2a9c: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x1e2a9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
label_1e2aa0:
    // 0x1e2aa0: 0xa4c30006  sh          $v1, 0x6($a2)
    ctx->pc = 0x1e2aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
label_1e2aa4:
    // 0x1e2aa4: 0x94e30008  lhu         $v1, 0x8($a3)
    ctx->pc = 0x1e2aa4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
label_1e2aa8:
    // 0x1e2aa8: 0xa4c30008  sh          $v1, 0x8($a2)
    ctx->pc = 0x1e2aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 3));
label_1e2aac:
    // 0x1e2aac: 0x94e3000a  lhu         $v1, 0xA($a3)
    ctx->pc = 0x1e2aacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
label_1e2ab0:
    // 0x1e2ab0: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x1e2ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
label_1e2ab4:
    // 0x1e2ab4: 0x94e3000c  lhu         $v1, 0xC($a3)
    ctx->pc = 0x1e2ab4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
label_1e2ab8:
    // 0x1e2ab8: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x1e2ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
label_1e2abc:
    // 0x1e2abc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1e2abcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1e2ac0:
    // 0x1e2ac0: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x1e2ac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1e2ac4:
    // 0x1e2ac4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x1e2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1e2ac8:
    // 0x1e2ac8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1e2acc:
    if (ctx->pc == 0x1E2ACCu) {
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2AD0u;
        goto label_1e2ad0;
    }
    ctx->pc = 0x1E2AC8u;
    {
        const bool branch_taken_0x1e2ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AC8u;
        // 0x1e2acc: 0xa5230000  sh          $v1, 0x0($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2ac8) {
            ctx->pc = 0x1E2A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2a74;
        }
    }
    ctx->pc = 0x1E2AD0u;
label_1e2ad0:
    // 0x1e2ad0: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x1e2ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_1e2ad4:
    // 0x1e2ad4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1e2ad4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_1e2ad8:
    // 0x1e2ad8: 0xa4082b  sltu        $at, $a1, $a0
    ctx->pc = 0x1e2ad8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e2adc:
    // 0x1e2adc: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1e2ae0:
    if (ctx->pc == 0x1E2AE0u) {
        ctx->pc = 0x1E2AE4u;
        goto label_1e2ae4;
    }
    ctx->pc = 0x1E2ADCu;
    {
        const bool branch_taken_0x1e2adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2adc) {
            ctx->pc = 0x1E2B04u;
            goto label_1e2b04;
        }
    }
    ctx->pc = 0x1E2AE4u;
label_1e2ae4:
    // 0x1e2ae4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x1e2ae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1e2ae8:
    // 0x1e2ae8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1e2ae8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e2aec:
    // 0x1e2aec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e2aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e2af0:
    // 0x1e2af0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1e2af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1e2af4:
    // 0x1e2af4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1e2af4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1e2af8:
    // 0x1e2af8: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x1e2af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
label_1e2afc:
    // 0x1e2afc: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1e2b00:
    if (ctx->pc == 0x1E2B00u) {
        ctx->pc = 0x1E2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AFCu;
        // 0x1e2b00: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B04u;
        goto label_1e2b04;
    }
    ctx->pc = 0x1E2AFCu;
    {
        const bool branch_taken_0x1e2afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2AFCu;
        // 0x1e2b00: 0xa5030000  sh          $v1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2afc) {
            ctx->pc = 0x1E2AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2ae4;
        }
    }
    ctx->pc = 0x1E2B04u;
label_1e2b04:
    // 0x1e2b04: 0x0  nop
    ctx->pc = 0x1e2b04u;
    // NOP
label_1e2b08:
    // 0x1e2b08: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1e2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e2b0c:
    // 0x1e2b0c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1e2b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1e2b10:
    // 0x1e2b10: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1e2b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1e2b14:
    // 0x1e2b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e2b18:
    // 0x1e2b18: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1e2b1c:
    // 0x1e2b1c: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2b1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2b20:
    // 0x1e2b20: 0x50102f  dsubu       $v0, $v0, $s0
    ctx->pc = 0x1e2b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 16));
label_1e2b24:
    // 0x1e2b24: 0x10000017  b           . + 4 + (0x17 << 2)
label_1e2b28:
    if (ctx->pc == 0x1E2B28u) {
        ctx->pc = 0x1E2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B24u;
        // 0x1e2b28: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B2Cu;
        goto label_1e2b2c;
    }
    ctx->pc = 0x1E2B24u;
    {
        const bool branch_taken_0x1e2b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B24u;
        // 0x1e2b28: 0xffa20040  sd          $v0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b24) {
            ctx->pc = 0x1E2B84u;
            goto label_1e2b84;
        }
    }
    ctx->pc = 0x1E2B2Cu;
label_1e2b2c:
    // 0x1e2b2c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1e2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e2b30:
    // 0x1e2b30: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1e2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1e2b34:
    // 0x1e2b34: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1e2b34u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e2b38:
    // 0x1e2b38: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1e2b3c:
    if (ctx->pc == 0x1E2B3Cu) {
        ctx->pc = 0x1E2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B38u;
        // 0x1e2b3c: 0x24620002  addiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B40u;
        goto label_1e2b40;
    }
    ctx->pc = 0x1E2B38u;
    {
        const bool branch_taken_0x1e2b38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B38u;
        // 0x1e2b3c: 0x24620002  addiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b38) {
            ctx->pc = 0x1E2B4Cu;
            goto label_1e2b4c;
        }
    }
    ctx->pc = 0x1E2B40u;
label_1e2b40:
    // 0x1e2b40: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1e2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_1e2b44:
    // 0x1e2b44: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e2b48:
    if (ctx->pc == 0x1E2B48u) {
        ctx->pc = 0x1E2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B44u;
        // 0x1e2b48: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B4Cu;
        goto label_1e2b4c;
    }
    ctx->pc = 0x1E2B44u;
    {
        const bool branch_taken_0x1e2b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B44u;
        // 0x1e2b48: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b44) {
            ctx->pc = 0x1E2B60u;
            goto label_1e2b60;
        }
    }
    ctx->pc = 0x1E2B4Cu;
label_1e2b4c:
    // 0x1e2b4c: 0x0  nop
    ctx->pc = 0x1e2b4cu;
    // NOP
label_1e2b50:
    // 0x1e2b50: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e2b54:
    // 0x1e2b54: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1e2b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1e2b58:
    // 0x1e2b58: 0x320f809  jalr        $t9
label_1e2b5c:
    if (ctx->pc == 0x1E2B5Cu) {
        ctx->pc = 0x1E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B58u;
        // 0x1e2b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2B60u;
        goto label_1e2b60;
    }
    ctx->pc = 0x1E2B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E2B60u);
        ctx->pc = 0x1E2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B58u;
        // 0x1e2b5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2B58u, 0x1E2B60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E2B60u;
label_1e2b60:
    // 0x1e2b60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e2b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e2b64:
    // 0x1e2b64: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_1e2b68:
    if (ctx->pc == 0x1E2B68u) {
        ctx->pc = 0x1E2B6Cu;
        goto label_1e2b6c;
    }
    ctx->pc = 0x1E2B64u;
    {
        const bool branch_taken_0x1e2b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2b64) {
            ctx->pc = 0x1E2B94u;
            goto label_1e2b94;
        }
    }
    ctx->pc = 0x1E2B6Cu;
label_1e2b6c:
    // 0x1e2b6c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1e2b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_1e2b70:
    // 0x1e2b70: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x1e2b70u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
label_1e2b74:
    // 0x1e2b74: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2b74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2b78:
    // 0x1e2b78: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x1e2b78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_1e2b7c:
    // 0x1e2b7c: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x1e2b7cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_1e2b80:
    // 0x1e2b80: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1e2b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
label_1e2b84:
    // 0x1e2b84: 0x0  nop
    ctx->pc = 0x1e2b84u;
    // NOP
label_1e2b88:
    // 0x1e2b88: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x1e2b88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e2b8c:
    // 0x1e2b8c: 0x1c40ffe7  bgtz        $v0, . + 4 + (-0x19 << 2)
label_1e2b90:
    if (ctx->pc == 0x1E2B90u) {
        ctx->pc = 0x1E2B94u;
        goto label_1e2b94;
    }
    ctx->pc = 0x1E2B8Cu;
    {
        const bool branch_taken_0x1e2b8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1e2b8c) {
            ctx->pc = 0x1E2B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2b2c;
        }
    }
    ctx->pc = 0x1E2B94u;
label_1e2b94:
    // 0x1e2b94: 0x0  nop
    ctx->pc = 0x1e2b94u;
    // NOP
label_1e2b98:
    // 0x1e2b98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2b9c:
    // 0x1e2b9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e2b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e2ba0:
    // 0x1e2ba0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e2ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e2ba4:
    // 0x1e2ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e2ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e2ba8:
    // 0x1e2ba8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e2bac:
    // 0x1e2bac: 0x3e00008  jr          $ra
label_1e2bb0:
    if (ctx->pc == 0x1E2BB0u) {
        ctx->pc = 0x1E2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BACu;
        // 0x1e2bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E2BB4u;
        goto label_fallthrough_0x1e2bac;
    }
    ctx->pc = 0x1E2BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BACu;
        // 0x1e2bb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e2bac:
    ctx->pc = 0x1E2BB4u;
}
