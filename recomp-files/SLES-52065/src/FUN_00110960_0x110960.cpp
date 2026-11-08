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

// Function: FUN_00110960
// Address: 0x110960 - 0x110bb0
void FUN_00110960_0x110960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00110960_0x110960");
#endif

    switch (ctx->pc) {
        case 0x110960u: goto label_110960;
        case 0x110964u: goto label_110964;
        case 0x110968u: goto label_110968;
        case 0x11096cu: goto label_11096c;
        case 0x110970u: goto label_110970;
        case 0x110974u: goto label_110974;
        case 0x110978u: goto label_110978;
        case 0x11097cu: goto label_11097c;
        case 0x110980u: goto label_110980;
        case 0x110984u: goto label_110984;
        case 0x110988u: goto label_110988;
        case 0x11098cu: goto label_11098c;
        case 0x110990u: goto label_110990;
        case 0x110994u: goto label_110994;
        case 0x110998u: goto label_110998;
        case 0x11099cu: goto label_11099c;
        case 0x1109a0u: goto label_1109a0;
        case 0x1109a4u: goto label_1109a4;
        case 0x1109a8u: goto label_1109a8;
        case 0x1109acu: goto label_1109ac;
        case 0x1109b0u: goto label_1109b0;
        case 0x1109b4u: goto label_1109b4;
        case 0x1109b8u: goto label_1109b8;
        case 0x1109bcu: goto label_1109bc;
        case 0x1109c0u: goto label_1109c0;
        case 0x1109c4u: goto label_1109c4;
        case 0x1109c8u: goto label_1109c8;
        case 0x1109ccu: goto label_1109cc;
        case 0x1109d0u: goto label_1109d0;
        case 0x1109d4u: goto label_1109d4;
        case 0x1109d8u: goto label_1109d8;
        case 0x1109dcu: goto label_1109dc;
        case 0x1109e0u: goto label_1109e0;
        case 0x1109e4u: goto label_1109e4;
        case 0x1109e8u: goto label_1109e8;
        case 0x1109ecu: goto label_1109ec;
        case 0x1109f0u: goto label_1109f0;
        case 0x1109f4u: goto label_1109f4;
        case 0x1109f8u: goto label_1109f8;
        case 0x1109fcu: goto label_1109fc;
        case 0x110a00u: goto label_110a00;
        case 0x110a04u: goto label_110a04;
        case 0x110a08u: goto label_110a08;
        case 0x110a0cu: goto label_110a0c;
        case 0x110a10u: goto label_110a10;
        case 0x110a14u: goto label_110a14;
        case 0x110a18u: goto label_110a18;
        case 0x110a1cu: goto label_110a1c;
        case 0x110a20u: goto label_110a20;
        case 0x110a24u: goto label_110a24;
        case 0x110a28u: goto label_110a28;
        case 0x110a2cu: goto label_110a2c;
        case 0x110a30u: goto label_110a30;
        case 0x110a34u: goto label_110a34;
        case 0x110a38u: goto label_110a38;
        case 0x110a3cu: goto label_110a3c;
        case 0x110a40u: goto label_110a40;
        case 0x110a44u: goto label_110a44;
        case 0x110a48u: goto label_110a48;
        case 0x110a4cu: goto label_110a4c;
        case 0x110a50u: goto label_110a50;
        case 0x110a54u: goto label_110a54;
        case 0x110a58u: goto label_110a58;
        case 0x110a5cu: goto label_110a5c;
        case 0x110a60u: goto label_110a60;
        case 0x110a64u: goto label_110a64;
        case 0x110a68u: goto label_110a68;
        case 0x110a6cu: goto label_110a6c;
        case 0x110a70u: goto label_110a70;
        case 0x110a74u: goto label_110a74;
        case 0x110a78u: goto label_110a78;
        case 0x110a7cu: goto label_110a7c;
        case 0x110a80u: goto label_110a80;
        case 0x110a84u: goto label_110a84;
        case 0x110a88u: goto label_110a88;
        case 0x110a8cu: goto label_110a8c;
        case 0x110a90u: goto label_110a90;
        case 0x110a94u: goto label_110a94;
        case 0x110a98u: goto label_110a98;
        case 0x110a9cu: goto label_110a9c;
        case 0x110aa0u: goto label_110aa0;
        case 0x110aa4u: goto label_110aa4;
        case 0x110aa8u: goto label_110aa8;
        case 0x110aacu: goto label_110aac;
        case 0x110ab0u: goto label_110ab0;
        case 0x110ab4u: goto label_110ab4;
        case 0x110ab8u: goto label_110ab8;
        case 0x110abcu: goto label_110abc;
        case 0x110ac0u: goto label_110ac0;
        case 0x110ac4u: goto label_110ac4;
        case 0x110ac8u: goto label_110ac8;
        case 0x110accu: goto label_110acc;
        case 0x110ad0u: goto label_110ad0;
        case 0x110ad4u: goto label_110ad4;
        case 0x110ad8u: goto label_110ad8;
        case 0x110adcu: goto label_110adc;
        case 0x110ae0u: goto label_110ae0;
        case 0x110ae4u: goto label_110ae4;
        case 0x110ae8u: goto label_110ae8;
        case 0x110aecu: goto label_110aec;
        case 0x110af0u: goto label_110af0;
        case 0x110af4u: goto label_110af4;
        case 0x110af8u: goto label_110af8;
        case 0x110afcu: goto label_110afc;
        case 0x110b00u: goto label_110b00;
        case 0x110b04u: goto label_110b04;
        case 0x110b08u: goto label_110b08;
        case 0x110b0cu: goto label_110b0c;
        case 0x110b10u: goto label_110b10;
        case 0x110b14u: goto label_110b14;
        case 0x110b18u: goto label_110b18;
        case 0x110b1cu: goto label_110b1c;
        case 0x110b20u: goto label_110b20;
        case 0x110b24u: goto label_110b24;
        case 0x110b28u: goto label_110b28;
        case 0x110b2cu: goto label_110b2c;
        case 0x110b30u: goto label_110b30;
        case 0x110b34u: goto label_110b34;
        case 0x110b38u: goto label_110b38;
        case 0x110b3cu: goto label_110b3c;
        case 0x110b40u: goto label_110b40;
        case 0x110b44u: goto label_110b44;
        case 0x110b48u: goto label_110b48;
        case 0x110b4cu: goto label_110b4c;
        case 0x110b50u: goto label_110b50;
        case 0x110b54u: goto label_110b54;
        case 0x110b58u: goto label_110b58;
        case 0x110b5cu: goto label_110b5c;
        case 0x110b60u: goto label_110b60;
        case 0x110b64u: goto label_110b64;
        case 0x110b68u: goto label_110b68;
        case 0x110b6cu: goto label_110b6c;
        case 0x110b70u: goto label_110b70;
        case 0x110b74u: goto label_110b74;
        case 0x110b78u: goto label_110b78;
        case 0x110b7cu: goto label_110b7c;
        case 0x110b80u: goto label_110b80;
        case 0x110b84u: goto label_110b84;
        case 0x110b88u: goto label_110b88;
        case 0x110b8cu: goto label_110b8c;
        case 0x110b90u: goto label_110b90;
        case 0x110b94u: goto label_110b94;
        case 0x110b98u: goto label_110b98;
        case 0x110b9cu: goto label_110b9c;
        case 0x110ba0u: goto label_110ba0;
        case 0x110ba4u: goto label_110ba4;
        case 0x110ba8u: goto label_110ba8;
        case 0x110bacu: goto label_110bac;
        default: break;
    }

    ctx->pc = 0x110960u;

