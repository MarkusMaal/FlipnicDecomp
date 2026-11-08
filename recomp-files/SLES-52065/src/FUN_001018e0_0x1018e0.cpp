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

// Function: FUN_001018e0
// Address: 0x1018e0 - 0x101cd0
void FUN_001018e0_0x1018e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001018e0_0x1018e0");
#endif

    switch (ctx->pc) {
        case 0x1018e0u: goto label_1018e0;
        case 0x1018e4u: goto label_1018e4;
        case 0x1018e8u: goto label_1018e8;
        case 0x1018ecu: goto label_1018ec;
        case 0x1018f0u: goto label_1018f0;
        case 0x1018f4u: goto label_1018f4;
        case 0x1018f8u: goto label_1018f8;
        case 0x1018fcu: goto label_1018fc;
        case 0x101900u: goto label_101900;
        case 0x101904u: goto label_101904;
        case 0x101908u: goto label_101908;
        case 0x10190cu: goto label_10190c;
        case 0x101910u: goto label_101910;
        case 0x101914u: goto label_101914;
        case 0x101918u: goto label_101918;
        case 0x10191cu: goto label_10191c;
        case 0x101920u: goto label_101920;
        case 0x101924u: goto label_101924;
        case 0x101928u: goto label_101928;
        case 0x10192cu: goto label_10192c;
        case 0x101930u: goto label_101930;
        case 0x101934u: goto label_101934;
        case 0x101938u: goto label_101938;
        case 0x10193cu: goto label_10193c;
        case 0x101940u: goto label_101940;
        case 0x101944u: goto label_101944;
        case 0x101948u: goto label_101948;
        case 0x10194cu: goto label_10194c;
        case 0x101950u: goto label_101950;
        case 0x101954u: goto label_101954;
        case 0x101958u: goto label_101958;
        case 0x10195cu: goto label_10195c;
        case 0x101960u: goto label_101960;
        case 0x101964u: goto label_101964;
        case 0x101968u: goto label_101968;
        case 0x10196cu: goto label_10196c;
        case 0x101970u: goto label_101970;
        case 0x101974u: goto label_101974;
        case 0x101978u: goto label_101978;
        case 0x10197cu: goto label_10197c;
        case 0x101980u: goto label_101980;
        case 0x101984u: goto label_101984;
        case 0x101988u: goto label_101988;
        case 0x10198cu: goto label_10198c;
        case 0x101990u: goto label_101990;
        case 0x101994u: goto label_101994;
        case 0x101998u: goto label_101998;
        case 0x10199cu: goto label_10199c;
        case 0x1019a0u: goto label_1019a0;
        case 0x1019a4u: goto label_1019a4;
        case 0x1019a8u: goto label_1019a8;
        case 0x1019acu: goto label_1019ac;
        case 0x1019b0u: goto label_1019b0;
        case 0x1019b4u: goto label_1019b4;
        case 0x1019b8u: goto label_1019b8;
        case 0x1019bcu: goto label_1019bc;
        case 0x1019c0u: goto label_1019c0;
        case 0x1019c4u: goto label_1019c4;
        case 0x1019c8u: goto label_1019c8;
        case 0x1019ccu: goto label_1019cc;
        case 0x1019d0u: goto label_1019d0;
        case 0x1019d4u: goto label_1019d4;
        case 0x1019d8u: goto label_1019d8;
        case 0x1019dcu: goto label_1019dc;
        case 0x1019e0u: goto label_1019e0;
        case 0x1019e4u: goto label_1019e4;
        case 0x1019e8u: goto label_1019e8;
        case 0x1019ecu: goto label_1019ec;
        case 0x1019f0u: goto label_1019f0;
        case 0x1019f4u: goto label_1019f4;
        case 0x1019f8u: goto label_1019f8;
        case 0x1019fcu: goto label_1019fc;
        case 0x101a00u: goto label_101a00;
        case 0x101a04u: goto label_101a04;
        case 0x101a08u: goto label_101a08;
        case 0x101a0cu: goto label_101a0c;
        case 0x101a10u: goto label_101a10;
        case 0x101a14u: goto label_101a14;
        case 0x101a18u: goto label_101a18;
        case 0x101a1cu: goto label_101a1c;
        case 0x101a20u: goto label_101a20;
        case 0x101a24u: goto label_101a24;
        case 0x101a28u: goto label_101a28;
        case 0x101a2cu: goto label_101a2c;
        case 0x101a30u: goto label_101a30;
        case 0x101a34u: goto label_101a34;
        case 0x101a38u: goto label_101a38;
        case 0x101a3cu: goto label_101a3c;
        case 0x101a40u: goto label_101a40;
        case 0x101a44u: goto label_101a44;
        case 0x101a48u: goto label_101a48;
        case 0x101a4cu: goto label_101a4c;
        case 0x101a50u: goto label_101a50;
        case 0x101a54u: goto label_101a54;
        case 0x101a58u: goto label_101a58;
        case 0x101a5cu: goto label_101a5c;
        case 0x101a60u: goto label_101a60;
        case 0x101a64u: goto label_101a64;
        case 0x101a68u: goto label_101a68;
        case 0x101a6cu: goto label_101a6c;
        case 0x101a70u: goto label_101a70;
        case 0x101a74u: goto label_101a74;
        case 0x101a78u: goto label_101a78;
        case 0x101a7cu: goto label_101a7c;
        case 0x101a80u: goto label_101a80;
        case 0x101a84u: goto label_101a84;
        case 0x101a88u: goto label_101a88;
        case 0x101a8cu: goto label_101a8c;
        case 0x101a90u: goto label_101a90;
        case 0x101a94u: goto label_101a94;
        case 0x101a98u: goto label_101a98;
        case 0x101a9cu: goto label_101a9c;
        case 0x101aa0u: goto label_101aa0;
        case 0x101aa4u: goto label_101aa4;
        case 0x101aa8u: goto label_101aa8;
        case 0x101aacu: goto label_101aac;
        case 0x101ab0u: goto label_101ab0;
        case 0x101ab4u: goto label_101ab4;
        case 0x101ab8u: goto label_101ab8;
        case 0x101abcu: goto label_101abc;
        case 0x101ac0u: goto label_101ac0;
        case 0x101ac4u: goto label_101ac4;
        case 0x101ac8u: goto label_101ac8;
        case 0x101accu: goto label_101acc;
        case 0x101ad0u: goto label_101ad0;
        case 0x101ad4u: goto label_101ad4;
        case 0x101ad8u: goto label_101ad8;
        case 0x101adcu: goto label_101adc;
        case 0x101ae0u: goto label_101ae0;
        case 0x101ae4u: goto label_101ae4;
        case 0x101ae8u: goto label_101ae8;
        case 0x101aecu: goto label_101aec;
        case 0x101af0u: goto label_101af0;
        case 0x101af4u: goto label_101af4;
        case 0x101af8u: goto label_101af8;
        case 0x101afcu: goto label_101afc;
        case 0x101b00u: goto label_101b00;
        case 0x101b04u: goto label_101b04;
        case 0x101b08u: goto label_101b08;
        case 0x101b0cu: goto label_101b0c;
        case 0x101b10u: goto label_101b10;
        case 0x101b14u: goto label_101b14;
        case 0x101b18u: goto label_101b18;
        case 0x101b1cu: goto label_101b1c;
        case 0x101b20u: goto label_101b20;
        case 0x101b24u: goto label_101b24;
        case 0x101b28u: goto label_101b28;
        case 0x101b2cu: goto label_101b2c;
        case 0x101b30u: goto label_101b30;
        case 0x101b34u: goto label_101b34;
        case 0x101b38u: goto label_101b38;
        case 0x101b3cu: goto label_101b3c;
        case 0x101b40u: goto label_101b40;
        case 0x101b44u: goto label_101b44;
        case 0x101b48u: goto label_101b48;
        case 0x101b4cu: goto label_101b4c;
        case 0x101b50u: goto label_101b50;
        case 0x101b54u: goto label_101b54;
        case 0x101b58u: goto label_101b58;
        case 0x101b5cu: goto label_101b5c;
        case 0x101b60u: goto label_101b60;
        case 0x101b64u: goto label_101b64;
        case 0x101b68u: goto label_101b68;
        case 0x101b6cu: goto label_101b6c;
        case 0x101b70u: goto label_101b70;
        case 0x101b74u: goto label_101b74;
        case 0x101b78u: goto label_101b78;
        case 0x101b7cu: goto label_101b7c;
        case 0x101b80u: goto label_101b80;
        case 0x101b84u: goto label_101b84;
        case 0x101b88u: goto label_101b88;
        case 0x101b8cu: goto label_101b8c;
        case 0x101b90u: goto label_101b90;
        case 0x101b94u: goto label_101b94;
        case 0x101b98u: goto label_101b98;
        case 0x101b9cu: goto label_101b9c;
        case 0x101ba0u: goto label_101ba0;
        case 0x101ba4u: goto label_101ba4;
        case 0x101ba8u: goto label_101ba8;
        case 0x101bacu: goto label_101bac;
        case 0x101bb0u: goto label_101bb0;
        case 0x101bb4u: goto label_101bb4;
        case 0x101bb8u: goto label_101bb8;
        case 0x101bbcu: goto label_101bbc;
        case 0x101bc0u: goto label_101bc0;
        case 0x101bc4u: goto label_101bc4;
        case 0x101bc8u: goto label_101bc8;
        case 0x101bccu: goto label_101bcc;
        case 0x101bd0u: goto label_101bd0;
        case 0x101bd4u: goto label_101bd4;
        case 0x101bd8u: goto label_101bd8;
        case 0x101bdcu: goto label_101bdc;
        case 0x101be0u: goto label_101be0;
        case 0x101be4u: goto label_101be4;
        case 0x101be8u: goto label_101be8;
        case 0x101becu: goto label_101bec;
        case 0x101bf0u: goto label_101bf0;
        case 0x101bf4u: goto label_101bf4;
        case 0x101bf8u: goto label_101bf8;
        case 0x101bfcu: goto label_101bfc;
        case 0x101c00u: goto label_101c00;
        case 0x101c04u: goto label_101c04;
        case 0x101c08u: goto label_101c08;
        case 0x101c0cu: goto label_101c0c;
        case 0x101c10u: goto label_101c10;
        case 0x101c14u: goto label_101c14;
        case 0x101c18u: goto label_101c18;
        case 0x101c1cu: goto label_101c1c;
        case 0x101c20u: goto label_101c20;
        case 0x101c24u: goto label_101c24;
        case 0x101c28u: goto label_101c28;
        case 0x101c2cu: goto label_101c2c;
        case 0x101c30u: goto label_101c30;
        case 0x101c34u: goto label_101c34;
        case 0x101c38u: goto label_101c38;
        case 0x101c3cu: goto label_101c3c;
        case 0x101c40u: goto label_101c40;
        case 0x101c44u: goto label_101c44;
        case 0x101c48u: goto label_101c48;
        case 0x101c4cu: goto label_101c4c;
        case 0x101c50u: goto label_101c50;
        case 0x101c54u: goto label_101c54;
        case 0x101c58u: goto label_101c58;
        case 0x101c5cu: goto label_101c5c;
        case 0x101c60u: goto label_101c60;
        case 0x101c64u: goto label_101c64;
        case 0x101c68u: goto label_101c68;
        case 0x101c6cu: goto label_101c6c;
        case 0x101c70u: goto label_101c70;
        case 0x101c74u: goto label_101c74;
        case 0x101c78u: goto label_101c78;
        case 0x101c7cu: goto label_101c7c;
        case 0x101c80u: goto label_101c80;
        case 0x101c84u: goto label_101c84;
        case 0x101c88u: goto label_101c88;
        case 0x101c8cu: goto label_101c8c;
        case 0x101c90u: goto label_101c90;
        case 0x101c94u: goto label_101c94;
        case 0x101c98u: goto label_101c98;
        case 0x101c9cu: goto label_101c9c;
        case 0x101ca0u: goto label_101ca0;
        case 0x101ca4u: goto label_101ca4;
        case 0x101ca8u: goto label_101ca8;
        case 0x101cacu: goto label_101cac;
        case 0x101cb0u: goto label_101cb0;
        case 0x101cb4u: goto label_101cb4;
        case 0x101cb8u: goto label_101cb8;
        case 0x101cbcu: goto label_101cbc;
        case 0x101cc0u: goto label_101cc0;
        case 0x101cc4u: goto label_101cc4;
        case 0x101cc8u: goto label_101cc8;
        case 0x101cccu: goto label_101ccc;
        default: break;
    }

    ctx->pc = 0x1018e0u;

