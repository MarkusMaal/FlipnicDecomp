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

// Function: FUN_00196840
// Address: 0x196840 - 0x196d78
void FUN_00196840_0x196840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00196840_0x196840");
#endif

    switch (ctx->pc) {
        case 0x196840u: goto label_196840;
        case 0x196844u: goto label_196844;
        case 0x196848u: goto label_196848;
        case 0x19684cu: goto label_19684c;
        case 0x196850u: goto label_196850;
        case 0x196854u: goto label_196854;
        case 0x196858u: goto label_196858;
        case 0x19685cu: goto label_19685c;
        case 0x196860u: goto label_196860;
        case 0x196864u: goto label_196864;
        case 0x196868u: goto label_196868;
        case 0x19686cu: goto label_19686c;
        case 0x196870u: goto label_196870;
        case 0x196874u: goto label_196874;
        case 0x196878u: goto label_196878;
        case 0x19687cu: goto label_19687c;
        case 0x196880u: goto label_196880;
        case 0x196884u: goto label_196884;
        case 0x196888u: goto label_196888;
        case 0x19688cu: goto label_19688c;
        case 0x196890u: goto label_196890;
        case 0x196894u: goto label_196894;
        case 0x196898u: goto label_196898;
        case 0x19689cu: goto label_19689c;
        case 0x1968a0u: goto label_1968a0;
        case 0x1968a4u: goto label_1968a4;
        case 0x1968a8u: goto label_1968a8;
        case 0x1968acu: goto label_1968ac;
        case 0x1968b0u: goto label_1968b0;
        case 0x1968b4u: goto label_1968b4;
        case 0x1968b8u: goto label_1968b8;
        case 0x1968bcu: goto label_1968bc;
        case 0x1968c0u: goto label_1968c0;
        case 0x1968c4u: goto label_1968c4;
        case 0x1968c8u: goto label_1968c8;
        case 0x1968ccu: goto label_1968cc;
        case 0x1968d0u: goto label_1968d0;
        case 0x1968d4u: goto label_1968d4;
        case 0x1968d8u: goto label_1968d8;
        case 0x1968dcu: goto label_1968dc;
        case 0x1968e0u: goto label_1968e0;
        case 0x1968e4u: goto label_1968e4;
        case 0x1968e8u: goto label_1968e8;
        case 0x1968ecu: goto label_1968ec;
        case 0x1968f0u: goto label_1968f0;
        case 0x1968f4u: goto label_1968f4;
        case 0x1968f8u: goto label_1968f8;
        case 0x1968fcu: goto label_1968fc;
        case 0x196900u: goto label_196900;
        case 0x196904u: goto label_196904;
        case 0x196908u: goto label_196908;
        case 0x19690cu: goto label_19690c;
        case 0x196910u: goto label_196910;
        case 0x196914u: goto label_196914;
        case 0x196918u: goto label_196918;
        case 0x19691cu: goto label_19691c;
        case 0x196920u: goto label_196920;
        case 0x196924u: goto label_196924;
        case 0x196928u: goto label_196928;
        case 0x19692cu: goto label_19692c;
        case 0x196930u: goto label_196930;
        case 0x196934u: goto label_196934;
        case 0x196938u: goto label_196938;
        case 0x19693cu: goto label_19693c;
        case 0x196940u: goto label_196940;
        case 0x196944u: goto label_196944;
        case 0x196948u: goto label_196948;
        case 0x19694cu: goto label_19694c;
        case 0x196950u: goto label_196950;
        case 0x196954u: goto label_196954;
        case 0x196958u: goto label_196958;
        case 0x19695cu: goto label_19695c;
        case 0x196960u: goto label_196960;
        case 0x196964u: goto label_196964;
        case 0x196968u: goto label_196968;
        case 0x19696cu: goto label_19696c;
        case 0x196970u: goto label_196970;
        case 0x196974u: goto label_196974;
        case 0x196978u: goto label_196978;
        case 0x19697cu: goto label_19697c;
        case 0x196980u: goto label_196980;
        case 0x196984u: goto label_196984;
        case 0x196988u: goto label_196988;
        case 0x19698cu: goto label_19698c;
        case 0x196990u: goto label_196990;
        case 0x196994u: goto label_196994;
        case 0x196998u: goto label_196998;
        case 0x19699cu: goto label_19699c;
        case 0x1969a0u: goto label_1969a0;
        case 0x1969a4u: goto label_1969a4;
        case 0x1969a8u: goto label_1969a8;
        case 0x1969acu: goto label_1969ac;
        case 0x1969b0u: goto label_1969b0;
        case 0x1969b4u: goto label_1969b4;
        case 0x1969b8u: goto label_1969b8;
        case 0x1969bcu: goto label_1969bc;
        case 0x1969c0u: goto label_1969c0;
        case 0x1969c4u: goto label_1969c4;
        case 0x1969c8u: goto label_1969c8;
        case 0x1969ccu: goto label_1969cc;
        case 0x1969d0u: goto label_1969d0;
        case 0x1969d4u: goto label_1969d4;
        case 0x1969d8u: goto label_1969d8;
        case 0x1969dcu: goto label_1969dc;
        case 0x1969e0u: goto label_1969e0;
        case 0x1969e4u: goto label_1969e4;
        case 0x1969e8u: goto label_1969e8;
        case 0x1969ecu: goto label_1969ec;
        case 0x1969f0u: goto label_1969f0;
        case 0x1969f4u: goto label_1969f4;
        case 0x1969f8u: goto label_1969f8;
        case 0x1969fcu: goto label_1969fc;
        case 0x196a00u: goto label_196a00;
        case 0x196a04u: goto label_196a04;
        case 0x196a08u: goto label_196a08;
        case 0x196a0cu: goto label_196a0c;
        case 0x196a10u: goto label_196a10;
        case 0x196a14u: goto label_196a14;
        case 0x196a18u: goto label_196a18;
        case 0x196a1cu: goto label_196a1c;
        case 0x196a20u: goto label_196a20;
        case 0x196a24u: goto label_196a24;
        case 0x196a28u: goto label_196a28;
        case 0x196a2cu: goto label_196a2c;
        case 0x196a30u: goto label_196a30;
        case 0x196a34u: goto label_196a34;
        case 0x196a38u: goto label_196a38;
        case 0x196a3cu: goto label_196a3c;
        case 0x196a40u: goto label_196a40;
        case 0x196a44u: goto label_196a44;
        case 0x196a48u: goto label_196a48;
        case 0x196a4cu: goto label_196a4c;
        case 0x196a50u: goto label_196a50;
        case 0x196a54u: goto label_196a54;
        case 0x196a58u: goto label_196a58;
        case 0x196a5cu: goto label_196a5c;
        case 0x196a60u: goto label_196a60;
        case 0x196a64u: goto label_196a64;
        case 0x196a68u: goto label_196a68;
        case 0x196a6cu: goto label_196a6c;
        case 0x196a70u: goto label_196a70;
        case 0x196a74u: goto label_196a74;
        case 0x196a78u: goto label_196a78;
        case 0x196a7cu: goto label_196a7c;
        case 0x196a80u: goto label_196a80;
        case 0x196a84u: goto label_196a84;
        case 0x196a88u: goto label_196a88;
        case 0x196a8cu: goto label_196a8c;
        case 0x196a90u: goto label_196a90;
        case 0x196a94u: goto label_196a94;
        case 0x196a98u: goto label_196a98;
        case 0x196a9cu: goto label_196a9c;
        case 0x196aa0u: goto label_196aa0;
        case 0x196aa4u: goto label_196aa4;
        case 0x196aa8u: goto label_196aa8;
        case 0x196aacu: goto label_196aac;
        case 0x196ab0u: goto label_196ab0;
        case 0x196ab4u: goto label_196ab4;
        case 0x196ab8u: goto label_196ab8;
        case 0x196abcu: goto label_196abc;
        case 0x196ac0u: goto label_196ac0;
        case 0x196ac4u: goto label_196ac4;
        case 0x196ac8u: goto label_196ac8;
        case 0x196accu: goto label_196acc;
        case 0x196ad0u: goto label_196ad0;
        case 0x196ad4u: goto label_196ad4;
        case 0x196ad8u: goto label_196ad8;
        case 0x196adcu: goto label_196adc;
        case 0x196ae0u: goto label_196ae0;
        case 0x196ae4u: goto label_196ae4;
        case 0x196ae8u: goto label_196ae8;
        case 0x196aecu: goto label_196aec;
        case 0x196af0u: goto label_196af0;
        case 0x196af4u: goto label_196af4;
        case 0x196af8u: goto label_196af8;
        case 0x196afcu: goto label_196afc;
        case 0x196b00u: goto label_196b00;
        case 0x196b04u: goto label_196b04;
        case 0x196b08u: goto label_196b08;
        case 0x196b0cu: goto label_196b0c;
        case 0x196b10u: goto label_196b10;
        case 0x196b14u: goto label_196b14;
        case 0x196b18u: goto label_196b18;
        case 0x196b1cu: goto label_196b1c;
        case 0x196b20u: goto label_196b20;
        case 0x196b24u: goto label_196b24;
        case 0x196b28u: goto label_196b28;
        case 0x196b2cu: goto label_196b2c;
        case 0x196b30u: goto label_196b30;
        case 0x196b34u: goto label_196b34;
        case 0x196b38u: goto label_196b38;
        case 0x196b3cu: goto label_196b3c;
        case 0x196b40u: goto label_196b40;
        case 0x196b44u: goto label_196b44;
        case 0x196b48u: goto label_196b48;
        case 0x196b4cu: goto label_196b4c;
        case 0x196b50u: goto label_196b50;
        case 0x196b54u: goto label_196b54;
        case 0x196b58u: goto label_196b58;
        case 0x196b5cu: goto label_196b5c;
        case 0x196b60u: goto label_196b60;
        case 0x196b64u: goto label_196b64;
        case 0x196b68u: goto label_196b68;
        case 0x196b6cu: goto label_196b6c;
        case 0x196b70u: goto label_196b70;
        case 0x196b74u: goto label_196b74;
        case 0x196b78u: goto label_196b78;
        case 0x196b7cu: goto label_196b7c;
        case 0x196b80u: goto label_196b80;
        case 0x196b84u: goto label_196b84;
        case 0x196b88u: goto label_196b88;
        case 0x196b8cu: goto label_196b8c;
        case 0x196b90u: goto label_196b90;
        case 0x196b94u: goto label_196b94;
        case 0x196b98u: goto label_196b98;
        case 0x196b9cu: goto label_196b9c;
        case 0x196ba0u: goto label_196ba0;
        case 0x196ba4u: goto label_196ba4;
        case 0x196ba8u: goto label_196ba8;
        case 0x196bacu: goto label_196bac;
        case 0x196bb0u: goto label_196bb0;
        case 0x196bb4u: goto label_196bb4;
        case 0x196bb8u: goto label_196bb8;
        case 0x196bbcu: goto label_196bbc;
        case 0x196bc0u: goto label_196bc0;
        case 0x196bc4u: goto label_196bc4;
        case 0x196bc8u: goto label_196bc8;
        case 0x196bccu: goto label_196bcc;
        case 0x196bd0u: goto label_196bd0;
        case 0x196bd4u: goto label_196bd4;
        case 0x196bd8u: goto label_196bd8;
        case 0x196bdcu: goto label_196bdc;
        case 0x196be0u: goto label_196be0;
        case 0x196be4u: goto label_196be4;
        case 0x196be8u: goto label_196be8;
        case 0x196becu: goto label_196bec;
        case 0x196bf0u: goto label_196bf0;
        case 0x196bf4u: goto label_196bf4;
        case 0x196bf8u: goto label_196bf8;
        case 0x196bfcu: goto label_196bfc;
        case 0x196c00u: goto label_196c00;
        case 0x196c04u: goto label_196c04;
        case 0x196c08u: goto label_196c08;
        case 0x196c0cu: goto label_196c0c;
        case 0x196c10u: goto label_196c10;
        case 0x196c14u: goto label_196c14;
        case 0x196c18u: goto label_196c18;
        case 0x196c1cu: goto label_196c1c;
        case 0x196c20u: goto label_196c20;
        case 0x196c24u: goto label_196c24;
        case 0x196c28u: goto label_196c28;
        case 0x196c2cu: goto label_196c2c;
        case 0x196c30u: goto label_196c30;
        case 0x196c34u: goto label_196c34;
        case 0x196c38u: goto label_196c38;
        case 0x196c3cu: goto label_196c3c;
        case 0x196c40u: goto label_196c40;
        case 0x196c44u: goto label_196c44;
        case 0x196c48u: goto label_196c48;
        case 0x196c4cu: goto label_196c4c;
        case 0x196c50u: goto label_196c50;
        case 0x196c54u: goto label_196c54;
        case 0x196c58u: goto label_196c58;
        case 0x196c5cu: goto label_196c5c;
        case 0x196c60u: goto label_196c60;
        case 0x196c64u: goto label_196c64;
        case 0x196c68u: goto label_196c68;
        case 0x196c6cu: goto label_196c6c;
        case 0x196c70u: goto label_196c70;
        case 0x196c74u: goto label_196c74;
        case 0x196c78u: goto label_196c78;
        case 0x196c7cu: goto label_196c7c;
        case 0x196c80u: goto label_196c80;
        case 0x196c84u: goto label_196c84;
        case 0x196c88u: goto label_196c88;
        case 0x196c8cu: goto label_196c8c;
        case 0x196c90u: goto label_196c90;
        case 0x196c94u: goto label_196c94;
        case 0x196c98u: goto label_196c98;
        case 0x196c9cu: goto label_196c9c;
        case 0x196ca0u: goto label_196ca0;
        case 0x196ca4u: goto label_196ca4;
        case 0x196ca8u: goto label_196ca8;
        case 0x196cacu: goto label_196cac;
        case 0x196cb0u: goto label_196cb0;
        case 0x196cb4u: goto label_196cb4;
        case 0x196cb8u: goto label_196cb8;
        case 0x196cbcu: goto label_196cbc;
        case 0x196cc0u: goto label_196cc0;
        case 0x196cc4u: goto label_196cc4;
        case 0x196cc8u: goto label_196cc8;
        case 0x196cccu: goto label_196ccc;
        case 0x196cd0u: goto label_196cd0;
        case 0x196cd4u: goto label_196cd4;
        case 0x196cd8u: goto label_196cd8;
        case 0x196cdcu: goto label_196cdc;
        case 0x196ce0u: goto label_196ce0;
        case 0x196ce4u: goto label_196ce4;
        case 0x196ce8u: goto label_196ce8;
        case 0x196cecu: goto label_196cec;
        case 0x196cf0u: goto label_196cf0;
        case 0x196cf4u: goto label_196cf4;
        case 0x196cf8u: goto label_196cf8;
        case 0x196cfcu: goto label_196cfc;
        case 0x196d00u: goto label_196d00;
        case 0x196d04u: goto label_196d04;
        case 0x196d08u: goto label_196d08;
        case 0x196d0cu: goto label_196d0c;
        case 0x196d10u: goto label_196d10;
        case 0x196d14u: goto label_196d14;
        case 0x196d18u: goto label_196d18;
        case 0x196d1cu: goto label_196d1c;
        case 0x196d20u: goto label_196d20;
        case 0x196d24u: goto label_196d24;
        case 0x196d28u: goto label_196d28;
        case 0x196d2cu: goto label_196d2c;
        case 0x196d30u: goto label_196d30;
        case 0x196d34u: goto label_196d34;
        case 0x196d38u: goto label_196d38;
        case 0x196d3cu: goto label_196d3c;
        case 0x196d40u: goto label_196d40;
        case 0x196d44u: goto label_196d44;
        case 0x196d48u: goto label_196d48;
        case 0x196d4cu: goto label_196d4c;
        case 0x196d50u: goto label_196d50;
        case 0x196d54u: goto label_196d54;
        case 0x196d58u: goto label_196d58;
        case 0x196d5cu: goto label_196d5c;
        case 0x196d60u: goto label_196d60;
        case 0x196d64u: goto label_196d64;
        case 0x196d68u: goto label_196d68;
        case 0x196d6cu: goto label_196d6c;
        case 0x196d70u: goto label_196d70;
        case 0x196d74u: goto label_196d74;
        default: break;
    }

    ctx->pc = 0x196840u;