label_110960:
    // 0x110960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x110960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_110964:
    // 0x110964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x110964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_110968:
    // 0x110968: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x110968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_11096c:
    // 0x11096c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_110970:
    // 0x110970: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x110970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_110974:
    // 0x110974: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x110974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_110978:
    // 0x110978: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x110978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11097c:
    // 0x11097c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11097cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_110980:
    // 0x110980: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x110980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_110984:
    // 0x110984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110988:
    // 0x110988: 0x1000000e  b           . + 4 + (0xE << 2)
label_11098c:
    if (ctx->pc == 0x11098Cu) {
        ctx->pc = 0x11098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110988u;
        // 0x11098c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110990u;
        goto label_110990;
    }
    ctx->pc = 0x110988u;
    {
        const bool branch_taken_0x110988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110988u;
        // 0x11098c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110988) {
            ctx->pc = 0x1109C4u;
            goto label_1109c4;
        }
    }
    ctx->pc = 0x110990u;
label_110990:
    // 0x110990: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x110990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_110994:
    // 0x110994: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x110994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_110998:
    // 0x110998: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x110998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_11099c:
    // 0x11099c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x11099cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1109a0:
    // 0x1109a0: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x1109a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1109a4:
    // 0x1109a4: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1109a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1109a8:
    // 0x1109a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1109a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1109ac:
    // 0x1109ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1109acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1109b0:
    // 0x1109b0: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x1109b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_1109b4:
    // 0x1109b4: 0xac800224  sw          $zero, 0x224($a0)
    ctx->pc = 0x1109b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 0));
