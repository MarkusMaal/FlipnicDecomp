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

// Function: FUN_00136840
// Address: 0x136840 - 0x136ce4
void FUN_00136840_0x136840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00136840_0x136840");
#endif

    switch (ctx->pc) {
        case 0x136840u: goto label_136840;
        case 0x136844u: goto label_136844;
        case 0x136848u: goto label_136848;
        case 0x13684cu: goto label_13684c;
        case 0x136850u: goto label_136850;
        case 0x136854u: goto label_136854;
        case 0x136858u: goto label_136858;
        case 0x13685cu: goto label_13685c;
        case 0x136860u: goto label_136860;
        case 0x136864u: goto label_136864;
        case 0x136868u: goto label_136868;
        case 0x13686cu: goto label_13686c;
        case 0x136870u: goto label_136870;
        case 0x136874u: goto label_136874;
        case 0x136878u: goto label_136878;
        case 0x13687cu: goto label_13687c;
        case 0x136880u: goto label_136880;
        case 0x136884u: goto label_136884;
        case 0x136888u: goto label_136888;
        case 0x13688cu: goto label_13688c;
        case 0x136890u: goto label_136890;
        case 0x136894u: goto label_136894;
        case 0x136898u: goto label_136898;
        case 0x13689cu: goto label_13689c;
        case 0x1368a0u: goto label_1368a0;
        case 0x1368a4u: goto label_1368a4;
        case 0x1368a8u: goto label_1368a8;
        case 0x1368acu: goto label_1368ac;
        case 0x1368b0u: goto label_1368b0;
        case 0x1368b4u: goto label_1368b4;
        case 0x1368b8u: goto label_1368b8;
        case 0x1368bcu: goto label_1368bc;
        case 0x1368c0u: goto label_1368c0;
        case 0x1368c4u: goto label_1368c4;
        case 0x1368c8u: goto label_1368c8;
        case 0x1368ccu: goto label_1368cc;
        case 0x1368d0u: goto label_1368d0;
        case 0x1368d4u: goto label_1368d4;
        case 0x1368d8u: goto label_1368d8;
        case 0x1368dcu: goto label_1368dc;
        case 0x1368e0u: goto label_1368e0;
        case 0x1368e4u: goto label_1368e4;
        case 0x1368e8u: goto label_1368e8;
        case 0x1368ecu: goto label_1368ec;
        case 0x1368f0u: goto label_1368f0;
        case 0x1368f4u: goto label_1368f4;
        case 0x1368f8u: goto label_1368f8;
        case 0x1368fcu: goto label_1368fc;
        case 0x136900u: goto label_136900;
        case 0x136904u: goto label_136904;
        case 0x136908u: goto label_136908;
        case 0x13690cu: goto label_13690c;
        case 0x136910u: goto label_136910;
        case 0x136914u: goto label_136914;
        case 0x136918u: goto label_136918;
        case 0x13691cu: goto label_13691c;
        case 0x136920u: goto label_136920;
        case 0x136924u: goto label_136924;
        case 0x136928u: goto label_136928;
        case 0x13692cu: goto label_13692c;
        case 0x136930u: goto label_136930;
        case 0x136934u: goto label_136934;
        case 0x136938u: goto label_136938;
        case 0x13693cu: goto label_13693c;
        case 0x136940u: goto label_136940;
        case 0x136944u: goto label_136944;
        case 0x136948u: goto label_136948;
        case 0x13694cu: goto label_13694c;
        case 0x136950u: goto label_136950;
        case 0x136954u: goto label_136954;
        case 0x136958u: goto label_136958;
        case 0x13695cu: goto label_13695c;
        case 0x136960u: goto label_136960;
        case 0x136964u: goto label_136964;
        case 0x136968u: goto label_136968;
        case 0x13696cu: goto label_13696c;
        case 0x136970u: goto label_136970;
        case 0x136974u: goto label_136974;
        case 0x136978u: goto label_136978;
        case 0x13697cu: goto label_13697c;
        case 0x136980u: goto label_136980;
        case 0x136984u: goto label_136984;
        case 0x136988u: goto label_136988;
        case 0x13698cu: goto label_13698c;
        case 0x136990u: goto label_136990;
        case 0x136994u: goto label_136994;
        case 0x136998u: goto label_136998;
        case 0x13699cu: goto label_13699c;
        case 0x1369a0u: goto label_1369a0;
        case 0x1369a4u: goto label_1369a4;
        case 0x1369a8u: goto label_1369a8;
        case 0x1369acu: goto label_1369ac;
        case 0x1369b0u: goto label_1369b0;
        case 0x1369b4u: goto label_1369b4;
        case 0x1369b8u: goto label_1369b8;
        case 0x1369bcu: goto label_1369bc;
        case 0x1369c0u: goto label_1369c0;
        case 0x1369c4u: goto label_1369c4;
        case 0x1369c8u: goto label_1369c8;
        case 0x1369ccu: goto label_1369cc;
        case 0x1369d0u: goto label_1369d0;
        case 0x1369d4u: goto label_1369d4;
        case 0x1369d8u: goto label_1369d8;
        case 0x1369dcu: goto label_1369dc;
        case 0x1369e0u: goto label_1369e0;
        case 0x1369e4u: goto label_1369e4;
        case 0x1369e8u: goto label_1369e8;
        case 0x1369ecu: goto label_1369ec;
        case 0x1369f0u: goto label_1369f0;
        case 0x1369f4u: goto label_1369f4;
        case 0x1369f8u: goto label_1369f8;
        case 0x1369fcu: goto label_1369fc;
        case 0x136a00u: goto label_136a00;
        case 0x136a04u: goto label_136a04;
        case 0x136a08u: goto label_136a08;
        case 0x136a0cu: goto label_136a0c;
        case 0x136a10u: goto label_136a10;
        case 0x136a14u: goto label_136a14;
        case 0x136a18u: goto label_136a18;
        case 0x136a1cu: goto label_136a1c;
        case 0x136a20u: goto label_136a20;
        case 0x136a24u: goto label_136a24;
        case 0x136a28u: goto label_136a28;
        case 0x136a2cu: goto label_136a2c;
        case 0x136a30u: goto label_136a30;
        case 0x136a34u: goto label_136a34;
        case 0x136a38u: goto label_136a38;
        case 0x136a3cu: goto label_136a3c;
        case 0x136a40u: goto label_136a40;
        case 0x136a44u: goto label_136a44;
        case 0x136a48u: goto label_136a48;
        case 0x136a4cu: goto label_136a4c;
        case 0x136a50u: goto label_136a50;
        case 0x136a54u: goto label_136a54;
        case 0x136a58u: goto label_136a58;
        case 0x136a5cu: goto label_136a5c;
        case 0x136a60u: goto label_136a60;
        case 0x136a64u: goto label_136a64;
        case 0x136a68u: goto label_136a68;
        case 0x136a6cu: goto label_136a6c;
        case 0x136a70u: goto label_136a70;
        case 0x136a74u: goto label_136a74;
        case 0x136a78u: goto label_136a78;
        case 0x136a7cu: goto label_136a7c;
        case 0x136a80u: goto label_136a80;
        case 0x136a84u: goto label_136a84;
        case 0x136a88u: goto label_136a88;
        case 0x136a8cu: goto label_136a8c;
        case 0x136a90u: goto label_136a90;
        case 0x136a94u: goto label_136a94;
        case 0x136a98u: goto label_136a98;
        case 0x136a9cu: goto label_136a9c;
        case 0x136aa0u: goto label_136aa0;
        case 0x136aa4u: goto label_136aa4;
        case 0x136aa8u: goto label_136aa8;
        case 0x136aacu: goto label_136aac;
        case 0x136ab0u: goto label_136ab0;
        case 0x136ab4u: goto label_136ab4;
        case 0x136ab8u: goto label_136ab8;
        case 0x136abcu: goto label_136abc;
        case 0x136ac0u: goto label_136ac0;
        case 0x136ac4u: goto label_136ac4;
        case 0x136ac8u: goto label_136ac8;
        case 0x136accu: goto label_136acc;
        case 0x136ad0u: goto label_136ad0;
        case 0x136ad4u: goto label_136ad4;
        case 0x136ad8u: goto label_136ad8;
        case 0x136adcu: goto label_136adc;
        case 0x136ae0u: goto label_136ae0;
        case 0x136ae4u: goto label_136ae4;
        case 0x136ae8u: goto label_136ae8;
        case 0x136aecu: goto label_136aec;
        case 0x136af0u: goto label_136af0;
        case 0x136af4u: goto label_136af4;
        case 0x136af8u: goto label_136af8;
        case 0x136afcu: goto label_136afc;
        case 0x136b00u: goto label_136b00;
        case 0x136b04u: goto label_136b04;
        case 0x136b08u: goto label_136b08;
        case 0x136b0cu: goto label_136b0c;
        case 0x136b10u: goto label_136b10;
        case 0x136b14u: goto label_136b14;
        case 0x136b18u: goto label_136b18;
        case 0x136b1cu: goto label_136b1c;
        case 0x136b20u: goto label_136b20;
        case 0x136b24u: goto label_136b24;
        case 0x136b28u: goto label_136b28;
        case 0x136b2cu: goto label_136b2c;
        case 0x136b30u: goto label_136b30;
        case 0x136b34u: goto label_136b34;
        case 0x136b38u: goto label_136b38;
        case 0x136b3cu: goto label_136b3c;
        case 0x136b40u: goto label_136b40;
        case 0x136b44u: goto label_136b44;
        case 0x136b48u: goto label_136b48;
        case 0x136b4cu: goto label_136b4c;
        case 0x136b50u: goto label_136b50;
        case 0x136b54u: goto label_136b54;
        case 0x136b58u: goto label_136b58;
        case 0x136b5cu: goto label_136b5c;
        case 0x136b60u: goto label_136b60;
        case 0x136b64u: goto label_136b64;
        case 0x136b68u: goto label_136b68;
        case 0x136b6cu: goto label_136b6c;
        case 0x136b70u: goto label_136b70;
        case 0x136b74u: goto label_136b74;
        case 0x136b78u: goto label_136b78;
        case 0x136b7cu: goto label_136b7c;
        case 0x136b80u: goto label_136b80;
        case 0x136b84u: goto label_136b84;
        case 0x136b88u: goto label_136b88;
        case 0x136b8cu: goto label_136b8c;
        case 0x136b90u: goto label_136b90;
        case 0x136b94u: goto label_136b94;
        case 0x136b98u: goto label_136b98;
        case 0x136b9cu: goto label_136b9c;
        case 0x136ba0u: goto label_136ba0;
        case 0x136ba4u: goto label_136ba4;
        case 0x136ba8u: goto label_136ba8;
        case 0x136bacu: goto label_136bac;
        case 0x136bb0u: goto label_136bb0;
        case 0x136bb4u: goto label_136bb4;
        case 0x136bb8u: goto label_136bb8;
        case 0x136bbcu: goto label_136bbc;
        case 0x136bc0u: goto label_136bc0;
        case 0x136bc4u: goto label_136bc4;
        case 0x136bc8u: goto label_136bc8;
        case 0x136bccu: goto label_136bcc;
        case 0x136bd0u: goto label_136bd0;
        case 0x136bd4u: goto label_136bd4;
        case 0x136bd8u: goto label_136bd8;
        case 0x136bdcu: goto label_136bdc;
        case 0x136be0u: goto label_136be0;
        case 0x136be4u: goto label_136be4;
        case 0x136be8u: goto label_136be8;
        case 0x136becu: goto label_136bec;
        case 0x136bf0u: goto label_136bf0;
        case 0x136bf4u: goto label_136bf4;
        case 0x136bf8u: goto label_136bf8;
        case 0x136bfcu: goto label_136bfc;
        case 0x136c00u: goto label_136c00;
        case 0x136c04u: goto label_136c04;
        case 0x136c08u: goto label_136c08;
        case 0x136c0cu: goto label_136c0c;
        case 0x136c10u: goto label_136c10;
        case 0x136c14u: goto label_136c14;
        case 0x136c18u: goto label_136c18;
        case 0x136c1cu: goto label_136c1c;
        case 0x136c20u: goto label_136c20;
        case 0x136c24u: goto label_136c24;
        case 0x136c28u: goto label_136c28;
        case 0x136c2cu: goto label_136c2c;
        case 0x136c30u: goto label_136c30;
        case 0x136c34u: goto label_136c34;
        case 0x136c38u: goto label_136c38;
        case 0x136c3cu: goto label_136c3c;
        case 0x136c40u: goto label_136c40;
        case 0x136c44u: goto label_136c44;
        case 0x136c48u: goto label_136c48;
        case 0x136c4cu: goto label_136c4c;
        case 0x136c50u: goto label_136c50;
        case 0x136c54u: goto label_136c54;
        case 0x136c58u: goto label_136c58;
        case 0x136c5cu: goto label_136c5c;
        case 0x136c60u: goto label_136c60;
        case 0x136c64u: goto label_136c64;
        case 0x136c68u: goto label_136c68;
        case 0x136c6cu: goto label_136c6c;
        case 0x136c70u: goto label_136c70;
        case 0x136c74u: goto label_136c74;
        case 0x136c78u: goto label_136c78;
        case 0x136c7cu: goto label_136c7c;
        case 0x136c80u: goto label_136c80;
        case 0x136c84u: goto label_136c84;
        case 0x136c88u: goto label_136c88;
        case 0x136c8cu: goto label_136c8c;
        case 0x136c90u: goto label_136c90;
        case 0x136c94u: goto label_136c94;
        case 0x136c98u: goto label_136c98;
        case 0x136c9cu: goto label_136c9c;
        case 0x136ca0u: goto label_136ca0;
        case 0x136ca4u: goto label_136ca4;
        case 0x136ca8u: goto label_136ca8;
        case 0x136cacu: goto label_136cac;
        case 0x136cb0u: goto label_136cb0;
        case 0x136cb4u: goto label_136cb4;
        case 0x136cb8u: goto label_136cb8;
        case 0x136cbcu: goto label_136cbc;
        case 0x136cc0u: goto label_136cc0;
        case 0x136cc4u: goto label_136cc4;
        case 0x136cc8u: goto label_136cc8;
        case 0x136cccu: goto label_136ccc;
        case 0x136cd0u: goto label_136cd0;
        case 0x136cd4u: goto label_136cd4;
        case 0x136cd8u: goto label_136cd8;
        case 0x136cdcu: goto label_136cdc;
        case 0x136ce0u: goto label_136ce0;
        default: break;
    }

    ctx->pc = 0x136840u;