label_196840:
    // 0x196840: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x196840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_196844:
    // 0x196844: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x196844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_196848:
    // 0x196848: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x196848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_19684c:
    // 0x19684c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x19684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_196850:
    // 0x196850: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x196850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_196854:
    // 0x196854: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x196854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_196858:
    // 0x196858: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x196858u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19685c:
    // 0x19685c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19685cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_196860:
    // 0x196860: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x196860u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_196864:
    // 0x196864: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x196864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_196868:
    // 0x196868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19686c:
    // 0x19686c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_196870:
    // 0x196870: 0xc063dd4  jal         func_18F750
label_196874:
    if (ctx->pc == 0x196874u) {
        ctx->pc = 0x196874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196870u;
        // 0x196874: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196878u;
        goto label_196878;
    }
    ctx->pc = 0x196870u;
    SET_GPR_U32(ctx, 31, 0x196878u);
    ctx->pc = 0x196874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196870u;
    // 0x196874: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x196870u, 0x196878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196878u;
label_196878:
    // 0x196878: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x196878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_19687c:
    // 0x19687c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x19687cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_196880:
    // 0x196880: 0x1044009f  beq         $v0, $a0, . + 4 + (0x9F << 2)
label_196884:
    if (ctx->pc == 0x196884u) {
        ctx->pc = 0x196888u;
        goto label_196888;
    }
    ctx->pc = 0x196880u;
    {
        const bool branch_taken_0x196880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x196880) {
            ctx->pc = 0x196B00u;
            goto label_196b00;
        }
    }
    ctx->pc = 0x196888u;