label_1018e0:
    // 0x1018e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1018e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1018e4:
    // 0x1018e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1018e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1018e8:
    // 0x1018e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1018e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1018ec:
    // 0x1018ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1018ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1018f0:
    // 0x1018f0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1018f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1018f4:
    // 0x1018f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1018f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1018f8:
    // 0x1018f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1018f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1018fc:
    // 0x1018fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1018fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_101900:
    // 0x101900: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_101904:
    // 0x101904: 0xc04860c  jal         func_121830
label_101908:
    if (ctx->pc == 0x101908u) {
        ctx->pc = 0x101908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101904u;
        // 0x101908: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10190Cu;
        goto label_10190c;
    }
    ctx->pc = 0x101904u;
    SET_GPR_U32(ctx, 31, 0x10190Cu);
    ctx->pc = 0x101908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101904u;
    // 0x101908: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121830u, 0x101904u, 0x10190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10190Cu;
label_10190c:
    // 0x10190c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x10190cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_101910:
    // 0x101910: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_101914:
    // 0x101914: 0xc06cf0c  jal         func_1B3C30
label_101918:
    if (ctx->pc == 0x101918u) {
        ctx->pc = 0x101918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101914u;
        // 0x101918: 0x24a5dfd8  addiu       $a1, $a1, -0x2028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10191Cu;
        goto label_10191c;
    }
    ctx->pc = 0x101914u;
    SET_GPR_U32(ctx, 31, 0x10191Cu);
    ctx->pc = 0x101918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101914u;
    // 0x101918: 0x24a5dfd8  addiu       $a1, $a1, -0x2028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101914u, 0x10191Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10191Cu;