label_136840:
    // 0x136840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x136840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_136844:
    // 0x136844: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x136844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136848:
    // 0x136848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13684c:
    // 0x13684c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_136850:
    // 0x136850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_136854:
    // 0x136854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136858:
    // 0x136858: 0x8f848348  lw          $a0, -0x7CB8($gp)
    ctx->pc = 0x136858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935368)));
label_13685c:
    // 0x13685c: 0x1083011c  beq         $a0, $v1, . + 4 + (0x11C << 2)
label_136860:
    if (ctx->pc == 0x136860u) {
        ctx->pc = 0x136860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13685Cu;
        // 0x136860: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136864u;
        goto label_136864;
    }
    ctx->pc = 0x13685Cu;
    {
        const bool branch_taken_0x13685c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x136860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13685Cu;
        // 0x136860: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13685c) {
            ctx->pc = 0x136CD0u;
            goto label_136cd0;
        }
    }
    ctx->pc = 0x136864u;
label_136864:
    // 0x136864: 0x8382854c  lb          $v0, -0x7AB4($gp)
    ctx->pc = 0x136864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935884)));
label_136868:
    // 0x136868: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13686c:
    if (ctx->pc == 0x13686Cu) {
        ctx->pc = 0x136870u;
        goto label_136870;
    }
    ctx->pc = 0x136868u;
    {
        const bool branch_taken_0x136868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136868) {
            ctx->pc = 0x136878u;
            goto label_136878;
        }
    }
    ctx->pc = 0x136870u;