label_1109b8:
    // 0x1109b8: 0x8c830224  lw          $v1, 0x224($a0)
    ctx->pc = 0x1109b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
label_1109bc:
    // 0x1109bc: 0x3463002c  ori         $v1, $v1, 0x2C
    ctx->pc = 0x1109bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44);
label_1109c0:
    // 0x1109c0: 0xac830224  sw          $v1, 0x224($a0)
    ctx->pc = 0x1109c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 548), GPR_U32(ctx, 3));
label_1109c4:
    // 0x1109c4: 0x0  nop
    ctx->pc = 0x1109c4u;
    // NOP
label_1109c8:
    // 0x1109c8: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x1109c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_1109cc:
    // 0x1109cc: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1109ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1109d0:
    // 0x1109d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_1109d4:
    if (ctx->pc == 0x1109D4u) {
        ctx->pc = 0x1109D8u;
        goto label_1109d8;
    }
    ctx->pc = 0x1109D0u;
    {
        const bool branch_taken_0x1109d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1109d0) {
            ctx->pc = 0x110990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110990;
        }
    }
    ctx->pc = 0x1109D8u;
label_1109d8:
    // 0x1109d8: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x1109d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1109dc:
    // 0x1109dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1109dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1109e0:
    // 0x1109e0: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1109e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_1109e4:
    // 0x1109e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1109e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1109e8:
    // 0x1109e8: 0x2405ffdf  addiu       $a1, $zero, -0x21
    ctx->pc = 0x1109e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1109ec:
    // 0x1109ec: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x1109ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_1109f0:
    // 0x1109f0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1109f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_1109f4:
    // 0x1109f4: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1109f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_1109f8:
    // 0x1109f8: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x1109f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_1109fc:
    // 0x1109fc: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x1109fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
label_110a00:
    // 0x110a00: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x110a00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_110a04:
    // 0x110a04: 0x1000000d  b           . + 4 + (0xD << 2)
label_110a08:
    if (ctx->pc == 0x110A08u) {
        ctx->pc = 0x110A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A04u;
        // 0x110a08: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A0Cu;
        goto label_110a0c;
    }
    ctx->pc = 0x110A04u;
    {
        const bool branch_taken_0x110a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A04u;
        // 0x110a08: 0xacc40224  sw          $a0, 0x224($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a04) {
            ctx->pc = 0x110A3Cu;
            goto label_110a3c;
        }
    }
    ctx->pc = 0x110A0Cu;