label_10191c:
    // 0x10191c: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
label_101920:
    if (ctx->pc == 0x101920u) {
        ctx->pc = 0x101924u;
        goto label_101924;
    }
    ctx->pc = 0x10191Cu;
    {
        const bool branch_taken_0x10191c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10191c) {
            ctx->pc = 0x101968u;
            goto label_101968;
        }
    }
    ctx->pc = 0x101924u;
label_101924:
    // 0x101924: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_101928:
    // 0x101928: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10192c:
    // 0x10192c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10192cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101930:
    // 0x101930: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101934:
    // 0x101934: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x101934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_101938:
    // 0x101938: 0xc061918  jal         func_186460
label_10193c:
    if (ctx->pc == 0x10193Cu) {
        ctx->pc = 0x10193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101938u;
        // 0x10193c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101940u;
        goto label_101940;
    }
    ctx->pc = 0x101938u;
    SET_GPR_U32(ctx, 31, 0x101940u);
    ctx->pc = 0x10193Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101938u;
    // 0x10193c: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x101938u, 0x101940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101940u;
label_101940:
    // 0x101940: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x101940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_101944:
    // 0x101944: 0xc061a2c  jal         func_1868B0
label_101948:
    if (ctx->pc == 0x101948u) {
        ctx->pc = 0x101948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101944u;
        // 0x101948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10194Cu;
        goto label_10194c;
    }
    ctx->pc = 0x101944u;
    SET_GPR_U32(ctx, 31, 0x10194Cu);
    ctx->pc = 0x101948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101944u;
    // 0x101948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B0u, 0x101944u, 0x10194Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10194Cu;
label_10194c:
    // 0x10194c: 0xc061918  jal         func_186460
label_101950:
    if (ctx->pc == 0x101950u) {
        ctx->pc = 0x101954u;
        goto label_101954;
    }
    ctx->pc = 0x10194Cu;
    SET_GPR_U32(ctx, 31, 0x101954u);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x10194Cu, 0x101954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101954u;
label_101954:
    // 0x101954: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x101954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_101958:
    // 0x101958: 0xc061950  jal         func_186540
label_10195c:
    if (ctx->pc == 0x10195Cu) {
        ctx->pc = 0x10195Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101958u;
        // 0x10195c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101960u;
        goto label_101960;
    }
    ctx->pc = 0x101958u;
    SET_GPR_U32(ctx, 31, 0x101960u);
    ctx->pc = 0x10195Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101958u;
    // 0x10195c: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186540u, 0x101958u, 0x101960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101960u;
label_101960:
    // 0x101960: 0x82020004  lb          $v0, 0x4($s0)
    ctx->pc = 0x101960u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_101964:
    // 0x101964: 0xa382848c  sb          $v0, -0x7B74($gp)
    ctx->pc = 0x101964u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935692), (uint8_t)GPR_U32(ctx, 2));
label_101968:
    // 0x101968: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_10196c:
    // 0x10196c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_101970:
    // 0x101970: 0xc06cf0c  jal         func_1B3C30
label_101974:
    if (ctx->pc == 0x101974u) {
        ctx->pc = 0x101974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101970u;
        // 0x101974: 0x24a5dfe0  addiu       $a1, $a1, -0x2020 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101978u;
        goto label_101978;
    }
    ctx->pc = 0x101970u;
    SET_GPR_U32(ctx, 31, 0x101978u);
    ctx->pc = 0x101974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101970u;
    // 0x101974: 0x24a5dfe0  addiu       $a1, $a1, -0x2020 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101970u, 0x101978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101978u;