label_136870:
    // 0x136870: 0xa3838548  sb          $v1, -0x7AB8($gp)
    ctx->pc = 0x136870u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935880), (uint8_t)GPR_U32(ctx, 3));
label_136874:
    // 0x136874: 0xa383854c  sb          $v1, -0x7AB4($gp)
    ctx->pc = 0x136874u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935884), (uint8_t)GPR_U32(ctx, 3));
label_136878:
    // 0x136878: 0x83828554  lb          $v0, -0x7AAC($gp)
    ctx->pc = 0x136878u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935892)));
label_13687c:
    // 0x13687c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_136880:
    if (ctx->pc == 0x136880u) {
        ctx->pc = 0x136880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13687Cu;
        // 0x136880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136884u;
        goto label_136884;
    }
    ctx->pc = 0x13687Cu;
    {
        const bool branch_taken_0x13687c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13687Cu;
        // 0x136880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13687c) {
            ctx->pc = 0x13688Cu;
            goto label_13688c;
        }
    }
    ctx->pc = 0x136884u;
label_136884:
    // 0x136884: 0xa3828550  sb          $v0, -0x7AB0($gp)
    ctx->pc = 0x136884u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935888), (uint8_t)GPR_U32(ctx, 2));
label_136888:
    // 0x136888: 0xa3828554  sb          $v0, -0x7AAC($gp)
    ctx->pc = 0x136888u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935892), (uint8_t)GPR_U32(ctx, 2));
label_13688c:
    // 0x13688c: 0x8382855c  lb          $v0, -0x7AA4($gp)
    ctx->pc = 0x13688cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935900)));
label_136890:
    // 0x136890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_136894:
    if (ctx->pc == 0x136894u) {
        ctx->pc = 0x136894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136890u;
        // 0x136894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136898u;
        goto label_136898;
    }
    ctx->pc = 0x136890u;
    {
        const bool branch_taken_0x136890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136890u;
        // 0x136894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136890) {
            ctx->pc = 0x1368A0u;
            goto label_1368a0;
        }
    }
    ctx->pc = 0x136898u;
label_136898:
    // 0x136898: 0xa3828558  sb          $v0, -0x7AA8($gp)
    ctx->pc = 0x136898u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935896), (uint8_t)GPR_U32(ctx, 2));
label_13689c:
    // 0x13689c: 0xa382855c  sb          $v0, -0x7AA4($gp)
    ctx->pc = 0x13689cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935900), (uint8_t)GPR_U32(ctx, 2));
label_1368a0:
    // 0x1368a0: 0x83828564  lb          $v0, -0x7A9C($gp)
    ctx->pc = 0x1368a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935908)));
label_1368a4:
    // 0x1368a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1368a8:
    if (ctx->pc == 0x1368A8u) {
        ctx->pc = 0x1368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A4u;
        // 0x1368a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368ACu;
        goto label_1368ac;
    }
    ctx->pc = 0x1368A4u;
    {
        const bool branch_taken_0x1368a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368A4u;
        // 0x1368a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368a4) {
            ctx->pc = 0x1368B4u;
            goto label_1368b4;
        }
    }
    ctx->pc = 0x1368ACu;
label_1368ac:
    // 0x1368ac: 0xa3828560  sb          $v0, -0x7AA0($gp)
    ctx->pc = 0x1368acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935904), (uint8_t)GPR_U32(ctx, 2));
label_1368b0:
    // 0x1368b0: 0xa3828564  sb          $v0, -0x7A9C($gp)
    ctx->pc = 0x1368b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935908), (uint8_t)GPR_U32(ctx, 2));
label_1368b4:
    // 0x1368b4: 0x92230055  lbu         $v1, 0x55($s1)
    ctx->pc = 0x1368b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_1368b8:
    // 0x1368b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1368b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1368bc:
    // 0x1368bc: 0x146200f7  bne         $v1, $v0, . + 4 + (0xF7 << 2)
label_1368c0:
    if (ctx->pc == 0x1368C0u) {
        ctx->pc = 0x1368C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368BCu;
        // 0x1368c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368C4u;
        goto label_1368c4;
    }
    ctx->pc = 0x1368BCu;
    {
        const bool branch_taken_0x1368bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1368C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368BCu;
        // 0x1368c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368bc) {
            ctx->pc = 0x136C9Cu;
            goto label_136c9c;
        }
    }
    ctx->pc = 0x1368C4u;
label_1368c4:
    // 0x1368c4: 0x92220130  lbu         $v0, 0x130($s1)
    ctx->pc = 0x1368c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 304)));
label_1368c8:
    // 0x1368c8: 0x144000f3  bnez        $v0, . + 4 + (0xF3 << 2)
label_1368cc:
    if (ctx->pc == 0x1368CCu) {
        ctx->pc = 0x1368D0u;
        goto label_1368d0;
    }
    ctx->pc = 0x1368C8u;
    {
        const bool branch_taken_0x1368c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1368c8) {
            ctx->pc = 0x136C98u;
            goto label_136c98;
        }
    }
    ctx->pc = 0x1368D0u;
label_1368d0:
    // 0x1368d0: 0xc0607a8  jal         func_181EA0
label_1368d4:
    if (ctx->pc == 0x1368D4u) {
        ctx->pc = 0x1368D8u;
        goto label_1368d8;
    }
    ctx->pc = 0x1368D0u;
    SET_GPR_U32(ctx, 31, 0x1368D8u);
    ctx->pc = 0x181EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181EA0u, 0x1368D0u, 0x1368D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1368D8u;
label_1368d8:
    // 0x1368d8: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
label_1368dc:
    if (ctx->pc == 0x1368DCu) {
        ctx->pc = 0x1368DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368D8u;
        // 0x1368dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1368E0u;
        goto label_1368e0;
    }
    ctx->pc = 0x1368D8u;
    {
        const bool branch_taken_0x1368d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1368DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1368D8u;
        // 0x1368dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1368d8) {
            ctx->pc = 0x136C90u;
            goto label_136c90;
        }
    }
    ctx->pc = 0x1368E0u;
label_1368e0:
    // 0x1368e0: 0xc6210074  lwc1        $f1, 0x74($s1)
    ctx->pc = 0x1368e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1368e4:
    // 0x1368e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1368e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1368e8:
    // 0x1368e8: 0x0  nop
    ctx->pc = 0x1368e8u;
    // NOP
label_1368ec:
    // 0x1368ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1368ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1368f0:
    // 0x1368f0: 0x0  nop
    ctx->pc = 0x1368f0u;
    // NOP
label_1368f4:
    // 0x1368f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_1368f8:
    if (ctx->pc == 0x1368F8u) {
        ctx->pc = 0x1368FCu;
        goto label_1368fc;
    }
    ctx->pc = 0x1368F4u;
    {
        const bool branch_taken_0x1368f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1368f4) {
            ctx->pc = 0x136904u;
            goto label_136904;
        }
    }
    ctx->pc = 0x1368FCu;
label_1368fc:
    // 0x1368fc: 0xc04e8ac  jal         func_13A2B0
label_136900:
    if (ctx->pc == 0x136900u) {
        ctx->pc = 0x136904u;
        goto label_136904;
    }
    ctx->pc = 0x1368FCu;
    SET_GPR_U32(ctx, 31, 0x136904u);
    ctx->pc = 0x13A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A2B0u, 0x1368FCu, 0x136904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136904u;