label_196888:
    // 0x196888: 0x10430130  beq         $v0, $v1, . + 4 + (0x130 << 2)
label_19688c:
    if (ctx->pc == 0x19688Cu) {
        ctx->pc = 0x196890u;
        goto label_196890;
    }
    ctx->pc = 0x196888u;
    {
        const bool branch_taken_0x196888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196888) {
            ctx->pc = 0x196D4Cu;
            goto label_196d4c;
        }
    }
    ctx->pc = 0x196890u;
label_196890:
    // 0x196890: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x196890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_196894:
    // 0x196894: 0x10430091  beq         $v0, $v1, . + 4 + (0x91 << 2)
label_196898:
    if (ctx->pc == 0x196898u) {
        ctx->pc = 0x19689Cu;
        goto label_19689c;
    }
    ctx->pc = 0x196894u;
    {
        const bool branch_taken_0x196894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x196894) {
            ctx->pc = 0x196ADCu;
            goto label_196adc;
        }
    }
    ctx->pc = 0x19689Cu;
label_19689c:
    // 0x19689c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x19689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1968a0:
    // 0x1968a0: 0x10430097  beq         $v0, $v1, . + 4 + (0x97 << 2)
label_1968a4:
    if (ctx->pc == 0x1968A4u) {
        ctx->pc = 0x1968A8u;
        goto label_1968a8;
    }
    ctx->pc = 0x1968A0u;
    {
        const bool branch_taken_0x1968a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1968a0) {
            ctx->pc = 0x196B00u;
            goto label_196b00;
        }
    }
    ctx->pc = 0x1968A8u;
label_1968a8:
    // 0x1968a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1968a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1968ac:
    // 0x1968ac: 0x10430070  beq         $v0, $v1, . + 4 + (0x70 << 2)
label_1968b0:
    if (ctx->pc == 0x1968B0u) {
        ctx->pc = 0x1968B4u;
        goto label_1968b4;
    }
    ctx->pc = 0x1968ACu;
    {
        const bool branch_taken_0x1968ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1968ac) {
            ctx->pc = 0x196A70u;
            goto label_196a70;
        }
    }
    ctx->pc = 0x1968B4u;
label_1968b4:
    // 0x1968b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1968b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1968b8:
    // 0x1968b8: 0x10430028  beq         $v0, $v1, . + 4 + (0x28 << 2)
label_1968bc:
    if (ctx->pc == 0x1968BCu) {
        ctx->pc = 0x1968C0u;
        goto label_1968c0;
    }
    ctx->pc = 0x1968B8u;
    {
        const bool branch_taken_0x1968b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1968b8) {
            ctx->pc = 0x19695Cu;
            goto label_19695c;
        }
    }
    ctx->pc = 0x1968C0u;
label_1968c0:
    // 0x1968c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1968c4:
    if (ctx->pc == 0x1968C4u) {
        ctx->pc = 0x1968C8u;
        goto label_1968c8;
    }
    ctx->pc = 0x1968C0u;
    {
        const bool branch_taken_0x1968c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1968c0) {
            ctx->pc = 0x1968D0u;
            goto label_1968d0;
        }
    }
    ctx->pc = 0x1968C8u;
label_1968c8:
    // 0x1968c8: 0x1000008e  b           . + 4 + (0x8E << 2)
label_1968cc:
    if (ctx->pc == 0x1968CCu) {
        ctx->pc = 0x1968CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968C8u;
        // 0x1968cc: 0x8ea30324  lw          $v1, 0x324($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1968D0u;
        goto label_1968d0;
    }
    ctx->pc = 0x1968C8u;
    {
        const bool branch_taken_0x1968c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1968CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968C8u;
        // 0x1968cc: 0x8ea30324  lw          $v1, 0x324($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1968c8) {
            ctx->pc = 0x196B04u;
            goto label_196b04;
        }
    }
    ctx->pc = 0x1968D0u;
label_1968d0:
    // 0x1968d0: 0xaea00324  sw          $zero, 0x324($s5)
    ctx->pc = 0x1968d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 0));
label_1968d4:
    // 0x1968d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1968d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1968d8:
    // 0x1968d8: 0x8ea20664  lw          $v0, 0x664($s5)
    ctx->pc = 0x1968d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_1968dc:
    // 0x1968dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1968dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1968e0:
    // 0x1968e0: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x1968e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1968e4:
    // 0x1968e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1968e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1968e8:
    // 0x1968e8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1968e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1968ec:
    // 0x1968ec: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1968f0:
    if (ctx->pc == 0x1968F0u) {
        ctx->pc = 0x1968F4u;
        goto label_1968f4;
    }
    ctx->pc = 0x1968ECu;
    {
        const bool branch_taken_0x1968ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1968ec) {
            ctx->pc = 0x196924u;
            goto label_196924;
        }
    }
    ctx->pc = 0x1968F4u;
label_1968f4:
    // 0x1968f4: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1968f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1968f8:
    // 0x1968f8: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x1968f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1968fc:
    // 0x1968fc: 0xc057040  jal         func_15C100
label_196900:
    if (ctx->pc == 0x196900u) {
        ctx->pc = 0x196900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1968FCu;
        // 0x196900: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196904u;
        goto label_196904;
    }
    ctx->pc = 0x1968FCu;
    SET_GPR_U32(ctx, 31, 0x196904u);
    ctx->pc = 0x196900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1968FCu;
    // 0x196900: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C100u, 0x1968FCu, 0x196904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196904u;
label_196904:
    // 0x196904: 0x2b21821  addu        $v1, $s5, $s2
    ctx->pc = 0x196904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_196908:
    // 0x196908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x196908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19690c:
    // 0x19690c: 0xac620450  sw          $v0, 0x450($v1)
    ctx->pc = 0x19690cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1104), GPR_U32(ctx, 2));
label_196910:
    // 0x196910: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x196910u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_196914:
    // 0x196914: 0xac710490  sw          $s1, 0x490($v1)
    ctx->pc = 0x196914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1168), GPR_U32(ctx, 17));
