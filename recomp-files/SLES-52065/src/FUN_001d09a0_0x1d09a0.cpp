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

// Function: FUN_001d09a0
// Address: 0x1d09a0 - 0x1d0d04
void FUN_001d09a0_0x1d09a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d09a0_0x1d09a0");
#endif

    switch (ctx->pc) {
        case 0x1d09a0u: goto label_1d09a0;
        case 0x1d09a4u: goto label_1d09a4;
        case 0x1d09a8u: goto label_1d09a8;
        case 0x1d09acu: goto label_1d09ac;
        case 0x1d09b0u: goto label_1d09b0;
        case 0x1d09b4u: goto label_1d09b4;
        case 0x1d09b8u: goto label_1d09b8;
        case 0x1d09bcu: goto label_1d09bc;
        case 0x1d09c0u: goto label_1d09c0;
        case 0x1d09c4u: goto label_1d09c4;
        case 0x1d09c8u: goto label_1d09c8;
        case 0x1d09ccu: goto label_1d09cc;
        case 0x1d09d0u: goto label_1d09d0;
        case 0x1d09d4u: goto label_1d09d4;
        case 0x1d09d8u: goto label_1d09d8;
        case 0x1d09dcu: goto label_1d09dc;
        case 0x1d09e0u: goto label_1d09e0;
        case 0x1d09e4u: goto label_1d09e4;
        case 0x1d09e8u: goto label_1d09e8;
        case 0x1d09ecu: goto label_1d09ec;
        case 0x1d09f0u: goto label_1d09f0;
        case 0x1d09f4u: goto label_1d09f4;
        case 0x1d09f8u: goto label_1d09f8;
        case 0x1d09fcu: goto label_1d09fc;
        case 0x1d0a00u: goto label_1d0a00;
        case 0x1d0a04u: goto label_1d0a04;
        case 0x1d0a08u: goto label_1d0a08;
        case 0x1d0a0cu: goto label_1d0a0c;
        case 0x1d0a10u: goto label_1d0a10;
        case 0x1d0a14u: goto label_1d0a14;
        case 0x1d0a18u: goto label_1d0a18;
        case 0x1d0a1cu: goto label_1d0a1c;
        case 0x1d0a20u: goto label_1d0a20;
        case 0x1d0a24u: goto label_1d0a24;
        case 0x1d0a28u: goto label_1d0a28;
        case 0x1d0a2cu: goto label_1d0a2c;
        case 0x1d0a30u: goto label_1d0a30;
        case 0x1d0a34u: goto label_1d0a34;
        case 0x1d0a38u: goto label_1d0a38;
        case 0x1d0a3cu: goto label_1d0a3c;
        case 0x1d0a40u: goto label_1d0a40;
        case 0x1d0a44u: goto label_1d0a44;
        case 0x1d0a48u: goto label_1d0a48;
        case 0x1d0a4cu: goto label_1d0a4c;
        case 0x1d0a50u: goto label_1d0a50;
        case 0x1d0a54u: goto label_1d0a54;
        case 0x1d0a58u: goto label_1d0a58;
        case 0x1d0a5cu: goto label_1d0a5c;
        case 0x1d0a60u: goto label_1d0a60;
        case 0x1d0a64u: goto label_1d0a64;
        case 0x1d0a68u: goto label_1d0a68;
        case 0x1d0a6cu: goto label_1d0a6c;
        case 0x1d0a70u: goto label_1d0a70;
        case 0x1d0a74u: goto label_1d0a74;
        case 0x1d0a78u: goto label_1d0a78;
        case 0x1d0a7cu: goto label_1d0a7c;
        case 0x1d0a80u: goto label_1d0a80;
        case 0x1d0a84u: goto label_1d0a84;
        case 0x1d0a88u: goto label_1d0a88;
        case 0x1d0a8cu: goto label_1d0a8c;
        case 0x1d0a90u: goto label_1d0a90;
        case 0x1d0a94u: goto label_1d0a94;
        case 0x1d0a98u: goto label_1d0a98;
        case 0x1d0a9cu: goto label_1d0a9c;
        case 0x1d0aa0u: goto label_1d0aa0;
        case 0x1d0aa4u: goto label_1d0aa4;
        case 0x1d0aa8u: goto label_1d0aa8;
        case 0x1d0aacu: goto label_1d0aac;
        case 0x1d0ab0u: goto label_1d0ab0;
        case 0x1d0ab4u: goto label_1d0ab4;
        case 0x1d0ab8u: goto label_1d0ab8;
        case 0x1d0abcu: goto label_1d0abc;
        case 0x1d0ac0u: goto label_1d0ac0;
        case 0x1d0ac4u: goto label_1d0ac4;
        case 0x1d0ac8u: goto label_1d0ac8;
        case 0x1d0accu: goto label_1d0acc;
        case 0x1d0ad0u: goto label_1d0ad0;
        case 0x1d0ad4u: goto label_1d0ad4;
        case 0x1d0ad8u: goto label_1d0ad8;
        case 0x1d0adcu: goto label_1d0adc;
        case 0x1d0ae0u: goto label_1d0ae0;
        case 0x1d0ae4u: goto label_1d0ae4;
        case 0x1d0ae8u: goto label_1d0ae8;
        case 0x1d0aecu: goto label_1d0aec;
        case 0x1d0af0u: goto label_1d0af0;
        case 0x1d0af4u: goto label_1d0af4;
        case 0x1d0af8u: goto label_1d0af8;
        case 0x1d0afcu: goto label_1d0afc;
        case 0x1d0b00u: goto label_1d0b00;
        case 0x1d0b04u: goto label_1d0b04;
        case 0x1d0b08u: goto label_1d0b08;
        case 0x1d0b0cu: goto label_1d0b0c;
        case 0x1d0b10u: goto label_1d0b10;
        case 0x1d0b14u: goto label_1d0b14;
        case 0x1d0b18u: goto label_1d0b18;
        case 0x1d0b1cu: goto label_1d0b1c;
        case 0x1d0b20u: goto label_1d0b20;
        case 0x1d0b24u: goto label_1d0b24;
        case 0x1d0b28u: goto label_1d0b28;
        case 0x1d0b2cu: goto label_1d0b2c;
        case 0x1d0b30u: goto label_1d0b30;
        case 0x1d0b34u: goto label_1d0b34;
        case 0x1d0b38u: goto label_1d0b38;
        case 0x1d0b3cu: goto label_1d0b3c;
        case 0x1d0b40u: goto label_1d0b40;
        case 0x1d0b44u: goto label_1d0b44;
        case 0x1d0b48u: goto label_1d0b48;
        case 0x1d0b4cu: goto label_1d0b4c;
        case 0x1d0b50u: goto label_1d0b50;
        case 0x1d0b54u: goto label_1d0b54;
        case 0x1d0b58u: goto label_1d0b58;
        case 0x1d0b5cu: goto label_1d0b5c;
        case 0x1d0b60u: goto label_1d0b60;
        case 0x1d0b64u: goto label_1d0b64;
        case 0x1d0b68u: goto label_1d0b68;
        case 0x1d0b6cu: goto label_1d0b6c;
        case 0x1d0b70u: goto label_1d0b70;
        case 0x1d0b74u: goto label_1d0b74;
        case 0x1d0b78u: goto label_1d0b78;
        case 0x1d0b7cu: goto label_1d0b7c;
        case 0x1d0b80u: goto label_1d0b80;
        case 0x1d0b84u: goto label_1d0b84;
        case 0x1d0b88u: goto label_1d0b88;
        case 0x1d0b8cu: goto label_1d0b8c;
        case 0x1d0b90u: goto label_1d0b90;
        case 0x1d0b94u: goto label_1d0b94;
        case 0x1d0b98u: goto label_1d0b98;
        case 0x1d0b9cu: goto label_1d0b9c;
        case 0x1d0ba0u: goto label_1d0ba0;
        case 0x1d0ba4u: goto label_1d0ba4;
        case 0x1d0ba8u: goto label_1d0ba8;
        case 0x1d0bacu: goto label_1d0bac;
        case 0x1d0bb0u: goto label_1d0bb0;
        case 0x1d0bb4u: goto label_1d0bb4;
        case 0x1d0bb8u: goto label_1d0bb8;
        case 0x1d0bbcu: goto label_1d0bbc;
        case 0x1d0bc0u: goto label_1d0bc0;
        case 0x1d0bc4u: goto label_1d0bc4;
        case 0x1d0bc8u: goto label_1d0bc8;
        case 0x1d0bccu: goto label_1d0bcc;
        case 0x1d0bd0u: goto label_1d0bd0;
        case 0x1d0bd4u: goto label_1d0bd4;
        case 0x1d0bd8u: goto label_1d0bd8;
        case 0x1d0bdcu: goto label_1d0bdc;
        case 0x1d0be0u: goto label_1d0be0;
        case 0x1d0be4u: goto label_1d0be4;
        case 0x1d0be8u: goto label_1d0be8;
        case 0x1d0becu: goto label_1d0bec;
        case 0x1d0bf0u: goto label_1d0bf0;
        case 0x1d0bf4u: goto label_1d0bf4;
        case 0x1d0bf8u: goto label_1d0bf8;
        case 0x1d0bfcu: goto label_1d0bfc;
        case 0x1d0c00u: goto label_1d0c00;
        case 0x1d0c04u: goto label_1d0c04;
        case 0x1d0c08u: goto label_1d0c08;
        case 0x1d0c0cu: goto label_1d0c0c;
        case 0x1d0c10u: goto label_1d0c10;
        case 0x1d0c14u: goto label_1d0c14;
        case 0x1d0c18u: goto label_1d0c18;
        case 0x1d0c1cu: goto label_1d0c1c;
        case 0x1d0c20u: goto label_1d0c20;
        case 0x1d0c24u: goto label_1d0c24;
        case 0x1d0c28u: goto label_1d0c28;
        case 0x1d0c2cu: goto label_1d0c2c;
        case 0x1d0c30u: goto label_1d0c30;
        case 0x1d0c34u: goto label_1d0c34;
        case 0x1d0c38u: goto label_1d0c38;
        case 0x1d0c3cu: goto label_1d0c3c;
        case 0x1d0c40u: goto label_1d0c40;
        case 0x1d0c44u: goto label_1d0c44;
        case 0x1d0c48u: goto label_1d0c48;
        case 0x1d0c4cu: goto label_1d0c4c;
        case 0x1d0c50u: goto label_1d0c50;
        case 0x1d0c54u: goto label_1d0c54;
        case 0x1d0c58u: goto label_1d0c58;
        case 0x1d0c5cu: goto label_1d0c5c;
        case 0x1d0c60u: goto label_1d0c60;
        case 0x1d0c64u: goto label_1d0c64;
        case 0x1d0c68u: goto label_1d0c68;
        case 0x1d0c6cu: goto label_1d0c6c;
        case 0x1d0c70u: goto label_1d0c70;
        case 0x1d0c74u: goto label_1d0c74;
        case 0x1d0c78u: goto label_1d0c78;
        case 0x1d0c7cu: goto label_1d0c7c;
        case 0x1d0c80u: goto label_1d0c80;
        case 0x1d0c84u: goto label_1d0c84;
        case 0x1d0c88u: goto label_1d0c88;
        case 0x1d0c8cu: goto label_1d0c8c;
        case 0x1d0c90u: goto label_1d0c90;
        case 0x1d0c94u: goto label_1d0c94;
        case 0x1d0c98u: goto label_1d0c98;
        case 0x1d0c9cu: goto label_1d0c9c;
        case 0x1d0ca0u: goto label_1d0ca0;
        case 0x1d0ca4u: goto label_1d0ca4;
        case 0x1d0ca8u: goto label_1d0ca8;
        case 0x1d0cacu: goto label_1d0cac;
        case 0x1d0cb0u: goto label_1d0cb0;
        case 0x1d0cb4u: goto label_1d0cb4;
        case 0x1d0cb8u: goto label_1d0cb8;
        case 0x1d0cbcu: goto label_1d0cbc;
        case 0x1d0cc0u: goto label_1d0cc0;
        case 0x1d0cc4u: goto label_1d0cc4;
        case 0x1d0cc8u: goto label_1d0cc8;
        case 0x1d0cccu: goto label_1d0ccc;
        case 0x1d0cd0u: goto label_1d0cd0;
        case 0x1d0cd4u: goto label_1d0cd4;
        case 0x1d0cd8u: goto label_1d0cd8;
        case 0x1d0cdcu: goto label_1d0cdc;
        case 0x1d0ce0u: goto label_1d0ce0;
        case 0x1d0ce4u: goto label_1d0ce4;
        case 0x1d0ce8u: goto label_1d0ce8;
        case 0x1d0cecu: goto label_1d0cec;
        case 0x1d0cf0u: goto label_1d0cf0;
        case 0x1d0cf4u: goto label_1d0cf4;
        case 0x1d0cf8u: goto label_1d0cf8;
        case 0x1d0cfcu: goto label_1d0cfc;
        case 0x1d0d00u: goto label_1d0d00;
        default: break;
    }

    ctx->pc = 0x1d09a0u;