label_136904:
    // 0x136904: 0xc04fbe0  jal         func_13EF80
label_136908:
    if (ctx->pc == 0x136908u) {
        ctx->pc = 0x13690Cu;
        goto label_13690c;
    }
    ctx->pc = 0x136904u;
    SET_GPR_U32(ctx, 31, 0x13690Cu);
    ctx->pc = 0x13EF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF80u, 0x136904u, 0x13690Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13690Cu;
label_13690c:
    // 0x13690c: 0xc04e900  jal         func_13A400
label_136910:
    if (ctx->pc == 0x136910u) {
        ctx->pc = 0x136914u;
        goto label_136914;
    }
    ctx->pc = 0x13690Cu;
    SET_GPR_U32(ctx, 31, 0x136914u);
    ctx->pc = 0x13A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A400u, 0x13690Cu, 0x136914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136914u;
label_136914:
    // 0x136914: 0xc04e904  jal         func_13A410
label_136918:
    if (ctx->pc == 0x136918u) {
        ctx->pc = 0x13691Cu;
        goto label_13691c;
    }
    ctx->pc = 0x136914u;
    SET_GPR_U32(ctx, 31, 0x13691Cu);
    ctx->pc = 0x13A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A410u, 0x136914u, 0x13691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13691Cu;
label_13691c:
    // 0x13691c: 0xc04d760  jal         func_135D80
label_136920:
    if (ctx->pc == 0x136920u) {
        ctx->pc = 0x136924u;
        goto label_136924;
    }
    ctx->pc = 0x13691Cu;
    SET_GPR_U32(ctx, 31, 0x136924u);
    ctx->pc = 0x135D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D80u, 0x13691Cu, 0x136924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136924u;
label_136924:
    // 0x136924: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x136924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136928:
    // 0x136928: 0xc0512c8  jal         func_144B20
label_13692c:
    if (ctx->pc == 0x13692Cu) {
        ctx->pc = 0x13692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136928u;
        // 0x13692c: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136930u;
        goto label_136930;
    }
    ctx->pc = 0x136928u;
    SET_GPR_U32(ctx, 31, 0x136930u);
    ctx->pc = 0x13692Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136928u;
    // 0x13692c: 0xe6200068  swc1        $f0, 0x68($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B20u, 0x136928u, 0x136930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136930u;
label_136930:
    // 0x136930: 0xc0513f4  jal         func_144FD0
label_136934:
    if (ctx->pc == 0x136934u) {
        ctx->pc = 0x136934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136930u;
        // 0x136934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136938u;
        goto label_136938;
    }
    ctx->pc = 0x136930u;
    SET_GPR_U32(ctx, 31, 0x136938u);
    ctx->pc = 0x136934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136930u;
    // 0x136934: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FD0u, 0x136930u, 0x136938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136938u;
label_136938:
    // 0x136938: 0xc061da8  jal         func_1876A0
label_13693c:
    if (ctx->pc == 0x13693Cu) {
        ctx->pc = 0x136940u;
        goto label_136940;
    }
    ctx->pc = 0x136938u;
    SET_GPR_U32(ctx, 31, 0x136940u);
    ctx->pc = 0x1876A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1876A0u, 0x136938u, 0x136940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136940u;
label_136940:
    // 0x136940: 0xc049e34  jal         func_1278D0
label_136944:
    if (ctx->pc == 0x136944u) {
        ctx->pc = 0x136948u;
        goto label_136948;
    }
    ctx->pc = 0x136940u;
    SET_GPR_U32(ctx, 31, 0x136948u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136940u, 0x136948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136948u;
label_136948:
    // 0x136948: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13694c:
    // 0x13694c: 0xc049e48  jal         func_127920
label_136950:
    if (ctx->pc == 0x136950u) {
        ctx->pc = 0x136950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13694Cu;
        // 0x136950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136954u;
        goto label_136954;
    }
    ctx->pc = 0x13694Cu;
    SET_GPR_U32(ctx, 31, 0x136954u);
    ctx->pc = 0x136950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13694Cu;
    // 0x136950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127920u, 0x13694Cu, 0x136954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136954u;
label_136954:
    // 0x136954: 0xc04e7e8  jal         func_139FA0
label_136958:
    if (ctx->pc == 0x136958u) {
        ctx->pc = 0x13695Cu;
        goto label_13695c;
    }
    ctx->pc = 0x136954u;
    SET_GPR_U32(ctx, 31, 0x13695Cu);
    ctx->pc = 0x139FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139FA0u, 0x136954u, 0x13695Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13695Cu;
label_13695c:
    // 0x13695c: 0x8f8285d8  lw          $v0, -0x7A28($gp)
    ctx->pc = 0x13695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936024)));
label_136960:
    // 0x136960: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_136964:
    if (ctx->pc == 0x136964u) {
        ctx->pc = 0x136964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136960u;
        // 0x136964: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136968u;
        goto label_136968;
    }
    ctx->pc = 0x136960u;
    {
        const bool branch_taken_0x136960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136960u;
        // 0x136964: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136960) {
            ctx->pc = 0x136980u;
            goto label_136980;
        }
    }
    ctx->pc = 0x136968u;
label_136968:
    // 0x136968: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x136968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_13696c:
    // 0x13696c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136970:
    // 0x136970: 0xc07d392  jal         func_1F4E48
label_136974:
    if (ctx->pc == 0x136974u) {
        ctx->pc = 0x136974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136970u;
        // 0x136974: 0x24a571e0  addiu       $a1, $a1, 0x71E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136978u;
        goto label_136978;
    }
    ctx->pc = 0x136970u;
    SET_GPR_U32(ctx, 31, 0x136978u);
    ctx->pc = 0x136974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136970u;
    // 0x136974: 0x24a571e0  addiu       $a1, $a1, 0x71E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x136970u, 0x136978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136978u;
label_136978:
    // 0x136978: 0x10000003  b           . + 4 + (0x3 << 2)
label_13697c:
    if (ctx->pc == 0x13697Cu) {
        ctx->pc = 0x136980u;
        goto label_136980;
    }
    ctx->pc = 0x136978u;
    {
        const bool branch_taken_0x136978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136978) {
            ctx->pc = 0x136988u;
            goto label_136988;
        }
    }
    ctx->pc = 0x136980u;
label_136980:
    // 0x136980: 0xc07d3ac  jal         func_1F4EB0
label_136984:
    if (ctx->pc == 0x136984u) {
        ctx->pc = 0x136988u;
        goto label_136988;
    }
    ctx->pc = 0x136980u;
    SET_GPR_U32(ctx, 31, 0x136988u);
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x136980u, 0x136988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136988u;
label_136988:
    // 0x136988: 0xc049e34  jal         func_1278D0