label_196918:
    // 0x196918: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x196918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_19691c:
    // 0x19691c: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_196920:
    if (ctx->pc == 0x196920u) {
        ctx->pc = 0x196920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19691Cu;
        // 0x196920: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196924u;
        goto label_196924;
    }
    ctx->pc = 0x19691Cu;
    {
        const bool branch_taken_0x19691c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19691Cu;
        // 0x196920: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19691c) {
            ctx->pc = 0x1968E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1968e4;
        }
    }
    ctx->pc = 0x196924u;
label_196924:
    // 0x196924: 0x0  nop
    ctx->pc = 0x196924u;
    // NOP
label_196928:
    // 0x196928: 0xaeb00340  sw          $s0, 0x340($s5)
    ctx->pc = 0x196928u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 832), GPR_U32(ctx, 16));
label_19692c:
    // 0x19692c: 0xaea00674  sw          $zero, 0x674($s5)
    ctx->pc = 0x19692cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 0));
label_196930:
    // 0x196930: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196934:
    // 0x196934: 0xc063e14  jal         func_18F850
label_196938:
    if (ctx->pc == 0x196938u) {
        ctx->pc = 0x196938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196934u;
        // 0x196938: 0xaea00678  sw          $zero, 0x678($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19693Cu;
        goto label_19693c;
    }
    ctx->pc = 0x196934u;
    SET_GPR_U32(ctx, 31, 0x19693Cu);
    ctx->pc = 0x196938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196934u;
    // 0x196938: 0xaea00678  sw          $zero, 0x678($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x196934u, 0x19693Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19693Cu;
label_19693c:
    // 0x19693c: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x19693cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196940:
    // 0x196940: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196944:
    // 0x196944: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x196944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_196948:
    // 0x196948: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x196948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19694c:
    // 0x19694c: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x19694cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_196950:
    // 0x196950: 0xc064918  jal         func_192460
label_196954:
    if (ctx->pc == 0x196954u) {
        ctx->pc = 0x196954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196950u;
        // 0x196954: 0xa043002d  sb          $v1, 0x2D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196958u;
        goto label_196958;
    }
    ctx->pc = 0x196950u;
    SET_GPR_U32(ctx, 31, 0x196958u);
    ctx->pc = 0x196954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196950u;
    // 0x196954: 0xa043002d  sb          $v1, 0x2D($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192460u, 0x196950u, 0x196958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196958u;
label_196958:
    // 0x196958: 0xaea2067c  sw          $v0, 0x67C($s5)
    ctx->pc = 0x196958u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1660), GPR_U32(ctx, 2));
label_19695c:
    // 0x19695c: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x19695cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196960:
    // 0x196960: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x196960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_196964:
    // 0x196964: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x196964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_196968:
    // 0x196968: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x196968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19696c:
    // 0x19696c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x19696cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_196970:
    // 0x196970: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_196974:
    if (ctx->pc == 0x196974u) {
        ctx->pc = 0x196978u;
        goto label_196978;
    }
    ctx->pc = 0x196970u;
    {
        const bool branch_taken_0x196970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196970) {
            ctx->pc = 0x196B00u;
            goto label_196b00;
        }
    }
    ctx->pc = 0x196978u;
label_196978:
    // 0x196978: 0x8cb72c10  lw          $s7, 0x2C10($a1)
    ctx->pc = 0x196978u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11280)));
label_19697c:
    // 0x19697c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19697cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196980:
    // 0x196980: 0x10000035  b           . + 4 + (0x35 << 2)
label_196984:
    if (ctx->pc == 0x196984u) {
        ctx->pc = 0x196984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196980u;
        // 0x196984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196988u;
        goto label_196988;
    }
    ctx->pc = 0x196980u;
    {
        const bool branch_taken_0x196980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196980u;
        // 0x196984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196980) {
            ctx->pc = 0x196A58u;
            goto label_196a58;
        }
    }
    ctx->pc = 0x196988u;
label_196988:
    // 0x196988: 0x2b09021  addu        $s2, $s5, $s0
    ctx->pc = 0x196988u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_19698c:
    // 0x19698c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19698cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196990:
    // 0x196990: 0x8e430490  lw          $v1, 0x490($s2)
    ctx->pc = 0x196990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
label_196994:
    // 0x196994: 0x26510490  addiu       $s1, $s2, 0x490
    ctx->pc = 0x196994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
label_196998:
    // 0x196998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19699c:
    // 0x19699c: 0x2465002c  addiu       $a1, $v1, 0x2C
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_1969a0:
    // 0x1969a0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1969a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1969a4:
    // 0x1969a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1969a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1969a8:
    // 0x1969a8: 0x12e30009  beq         $s7, $v1, . + 4 + (0x9 << 2)
label_1969ac:
    if (ctx->pc == 0x1969ACu) {
        ctx->pc = 0x1969B0u;
        goto label_1969b0;
    }
    ctx->pc = 0x1969A8u;
    {
        const bool branch_taken_0x1969a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        if (branch_taken_0x1969a8) {
            ctx->pc = 0x1969D0u;
            goto label_1969d0;
        }
    }
    ctx->pc = 0x1969B0u;
label_1969b0:
    // 0x1969b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1969b4:
    // 0x1969b4: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x1969b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1969b8:
    // 0x1969b8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1969bc:
    if (ctx->pc == 0x1969BCu) {
        ctx->pc = 0x1969BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B8u;
        // 0x1969bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969C0u;
        goto label_1969c0;
    }
    ctx->pc = 0x1969B8u;
    {
        const bool branch_taken_0x1969b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969B8u;
        // 0x1969bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969b8) {
            ctx->pc = 0x1969D0u;
            goto label_1969d0;
        }
    }
    ctx->pc = 0x1969C0u;
label_1969c0:
    // 0x1969c0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x1969c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1969c4:
    // 0x1969c4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1969c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1969c8:
    // 0x1969c8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_1969cc:
    if (ctx->pc == 0x1969CCu) {
        ctx->pc = 0x1969D0u;
        goto label_1969d0;
    }
    ctx->pc = 0x1969C8u;
    {
        const bool branch_taken_0x1969c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1969c8) {
            ctx->pc = 0x1969A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1969a0;
        }
    }
    ctx->pc = 0x1969D0u;
label_1969d0:
    // 0x1969d0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x1969d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1969d4:
    // 0x1969d4: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_1969d8:
    if (ctx->pc == 0x1969D8u) {
        ctx->pc = 0x1969DCu;
        goto label_1969dc;
    }
    ctx->pc = 0x1969D4u;
    {
        const bool branch_taken_0x1969d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969d4) {
            ctx->pc = 0x196A50u;
            goto label_196a50;
        }
    }
    ctx->pc = 0x1969DCu;
label_1969dc:
    // 0x1969dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1969dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1969e0:
    // 0x1969e0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1969e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1969e4:
    // 0x1969e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1969e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1969e8:
    // 0x1969e8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_1969ec:
    if (ctx->pc == 0x1969ECu) {
        ctx->pc = 0x1969F0u;
        goto label_1969f0;
    }
    ctx->pc = 0x1969E8u;
    {
        const bool branch_taken_0x1969e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969e8) {
            ctx->pc = 0x196A50u;
            goto label_196a50;
        }
    }
    ctx->pc = 0x1969F0u;
label_1969f0:
    // 0x1969f0: 0xc057f74  jal         func_15FDD0
label_1969f4:
    if (ctx->pc == 0x1969F4u) {
        ctx->pc = 0x1969F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969F0u;
        // 0x1969f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969F8u;
        goto label_1969f8;
    }
    ctx->pc = 0x1969F0u;
    SET_GPR_U32(ctx, 31, 0x1969F8u);
    ctx->pc = 0x1969F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1969F0u;
    // 0x1969f4: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FDD0u, 0x1969F0u, 0x1969F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969F8u;
label_1969f8:
    // 0x1969f8: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
label_1969fc:
    if (ctx->pc == 0x1969FCu) {
        ctx->pc = 0x196A00u;
        goto label_196a00;
    }
    ctx->pc = 0x1969F8u;
    {
        const bool branch_taken_0x1969f8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1969f8) {
            ctx->pc = 0x196A50u;
            goto label_196a50;
        }
    }
    ctx->pc = 0x196A00u;