label_101978:
    // 0x101978: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_10197c:
    // 0x10197c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_101980:
    // 0x101980: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101980u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101984:
    // 0x101984: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101988:
    // 0x101988: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x101988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_10198c:
    // 0x10198c: 0xc0512c8  jal         func_144B20
label_101990:
    if (ctx->pc == 0x101990u) {
        ctx->pc = 0x101990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10198Cu;
        // 0x101990: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101994u;
        goto label_101994;
    }
    ctx->pc = 0x10198Cu;
    SET_GPR_U32(ctx, 31, 0x101994u);
    ctx->pc = 0x101990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10198Cu;
    // 0x101990: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x10198Cu, 0x101994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101994u;
label_101994:
    // 0x101994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101998:
    // 0x101998: 0xc051244  jal         func_144910
label_10199c:
    if (ctx->pc == 0x10199Cu) {
        ctx->pc = 0x10199Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101998u;
        // 0x10199c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019A0u;
        goto label_1019a0;
    }
    ctx->pc = 0x101998u;
    SET_GPR_U32(ctx, 31, 0x1019A0u);
    ctx->pc = 0x10199Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101998u;
    // 0x10199c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144910u, 0x101998u, 0x1019A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019A0u;
label_1019a0:
    // 0x1019a0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1019a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_1019a4:
    // 0x1019a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1019a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1019a8:
    // 0x1019a8: 0xc06cf0c  jal         func_1B3C30
label_1019ac:
    if (ctx->pc == 0x1019ACu) {
        ctx->pc = 0x1019ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019A8u;
        // 0x1019ac: 0x24a5dfe8  addiu       $a1, $a1, -0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019B0u;
        goto label_1019b0;
    }
    ctx->pc = 0x1019A8u;
    SET_GPR_U32(ctx, 31, 0x1019B0u);
    ctx->pc = 0x1019ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019A8u;
    // 0x1019ac: 0x24a5dfe8  addiu       $a1, $a1, -0x2018 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x1019A8u, 0x1019B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019B0u;
label_1019b0:
    // 0x1019b0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x1019b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1019b4:
    // 0x1019b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1019b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1019b8:
    // 0x1019b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1019b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1019bc:
    // 0x1019bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1019bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1019c0:
    // 0x1019c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1019c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1019c4:
    // 0x1019c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1019c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1019c8:
    // 0x1019c8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1019c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1019cc:
    // 0x1019cc: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1019ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1019d0:
    // 0x1019d0: 0xc04c0e0  jal         func_130380
label_1019d4:
    if (ctx->pc == 0x1019D4u) {
        ctx->pc = 0x1019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019D0u;
        // 0x1019d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019D8u;
        goto label_1019d8;
    }
    ctx->pc = 0x1019D0u;
    SET_GPR_U32(ctx, 31, 0x1019D8u);
    ctx->pc = 0x1019D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019D0u;
    // 0x1019d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1019D0u, 0x1019D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019D8u;
label_1019d8:
    // 0x1019d8: 0x2929821  addu        $s3, $s4, $s2
    ctx->pc = 0x1019d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1019dc:
    // 0x1019dc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1019dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1019e0:
    // 0x1019e0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1019e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1019e4:
    // 0x1019e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1019e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1019e8:
    // 0x1019e8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1019e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1019ec:
    // 0x1019ec: 0x320f809  jalr        $t9
label_1019f0:
    if (ctx->pc == 0x1019F0u) {
        ctx->pc = 0x1019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019ECu;
        // 0x1019f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019F4u;
        goto label_1019f4;
    }
    ctx->pc = 0x1019ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1019F4u);
        ctx->pc = 0x1019F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019ECu;
        // 0x1019f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1019ECu, 0x1019F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1019F4u;
label_1019f4:
    // 0x1019f4: 0xc04c0e0  jal         func_130380
label_1019f8:
    if (ctx->pc == 0x1019F8u) {
        ctx->pc = 0x1019F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1019F4u;
        // 0x1019f8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1019FCu;
        goto label_1019fc;
    }
    ctx->pc = 0x1019F4u;
    SET_GPR_U32(ctx, 31, 0x1019FCu);
    ctx->pc = 0x1019F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1019F4u;
    // 0x1019f8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x1019F4u, 0x1019FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1019FCu;
label_1019fc:
    // 0x1019fc: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x1019fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_101a00:
    // 0x101a00: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x101a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_101a04:
    // 0x101a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101a08:
    // 0x101a08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x101a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_101a0c:
    // 0x101a0c: 0x320f809  jalr        $t9
label_101a10:
    if (ctx->pc == 0x101A10u) {
        ctx->pc = 0x101A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A0Cu;
        // 0x101a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A14u;
        goto label_101a14;
    }
    ctx->pc = 0x101A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101A14u);
        ctx->pc = 0x101A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A0Cu;
        // 0x101a10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101A0Cu, 0x101A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101A14u;
label_101a14:
    // 0x101a14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_101a18:
    // 0x101a18: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x101a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_101a1c:
    // 0x101a1c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_101a20:
    if (ctx->pc == 0x101A20u) {
        ctx->pc = 0x101A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A1Cu;
        // 0x101a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A24u;
        goto label_101a24;
    }
    ctx->pc = 0x101A1Cu;
    {
        const bool branch_taken_0x101a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A1Cu;
        // 0x101a20: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a1c) {
            ctx->pc = 0x1019D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1019d0;
        }
    }
    ctx->pc = 0x101A24u;
label_101a24:
    // 0x101a24: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_101a28:
    // 0x101a28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_101a2c:
    // 0x101a2c: 0xc06cf0c  jal         func_1B3C30
label_101a30:
    if (ctx->pc == 0x101A30u) {
        ctx->pc = 0x101A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A2Cu;
        // 0x101a30: 0x24a5dff0  addiu       $a1, $a1, -0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A34u;
        goto label_101a34;
    }
    ctx->pc = 0x101A2Cu;
    SET_GPR_U32(ctx, 31, 0x101A34u);
    ctx->pc = 0x101A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A2Cu;
    // 0x101a30: 0x24a5dff0  addiu       $a1, $a1, -0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101A2Cu, 0x101A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A34u;