label_1d09a0:
    // 0x1d09a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d09a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1d09a4:
    // 0x1d09a4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d09a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d09a8:
    // 0x1d09a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d09a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1d09ac:
    // 0x1d09ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d09acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d09b0:
    // 0x1d09b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d09b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d09b4:
    // 0x1d09b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d09b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d09b8:
    // 0x1d09b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d09b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d09bc:
    // 0x1d09bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d09bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d09c0:
    // 0x1d09c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d09c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d09c4:
    // 0x1d09c4: 0x8023fc38  lb          $v1, -0x3C8($at)
    ctx->pc = 0x1d09c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966328)));
label_1d09c8:
    // 0x1d09c8: 0x3c100023  lui         $s0, 0x23
    ctx->pc = 0x1d09c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)35 << 16));
label_1d09cc:
    // 0x1d09cc: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
label_1d09d0:
    if (ctx->pc == 0x1D09D0u) {
        ctx->pc = 0x1D09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09CCu;
        // 0x1d09d0: 0x2610c6a4  addiu       $s0, $s0, -0x395C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952612));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D09D4u;
        goto label_1d09d4;
    }
    ctx->pc = 0x1D09CCu;
    {
        const bool branch_taken_0x1d09cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09CCu;
        // 0x1d09d0: 0x2610c6a4  addiu       $s0, $s0, -0x395C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952612));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09cc) {
            ctx->pc = 0x1D0A28u;
            goto label_1d0a28;
        }
    }
    ctx->pc = 0x1D09D4u;