label_196a00:
    // 0x196a00: 0xc057f04  jal         func_15FC10
label_196a04:
    if (ctx->pc == 0x196A04u) {
        ctx->pc = 0x196A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A00u;
        // 0x196a04: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A08u;
        goto label_196a08;
    }
    ctx->pc = 0x196A00u;
    SET_GPR_U32(ctx, 31, 0x196A08u);
    ctx->pc = 0x196A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A00u;
    // 0x196a04: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FC10u, 0x196A00u, 0x196A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A08u;
label_196a08:
    // 0x196a08: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x196a08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196a0c:
    // 0x196a0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x196a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_196a10:
    // 0x196a10: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196a14:
    // 0x196a14: 0x8c460024  lw          $a2, 0x24($v0)
    ctx->pc = 0x196a14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_196a18:
    // 0x196a18: 0xc0422e0  jal         func_108B80
label_196a1c:
    if (ctx->pc == 0x196A1Cu) {
        ctx->pc = 0x196A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A18u;
        // 0x196a1c: 0x8e450450  lw          $a1, 0x450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A20u;
        goto label_196a20;
    }
    ctx->pc = 0x196A18u;
    SET_GPR_U32(ctx, 31, 0x196A20u);
    ctx->pc = 0x196A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A18u;
    // 0x196a1c: 0x8e450450  lw          $a1, 0x450($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x196A18u, 0x196A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A20u;
label_196a20:
    // 0x196a20: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x196a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196a24:
    // 0x196a24: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x196a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_196a28:
    // 0x196a28: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x196a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_196a2c:
    // 0x196a2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x196a2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_196a30:
    // 0x196a30: 0xc057ef0  jal         func_15FBC0
label_196a34:
    if (ctx->pc == 0x196A34u) {
        ctx->pc = 0x196A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A30u;
        // 0x196a34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A38u;
        goto label_196a38;
    }
    ctx->pc = 0x196A30u;
    SET_GPR_U32(ctx, 31, 0x196A38u);
    ctx->pc = 0x196A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A30u;
    // 0x196a34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FBC0u, 0x196A30u, 0x196A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A38u;
label_196a38:
    // 0x196a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196a3c:
    // 0x196a3c: 0xc063e08  jal         func_18F820
label_196a40:
    if (ctx->pc == 0x196A40u) {
        ctx->pc = 0x196A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A3Cu;
        // 0x196a40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A44u;
        goto label_196a44;
    }
    ctx->pc = 0x196A3Cu;
    SET_GPR_U32(ctx, 31, 0x196A44u);
    ctx->pc = 0x196A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A3Cu;
    // 0x196a40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196A3Cu, 0x196A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A44u;
label_196a44:
    // 0x196a44: 0xaeb30674  sw          $s3, 0x674($s5)
    ctx->pc = 0x196a44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1652), GPR_U32(ctx, 19));
label_196a48:
    // 0x196a48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196a4c:
    // 0x196a4c: 0xaea30678  sw          $v1, 0x678($s5)
    ctx->pc = 0x196a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 3));
label_196a50:
    // 0x196a50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x196a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_196a54:
    // 0x196a54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x196a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_196a58:
    // 0x196a58: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_196a5c:
    // 0x196a5c: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x196a5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_196a60:
    // 0x196a60: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
label_196a64:
    if (ctx->pc == 0x196A64u) {
        ctx->pc = 0x196A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A60u;
        // 0x196a64: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A68u;
        goto label_196a68;
    }
    ctx->pc = 0x196A60u;
    {
        const bool branch_taken_0x196a60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A60u;
        // 0x196a64: 0x2b09021  addu        $s2, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196a60) {
            ctx->pc = 0x19698Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19698c;
        }
    }
    ctx->pc = 0x196A68u;
label_196a68:
    // 0x196a68: 0x10000025  b           . + 4 + (0x25 << 2)
label_196a6c:
    if (ctx->pc == 0x196A6Cu) {
        ctx->pc = 0x196A70u;
        goto label_196a70;
    }
    ctx->pc = 0x196A68u;
    {
        const bool branch_taken_0x196a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a68) {
            ctx->pc = 0x196B00u;
            goto label_196b00;
        }
    }
    ctx->pc = 0x196A70u;
label_196a70:
    // 0x196a70: 0x8ea40674  lw          $a0, 0x674($s5)
    ctx->pc = 0x196a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
label_196a74:
    // 0x196a74: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x196a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196a78:
    // 0x196a78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x196a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_196a7c:
    // 0x196a7c: 0x952021  addu        $a0, $a0, $s5
    ctx->pc = 0x196a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_196a80:
    // 0x196a80: 0x8c840450  lw          $a0, 0x450($a0)
    ctx->pc = 0x196a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_196a84:
    // 0x196a84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x196a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_196a88:
    // 0x196a88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x196a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_196a8c:
    // 0x196a8c: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x196a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_196a90:
    // 0x196a90: 0x8c6301fc  lw          $v1, 0x1FC($v1)
    ctx->pc = 0x196a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 508)));
label_196a94:
    // 0x196a94: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_196a98:
    if (ctx->pc == 0x196A98u) {
        ctx->pc = 0x196A9Cu;
        goto label_196a9c;
    }
    ctx->pc = 0x196A94u;
    {
        const bool branch_taken_0x196a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196a94) {
            ctx->pc = 0x196B00u;
            goto label_196b00;
        }
    }
    ctx->pc = 0x196A9Cu;
label_196a9c:
    // 0x196a9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196aa0:
    // 0x196aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x196aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196aa4:
    // 0x196aa4: 0xc063e08  jal         func_18F820
label_196aa8:
    if (ctx->pc == 0x196AA8u) {
        ctx->pc = 0x196AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AA4u;
        // 0x196aa8: 0xaea00678  sw          $zero, 0x678($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196AACu;
        goto label_196aac;
    }
    ctx->pc = 0x196AA4u;
    SET_GPR_U32(ctx, 31, 0x196AACu);
    ctx->pc = 0x196AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196AA4u;
    // 0x196aa8: 0xaea00678  sw          $zero, 0x678($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 1656), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196AA4u, 0x196AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AACu;
label_196aac:
    // 0x196aac: 0xc7808028  lwc1        $f0, -0x7FD8($gp)
    ctx->pc = 0x196aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196ab0:
    // 0x196ab0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x196ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_196ab4:
    // 0x196ab4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x196ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_196ab8:
    // 0x196ab8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196abc:
    // 0x196abc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x196abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_196ac0:
    // 0x196ac0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x196ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_196ac4:
    // 0x196ac4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x196ac4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_196ac8:
    // 0x196ac8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x196ac8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_196acc:
    // 0x196acc: 0xc063de0  jal         func_18F780
label_196ad0:
    if (ctx->pc == 0x196AD0u) {
        ctx->pc = 0x196AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196ACCu;
        // 0x196ad0: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196AD4u;
        goto label_196ad4;
    }
    ctx->pc = 0x196ACCu;
    SET_GPR_U32(ctx, 31, 0x196AD4u);
    ctx->pc = 0x196AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196ACCu;
    // 0x196ad0: 0x3c058000  lui         $a1, 0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F780u, 0x196ACCu, 0x196AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196AD4u;
label_196ad4:
    // 0x196ad4: 0x1000000a  b           . + 4 + (0xA << 2)
label_196ad8:
    if (ctx->pc == 0x196AD8u) {
        ctx->pc = 0x196ADCu;
        goto label_196adc;
    }
    ctx->pc = 0x196AD4u;
    {
        const bool branch_taken_0x196ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ad4) {
            ctx->pc = 0x196B00u;
            goto label_196b00;
        }
    }
    ctx->pc = 0x196ADCu;
label_196adc:
    // 0x196adc: 0x12a0009b  beqz        $s5, . + 4 + (0x9B << 2)
label_196ae0:
    if (ctx->pc == 0x196AE0u) {
        ctx->pc = 0x196AE4u;
        goto label_196ae4;
    }
    ctx->pc = 0x196ADCu;
    {
        const bool branch_taken_0x196adc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x196adc) {
            ctx->pc = 0x196D4Cu;
            goto label_196d4c;
        }
    }
    ctx->pc = 0x196AE4u;