label_101a34:
    // 0x101a34: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_101a38:
    if (ctx->pc == 0x101A38u) {
        ctx->pc = 0x101A3Cu;
        goto label_101a3c;
    }
    ctx->pc = 0x101A34u;
    {
        const bool branch_taken_0x101a34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x101a34) {
            ctx->pc = 0x101A5Cu;
            goto label_101a5c;
        }
    }
    ctx->pc = 0x101A3Cu;
label_101a3c:
    // 0x101a3c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_101a40:
    // 0x101a40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_101a44:
    // 0x101a44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101a48:
    // 0x101a48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101a4c:
    // 0x101a4c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x101a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_101a50:
    // 0x101a50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101a54:
    // 0x101a54: 0x10000002  b           . + 4 + (0x2 << 2)
label_101a58:
    if (ctx->pc == 0x101A58u) {
        ctx->pc = 0x101A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A54u;
        // 0x101a58: 0xae82005c  sw          $v0, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A5Cu;
        goto label_101a5c;
    }
    ctx->pc = 0x101A54u;
    {
        const bool branch_taken_0x101a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A54u;
        // 0x101a58: 0xae82005c  sw          $v0, 0x5C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a54) {
            ctx->pc = 0x101A60u;
            goto label_101a60;
        }
    }
    ctx->pc = 0x101A5Cu;
label_101a5c:
    // 0x101a5c: 0xae80005c  sw          $zero, 0x5C($s4)
    ctx->pc = 0x101a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 0));
label_101a60:
    // 0x101a60: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x101a60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_101a64:
    // 0x101a64: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x101a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_101a68:
    // 0x101a68: 0xc06cf0c  jal         func_1B3C30
label_101a6c:
    if (ctx->pc == 0x101A6Cu) {
        ctx->pc = 0x101A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A68u;
        // 0x101a6c: 0x24a5dff8  addiu       $a1, $a1, -0x2008 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A70u;
        goto label_101a70;
    }
    ctx->pc = 0x101A68u;
    SET_GPR_U32(ctx, 31, 0x101A70u);
    ctx->pc = 0x101A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A68u;
    // 0x101a6c: 0x24a5dff8  addiu       $a1, $a1, -0x2008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3C30u, 0x101A68u, 0x101A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A70u;
label_101a70:
    // 0x101a70: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_101a74:
    if (ctx->pc == 0x101A74u) {
        ctx->pc = 0x101A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A70u;
        // 0x101a74: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101A78u;
        goto label_101a78;
    }
    ctx->pc = 0x101A70u;
    {
        const bool branch_taken_0x101a70 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x101A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A70u;
        // 0x101a74: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a70) {
            ctx->pc = 0x101A80u;
            goto label_101a80;
        }
    }
    ctx->pc = 0x101A78u;
label_101a78:
    // 0x101a78: 0x10000007  b           . + 4 + (0x7 << 2)
label_101a7c:
    if (ctx->pc == 0x101A7Cu) {
        ctx->pc = 0x101A80u;
        goto label_101a80;
    }
    ctx->pc = 0x101A78u;
    {
        const bool branch_taken_0x101a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101a78) {
            ctx->pc = 0x101A98u;
            goto label_101a98;
        }
    }
    ctx->pc = 0x101A80u;
label_101a80:
    // 0x101a80: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_101a84:
    // 0x101a84: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x101a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_101a88:
    // 0x101a88: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x101a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_101a8c:
    // 0x101a8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x101a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_101a90:
    // 0x101a90: 0x84630008  lh          $v1, 0x8($v1)
    ctx->pc = 0x101a90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_101a94:
    // 0x101a94: 0x0  nop
    ctx->pc = 0x101a94u;
    // NOP
label_101a98:
    // 0x101a98: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_101a9c:
    if (ctx->pc == 0x101A9Cu) {
        ctx->pc = 0x101AA0u;
        goto label_101aa0;
    }
    ctx->pc = 0x101A98u;
    {
        const bool branch_taken_0x101a98 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x101a98) {
            ctx->pc = 0x101AC4u;
            goto label_101ac4;
        }
    }
    ctx->pc = 0x101AA0u;
label_101aa0:
    // 0x101aa0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x101aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_101aa4:
    // 0x101aa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x101aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_101aa8:
    // 0x101aa8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x101aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_101aac:
    // 0x101aac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101ab0:
    // 0x101ab0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x101ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_101ab4:
    // 0x101ab4: 0xc04c0e0  jal         func_130380
label_101ab8:
    if (ctx->pc == 0x101AB8u) {
        ctx->pc = 0x101AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AB4u;
        // 0x101ab8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101ABCu;
        goto label_101abc;
    }
    ctx->pc = 0x101AB4u;
    SET_GPR_U32(ctx, 31, 0x101ABCu);
    ctx->pc = 0x101AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101AB4u;
    // 0x101ab8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130380u, 0x101AB4u, 0x101ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101ABCu;
label_101abc:
    // 0x101abc: 0x10000002  b           . + 4 + (0x2 << 2)
label_101ac0:
    if (ctx->pc == 0x101AC0u) {
        ctx->pc = 0x101AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ABCu;
        // 0x101ac0: 0xae820050  sw          $v0, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101AC4u;
        goto label_101ac4;
    }
    ctx->pc = 0x101ABCu;
    {
        const bool branch_taken_0x101abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101ABCu;
        // 0x101ac0: 0xae820050  sw          $v0, 0x50($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101abc) {
            ctx->pc = 0x101AC8u;
            goto label_101ac8;
        }
    }
    ctx->pc = 0x101AC4u;
label_101ac4:
    // 0x101ac4: 0xae800050  sw          $zero, 0x50($s4)
    ctx->pc = 0x101ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 0));