label_1d09d4:
    // 0x1d09d4: 0x3c02602f  lui         $v0, 0x602F
    ctx->pc = 0x1d09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24623 << 16));
label_1d09d8:
    // 0x1d09d8: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x1d09d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
label_1d09dc:
    // 0x1d09dc: 0x34444000  ori         $a0, $v0, 0x4000
    ctx->pc = 0x1d09dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_1d09e0:
    // 0x1d09e0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1d09e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_1d09e4:
    // 0x1d09e4: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x1d09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_1d09e8:
    // 0x1d09e8: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x1d09e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
label_1d09ec:
    // 0x1d09ec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1d09ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_1d09f0:
    // 0x1d09f0: 0x3442521e  ori         $v0, $v0, 0x521E
    ctx->pc = 0x1d09f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21022);
label_1d09f4:
    // 0x1d09f4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d09f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d09f8:
    // 0x1d09f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1d09f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_1d09fc:
    // 0x1d09fc: 0xfc22fc48  sd          $v0, -0x3B8($at)
    ctx->pc = 0x1d09fcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294966344), GPR_U64(ctx, 2));
label_1d0a00:
    // 0x1d0a00: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1d0a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_1d0a04:
    // 0x1d0a04: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a08:
    // 0x1d0a08: 0x2484fc40  addiu       $a0, $a0, -0x3C0
    ctx->pc = 0x1d0a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966336));