label_196ae4:
    // 0x196ae4: 0x8eb9031c  lw          $t9, 0x31C($s5)
    ctx->pc = 0x196ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 796)));
label_196ae8:
    // 0x196ae8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x196ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_196aec:
    // 0x196aec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_196af0:
    // 0x196af0: 0x320f809  jalr        $t9
label_196af4:
    if (ctx->pc == 0x196AF4u) {
        ctx->pc = 0x196AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF0u;
        // 0x196af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196AF8u;
        goto label_196af8;
    }
    ctx->pc = 0x196AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x196AF8u);
        ctx->pc = 0x196AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF0u;
        // 0x196af4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196AF0u, 0x196AF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196AF8u;
label_196af8:
    // 0x196af8: 0x10000095  b           . + 4 + (0x95 << 2)
label_196afc:
    if (ctx->pc == 0x196AFCu) {
        ctx->pc = 0x196AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF8u;
        // 0x196afc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B00u;
        goto label_196b00;
    }
    ctx->pc = 0x196AF8u;
    {
        const bool branch_taken_0x196af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196AF8u;
        // 0x196afc: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196af8) {
            ctx->pc = 0x196D50u;
            goto label_196d50;
        }
    }
    ctx->pc = 0x196B00u;
label_196b00:
    // 0x196b00: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x196b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
label_196b04:
    // 0x196b04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x196b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_196b08:
    // 0x196b08: 0xaea30324  sw          $v1, 0x324($s5)
    ctx->pc = 0x196b08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 804), GPR_U32(ctx, 3));
label_196b0c:
    // 0x196b0c: 0x8ea30664  lw          $v1, 0x664($s5)
    ctx->pc = 0x196b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1636)));
label_196b10:
    // 0x196b10: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_196b14:
    // 0x196b14: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_196b18:
    if (ctx->pc == 0x196B18u) {
        ctx->pc = 0x196B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B14u;
        // 0x196b18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B1Cu;
        goto label_196b1c;
    }
    ctx->pc = 0x196B14u;
    {
        const bool branch_taken_0x196b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B14u;
        // 0x196b18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b14) {
            ctx->pc = 0x196B38u;
            goto label_196b38;
        }
    }
    ctx->pc = 0x196B1Cu;
label_196b1c:
    // 0x196b1c: 0x8ea30324  lw          $v1, 0x324($s5)
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 804)));
label_196b20:
    // 0x196b20: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x196b20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_196b24:
    // 0x196b24: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_196b28:
    if (ctx->pc == 0x196B28u) {
        ctx->pc = 0x196B2Cu;
        goto label_196b2c;
    }
    ctx->pc = 0x196B24u;
    {
        const bool branch_taken_0x196b24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x196b24) {
            ctx->pc = 0x196B38u;
            goto label_196b38;
        }
    }
    ctx->pc = 0x196B2Cu;
label_196b2c:
    // 0x196b2c: 0xc057ff8  jal         func_15FFE0
label_196b30:
    if (ctx->pc == 0x196B30u) {
        ctx->pc = 0x196B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B2Cu;
        // 0x196b30: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B34u;
        goto label_196b34;
    }
    ctx->pc = 0x196B2Cu;
    SET_GPR_U32(ctx, 31, 0x196B34u);
    ctx->pc = 0x196B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B2Cu;
    // 0x196b30: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FFE0u, 0x196B2Cu, 0x196B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B34u;
label_196b34:
    // 0x196b34: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196b38:
    // 0x196b38: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x196b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
label_196b3c:
    // 0x196b3c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_196b40:
    if (ctx->pc == 0x196B40u) {
        ctx->pc = 0x196B44u;
        goto label_196b44;
    }
    ctx->pc = 0x196B3Cu;
    {
        const bool branch_taken_0x196b3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196b3c) {
            ctx->pc = 0x196B68u;
            goto label_196b68;
        }
    }
    ctx->pc = 0x196B44u;
label_196b44:
    // 0x196b44: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x196b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196b48:
    // 0x196b48: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x196b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_196b4c:
    // 0x196b4c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x196b4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_196b50:
    // 0x196b50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_196b54:
    if (ctx->pc == 0x196B54u) {
        ctx->pc = 0x196B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B50u;
        // 0x196b54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B58u;
        goto label_196b58;
    }
    ctx->pc = 0x196B50u;
    {
        const bool branch_taken_0x196b50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B50u;
        // 0x196b54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b50) {
            ctx->pc = 0x196B60u;
            goto label_196b60;
        }
    }
    ctx->pc = 0x196B58u;
label_196b58:
    // 0x196b58: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196b5c:
    // 0x196b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196b60:
    // 0x196b60: 0xc063e08  jal         func_18F820
label_196b64:
    if (ctx->pc == 0x196B64u) {
        ctx->pc = 0x196B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196B60u;
        // 0x196b64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196B68u;
        goto label_196b68;
    }
    ctx->pc = 0x196B60u;
    SET_GPR_U32(ctx, 31, 0x196B68u);
    ctx->pc = 0x196B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196B60u;
    // 0x196b64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196B60u, 0x196B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B68u;
label_196b68:
    // 0x196b68: 0x8ea3067c  lw          $v1, 0x67C($s5)
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1660)));
label_196b6c:
    // 0x196b6c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_196b70:
    if (ctx->pc == 0x196B70u) {
        ctx->pc = 0x196B74u;
        goto label_196b74;
    }
    ctx->pc = 0x196B6Cu;
    {
        const bool branch_taken_0x196b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196b6c) {
            ctx->pc = 0x196BA0u;
            goto label_196ba0;
        }
    }
    ctx->pc = 0x196B74u;
label_196b74:
    // 0x196b74: 0x8c640320  lw          $a0, 0x320($v1)
    ctx->pc = 0x196b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 800)));
label_196b78:
    // 0x196b78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_196b7c:
    // 0x196b7c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_196b80:
    if (ctx->pc == 0x196B80u) {
        ctx->pc = 0x196B84u;
        goto label_196b84;
    }
    ctx->pc = 0x196B7Cu;
    {
        const bool branch_taken_0x196b7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x196b7c) {
            ctx->pc = 0x196B9Cu;
            goto label_196b9c;
        }
    }
    ctx->pc = 0x196B84u;
label_196b84:
    // 0x196b84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196b88:
    // 0x196b88: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_196b8c:
    if (ctx->pc == 0x196B8Cu) {
        ctx->pc = 0x196B90u;
        goto label_196b90;
    }
    ctx->pc = 0x196B88u;
    {
        const bool branch_taken_0x196b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x196b88) {
            ctx->pc = 0x196B9Cu;
            goto label_196b9c;
        }
    }
    ctx->pc = 0x196B90u;
label_196b90:
    // 0x196b90: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x196b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_196b94:
    // 0x196b94: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_196b98:
    if (ctx->pc == 0x196B98u) {
        ctx->pc = 0x196B9Cu;
        goto label_196b9c;
    }
    ctx->pc = 0x196B94u;
    {
        const bool branch_taken_0x196b94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x196b94) {
            ctx->pc = 0x196BA0u;
            goto label_196ba0;
        }
    }
    ctx->pc = 0x196B9Cu;
label_196b9c:
    // 0x196b9c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x196b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196ba0:
    // 0x196ba0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x196ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196ba4:
    // 0x196ba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196ba8:
    // 0x196ba8: 0x8c652c00  lw          $a1, 0x2C00($v1)
    ctx->pc = 0x196ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11264)));
label_196bac:
    // 0x196bac: 0x14a40060  bne         $a1, $a0, . + 4 + (0x60 << 2)
label_196bb0:
    if (ctx->pc == 0x196BB0u) {
        ctx->pc = 0x196BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BACu;
        // 0x196bb0: 0x24662c00  addiu       $a2, $v1, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BB4u;
        goto label_196bb4;
    }
    ctx->pc = 0x196BACu;
    {
        const bool branch_taken_0x196bac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x196BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BACu;
        // 0x196bb0: 0x24662c00  addiu       $a2, $v1, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bac) {
            ctx->pc = 0x196D30u;
            goto label_196d30;
        }
    }
    ctx->pc = 0x196BB4u;