label_13698c:
    if (ctx->pc == 0x13698Cu) {
        ctx->pc = 0x136990u;
        goto label_136990;
    }
    ctx->pc = 0x136988u;
    SET_GPR_U32(ctx, 31, 0x136990u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136988u, 0x136990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136990u;
label_136990:
    // 0x136990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136994:
    // 0x136994: 0xc04a058  jal         func_128160
label_136998:
    if (ctx->pc == 0x136998u) {
        ctx->pc = 0x136998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136994u;
        // 0x136998: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13699Cu;
        goto label_13699c;
    }
    ctx->pc = 0x136994u;
    SET_GPR_U32(ctx, 31, 0x13699Cu);
    ctx->pc = 0x136998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136994u;
    // 0x136998: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128160u, 0x136994u, 0x13699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13699Cu;
label_13699c:
    // 0x13699c: 0xc061c5c  jal         func_187170
label_1369a0:
    if (ctx->pc == 0x1369A0u) {
        ctx->pc = 0x1369A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13699Cu;
        // 0x1369a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369A4u;
        goto label_1369a4;
    }
    ctx->pc = 0x13699Cu;
    SET_GPR_U32(ctx, 31, 0x1369A4u);
    ctx->pc = 0x1369A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13699Cu;
    // 0x1369a0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x13699Cu, 0x1369A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369A4u;
label_1369a4:
    // 0x1369a4: 0xc061918  jal         func_186460
label_1369a8:
    if (ctx->pc == 0x1369A8u) {
        ctx->pc = 0x1369ACu;
        goto label_1369ac;
    }
    ctx->pc = 0x1369A4u;
    SET_GPR_U32(ctx, 31, 0x1369ACu);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x1369A4u, 0x1369ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369ACu;
label_1369ac:
    // 0x1369ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1369acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1369b0:
    // 0x1369b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1369b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1369b4:
    // 0x1369b4: 0xc061968  jal         func_1865A0
label_1369b8:
    if (ctx->pc == 0x1369B8u) {
        ctx->pc = 0x1369B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369B4u;
        // 0x1369b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1369BCu;
        goto label_1369bc;
    }
    ctx->pc = 0x1369B4u;
    SET_GPR_U32(ctx, 31, 0x1369BCu);
    ctx->pc = 0x1369B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369B4u;
    // 0x1369b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x1369B4u, 0x1369BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369BCu;
label_1369bc:
    // 0x1369bc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1369bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1369c0:
    // 0x1369c0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1369c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1369c4:
    // 0x1369c4: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x1369c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_1369c8:
    // 0x1369c8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1369c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_1369cc:
    // 0x1369cc: 0x24a56500  addiu       $a1, $a1, 0x6500
    ctx->pc = 0x1369ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
label_1369d0:
    // 0x1369d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1369d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1369d4:
    // 0x1369d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1369d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1369d8:
    // 0x1369d8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1369d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1369dc:
    // 0x1369dc: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x1369dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_1369e0:
    // 0x1369e0: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1369e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_1369e4:
    // 0x1369e4: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x1369e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_1369e8:
    // 0x1369e8: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x1369e8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_1369ec:
    // 0x1369ec: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1369ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_1369f0:
    // 0x1369f0: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1369f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1369f4:
    // 0x1369f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1369f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1369f8:
    // 0x1369f8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1369f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1369fc:
    // 0x1369fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1369fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_136a00:
    // 0x136a00: 0x93828548  lbu         $v0, -0x7AB8($gp)
    ctx->pc = 0x136a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935880)));
label_136a04:
    // 0x136a04: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_136a08:
    if (ctx->pc == 0x136A08u) {
        ctx->pc = 0x136A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A04u;
        // 0x136a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A0Cu;
        goto label_136a0c;
    }
    ctx->pc = 0x136A04u;
    {
        const bool branch_taken_0x136a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A04u;
        // 0x136a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136a04) {
            ctx->pc = 0x136A38u;
            goto label_136a38;
        }
    }
    ctx->pc = 0x136A0Cu;
label_136a0c:
    // 0x136a0c: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x136a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136a10:
    // 0x136a10: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x136a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_136a14:
    // 0x136a14: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x136a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_136a18:
    // 0x136a18: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x136a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_136a1c:
    // 0x136a1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136a20:
    // 0x136a20: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x136a20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_136a24:
    // 0x136a24: 0x320f809  jalr        $t9
label_136a28:
    if (ctx->pc == 0x136A28u) {
        ctx->pc = 0x136A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A24u;
        // 0x136a28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A2Cu;
        goto label_136a2c;
    }
    ctx->pc = 0x136A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136A2Cu);
        ctx->pc = 0x136A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A24u;
        // 0x136a28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136A24u, 0x136A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136A2Cu;
label_136a2c:
    // 0x136a2c: 0xc04dba4  jal         func_136E90
label_136a30:
    if (ctx->pc == 0x136A30u) {
        ctx->pc = 0x136A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A2Cu;
        // 0x136a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A34u;
        goto label_136a34;
    }
    ctx->pc = 0x136A2Cu;
    SET_GPR_U32(ctx, 31, 0x136A34u);
    ctx->pc = 0x136A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A2Cu;
    // 0x136a30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136A2Cu, 0x136A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A34u;
label_136a34:
    // 0x136a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a38:
    // 0x136a38: 0xc060b8c  jal         func_182E30
label_136a3c:
    if (ctx->pc == 0x136A3Cu) {
        ctx->pc = 0x136A40u;
        goto label_136a40;
    }
    ctx->pc = 0x136A38u;
    SET_GPR_U32(ctx, 31, 0x136A40u);
    ctx->pc = 0x182E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182E30u, 0x136A38u, 0x136A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A40u;
label_136a40:
    // 0x136a40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a44:
    // 0x136a44: 0xc053c54  jal         func_14F150
label_136a48:
    if (ctx->pc == 0x136A48u) {
        ctx->pc = 0x136A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A44u;
        // 0x136a48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A4Cu;
        goto label_136a4c;
    }
    ctx->pc = 0x136A44u;
    SET_GPR_U32(ctx, 31, 0x136A4Cu);
    ctx->pc = 0x136A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A44u;
    // 0x136a48: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136A44u, 0x136A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A4Cu;
label_136a4c:
    // 0x136a4c: 0xc061918  jal         func_186460
label_136a50:
    if (ctx->pc == 0x136A50u) {
        ctx->pc = 0x136A54u;
        goto label_136a54;
    }
    ctx->pc = 0x136A4Cu;
    SET_GPR_U32(ctx, 31, 0x136A54u);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x136A4Cu, 0x136A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A54u;
label_136a54:
    // 0x136a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136a58:
    // 0x136a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136a5c:
    // 0x136a5c: 0xc061968  jal         func_1865A0
label_136a60:
    if (ctx->pc == 0x136A60u) {
        ctx->pc = 0x136A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A5Cu;
        // 0x136a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A64u;
        goto label_136a64;
    }
    ctx->pc = 0x136A5Cu;
    SET_GPR_U32(ctx, 31, 0x136A64u);
    ctx->pc = 0x136A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A5Cu;
    // 0x136a60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x136A5Cu, 0x136A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A64u;
label_136a64:
    // 0x136a64: 0xc07d3ac  jal         func_1F4EB0
label_136a68:
    if (ctx->pc == 0x136A68u) {
        ctx->pc = 0x136A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A64u;
        // 0x136a68: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A6Cu;
        goto label_136a6c;
    }
    ctx->pc = 0x136A64u;
    SET_GPR_U32(ctx, 31, 0x136A6Cu);
    ctx->pc = 0x136A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A64u;
    // 0x136a68: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB0u, 0x136A64u, 0x136A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A6Cu;
label_136a6c:
    // 0x136a6c: 0xc061c5c  jal         func_187170
label_136a70:
    if (ctx->pc == 0x136A70u) {
        ctx->pc = 0x136A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136A6Cu;
        // 0x136a70: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136A74u;
        goto label_136a74;
    }
    ctx->pc = 0x136A6Cu;
    SET_GPR_U32(ctx, 31, 0x136A74u);
    ctx->pc = 0x136A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136A6Cu;
    // 0x136a70: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x136A6Cu, 0x136A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136A74u;
label_136a74:
    // 0x136a74: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x136a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_136a78:
    // 0x136a78: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x136a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_136a7c:
    // 0x136a7c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x136a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_136a80:
    // 0x136a80: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x136a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_136a84:
    // 0x136a84: 0x24a56500  addiu       $a1, $a1, 0x6500
    ctx->pc = 0x136a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
label_136a88:
    // 0x136a88: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x136a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_136a8c:
    // 0x136a8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x136a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_136a90:
    // 0x136a90: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x136a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_136a94:
    // 0x136a94: 0xa0e60003  sb          $a2, 0x3($a3)
    ctx->pc = 0x136a94u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 6));