label_1d0a0c:
    // 0x1d0a0c: 0xfc23fc40  sd          $v1, -0x3C0($at)
    ctx->pc = 0x1d0a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294966336), GPR_U64(ctx, 3));
label_1d0a10:
    // 0x1d0a10: 0x24a54bb0  addiu       $a1, $a1, 0x4BB0
    ctx->pc = 0x1d0a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19376));
label_1d0a14:
    // 0x1d0a14: 0xc07a540  jal         func_1E9500
label_1d0a18:
    if (ctx->pc == 0x1D0A18u) {
        ctx->pc = 0x1D0A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A14u;
        // 0x1d0a18: 0x24c6fc28  addiu       $a2, $a2, -0x3D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0A1Cu;
        goto label_1d0a1c;
    }
    ctx->pc = 0x1D0A14u;
    SET_GPR_U32(ctx, 31, 0x1D0A1Cu);
    ctx->pc = 0x1D0A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0A14u;
    // 0x1d0a18: 0x24c6fc28  addiu       $a2, $a2, -0x3D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1D0A14u, 0x1D0A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A1Cu;
label_1d0a1c:
    // 0x1d0a1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0a20:
    // 0x1d0a20: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a24:
    // 0x1d0a24: 0xa023fc38  sb          $v1, -0x3C8($at)
    ctx->pc = 0x1d0a24u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966328), (uint8_t)GPR_U32(ctx, 3));
label_1d0a28:
    // 0x1d0a28: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a2c:
    // 0x1d0a2c: 0x8023fc50  lb          $v1, -0x3B0($at)
    ctx->pc = 0x1d0a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966352)));
label_1d0a30:
    // 0x1d0a30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_1d0a34:
    if (ctx->pc == 0x1D0A34u) {
        ctx->pc = 0x1D0A38u;
        goto label_1d0a38;
    }
    ctx->pc = 0x1D0A30u;
    {
        const bool branch_taken_0x1d0a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a30) {
            ctx->pc = 0x1D0A50u;
            goto label_1d0a50;
        }
    }
    ctx->pc = 0x1D0A38u;
label_1d0a38:
    // 0x1d0a38: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x1d0a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1d0a3c:
    // 0x1d0a3c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a40:
    // 0x1d0a40: 0xfc24fc68  sd          $a0, -0x398($at)
    ctx->pc = 0x1d0a40u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294966376), GPR_U64(ctx, 4));
label_1d0a44:
    // 0x1d0a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0a48:
    // 0x1d0a48: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a4c:
    // 0x1d0a4c: 0xa023fc50  sb          $v1, -0x3B0($at)
    ctx->pc = 0x1d0a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966352), (uint8_t)GPR_U32(ctx, 3));
label_1d0a50:
    // 0x1d0a50: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a54:
    // 0x1d0a54: 0x300c0003  andi        $t4, $zero, 0x3
    ctx->pc = 0x1d0a54u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
label_1d0a58:
    // 0x1d0a58: 0x902dfc60  lbu         $t5, -0x3A0($at)
    ctx->pc = 0x1d0a58u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966368)));