label_196bb4:
    // 0x196bb4: 0x1600005e  bnez        $s0, . + 4 + (0x5E << 2)
label_196bb8:
    if (ctx->pc == 0x196BB8u) {
        ctx->pc = 0x196BBCu;
        goto label_196bbc;
    }
    ctx->pc = 0x196BB4u;
    {
        const bool branch_taken_0x196bb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x196bb4) {
            ctx->pc = 0x196D30u;
            goto label_196d30;
        }
    }
    ctx->pc = 0x196BBCu;
label_196bbc:
    // 0x196bbc: 0x8ea40674  lw          $a0, 0x674($s5)
    ctx->pc = 0x196bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1652)));
label_196bc0:
    // 0x196bc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196bc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196bc4:
    // 0x196bc4: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x196bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_196bc8:
    // 0x196bc8: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x196bc8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_196bcc:
    // 0x196bcc: 0xf52021  addu        $a0, $a3, $s5
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_196bd0:
    // 0x196bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196bd4:
    // 0x196bd4: 0x8c840490  lw          $a0, 0x490($a0)
    ctx->pc = 0x196bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
label_196bd8:
    // 0x196bd8: 0x2488002c  addiu       $t0, $a0, 0x2C
    ctx->pc = 0x196bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
label_196bdc:
    // 0x196bdc: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_196be0:
    // 0x196be0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x196be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_196be4:
    // 0x196be4: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
label_196be8:
    if (ctx->pc == 0x196BE8u) {
        ctx->pc = 0x196BECu;
        goto label_196bec;
    }
    ctx->pc = 0x196BE4u;
    {
        const bool branch_taken_0x196be4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x196be4) {
            ctx->pc = 0x196C0Cu;
            goto label_196c0c;
        }
    }
    ctx->pc = 0x196BECu;
label_196bec:
    // 0x196bec: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_196bf0:
    // 0x196bf0: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x196bf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_196bf4:
    // 0x196bf4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_196bf8:
    if (ctx->pc == 0x196BF8u) {
        ctx->pc = 0x196BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BF4u;
        // 0x196bf8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BFCu;
        goto label_196bfc;
    }
    ctx->pc = 0x196BF4u;
    {
        const bool branch_taken_0x196bf4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BF4u;
        // 0x196bf8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bf4) {
            ctx->pc = 0x196C0Cu;
            goto label_196c0c;
        }
    }
    ctx->pc = 0x196BFCu;
label_196bfc:
    // 0x196bfc: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x196bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_196c00:
    // 0x196c00: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x196c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_196c04:
    // 0x196c04: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_196c08:
    if (ctx->pc == 0x196C08u) {
        ctx->pc = 0x196C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C04u;
        // 0x196c08: 0x1062021  addu        $a0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C0Cu;
        goto label_196c0c;
    }
    ctx->pc = 0x196C04u;
    {
        const bool branch_taken_0x196c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x196C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C04u;
        // 0x196c08: 0x1062021  addu        $a0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c04) {
            ctx->pc = 0x196BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196be0;
        }
    }
    ctx->pc = 0x196C0Cu;
label_196c0c:
    // 0x196c0c: 0x0  nop
    ctx->pc = 0x196c0cu;
    // NOP
label_196c10:
    // 0x196c10: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_196c14:
    // 0x196c14: 0x11240006  beq         $t1, $a0, . + 4 + (0x6 << 2)
label_196c18:
    if (ctx->pc == 0x196C18u) {
        ctx->pc = 0x196C1Cu;
        goto label_196c1c;
    }
    ctx->pc = 0x196C14u;
    {
        const bool branch_taken_0x196c14 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 4));
        if (branch_taken_0x196c14) {
            ctx->pc = 0x196C30u;
            goto label_196c30;
        }
    }
    ctx->pc = 0x196C1Cu;
label_196c1c:
    // 0x196c1c: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_196c20:
    // 0x196c20: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_196c24:
    // 0x196c24: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x196c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_196c28:
    // 0x196c28: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
label_196c2c:
    if (ctx->pc == 0x196C2Cu) {
        ctx->pc = 0x196C30u;
        goto label_196c30;
    }
    ctx->pc = 0x196C28u;
    {
        const bool branch_taken_0x196c28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x196c28) {
            ctx->pc = 0x196D30u;
            goto label_196d30;
        }
    }
    ctx->pc = 0x196C30u;
label_196c30:
    // 0x196c30: 0x8ea20678  lw          $v0, 0x678($s5)
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1656)));
label_196c34:
    // 0x196c34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_196c38:
    if (ctx->pc == 0x196C38u) {
        ctx->pc = 0x196C3Cu;
        goto label_196c3c;
    }
    ctx->pc = 0x196C34u;
    {
        const bool branch_taken_0x196c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196c34) {
            ctx->pc = 0x196C60u;
            goto label_196c60;
        }
    }
    ctx->pc = 0x196C3Cu;
label_196c3c:
    // 0x196c3c: 0xf51021  addu        $v0, $a3, $s5
    ctx->pc = 0x196c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 21)));
label_196c40:
    // 0x196c40: 0x8c420450  lw          $v0, 0x450($v0)
    ctx->pc = 0x196c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_196c44:
    // 0x196c44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x196c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_196c48:
    // 0x196c48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_196c4c:
    // 0x196c4c: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x196c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_196c50:
    // 0x196c50: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x196c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_196c54:
    // 0x196c54: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x196c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_196c58:
    // 0x196c58: 0x320f809  jalr        $t9
label_196c5c:
    if (ctx->pc == 0x196C5Cu) {
        ctx->pc = 0x196C60u;
        goto label_196c60;
    }
    ctx->pc = 0x196C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x196C60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C58u, 0x196C60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C60u;
label_196c60:
    // 0x196c60: 0xc057ff8  jal         func_15FFE0
label_196c64:
    if (ctx->pc == 0x196C64u) {
        ctx->pc = 0x196C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C60u;
        // 0x196c64: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C68u;
        goto label_196c68;
    }
    ctx->pc = 0x196C60u;
    SET_GPR_U32(ctx, 31, 0x196C68u);
    ctx->pc = 0x196C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196C60u;
    // 0x196c64: 0x8f8485f4  lw          $a0, -0x7A0C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FFE0u, 0x196C60u, 0x196C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C68u;
label_196c68:
    // 0x196c68: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x196c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196c6c:
    // 0x196c6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x196c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c70:
    // 0x196c70: 0x8ea40340  lw          $a0, 0x340($s5)
    ctx->pc = 0x196c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_196c74:
    // 0x196c74: 0x8c652c10  lw          $a1, 0x2C10($v1)
    ctx->pc = 0x196c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11280)));
label_196c78:
    // 0x196c78: 0x10000025  b           . + 4 + (0x25 << 2)
label_196c7c:
    if (ctx->pc == 0x196C7Cu) {
        ctx->pc = 0x196C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C78u;
        // 0x196c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C80u;
        goto label_196c80;
    }
    ctx->pc = 0x196C78u;
    {
        const bool branch_taken_0x196c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C78u;
        // 0x196c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c78) {
            ctx->pc = 0x196D10u;
            goto label_196d10;
        }
    }
    ctx->pc = 0x196C80u;
label_196c80:
    // 0x196c80: 0x2a71821  addu        $v1, $s5, $a3
    ctx->pc = 0x196c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_196c84:
    // 0x196c84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x196c84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c88:
    // 0x196c88: 0x8c630490  lw          $v1, 0x490($v1)
    ctx->pc = 0x196c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1168)));
label_196c8c:
    // 0x196c8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x196c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c90:
    // 0x196c90: 0x2468002c  addiu       $t0, $v1, 0x2C
    ctx->pc = 0x196c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_196c94:
    // 0x196c94: 0x0  nop
    ctx->pc = 0x196c94u;
    // NOP