label_101ac8:
    // 0x101ac8: 0xc0401bc  jal         func_1006F0
label_101acc:
    if (ctx->pc == 0x101ACCu) {
        ctx->pc = 0x101ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AC8u;
        // 0x101acc: 0x240407c0  addiu       $a0, $zero, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101AD0u;
        goto label_101ad0;
    }
    ctx->pc = 0x101AC8u;
    SET_GPR_U32(ctx, 31, 0x101AD0u);
    ctx->pc = 0x101ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101AC8u;
    // 0x101acc: 0x240407c0  addiu       $a0, $zero, 0x7C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x101AC8u, 0x101AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AD0u;
label_101ad0:
    // 0x101ad0: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_101ad4:
    if (ctx->pc == 0x101AD4u) {
        ctx->pc = 0x101AD8u;
        goto label_101ad8;
    }
    ctx->pc = 0x101AD0u;
    {
        const bool branch_taken_0x101ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101ad0) {
            ctx->pc = 0x101C8Cu;
            goto label_101c8c;
        }
    }
    ctx->pc = 0x101AD8u;
label_101ad8:
    // 0x101ad8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x101ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_101adc:
    // 0x101adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101ae0:
    // 0x101ae0: 0xac400118  sw          $zero, 0x118($v0)
    ctx->pc = 0x101ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 0));
label_101ae4:
    // 0x101ae4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101ae8:
    // 0x101ae8: 0xac40011c  sw          $zero, 0x11C($v0)
    ctx->pc = 0x101ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 0));
label_101aec:
    // 0x101aec: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101af0:
    // 0x101af0: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x101af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
label_101af4:
    // 0x101af4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101af8:
    // 0x101af8: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x101af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
label_101afc:
    // 0x101afc: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b00:
    // 0x101b00: 0xc06c56c  jal         func_1B15B0
label_101b04:
    if (ctx->pc == 0x101B04u) {
        ctx->pc = 0x101B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B00u;
        // 0x101b04: 0x24440128  addiu       $a0, $v0, 0x128 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B08u;
        goto label_101b08;
    }
    ctx->pc = 0x101B00u;
    SET_GPR_U32(ctx, 31, 0x101B08u);
    ctx->pc = 0x101B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B00u;
    // 0x101b04: 0x24440128  addiu       $a0, $v0, 0x128 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B15B0u, 0x101B00u, 0x101B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B08u;
label_101b08:
    // 0x101b08: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b0c:
    // 0x101b0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x101b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101b10:
    // 0x101b10: 0xc06c56c  jal         func_1B15B0
label_101b14:
    if (ctx->pc == 0x101B14u) {
        ctx->pc = 0x101B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B10u;
        // 0x101b14: 0x24440200  addiu       $a0, $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B18u;
        goto label_101b18;
    }
    ctx->pc = 0x101B10u;
    SET_GPR_U32(ctx, 31, 0x101B18u);
    ctx->pc = 0x101B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B10u;
    // 0x101b14: 0x24440200  addiu       $a0, $v0, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B15B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B15B0u, 0x101B10u, 0x101B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B18u;
label_101b18:
    // 0x101b18: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b1c:
    // 0x101b1c: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x101b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_101b20:
    // 0x101b20: 0x27868358  addiu       $a2, $gp, -0x7CA8
    ctx->pc = 0x101b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
label_101b24:
    // 0x101b24: 0xa04002f0  sb          $zero, 0x2F0($v0)
    ctx->pc = 0x101b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 752), (uint8_t)GPR_U32(ctx, 0));
label_101b28:
    // 0x101b28: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b2c:
    // 0x101b2c: 0xa04002f1  sb          $zero, 0x2F1($v0)
    ctx->pc = 0x101b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 753), (uint8_t)GPR_U32(ctx, 0));
label_101b30:
    // 0x101b30: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b34:
    // 0x101b34: 0xa04002f2  sb          $zero, 0x2F2($v0)
    ctx->pc = 0x101b34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 754), (uint8_t)GPR_U32(ctx, 0));
label_101b38:
    // 0x101b38: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b3c:
    // 0x101b3c: 0xc0621c0  jal         func_188700
label_101b40:
    if (ctx->pc == 0x101B40u) {
        ctx->pc = 0x101B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B3Cu;
        // 0x101b40: 0x24440310  addiu       $a0, $v0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B44u;
        goto label_101b44;
    }
    ctx->pc = 0x101B3Cu;
    SET_GPR_U32(ctx, 31, 0x101B44u);
    ctx->pc = 0x101B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B3Cu;
    // 0x101b40: 0x24440310  addiu       $a0, $v0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x101B3Cu, 0x101B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B44u;
label_101b44:
    // 0x101b44: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x101b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b48:
    // 0x101b48: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x101b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_101b4c:
    // 0x101b4c: 0x24637910  addiu       $v1, $v1, 0x7910
    ctx->pc = 0x101b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30992));
label_101b50:
    // 0x101b50: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x101b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_101b54:
    // 0x101b54: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x101b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
label_101b58:
    // 0x101b58: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x101b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_101b5c:
    // 0x101b5c: 0x27868358  addiu       $a2, $gp, -0x7CA8
    ctx->pc = 0x101b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
label_101b60:
    // 0x101b60: 0xace303b4  sw          $v1, 0x3B4($a3)
    ctx->pc = 0x101b60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 3));
label_101b64:
    // 0x101b64: 0x24e303b0  addiu       $v1, $a3, 0x3B0
    ctx->pc = 0x101b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 944));
label_101b68:
    // 0x101b68: 0xa0e003b0  sb          $zero, 0x3B0($a3)
    ctx->pc = 0x101b68u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 944), (uint8_t)GPR_U32(ctx, 0));
label_101b6c:
    // 0x101b6c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x101b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_101b70:
    // 0x101b70: 0xc0621c0  jal         func_188700