label_1d0a5c:
    // 0x1d0a5c: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1d0a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d0a60:
    // 0x1d0a60: 0x2408fff3  addiu       $t0, $zero, -0xD
    ctx->pc = 0x1d0a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1d0a64:
    // 0x1d0a64: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x1d0a64u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_1d0a68:
    // 0x1d0a68: 0x2406ffcf  addiu       $a2, $zero, -0x31
    ctx->pc = 0x1d0a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
label_1d0a6c:
    // 0x1d0a6c: 0xc3900  sll         $a3, $t4, 4
    ctx->pc = 0x1d0a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_1d0a70:
    // 0x1d0a70: 0x2404ff3f  addiu       $a0, $zero, -0xC1
    ctx->pc = 0x1d0a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_1d0a74:
    // 0x1d0a74: 0x64050040  daddiu      $a1, $zero, 0x40
    ctx->pc = 0x1d0a74u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)64);
label_1d0a78:
    // 0x1d0a78: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1d0a78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0a7c:
    // 0x1d0a7c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a80:
    // 0x1d0a80: 0x1aa5024  and         $t2, $t5, $t2
    ctx->pc = 0x1d0a80u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & GPR_U64(ctx, 10));
label_1d0a84:
    // 0x1d0a84: 0x8023fc78  lb          $v1, -0x388($at)
    ctx->pc = 0x1d0a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966392)));
label_1d0a88:
    // 0x1d0a88: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x1d0a88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
label_1d0a8c:
    // 0x1d0a8c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a90:
    // 0x1d0a90: 0xa02afc60  sb          $t2, -0x3A0($at)
    ctx->pc = 0x1d0a90u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966368), (uint8_t)GPR_U32(ctx, 10));
label_1d0a94:
    // 0x1d0a94: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0a98:
    // 0x1d0a98: 0x902afc60  lbu         $t2, -0x3A0($at)
    ctx->pc = 0x1d0a98u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966368)));
label_1d0a9c:
    // 0x1d0a9c: 0x1484024  and         $t0, $t2, $t0
    ctx->pc = 0x1d0a9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 8));
label_1d0aa0:
    // 0x1d0aa0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0aa4:
    // 0x1d0aa4: 0x1094025  or          $t0, $t0, $t1
    ctx->pc = 0x1d0aa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
label_1d0aa8:
    // 0x1d0aa8: 0xa028fc60  sb          $t0, -0x3A0($at)
    ctx->pc = 0x1d0aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966368), (uint8_t)GPR_U32(ctx, 8));
label_1d0aac:
    // 0x1d0aac: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0ab0:
    // 0x1d0ab0: 0x9028fc60  lbu         $t0, -0x3A0($at)
    ctx->pc = 0x1d0ab0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966368)));
label_1d0ab4:
    // 0x1d0ab4: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x1d0ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
label_1d0ab8:
    // 0x1d0ab8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0abc:
    // 0x1d0abc: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x1d0abcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_1d0ac0:
    // 0x1d0ac0: 0xa026fc60  sb          $a2, -0x3A0($at)
    ctx->pc = 0x1d0ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966368), (uint8_t)GPR_U32(ctx, 6));
label_1d0ac4:
    // 0x1d0ac4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0ac8:
    // 0x1d0ac8: 0x9026fc60  lbu         $a2, -0x3A0($at)
    ctx->pc = 0x1d0ac8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966368)));
label_1d0acc:
    // 0x1d0acc: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1d0accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_1d0ad0:
    // 0x1d0ad0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0ad4:
    // 0x1d0ad4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1d0ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_1d0ad8:
    // 0x1d0ad8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1d0adc:
    if (ctx->pc == 0x1D0ADCu) {
        ctx->pc = 0x1D0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AD8u;
        // 0x1d0adc: 0xa024fc60  sb          $a0, -0x3A0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966368), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0AE0u;
        goto label_1d0ae0;
    }
    ctx->pc = 0x1D0AD8u;
    {
        const bool branch_taken_0x1d0ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0AD8u;
        // 0x1d0adc: 0xa024fc60  sb          $a0, -0x3A0($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 4294966368), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ad8) {
            ctx->pc = 0x1D0AF4u;
            goto label_1d0af4;
        }
    }
    ctx->pc = 0x1D0AE0u;
label_1d0ae0:
    // 0x1d0ae0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0ae4:
    // 0x1d0ae4: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x1d0ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_1d0ae8:
    // 0x1d0ae8: 0xa02bfc78  sb          $t3, -0x388($at)
    ctx->pc = 0x1d0ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966392), (uint8_t)GPR_U32(ctx, 11));
label_1d0aec:
    // 0x1d0aec: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0af0:
    // 0x1d0af0: 0xac23fc70  sw          $v1, -0x390($at)
    ctx->pc = 0x1d0af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294966384), GPR_U32(ctx, 3));