label_136a98:
    // 0x136a98: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x136a98u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
label_136a9c:
    // 0x136a9c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x136a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
label_136aa0:
    // 0x136aa0: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x136aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
label_136aa4:
    // 0x136aa4: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x136aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_136aa8:
    // 0x136aa8: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x136aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_136aac:
    // 0x136aac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x136aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_136ab0:
    // 0x136ab0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x136ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_136ab4:
    // 0x136ab4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x136ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_136ab8:
    // 0x136ab8: 0x93828550  lbu         $v0, -0x7AB0($gp)
    ctx->pc = 0x136ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935888)));
label_136abc:
    // 0x136abc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_136ac0:
    if (ctx->pc == 0x136AC0u) {
        ctx->pc = 0x136AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ABCu;
        // 0x136ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AC4u;
        goto label_136ac4;
    }
    ctx->pc = 0x136ABCu;
    {
        const bool branch_taken_0x136abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136ABCu;
        // 0x136ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136abc) {
            ctx->pc = 0x136AE4u;
            goto label_136ae4;
        }
    }
    ctx->pc = 0x136AC4u;
label_136ac4:
    // 0x136ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136ac8:
    // 0x136ac8: 0xc04c5a4  jal         func_131690
label_136acc:
    if (ctx->pc == 0x136ACCu) {
        ctx->pc = 0x136ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AC8u;
        // 0x136acc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AD0u;
        goto label_136ad0;
    }
    ctx->pc = 0x136AC8u;
    SET_GPR_U32(ctx, 31, 0x136AD0u);
    ctx->pc = 0x136ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AC8u;
    // 0x136acc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131690u, 0x136AC8u, 0x136AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD0u;
label_136ad0:
    // 0x136ad0: 0xc04dba4  jal         func_136E90
label_136ad4:
    if (ctx->pc == 0x136AD4u) {
        ctx->pc = 0x136AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AD0u;
        // 0x136ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AD8u;
        goto label_136ad8;
    }
    ctx->pc = 0x136AD0u;
    SET_GPR_U32(ctx, 31, 0x136AD8u);
    ctx->pc = 0x136AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD0u;
    // 0x136ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136AD0u, 0x136AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD8u;
label_136ad8:
    // 0x136ad8: 0xc04ce08  jal         func_133820
label_136adc:
    if (ctx->pc == 0x136ADCu) {
        ctx->pc = 0x136ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AD8u;
        // 0x136adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AE0u;
        goto label_136ae0;
    }
    ctx->pc = 0x136AD8u;
    SET_GPR_U32(ctx, 31, 0x136AE0u);
    ctx->pc = 0x136ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD8u;
    // 0x136adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133820u, 0x136AD8u, 0x136AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AE0u;
label_136ae0:
    // 0x136ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136ae4:
    // 0x136ae4: 0xc053c54  jal         func_14F150
label_136ae8:
    if (ctx->pc == 0x136AE8u) {
        ctx->pc = 0x136AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE4u;
        // 0x136ae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AECu;
        goto label_136aec;
    }
    ctx->pc = 0x136AE4u;
    SET_GPR_U32(ctx, 31, 0x136AECu);
    ctx->pc = 0x136AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AE4u;
    // 0x136ae8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136AE4u, 0x136AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AECu;
label_136aec:
    // 0x136aec: 0xc060b8c  jal         func_182E30
label_136af0:
    if (ctx->pc == 0x136AF0u) {
        ctx->pc = 0x136AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AECu;
        // 0x136af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136AF4u;
        goto label_136af4;
    }
    ctx->pc = 0x136AECu;
    SET_GPR_U32(ctx, 31, 0x136AF4u);
    ctx->pc = 0x136AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AECu;
    // 0x136af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182E30u, 0x136AECu, 0x136AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AF4u;
label_136af4:
    // 0x136af4: 0x8e390090  lw          $t9, 0x90($s1)
    ctx->pc = 0x136af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_136af8:
    // 0x136af8: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x136af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_136afc:
    // 0x136afc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x136afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_136b00:
    // 0x136b00: 0x320f809  jalr        $t9
label_136b04:
    if (ctx->pc == 0x136B04u) {
        ctx->pc = 0x136B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B00u;
        // 0x136b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B08u;
        goto label_136b08;
    }
    ctx->pc = 0x136B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136B08u);
        ctx->pc = 0x136B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B00u;
        // 0x136b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B00u, 0x136B08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136B08u;
label_136b08:
    // 0x136b08: 0xc061918  jal         func_186460
label_136b0c:
    if (ctx->pc == 0x136B0Cu) {
        ctx->pc = 0x136B10u;
        goto label_136b10;
    }
    ctx->pc = 0x136B08u;
    SET_GPR_U32(ctx, 31, 0x136B10u);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x136B08u, 0x136B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B10u;
label_136b10:
    // 0x136b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136b14:
    // 0x136b14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136b18:
    // 0x136b18: 0xc061968  jal         func_1865A0
label_136b1c:
    if (ctx->pc == 0x136B1Cu) {
        ctx->pc = 0x136B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B18u;
        // 0x136b1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B20u;
        goto label_136b20;
    }
    ctx->pc = 0x136B18u;
    SET_GPR_U32(ctx, 31, 0x136B20u);
    ctx->pc = 0x136B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B18u;
    // 0x136b1c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x136B18u, 0x136B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B20u;
label_136b20:
    // 0x136b20: 0x93828560  lbu         $v0, -0x7AA0($gp)
    ctx->pc = 0x136b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935904)));
label_136b24:
    // 0x136b24: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_136b28:
    if (ctx->pc == 0x136B28u) {
        ctx->pc = 0x136B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B24u;
        // 0x136b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B2Cu;
        goto label_136b2c;
    }
    ctx->pc = 0x136B24u;
    {
        const bool branch_taken_0x136b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B24u;
        // 0x136b28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b24) {
            ctx->pc = 0x136BC0u;
            goto label_136bc0;
        }
    }
    ctx->pc = 0x136B2Cu;
label_136b2c:
    // 0x136b2c: 0x8382856c  lb          $v0, -0x7A94($gp)
    ctx->pc = 0x136b2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935916)));
label_136b30:
    // 0x136b30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_136b34:
    if (ctx->pc == 0x136B34u) {
        ctx->pc = 0x136B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B30u;
        // 0x136b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B38u;
        goto label_136b38;
    }
    ctx->pc = 0x136B30u;
    {
        const bool branch_taken_0x136b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B30u;
        // 0x136b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b30) {
            ctx->pc = 0x136B48u;
            goto label_136b48;
        }
    }
    ctx->pc = 0x136B38u;
label_136b38:
    // 0x136b38: 0x3c033fcc  lui         $v1, 0x3FCC
    ctx->pc = 0x136b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16332 << 16));
label_136b3c:
    // 0x136b3c: 0xa382856c  sb          $v0, -0x7A94($gp)
    ctx->pc = 0x136b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935916), (uint8_t)GPR_U32(ctx, 2));
label_136b40:
    // 0x136b40: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x136b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_136b44:
    // 0x136b44: 0xaf828568  sw          $v0, -0x7A98($gp)
    ctx->pc = 0x136b44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935912), GPR_U32(ctx, 2));
label_136b48:
    // 0x136b48: 0xc7808568  lwc1        $f0, -0x7A98($gp)
    ctx->pc = 0x136b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136b4c:
    // 0x136b4c: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_136b50:
    // 0x136b50: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x136b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_136b54:
    // 0x136b54: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x136b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_136b58:
    // 0x136b58: 0x83828574  lb          $v0, -0x7A8C($gp)
    ctx->pc = 0x136b58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935924)));