label_101b74:
    if (ctx->pc == 0x101B74u) {
        ctx->pc = 0x101B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101B70u;
        // 0x101b74: 0xace203b4  sw          $v0, 0x3B4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101B78u;
        goto label_101b78;
    }
    ctx->pc = 0x101B70u;
    SET_GPR_U32(ctx, 31, 0x101B78u);
    ctx->pc = 0x101B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101B70u;
    // 0x101b74: 0xace203b4  sw          $v0, 0x3B4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 948), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x101B70u, 0x101B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101B78u;
label_101b78:
    // 0x101b78: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x101b78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101b7c:
    // 0x101b7c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x101b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
label_101b80:
    // 0x101b80: 0x24637910  addiu       $v1, $v1, 0x7910
    ctx->pc = 0x101b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30992));
label_101b84:
    // 0x101b84: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x101b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
label_101b88:
    // 0x101b88: 0x2442b8b0  addiu       $v0, $v0, -0x4750
    ctx->pc = 0x101b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949040));
label_101b8c:
    // 0x101b8c: 0x27858334  addiu       $a1, $gp, -0x7CCC
    ctx->pc = 0x101b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935348));
label_101b90:
    // 0x101b90: 0x27868358  addiu       $a2, $gp, -0x7CA8
    ctx->pc = 0x101b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935384));
label_101b94:
    // 0x101b94: 0xace30574  sw          $v1, 0x574($a3)
    ctx->pc = 0x101b94u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1396), GPR_U32(ctx, 3));
label_101b98:
    // 0x101b98: 0x24e30570  addiu       $v1, $a3, 0x570
    ctx->pc = 0x101b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1392));
label_101b9c:
    // 0x101b9c: 0xa0e00570  sb          $zero, 0x570($a3)
    ctx->pc = 0x101b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1392), (uint8_t)GPR_U32(ctx, 0));
label_101ba0:
    // 0x101ba0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_101ba4:
    // 0x101ba4: 0xc0621c0  jal         func_188700
label_101ba8:
    if (ctx->pc == 0x101BA8u) {
        ctx->pc = 0x101BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BA4u;
        // 0x101ba8: 0xace20574  sw          $v0, 0x574($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101BACu;
        goto label_101bac;
    }
    ctx->pc = 0x101BA4u;
    SET_GPR_U32(ctx, 31, 0x101BACu);
    ctx->pc = 0x101BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BA4u;
    // 0x101ba8: 0xace20574  sw          $v0, 0x574($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 1396), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188700u, 0x101BA4u, 0x101BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BACu;
label_101bac:
    // 0x101bac: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101bb0:
    // 0x101bb0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x101bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_101bb4:
    // 0x101bb4: 0x24427910  addiu       $v0, $v0, 0x7910
    ctx->pc = 0x101bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30992));
label_101bb8:
    // 0x101bb8: 0x3c080023  lui         $t0, 0x23
    ctx->pc = 0x101bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)35 << 16));
label_101bbc:
    // 0x101bbc: 0x3c070023  lui         $a3, 0x23
    ctx->pc = 0x101bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35 << 16));
label_101bc0:
    // 0x101bc0: 0x3c060023  lui         $a2, 0x23
    ctx->pc = 0x101bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)35 << 16));
label_101bc4:
    // 0x101bc4: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x101bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
label_101bc8:
    // 0x101bc8: 0x3c030023  lui         $v1, 0x23
    ctx->pc = 0x101bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)35 << 16));
label_101bcc:
    // 0x101bcc: 0x2508b890  addiu       $t0, $t0, -0x4770
    ctx->pc = 0x101bccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949008));
label_101bd0:
    // 0x101bd0: 0x24e7b870  addiu       $a3, $a3, -0x4790
    ctx->pc = 0x101bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948976));
label_101bd4:
    // 0x101bd4: 0x24c6b850  addiu       $a2, $a2, -0x47B0
    ctx->pc = 0x101bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948944));
label_101bd8:
    // 0x101bd8: 0x24a5b830  addiu       $a1, $a1, -0x47D0
    ctx->pc = 0x101bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948912));
label_101bdc:
    // 0x101bdc: 0xac820734  sw          $v0, 0x734($a0)
    ctx->pc = 0x101bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1844), GPR_U32(ctx, 2));
label_101be0:
    // 0x101be0: 0x2463b810  addiu       $v1, $v1, -0x47F0
    ctx->pc = 0x101be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948880));
label_101be4:
    // 0x101be4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101be8:
    // 0x101be8: 0xa0800730  sb          $zero, 0x730($a0)
    ctx->pc = 0x101be8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1840), (uint8_t)GPR_U32(ctx, 0));
label_101bec:
    // 0x101bec: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101bf0:
    // 0x101bf0: 0xac880734  sw          $t0, 0x734($a0)
    ctx->pc = 0x101bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1844), GPR_U32(ctx, 8));
label_101bf4:
    // 0x101bf4: 0x8fa8007c  lw          $t0, 0x7C($sp)
    ctx->pc = 0x101bf4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101bf8:
    // 0x101bf8: 0x25040310  addiu       $a0, $t0, 0x310
    ctx->pc = 0x101bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 784));
label_101bfc:
    // 0x101bfc: 0xad040738  sw          $a0, 0x738($t0)
    ctx->pc = 0x101bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1848), GPR_U32(ctx, 4));
label_101c00:
    // 0x101c00: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c04:
    // 0x101c04: 0xac820744  sw          $v0, 0x744($a0)
    ctx->pc = 0x101c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1860), GPR_U32(ctx, 2));
label_101c08:
    // 0x101c08: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c0c:
    // 0x101c0c: 0xa0800740  sb          $zero, 0x740($a0)
    ctx->pc = 0x101c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1856), (uint8_t)GPR_U32(ctx, 0));
label_101c10:
    // 0x101c10: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c14:
    // 0x101c14: 0xac870744  sw          $a3, 0x744($a0)
    ctx->pc = 0x101c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1860), GPR_U32(ctx, 7));