label_1d0af4:
    // 0x1d0af4: 0x3c0442fe  lui         $a0, 0x42FE
    ctx->pc = 0x1d0af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17150 << 16));
label_1d0af8:
    // 0x1d0af8: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x1d0af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
label_1d0afc:
    // 0x1d0afc: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1d0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_1d0b00:
    // 0x1d0b00: 0x27a5006c  addiu       $a1, $sp, 0x6C
    ctx->pc = 0x1d0b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_1d0b04:
    // 0x1d0b04: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x1d0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_1d0b08:
    // 0x1d0b08: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d0b08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d0b0c:
    // 0x1d0b0c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x1d0b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_1d0b10:
    // 0x1d0b10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1d0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1d0b14:
    // 0x1d0b14: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1d0b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d0b18:
    // 0x1d0b18: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d0b18u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d0b1c:
    // 0x1d0b1c: 0x0  nop
    ctx->pc = 0x1d0b1cu;
    // NOP
label_1d0b20:
    // 0x1d0b20: 0x45010070  bc1t        . + 4 + (0x70 << 2)
label_1d0b24:
    if (ctx->pc == 0x1D0B24u) {
        ctx->pc = 0x1D0B28u;
        goto label_1d0b28;
    }
    ctx->pc = 0x1D0B20u;
    {
        const bool branch_taken_0x1d0b20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d0b20) {
            ctx->pc = 0x1D0CE4u;
            goto label_1d0ce4;
        }
    }
    ctx->pc = 0x1D0B28u;
label_1d0b28:
    // 0x1d0b28: 0x8e650044  lw          $a1, 0x44($s3)
    ctx->pc = 0x1d0b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1d0b2c:
    // 0x1d0b2c: 0xc0485c8  jal         func_121720
label_1d0b30:
    if (ctx->pc == 0x1D0B30u) {
        ctx->pc = 0x1D0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B2Cu;
        // 0x1d0b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B34u;
        goto label_1d0b34;
    }
    ctx->pc = 0x1D0B2Cu;
    SET_GPR_U32(ctx, 31, 0x1D0B34u);
    ctx->pc = 0x1D0B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B2Cu;
    // 0x1d0b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121720u, 0x1D0B2Cu, 0x1D0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B34u;
label_1d0b34:
    // 0x1d0b34: 0x8e640044  lw          $a0, 0x44($s3)
    ctx->pc = 0x1d0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1d0b38:
    // 0x1d0b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b3c:
    // 0x1d0b3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d0b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d0b40:
    // 0x1d0b40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1d0b40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1d0b44:
    // 0x1d0b44: 0x320f809  jalr        $t9
label_1d0b48:
    if (ctx->pc == 0x1D0B48u) {
        ctx->pc = 0x1D0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B44u;
        // 0x1d0b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B4Cu;
        goto label_1d0b4c;
    }
    ctx->pc = 0x1D0B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0B4Cu);
        ctx->pc = 0x1D0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B44u;
        // 0x1d0b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0B44u, 0x1D0B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D0B4Cu;
label_1d0b4c:
    // 0x1d0b4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1d0b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1d0b50:
    // 0x1d0b50: 0xc07d3a0  jal         func_1F4E80
label_1d0b54:
    if (ctx->pc == 0x1D0B54u) {
        ctx->pc = 0x1D0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B50u;
        // 0x1d0b54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B58u;
        goto label_1d0b58;
    }
    ctx->pc = 0x1D0B50u;
    SET_GPR_U32(ctx, 31, 0x1D0B58u);
    ctx->pc = 0x1D0B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B50u;
    // 0x1d0b54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E80u, 0x1D0B50u, 0x1D0B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B58u;
label_1d0b58:
    // 0x1d0b58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d0b58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b5c:
    // 0x1d0b5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b60:
    // 0x1d0b60: 0x25d1821  addu        $v1, $s2, $sp
    ctx->pc = 0x1d0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_1d0b64:
    // 0x1d0b64: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1d0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1d0b68:
    // 0x1d0b68: 0x24429a20  addiu       $v0, $v0, -0x65E0
    ctx->pc = 0x1d0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941216));
label_1d0b6c:
    // 0x1d0b6c: 0x24740080  addiu       $s4, $v1, 0x80
    ctx->pc = 0x1d0b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1d0b70:
    // 0x1d0b70: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x1d0b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d0b74:
    // 0x1d0b74: 0xc07d38e  jal         func_1F4E38
label_1d0b78:
    if (ctx->pc == 0x1D0B78u) {
        ctx->pc = 0x1D0B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B74u;
        // 0x1d0b78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B7Cu;
        goto label_1d0b7c;
    }
    ctx->pc = 0x1D0B74u;
    SET_GPR_U32(ctx, 31, 0x1D0B7Cu);
    ctx->pc = 0x1D0B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B74u;
    // 0x1d0b78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E38u, 0x1D0B74u, 0x1D0B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B7Cu;