label_110a0c:
    // 0x110a0c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x110a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_110a10:
    // 0x110a10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x110a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_110a14:
    // 0x110a14: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x110a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_110a18:
    // 0x110a18: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x110a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_110a1c:
    // 0x110a1c: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x110a1cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_110a20:
    // 0x110a20: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x110a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_110a24:
    // 0x110a24: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x110a24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_110a28:
    // 0x110a28: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x110a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_110a2c:
    // 0x110a2c: 0x8c862cd8  lw          $a2, 0x2CD8($a0)
    ctx->pc = 0x110a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11480)));
label_110a30:
    // 0x110a30: 0x8cc40224  lw          $a0, 0x224($a2)
    ctx->pc = 0x110a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 548)));
label_110a34:
    // 0x110a34: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x110a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_110a38:
    // 0x110a38: 0xacc40224  sw          $a0, 0x224($a2)
    ctx->pc = 0x110a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 548), GPR_U32(ctx, 4));
label_110a3c:
    // 0x110a3c: 0x0  nop
    ctx->pc = 0x110a3cu;
    // NOP
label_110a40:
    // 0x110a40: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x110a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_110a44:
    // 0x110a44: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x110a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_110a48:
    // 0x110a48: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
label_110a4c:
    if (ctx->pc == 0x110A4Cu) {
        ctx->pc = 0x110A50u;
        goto label_110a50;
    }
    ctx->pc = 0x110A48u;
    {
        const bool branch_taken_0x110a48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x110a48) {
            ctx->pc = 0x110A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110a0c;
        }
    }
    ctx->pc = 0x110A50u;
label_110a50:
    // 0x110a50: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x110a50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110a54:
    // 0x110a54: 0x10000020  b           . + 4 + (0x20 << 2)
label_110a58:
    if (ctx->pc == 0x110A58u) {
        ctx->pc = 0x110A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A54u;
        // 0x110a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A5Cu;
        goto label_110a5c;
    }
    ctx->pc = 0x110A54u;
    {
        const bool branch_taken_0x110a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A54u;
        // 0x110a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a54) {
            ctx->pc = 0x110AD8u;
            goto label_110ad8;
        }
    }
    ctx->pc = 0x110A5Cu;
label_110a5c:
    // 0x110a5c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x110a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_110a60:
    // 0x110a60: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x110a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_110a64:
    // 0x110a64: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x110a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_110a68:
    // 0x110a68: 0x84c60000  lh          $a2, 0x0($a2)
    ctx->pc = 0x110a68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_110a6c:
    // 0x110a6c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x110a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_110a70:
    // 0x110a70: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x110a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_110a74:
    // 0x110a74: 0x8ca72cd8  lw          $a3, 0x2CD8($a1)
    ctx->pc = 0x110a74u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
label_110a78:
    // 0x110a78: 0x90e60224  lbu         $a2, 0x224($a3)
    ctx->pc = 0x110a78u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 548)));
label_110a7c:
    // 0x110a7c: 0x62efc  dsll32      $a1, $a2, 27
    ctx->pc = 0x110a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 27));
label_110a80:
    // 0x110a80: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x110a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
label_110a84:
    // 0x110a84: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
label_110a88:
    if (ctx->pc == 0x110A88u) {
        ctx->pc = 0x110A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A84u;
        // 0x110a88: 0x62ebc  dsll32      $a1, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110A8Cu;
        goto label_110a8c;
    }
    ctx->pc = 0x110A84u;
    {
        const bool branch_taken_0x110a84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x110A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A84u;
        // 0x110a88: 0x62ebc  dsll32      $a1, $a2, 26 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110a84) {
            ctx->pc = 0x110ACCu;
            goto label_110acc;
        }
    }
    ctx->pc = 0x110A8Cu;
label_110a8c:
    // 0x110a8c: 0x52ffe  dsrl32      $a1, $a1, 31
    ctx->pc = 0x110a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 31));
label_110a90:
    // 0x110a90: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_110a94:
    if (ctx->pc == 0x110A94u) {
        ctx->pc = 0x110A98u;
        goto label_110a98;
    }
    ctx->pc = 0x110A90u;
    {
        const bool branch_taken_0x110a90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x110a90) {
            ctx->pc = 0x110AACu;
            goto label_110aac;
        }
    }
    ctx->pc = 0x110A98u;