label_101c18:
    // 0x101c18: 0x8fa7007c  lw          $a3, 0x7C($sp)
    ctx->pc = 0x101c18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c1c:
    // 0x101c1c: 0x24e40310  addiu       $a0, $a3, 0x310
    ctx->pc = 0x101c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 784));
label_101c20:
    // 0x101c20: 0xace40748  sw          $a0, 0x748($a3)
    ctx->pc = 0x101c20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1864), GPR_U32(ctx, 4));
label_101c24:
    // 0x101c24: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c28:
    // 0x101c28: 0xac82075c  sw          $v0, 0x75C($a0)
    ctx->pc = 0x101c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1884), GPR_U32(ctx, 2));
label_101c2c:
    // 0x101c2c: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c30:
    // 0x101c30: 0xa0800758  sb          $zero, 0x758($a0)
    ctx->pc = 0x101c30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1880), (uint8_t)GPR_U32(ctx, 0));
label_101c34:
    // 0x101c34: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c38:
    // 0x101c38: 0xac86075c  sw          $a2, 0x75C($a0)
    ctx->pc = 0x101c38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1884), GPR_U32(ctx, 6));
label_101c3c:
    // 0x101c3c: 0x8fa6007c  lw          $a2, 0x7C($sp)
    ctx->pc = 0x101c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c40:
    // 0x101c40: 0x24c40310  addiu       $a0, $a2, 0x310
    ctx->pc = 0x101c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 784));
label_101c44:
    // 0x101c44: 0xacc40760  sw          $a0, 0x760($a2)
    ctx->pc = 0x101c44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1888), GPR_U32(ctx, 4));
label_101c48:
    // 0x101c48: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c4c:
    // 0x101c4c: 0xac820778  sw          $v0, 0x778($a0)
    ctx->pc = 0x101c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1912), GPR_U32(ctx, 2));
label_101c50:
    // 0x101c50: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c54:
    // 0x101c54: 0xa0800774  sb          $zero, 0x774($a0)
    ctx->pc = 0x101c54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1908), (uint8_t)GPR_U32(ctx, 0));
label_101c58:
    // 0x101c58: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c5c:
    // 0x101c5c: 0xac850778  sw          $a1, 0x778($a0)
    ctx->pc = 0x101c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1912), GPR_U32(ctx, 5));
label_101c60:
    // 0x101c60: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x101c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c64:
    // 0x101c64: 0x24a40310  addiu       $a0, $a1, 0x310
    ctx->pc = 0x101c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 784));
label_101c68:
    // 0x101c68: 0xaca4077c  sw          $a0, 0x77C($a1)
    ctx->pc = 0x101c68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1916), GPR_U32(ctx, 4));
label_101c6c:
    // 0x101c6c: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x101c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c70:
    // 0x101c70: 0xac8207b4  sw          $v0, 0x7B4($a0)
    ctx->pc = 0x101c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1972), GPR_U32(ctx, 2));
label_101c74:
    // 0x101c74: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c78:
    // 0x101c78: 0xa04007b0  sb          $zero, 0x7B0($v0)
    ctx->pc = 0x101c78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1968), (uint8_t)GPR_U32(ctx, 0));
label_101c7c:
    // 0x101c7c: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c80:
    // 0x101c80: 0xac4307b4  sw          $v1, 0x7B4($v0)
    ctx->pc = 0x101c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1972), GPR_U32(ctx, 3));
label_101c84:
    // 0x101c84: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x101c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_101c88:
    // 0x101c88: 0x0  nop
    ctx->pc = 0x101c88u;
    // NOP
label_101c8c:
    // 0x101c8c: 0xae820060  sw          $v0, 0x60($s4)
    ctx->pc = 0x101c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 2));
label_101c90:
    // 0x101c90: 0xc06bdb8  jal         func_1AF6E0
label_101c94:
    if (ctx->pc == 0x101C94u) {
        ctx->pc = 0x101C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C90u;
        // 0x101c94: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101C98u;
        goto label_101c98;
    }
    ctx->pc = 0x101C90u;
    SET_GPR_U32(ctx, 31, 0x101C98u);
    ctx->pc = 0x101C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C90u;
    // 0x101c94: 0x8e840060  lw          $a0, 0x60($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x101C90u, 0x101C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C98u;
label_101c98:
    // 0x101c98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101c9c:
    // 0x101c9c: 0xc040734  jal         func_101CD0
label_101ca0:
    if (ctx->pc == 0x101CA0u) {
        ctx->pc = 0x101CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C9Cu;
        // 0x101ca0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CA4u;
        goto label_101ca4;
    }
    ctx->pc = 0x101C9Cu;
    SET_GPR_U32(ctx, 31, 0x101CA4u);
    ctx->pc = 0x101CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C9Cu;
    // 0x101ca0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101CD0u, 0x101C9Cu, 0x101CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CA4u;
label_101ca4:
    // 0x101ca4: 0xc046494  jal         func_119250
label_101ca8:
    if (ctx->pc == 0x101CA8u) {
        ctx->pc = 0x101CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CA4u;
        // 0x101ca8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CACu;
        goto label_101cac;
    }
    ctx->pc = 0x101CA4u;
    SET_GPR_U32(ctx, 31, 0x101CACu);
    ctx->pc = 0x101CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CA4u;
    // 0x101ca8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119250u, 0x101CA4u, 0x101CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101CACu;
label_101cac:
    // 0x101cac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x101cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_101cb0:
    // 0x101cb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x101cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_101cb4:
    // 0x101cb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101cb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_101cb8:
    // 0x101cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_101cbc:
    // 0x101cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101cc0:
    // 0x101cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101cc4:
    // 0x101cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101cc8:
    // 0x101cc8: 0x3e00008  jr          $ra
label_101ccc:
    if (ctx->pc == 0x101CCCu) {
        ctx->pc = 0x101CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CC8u;
        // 0x101ccc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101CD0u;
        goto label_fallthrough_0x101cc8;
    }
    ctx->pc = 0x101CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101CC8u;
        // 0x101ccc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x101cc8:
    ctx->pc = 0x101CD0u;
}