label_136b5c:
    // 0x136b5c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_136b60:
    if (ctx->pc == 0x136B60u) {
        ctx->pc = 0x136B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B5Cu;
        // 0x136b60: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B64u;
        goto label_136b64;
    }
    ctx->pc = 0x136B5Cu;
    {
        const bool branch_taken_0x136b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B5Cu;
        // 0x136b60: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b5c) {
            ctx->pc = 0x136B78u;
            goto label_136b78;
        }
    }
    ctx->pc = 0x136B64u;
label_136b64:
    // 0x136b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136b68:
    // 0x136b68: 0x3c033f84  lui         $v1, 0x3F84
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
label_136b6c:
    // 0x136b6c: 0xa3828574  sb          $v0, -0x7A8C($gp)
    ctx->pc = 0x136b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935924), (uint8_t)GPR_U32(ctx, 2));
label_136b70:
    // 0x136b70: 0x34627ae1  ori         $v0, $v1, 0x7AE1
    ctx->pc = 0x136b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
label_136b74:
    // 0x136b74: 0xaf828570  sw          $v0, -0x7A90($gp)
    ctx->pc = 0x136b74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935920), GPR_U32(ctx, 2));
label_136b78:
    // 0x136b78: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x136b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136b7c:
    // 0x136b7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x136b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136b80:
    // 0x136b80: 0xc7808570  lwc1        $f0, -0x7A90($gp)
    ctx->pc = 0x136b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136b84:
    // 0x136b84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x136b84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_136b88:
    // 0x136b88: 0xc061c5c  jal         func_187170
label_136b8c:
    if (ctx->pc == 0x136B8Cu) {
        ctx->pc = 0x136B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B88u;
        // 0x136b8c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B90u;
        goto label_136b90;
    }
    ctx->pc = 0x136B88u;
    SET_GPR_U32(ctx, 31, 0x136B90u);
    ctx->pc = 0x136B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B88u;
    // 0x136b8c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x136B88u, 0x136B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B90u;
label_136b90:
    // 0x136b90: 0xc04c724  jal         func_131C90
label_136b94:
    if (ctx->pc == 0x136B94u) {
        ctx->pc = 0x136B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B90u;
        // 0x136b94: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136B98u;
        goto label_136b98;
    }
    ctx->pc = 0x136B90u;
    SET_GPR_U32(ctx, 31, 0x136B98u);
    ctx->pc = 0x136B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B90u;
    // 0x136b94: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C90u, 0x136B90u, 0x136B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B98u;
label_136b98:
    // 0x136b98: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x136b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_136b9c:
    // 0x136b9c: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x136b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_136ba0:
    // 0x136ba0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x136ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_136ba4:
    // 0x136ba4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136ba8:
    // 0x136ba8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x136ba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_136bac:
    // 0x136bac: 0x320f809  jalr        $t9
label_136bb0:
    if (ctx->pc == 0x136BB0u) {
        ctx->pc = 0x136BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BACu;
        // 0x136bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BB4u;
        goto label_136bb4;
    }
    ctx->pc = 0x136BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136BB4u);
        ctx->pc = 0x136BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BACu;
        // 0x136bb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136BACu, 0x136BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136BB4u;
label_136bb4:
    // 0x136bb4: 0xc04dba4  jal         func_136E90
label_136bb8:
    if (ctx->pc == 0x136BB8u) {
        ctx->pc = 0x136BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BB4u;
        // 0x136bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BBCu;
        goto label_136bbc;
    }
    ctx->pc = 0x136BB4u;
    SET_GPR_U32(ctx, 31, 0x136BBCu);
    ctx->pc = 0x136BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BB4u;
    // 0x136bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136BB4u, 0x136BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BBCu;
label_136bbc:
    // 0x136bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136bc0:
    // 0x136bc0: 0xc053c54  jal         func_14F150
label_136bc4:
    if (ctx->pc == 0x136BC4u) {
        ctx->pc = 0x136BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BC0u;
        // 0x136bc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BC8u;
        goto label_136bc8;
    }
    ctx->pc = 0x136BC0u;
    SET_GPR_U32(ctx, 31, 0x136BC8u);
    ctx->pc = 0x136BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BC0u;
    // 0x136bc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136BC0u, 0x136BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BC8u;
label_136bc8:
    // 0x136bc8: 0xc060b8c  jal         func_182E30
label_136bcc:
    if (ctx->pc == 0x136BCCu) {
        ctx->pc = 0x136BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BC8u;
        // 0x136bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BD0u;
        goto label_136bd0;
    }
    ctx->pc = 0x136BC8u;
    SET_GPR_U32(ctx, 31, 0x136BD0u);
    ctx->pc = 0x136BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136BC8u;
    // 0x136bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182E30u, 0x136BC8u, 0x136BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136BD0u;
label_136bd0:
    // 0x136bd0: 0x93828558  lbu         $v0, -0x7AA8($gp)
    ctx->pc = 0x136bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935896)));
label_136bd4:
    // 0x136bd4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_136bd8:
    if (ctx->pc == 0x136BD8u) {
        ctx->pc = 0x136BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BD4u;
        // 0x136bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136BDCu;
        goto label_136bdc;
    }
    ctx->pc = 0x136BD4u;
    {
        const bool branch_taken_0x136bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BD4u;
        // 0x136bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bd4) {
            ctx->pc = 0x136C58u;
            goto label_136c58;
        }
    }
    ctx->pc = 0x136BDCu;
label_136bdc:
    // 0x136bdc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x136bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_136be0:
    // 0x136be0: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x136be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_136be4:
    // 0x136be4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x136be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_136be8:
    // 0x136be8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x136be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_136bec:
    // 0x136bec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x136becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_136bf0:
    // 0x136bf0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x136bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_136bf4:
    // 0x136bf4: 0x8382857c  lb          $v0, -0x7A84($gp)
    ctx->pc = 0x136bf4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935932)));
label_136bf8:
    // 0x136bf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_136bfc:
    if (ctx->pc == 0x136BFCu) {
        ctx->pc = 0x136BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BF8u;
        // 0x136bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C00u;
        goto label_136c00;
    }
    ctx->pc = 0x136BF8u;
    {
        const bool branch_taken_0x136bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136BF8u;
        // 0x136bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136bf8) {
            ctx->pc = 0x136C10u;
            goto label_136c10;
        }
    }
    ctx->pc = 0x136C00u;
label_136c00:
    // 0x136c00: 0x3c033f84  lui         $v1, 0x3F84
    ctx->pc = 0x136c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16260 << 16));
label_136c04:
    // 0x136c04: 0xa382857c  sb          $v0, -0x7A84($gp)
    ctx->pc = 0x136c04u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935932), (uint8_t)GPR_U32(ctx, 2));
label_136c08:
    // 0x136c08: 0x34627ae1  ori         $v0, $v1, 0x7AE1
    ctx->pc = 0x136c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31457);
label_136c0c:
    // 0x136c0c: 0xaf828578  sw          $v0, -0x7A88($gp)
    ctx->pc = 0x136c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935928), GPR_U32(ctx, 2));
label_136c10:
    // 0x136c10: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x136c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_136c14:
    // 0x136c14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x136c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_136c18:
    // 0x136c18: 0xc7808578  lwc1        $f0, -0x7A88($gp)
    ctx->pc = 0x136c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_136c1c:
    // 0x136c1c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x136c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_136c20:
    // 0x136c20: 0xc061c5c  jal         func_187170
label_136c24:
    if (ctx->pc == 0x136C24u) {
        ctx->pc = 0x136C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C20u;
        // 0x136c24: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C28u;
        goto label_136c28;
    }
    ctx->pc = 0x136C20u;
    SET_GPR_U32(ctx, 31, 0x136C28u);
    ctx->pc = 0x136C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C20u;
    // 0x136c24: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x187170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187170u, 0x136C20u, 0x136C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C28u;
label_136c28:
    // 0x136c28: 0xc04c724  jal         func_131C90