label_110a98:
    // 0x110a98: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x110a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
label_110a9c:
    // 0x110a9c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x110a9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_110aa0:
    // 0x110aa0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x110aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_110aa4:
    // 0x110aa4: 0x10000009  b           . + 4 + (0x9 << 2)
label_110aa8:
    if (ctx->pc == 0x110AA8u) {
        ctx->pc = 0x110AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA4u;
        // 0x110aa8: 0xace50224  sw          $a1, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110AACu;
        goto label_110aac;
    }
    ctx->pc = 0x110AA4u;
    {
        const bool branch_taken_0x110aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AA4u;
        // 0x110aa8: 0xace50224  sw          $a1, 0x224($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110aa4) {
            ctx->pc = 0x110ACCu;
            goto label_110acc;
        }
    }
    ctx->pc = 0x110AACu;
label_110aac:
    // 0x110aac: 0x0  nop
    ctx->pc = 0x110aacu;
    // NOP
label_110ab0:
    // 0x110ab0: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x110ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
label_110ab4:
    // 0x110ab4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x110ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_110ab8:
    // 0x110ab8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x110ab8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_110abc:
    // 0x110abc: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x110abcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
label_110ac0:
    // 0x110ac0: 0x8ce50224  lw          $a1, 0x224($a3)
    ctx->pc = 0x110ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 548)));
label_110ac4:
    // 0x110ac4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x110ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
label_110ac8:
    // 0x110ac8: 0xace50224  sw          $a1, 0x224($a3)
    ctx->pc = 0x110ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 548), GPR_U32(ctx, 5));
label_110acc:
    // 0x110acc: 0x0  nop
    ctx->pc = 0x110accu;
    // NOP
label_110ad0:
    // 0x110ad0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x110ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_110ad4:
    // 0x110ad4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x110ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_110ad8:
    // 0x110ad8: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x110ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_110adc:
    // 0x110adc: 0x65282a  slt         $a1, $v1, $a1
    ctx->pc = 0x110adcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_110ae0:
    // 0x110ae0: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
label_110ae4:
    if (ctx->pc == 0x110AE4u) {
        ctx->pc = 0x110AE8u;
        goto label_110ae8;
    }
    ctx->pc = 0x110AE0u;
    {
        const bool branch_taken_0x110ae0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x110ae0) {
            ctx->pc = 0x110A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110a5c;
        }
    }
    ctx->pc = 0x110AE8u;
label_110ae8:
    // 0x110ae8: 0x8e330000  lw          $s3, 0x0($s1)
    ctx->pc = 0x110ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_110aec:
    // 0x110aec: 0x13082a  slt         $at, $zero, $s3
    ctx->pc = 0x110aecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_110af0:
    // 0x110af0: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_110af4:
    if (ctx->pc == 0x110AF4u) {
        ctx->pc = 0x110AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AF0u;
        // 0x110af4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110AF8u;
        goto label_110af8;
    }
    ctx->pc = 0x110AF0u;
    {
        const bool branch_taken_0x110af0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AF0u;
        // 0x110af4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110af0) {
            ctx->pc = 0x110B40u;
            goto label_110b40;
        }
    }
    ctx->pc = 0x110AF8u;
label_110af8:
    // 0x110af8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x110af8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110afc:
    // 0x110afc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_110b00:
    // 0x110b00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x110b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_110b04:
    // 0x110b04: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_110b08:
    // 0x110b08: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x110b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_110b0c:
    // 0x110b0c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110b0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_110b10:
    // 0x110b10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_110b14:
    // 0x110b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_110b18:
    // 0x110b18: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x110b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_110b1c:
    // 0x110b1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x110b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_110b20:
    // 0x110b20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x110b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_110b24:
    // 0x110b24: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x110b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_110b28:
    // 0x110b28: 0x320f809  jalr        $t9