label_1d0b7c:
    // 0x1d0b7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b80:
    // 0x1d0b80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b84:
    // 0x1d0b84: 0xc07d370  jal         func_1F4DC0
label_1d0b88:
    if (ctx->pc == 0x1D0B88u) {
        ctx->pc = 0x1D0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B84u;
        // 0x1d0b88: 0x26660050  addiu       $a2, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0B8Cu;
        goto label_1d0b8c;
    }
    ctx->pc = 0x1D0B84u;
    SET_GPR_U32(ctx, 31, 0x1D0B8Cu);
    ctx->pc = 0x1D0B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B84u;
    // 0x1d0b88: 0x26660050  addiu       $a2, $s3, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1D0B84u, 0x1D0B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0B8Cu;
label_1d0b8c:
    // 0x1d0b8c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d0b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1d0b90:
    // 0x1d0b90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b94:
    // 0x1d0b94: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0b98:
    // 0x1d0b98: 0xc07d36a  jal         func_1F4DA8
label_1d0b9c:
    if (ctx->pc == 0x1D0B9Cu) {
        ctx->pc = 0x1D0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0B98u;
        // 0x1d0b9c: 0x24c69a10  addiu       $a2, $a2, -0x65F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BA0u;
        goto label_1d0ba0;
    }
    ctx->pc = 0x1D0B98u;
    SET_GPR_U32(ctx, 31, 0x1D0BA0u);
    ctx->pc = 0x1D0B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0B98u;
    // 0x1d0b9c: 0x24c69a10  addiu       $a2, $a2, -0x65F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1D0B98u, 0x1D0BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BA0u;
label_1d0ba0:
    // 0x1d0ba0: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d0ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1d0ba4:
    // 0x1d0ba4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0ba8:
    // 0x1d0ba8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bac:
    // 0x1d0bac: 0xc07d370  jal         func_1F4DC0
label_1d0bb0:
    if (ctx->pc == 0x1D0BB0u) {
        ctx->pc = 0x1D0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BACu;
        // 0x1d0bb0: 0x24c69a00  addiu       $a2, $a2, -0x6600 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BB4u;
        goto label_1d0bb4;
    }
    ctx->pc = 0x1D0BACu;
    SET_GPR_U32(ctx, 31, 0x1D0BB4u);
    ctx->pc = 0x1D0BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BACu;
    // 0x1d0bb0: 0x24c69a00  addiu       $a2, $a2, -0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DC0u, 0x1D0BACu, 0x1D0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BB4u;
label_1d0bb4:
    // 0x1d0bb4: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x1d0bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_1d0bb8:
    // 0x1d0bb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d0bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bbc:
    // 0x1d0bbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bc0:
    // 0x1d0bc0: 0xc07d36a  jal         func_1F4DA8
label_1d0bc4:
    if (ctx->pc == 0x1D0BC4u) {
        ctx->pc = 0x1D0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BC0u;
        // 0x1d0bc4: 0x24c699f0  addiu       $a2, $a2, -0x6610 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BC8u;
        goto label_1d0bc8;
    }
    ctx->pc = 0x1D0BC0u;
    SET_GPR_U32(ctx, 31, 0x1D0BC8u);
    ctx->pc = 0x1D0BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BC0u;
    // 0x1d0bc4: 0x24c699f0  addiu       $a2, $a2, -0x6610 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4DA8u, 0x1D0BC0u, 0x1D0BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BC8u;
label_1d0bc8:
    // 0x1d0bc8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d0bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d0bcc:
    // 0x1d0bcc: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1d0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_1d0bd0:
    // 0x1d0bd0: 0x245400a0  addiu       $s4, $v0, 0xA0
    ctx->pc = 0x1d0bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
label_1d0bd4:
    // 0x1d0bd4: 0xc07d39c  jal         func_1F4E70
label_1d0bd8:
    if (ctx->pc == 0x1D0BD8u) {
        ctx->pc = 0x1D0BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BD4u;
        // 0x1d0bd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BDCu;
        goto label_1d0bdc;
    }
    ctx->pc = 0x1D0BD4u;
    SET_GPR_U32(ctx, 31, 0x1D0BDCu);
    ctx->pc = 0x1D0BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0BD4u;
    // 0x1d0bd8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E70u, 0x1D0BD4u, 0x1D0BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0BDCu;
label_1d0bdc:
    // 0x1d0bdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d0bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d0be0:
    // 0x1d0be0: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x1d0be0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_1d0be4:
    // 0x1d0be4: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x1d0be4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d0be8:
    // 0x1d0be8: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_1d0bec:
    if (ctx->pc == 0x1D0BECu) {
        ctx->pc = 0x1D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BE8u;
        // 0x1d0bec: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0BF0u;
        goto label_1d0bf0;
    }
    ctx->pc = 0x1D0BE8u;
    {
        const bool branch_taken_0x1d0be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0BE8u;
        // 0x1d0bec: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0be8) {
            ctx->pc = 0x1D0B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0b60;
        }
    }
    ctx->pc = 0x1D0BF0u;