label_136c2c:
    if (ctx->pc == 0x136C2Cu) {
        ctx->pc = 0x136C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C28u;
        // 0x136c2c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C30u;
        goto label_136c30;
    }
    ctx->pc = 0x136C28u;
    SET_GPR_U32(ctx, 31, 0x136C30u);
    ctx->pc = 0x136C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C28u;
    // 0x136c2c: 0x8e240084  lw          $a0, 0x84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131C90u, 0x136C28u, 0x136C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C30u;
label_136c30:
    // 0x136c30: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x136c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_136c34:
    // 0x136c34: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x136c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_136c38:
    // 0x136c38: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x136c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_136c3c:
    // 0x136c3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x136c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_136c40:
    // 0x136c40: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x136c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_136c44:
    // 0x136c44: 0x320f809  jalr        $t9
label_136c48:
    if (ctx->pc == 0x136C48u) {
        ctx->pc = 0x136C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C44u;
        // 0x136c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C4Cu;
        goto label_136c4c;
    }
    ctx->pc = 0x136C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x136C4Cu);
        ctx->pc = 0x136C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C44u;
        // 0x136c48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136C44u, 0x136C4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136C4Cu;
label_136c4c:
    // 0x136c4c: 0xc04dba4  jal         func_136E90
label_136c50:
    if (ctx->pc == 0x136C50u) {
        ctx->pc = 0x136C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C4Cu;
        // 0x136c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C54u;
        goto label_136c54;
    }
    ctx->pc = 0x136C4Cu;
    SET_GPR_U32(ctx, 31, 0x136C54u);
    ctx->pc = 0x136C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C4Cu;
    // 0x136c50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136E90u, 0x136C4Cu, 0x136C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C54u;
label_136c54:
    // 0x136c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136c58:
    // 0x136c58: 0xc053c54  jal         func_14F150
label_136c5c:
    if (ctx->pc == 0x136C5Cu) {
        ctx->pc = 0x136C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C58u;
        // 0x136c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C60u;
        goto label_136c60;
    }
    ctx->pc = 0x136C58u;
    SET_GPR_U32(ctx, 31, 0x136C60u);
    ctx->pc = 0x136C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C58u;
    // 0x136c5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136C58u, 0x136C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C60u;
label_136c60:
    // 0x136c60: 0xc049e34  jal         func_1278D0
label_136c64:
    if (ctx->pc == 0x136C64u) {
        ctx->pc = 0x136C68u;
        goto label_136c68;
    }
    ctx->pc = 0x136C60u;
    SET_GPR_U32(ctx, 31, 0x136C68u);
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136C60u, 0x136C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C68u;
label_136c68:
    // 0x136c68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136c6c:
    // 0x136c6c: 0xc049e48  jal         func_127920
label_136c70:
    if (ctx->pc == 0x136C70u) {
        ctx->pc = 0x136C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C6Cu;
        // 0x136c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C74u;
        goto label_136c74;
    }
    ctx->pc = 0x136C6Cu;
    SET_GPR_U32(ctx, 31, 0x136C74u);
    ctx->pc = 0x136C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C6Cu;
    // 0x136c70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127920u, 0x136C6Cu, 0x136C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C74u;
label_136c74:
    // 0x136c74: 0xc061918  jal         func_186460
label_136c78:
    if (ctx->pc == 0x136C78u) {
        ctx->pc = 0x136C7Cu;
        goto label_136c7c;
    }
    ctx->pc = 0x136C74u;
    SET_GPR_U32(ctx, 31, 0x136C7Cu);
    ctx->pc = 0x186460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186460u, 0x136C74u, 0x136C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C7Cu;
label_136c7c:
    // 0x136c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x136c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_136c80:
    // 0x136c80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x136c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136c84:
    // 0x136c84: 0xc061968  jal         func_1865A0
label_136c88:
    if (ctx->pc == 0x136C88u) {
        ctx->pc = 0x136C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C84u;
        // 0x136c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136C8Cu;
        goto label_136c8c;
    }
    ctx->pc = 0x136C84u;
    SET_GPR_U32(ctx, 31, 0x136C8Cu);
    ctx->pc = 0x136C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C84u;
    // 0x136c88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1865A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1865A0u, 0x136C84u, 0x136C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C8Cu;
label_136c8c:
    // 0x136c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136c90:
    // 0x136c90: 0xc053ca4  jal         func_14F290
label_136c94:
    if (ctx->pc == 0x136C94u) {
        ctx->pc = 0x136C98u;
        goto label_136c98;
    }
    ctx->pc = 0x136C90u;
    SET_GPR_U32(ctx, 31, 0x136C98u);
    ctx->pc = 0x14F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F290u, 0x136C90u, 0x136C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C98u;
label_136c98:
    // 0x136c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136c9c:
    // 0x136c9c: 0xc060778  jal         func_181DE0
label_136ca0:
    if (ctx->pc == 0x136CA0u) {
        ctx->pc = 0x136CA4u;
        goto label_136ca4;
    }
    ctx->pc = 0x136C9Cu;
    SET_GPR_U32(ctx, 31, 0x136CA4u);
    ctx->pc = 0x181DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181DE0u, 0x136C9Cu, 0x136CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CA4u;
label_136ca4:
    // 0x136ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_136ca8:
    // 0x136ca8: 0xc053c54  jal         func_14F150
label_136cac:
    if (ctx->pc == 0x136CACu) {
        ctx->pc = 0x136CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CA8u;
        // 0x136cac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CB0u;
        goto label_136cb0;
    }
    ctx->pc = 0x136CA8u;
    SET_GPR_U32(ctx, 31, 0x136CB0u);
    ctx->pc = 0x136CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CA8u;
    // 0x136cac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F150u, 0x136CA8u, 0x136CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CB0u;
label_136cb0:
    // 0x136cb0: 0x8f82851c  lw          $v0, -0x7AE4($gp)
    ctx->pc = 0x136cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
label_136cb4:
    // 0x136cb4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x136cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_136cb8:
    // 0x136cb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x136cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_136cbc:
    // 0x136cbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x136cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_136cc0:
    // 0x136cc0: 0xc049e34  jal         func_1278D0
label_136cc4:
    if (ctx->pc == 0x136CC4u) {
        ctx->pc = 0x136CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC0u;
        // 0x136cc4: 0xaf82851c  sw          $v0, -0x7AE4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CC8u;
        goto label_136cc8;
    }
    ctx->pc = 0x136CC0u;
    SET_GPR_U32(ctx, 31, 0x136CC8u);
    ctx->pc = 0x136CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC0u;
    // 0x136cc4: 0xaf82851c  sw          $v0, -0x7AE4($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935836), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x136CC0u, 0x136CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CC8u;
label_136cc8:
    // 0x136cc8: 0xc04a070  jal         func_1281C0
label_136ccc:
    if (ctx->pc == 0x136CCCu) {
        ctx->pc = 0x136CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CC8u;
        // 0x136ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CD0u;
        goto label_136cd0;
    }
    ctx->pc = 0x136CC8u;
    SET_GPR_U32(ctx, 31, 0x136CD0u);
    ctx->pc = 0x136CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC8u;
    // 0x136ccc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281C0u, 0x136CC8u, 0x136CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CD0u;
label_136cd0:
    // 0x136cd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_136cd4:
    // 0x136cd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136cd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_136cd8:
    // 0x136cd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x136cd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_136cdc:
    // 0x136cdc: 0x3e00008  jr          $ra
label_136ce0:
    if (ctx->pc == 0x136CE0u) {
        ctx->pc = 0x136CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CDCu;
        // 0x136ce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136CE4u;
        goto label_fallthrough_0x136cdc;
    }
    ctx->pc = 0x136CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136CDCu;
        // 0x136ce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136cdc:
    ctx->pc = 0x136CE4u;
}