label_110b2c:
    if (ctx->pc == 0x110B2Cu) {
        ctx->pc = 0x110B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B28u;
        // 0x110b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B30u;
        goto label_110b30;
    }
    ctx->pc = 0x110B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x110B30u);
        ctx->pc = 0x110B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B28u;
        // 0x110b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B28u, 0x110B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x110B30u;
label_110b30:
    // 0x110b30: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x110b30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_110b34:
    // 0x110b34: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x110b34u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_110b38:
    // 0x110b38: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_110b3c:
    if (ctx->pc == 0x110B3Cu) {
        ctx->pc = 0x110B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B38u;
        // 0x110b3c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B40u;
        goto label_110b40;
    }
    ctx->pc = 0x110B38u;
    {
        const bool branch_taken_0x110b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B38u;
        // 0x110b3c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b38) {
            ctx->pc = 0x110AFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110afc;
        }
    }
    ctx->pc = 0x110B40u;
label_110b40:
    // 0x110b40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x110b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110b44:
    // 0x110b44: 0x1000000d  b           . + 4 + (0xD << 2)
label_110b48:
    if (ctx->pc == 0x110B48u) {
        ctx->pc = 0x110B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B44u;
        // 0x110b48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B4Cu;
        goto label_110b4c;
    }
    ctx->pc = 0x110B44u;
    {
        const bool branch_taken_0x110b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B44u;
        // 0x110b48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b44) {
            ctx->pc = 0x110B7Cu;
            goto label_110b7c;
        }
    }
    ctx->pc = 0x110B4Cu;
label_110b4c:
    // 0x110b4c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x110b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_110b50:
    // 0x110b50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x110b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110b54:
    // 0x110b54: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x110b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_110b58:
    // 0x110b58: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x110b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_110b5c:
    // 0x110b5c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x110b5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_110b60:
    // 0x110b60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110b60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_110b64:
    // 0x110b64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_110b68:
    // 0x110b68: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x110b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_110b6c:
    // 0x110b6c: 0xc043da0  jal         func_10F680
label_110b70:
    if (ctx->pc == 0x110B70u) {
        ctx->pc = 0x110B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B6Cu;
        // 0x110b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110B74u;
        goto label_110b74;
    }
    ctx->pc = 0x110B6Cu;
    SET_GPR_U32(ctx, 31, 0x110B74u);
    ctx->pc = 0x110B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B6Cu;
    // 0x110b70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x110B6Cu, 0x110B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B74u;
label_110b74:
    // 0x110b74: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x110b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_110b78:
    // 0x110b78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x110b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_110b7c:
    // 0x110b7c: 0x0  nop
    ctx->pc = 0x110b7cu;
    // NOP
label_110b80:
    // 0x110b80: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x110b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_110b84:
    // 0x110b84: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x110b84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_110b88:
    // 0x110b88: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_110b8c:
    if (ctx->pc == 0x110B8Cu) {
        ctx->pc = 0x110B90u;
        goto label_110b90;
    }
    ctx->pc = 0x110B88u;
    {
        const bool branch_taken_0x110b88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x110b88) {
            ctx->pc = 0x110B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110b4c;
        }
    }
    ctx->pc = 0x110B90u;
label_110b90:
    // 0x110b90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x110b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_110b94:
    // 0x110b94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x110b94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_110b98:
    // 0x110b98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x110b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_110b9c:
    // 0x110b9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x110b9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_110ba0:
    // 0x110ba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x110ba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_110ba4:
    // 0x110ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x110ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_110ba8:
    // 0x110ba8: 0x3e00008  jr          $ra
label_110bac:
    if (ctx->pc == 0x110BACu) {
        ctx->pc = 0x110BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BA8u;
        // 0x110bac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x110BB0u;
        goto label_fallthrough_0x110ba8;
    }
    ctx->pc = 0x110BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BA8u;
        // 0x110bac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x110ba8:
    ctx->pc = 0x110BB0u;
}