label_196c98:
    // 0x196c98: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x196c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_196c9c:
    // 0x196c9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x196c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_196ca0:
    // 0x196ca0: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_196ca4:
    if (ctx->pc == 0x196CA4u) {
        ctx->pc = 0x196CA8u;
        goto label_196ca8;
    }
    ctx->pc = 0x196CA0u;
    {
        const bool branch_taken_0x196ca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x196ca0) {
            ctx->pc = 0x196CC8u;
            goto label_196cc8;
        }
    }
    ctx->pc = 0x196CA8u;
label_196ca8:
    // 0x196ca8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x196ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_196cac:
    // 0x196cac: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x196cacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_196cb0:
    // 0x196cb0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_196cb4:
    if (ctx->pc == 0x196CB4u) {
        ctx->pc = 0x196CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CB0u;
        // 0x196cb4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196CB8u;
        goto label_196cb8;
    }
    ctx->pc = 0x196CB0u;
    {
        const bool branch_taken_0x196cb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x196CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CB0u;
        // 0x196cb4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196cb0) {
            ctx->pc = 0x196CC8u;
            goto label_196cc8;
        }
    }
    ctx->pc = 0x196CB8u;
label_196cb8:
    // 0x196cb8: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x196cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_196cbc:
    // 0x196cbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x196cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_196cc0:
    // 0x196cc0: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_196cc4:
    if (ctx->pc == 0x196CC4u) {
        ctx->pc = 0x196CC8u;
        goto label_196cc8;
    }
    ctx->pc = 0x196CC0u;
    {
        const bool branch_taken_0x196cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x196cc0) {
            ctx->pc = 0x196C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196c94;
        }
    }
    ctx->pc = 0x196CC8u;
label_196cc8:
    // 0x196cc8: 0x29210005  slti        $at, $t1, 0x5
    ctx->pc = 0x196cc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
label_196ccc:
    // 0x196ccc: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
label_196cd0:
    if (ctx->pc == 0x196CD0u) {
        ctx->pc = 0x196CD4u;
        goto label_196cd4;
    }
    ctx->pc = 0x196CCCu;
    {
        const bool branch_taken_0x196ccc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ccc) {
            ctx->pc = 0x196D08u;
            goto label_196d08;
        }
    }
    ctx->pc = 0x196CD4u;
label_196cd4:
    // 0x196cd4: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x196cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_196cd8:
    // 0x196cd8: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x196cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_196cdc:
    // 0x196cdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x196cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_196ce0:
    // 0x196ce0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_196ce4:
    if (ctx->pc == 0x196CE4u) {
        ctx->pc = 0x196CE8u;
        goto label_196ce8;
    }
    ctx->pc = 0x196CE0u;
    {
        const bool branch_taken_0x196ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ce0) {
            ctx->pc = 0x196D08u;
            goto label_196d08;
        }
    }
    ctx->pc = 0x196CE8u;
label_196ce8:
    // 0x196ce8: 0x8ea30320  lw          $v1, 0x320($s5)
    ctx->pc = 0x196ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 800)));
label_196cec:
    // 0x196cec: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_196cf0:
    if (ctx->pc == 0x196CF0u) {
        ctx->pc = 0x196CF4u;
        goto label_196cf4;
    }
    ctx->pc = 0x196CECu;
    {
        const bool branch_taken_0x196cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196cec) {
            ctx->pc = 0x196D1Cu;
            goto label_196d1c;
        }
    }
    ctx->pc = 0x196CF4u;
label_196cf4:
    // 0x196cf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196cf8:
    // 0x196cf8: 0xc063e08  jal         func_18F820
label_196cfc:
    if (ctx->pc == 0x196CFCu) {
        ctx->pc = 0x196CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196CF8u;
        // 0x196cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D00u;
        goto label_196d00;
    }
    ctx->pc = 0x196CF8u;
    SET_GPR_U32(ctx, 31, 0x196D00u);
    ctx->pc = 0x196CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196CF8u;
    // 0x196cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196CF8u, 0x196D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D00u;
label_196d00:
    // 0x196d00: 0x10000006  b           . + 4 + (0x6 << 2)
label_196d04:
    if (ctx->pc == 0x196D04u) {
        ctx->pc = 0x196D08u;
        goto label_196d08;
    }
    ctx->pc = 0x196D00u;
    {
        const bool branch_taken_0x196d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196d00) {
            ctx->pc = 0x196D1Cu;
            goto label_196d1c;
        }
    }
    ctx->pc = 0x196D08u;
label_196d08:
    // 0x196d08: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x196d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_196d0c:
    // 0x196d0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x196d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_196d10:
    // 0x196d10: 0x224182a  slt         $v1, $s1, $a0
    ctx->pc = 0x196d10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_196d14:
    // 0x196d14: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
label_196d18:
    if (ctx->pc == 0x196D18u) {
        ctx->pc = 0x196D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D14u;
        // 0x196d18: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D1Cu;
        goto label_196d1c;
    }
    ctx->pc = 0x196D14u;
    {
        const bool branch_taken_0x196d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x196D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D14u;
        // 0x196d18: 0x2a71821  addu        $v1, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196d14) {
            ctx->pc = 0x196C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196c84;
        }
    }
    ctx->pc = 0x196D1Cu;
label_196d1c:
    // 0x196d1c: 0x0  nop
    ctx->pc = 0x196d1cu;
    // NOP
label_196d20:
    // 0x196d20: 0x8ea30340  lw          $v1, 0x340($s5)
    ctx->pc = 0x196d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 832)));
label_196d24:
    // 0x196d24: 0x16230002  bne         $s1, $v1, . + 4 + (0x2 << 2)
label_196d28:
    if (ctx->pc == 0x196D28u) {
        ctx->pc = 0x196D2Cu;
        goto label_196d2c;
    }
    ctx->pc = 0x196D24u;
    {
        const bool branch_taken_0x196d24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x196d24) {
            ctx->pc = 0x196D30u;
            goto label_196d30;
        }
    }
    ctx->pc = 0x196D2Cu;
label_196d2c:
    // 0x196d2c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x196d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_196d30:
    // 0x196d30: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_196d34:
    if (ctx->pc == 0x196D34u) {
        ctx->pc = 0x196D38u;
        goto label_196d38;
    }
    ctx->pc = 0x196D30u;
    {
        const bool branch_taken_0x196d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x196d30) {
            ctx->pc = 0x196D4Cu;
            goto label_196d4c;
        }
    }
    ctx->pc = 0x196D38u;
label_196d38:
    // 0x196d38: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x196d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_196d3c:
    // 0x196d3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_196d40:
    // 0x196d40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x196d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_196d44:
    // 0x196d44: 0xc063e08  jal         func_18F820
label_196d48:
    if (ctx->pc == 0x196D48u) {
        ctx->pc = 0x196D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D44u;
        // 0x196d48: 0xa040002d  sb          $zero, 0x2D($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D4Cu;
        goto label_196d4c;
    }
    ctx->pc = 0x196D44u;
    SET_GPR_U32(ctx, 31, 0x196D4Cu);
    ctx->pc = 0x196D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196D44u;
    // 0x196d48: 0xa040002d  sb          $zero, 0x2D($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 45), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x196D44u, 0x196D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196D4Cu;
label_196d4c:
    // 0x196d4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x196d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_196d50:
    // 0x196d50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x196d50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196d54:
    // 0x196d54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x196d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196d58:
    // 0x196d58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x196d58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196d5c:
    // 0x196d5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x196d5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_196d60:
    // 0x196d60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x196d60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196d64:
    // 0x196d64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x196d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196d68:
    // 0x196d68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196d68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196d6c:
    // 0x196d6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_196d70:
    // 0x196d70: 0x3e00008  jr          $ra
label_196d74:
    if (ctx->pc == 0x196D74u) {
        ctx->pc = 0x196D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D70u;
        // 0x196d74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196D78u;
        goto label_fallthrough_0x196d70;
    }
    ctx->pc = 0x196D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196D70u;
        // 0x196d74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x196d70:
    ctx->pc = 0x196D78u;
}