label_1d0bf0:
    // 0x1d0bf0: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1d0bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0bf4:
    // 0x1d0bf4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d0bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d0bf8:
    // 0x1d0bf8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1d0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_1d0bfc:
    // 0x1d0bfc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1d0bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d0c00:
    // 0x1d0c00: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1d0c00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1d0c04:
    // 0x1d0c04: 0x34630007  ori         $v1, $v1, 0x7
    ctx->pc = 0x1d0c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
label_1d0c08:
    // 0x1d0c08: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0c0c:
    // 0x1d0c0c: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1d0c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_1d0c10:
    // 0x1d0c10: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1d0c10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1d0c14:
    // 0x1d0c14: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1d0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1d0c18:
    // 0x1d0c18: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x1d0c18u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
label_1d0c1c:
    // 0x1d0c1c: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1d0c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_1d0c20:
    // 0x1d0c20: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1d0c20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_1d0c24:
    // 0x1d0c24: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c28:
    // 0x1d0c28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0c2c:
    // 0x1d0c2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0c30:
    // 0x1d0c30: 0x7824fc40  lq          $a0, -0x3C0($at)
    ctx->pc = 0x1d0c30u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294966336)));
label_1d0c34:
    // 0x1d0c34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c38:
    // 0x1d0c38: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d0c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d0c3c:
    // 0x1d0c3c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d0c40:
    // 0x1d0c40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c44:
    // 0x1d0c44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0c48:
    // 0x1d0c48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0c4c:
    // 0x1d0c4c: 0x7824fc60  lq          $a0, -0x3A0($at)
    ctx->pc = 0x1d0c4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294966368)));
label_1d0c50:
    // 0x1d0c50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c54:
    // 0x1d0c54: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d0c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1d0c58:
    // 0x1d0c58: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d0c5c:
    // 0x1d0c5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c60:
    // 0x1d0c60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0c64:
    // 0x1d0c64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0c68:
    // 0x1d0c68: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x1d0c68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d0c6c:
    // 0x1d0c6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c70:
    // 0x1d0c70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d0c74:
    // 0x1d0c74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c78:
    // 0x1d0c78: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0c7c:
    // 0x1d0c7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0c80:
    // 0x1d0c80: 0x782499d0  lq          $a0, -0x6630($at)
    ctx->pc = 0x1d0c80u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294941136)));
label_1d0c84:
    // 0x1d0c84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c88:
    // 0x1d0c88: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1d0c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
label_1d0c8c:
    // 0x1d0c8c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d0c90:
    // 0x1d0c90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0c94:
    // 0x1d0c94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0c98:
    // 0x1d0c98: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0c9c:
    // 0x1d0c9c: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1d0c9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d0ca0:
    // 0x1d0ca0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0ca4:
    // 0x1d0ca4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d0ca8:
    // 0x1d0ca8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0cac:
    // 0x1d0cac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0cb0:
    // 0x1d0cb0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0cb4:
    // 0x1d0cb4: 0x782499e0  lq          $a0, -0x6620($at)
    ctx->pc = 0x1d0cb4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 1), 4294941152)));
label_1d0cb8:
    // 0x1d0cb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0cbc:
    // 0x1d0cbc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d0cc0:
    // 0x1d0cc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0cc4:
    // 0x1d0cc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0cc8:
    // 0x1d0cc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0ccc:
    // 0x1d0ccc: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1d0cccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1d0cd0:
    // 0x1d0cd0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0cd4:
    // 0x1d0cd4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x1d0cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_1d0cd8:
    // 0x1d0cd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d0cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d0cdc:
    // 0x1d0cdc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1d0cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1d0ce0:
    // 0x1d0ce0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d0ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1d0ce4:
    // 0x1d0ce4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d0ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d0ce8:
    // 0x1d0ce8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d0ce8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d0cec:
    // 0x1d0cec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d0cecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d0cf0:
    // 0x1d0cf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d0cf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d0cf4:
    // 0x1d0cf4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d0cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d0cf8:
    // 0x1d0cf8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d0cf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0cfc:
    // 0x1d0cfc: 0x3e00008  jr          $ra
label_1d0d00:
    if (ctx->pc == 0x1D0D00u) {
        ctx->pc = 0x1D0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CFCu;
        // 0x1d0d00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D0D04u;
        goto label_fallthrough_0x1d0cfc;
    }
    ctx->pc = 0x1D0CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CFCu;
        // 0x1d0d00: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d0cfc:
    ctx->pc = 0x1D0D04u;
}
