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

// Function: FUN_0018f9c0
// Address: 0x18f9c0 - 0x18fb10
void FUN_0018f9c0_0x18f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018f9c0_0x18f9c0");
#endif

    switch (ctx->pc) {
        case 0x18f9c0u: goto label_18f9c0;
        case 0x18f9c4u: goto label_18f9c4;
        case 0x18f9c8u: goto label_18f9c8;
        case 0x18f9ccu: goto label_18f9cc;
        case 0x18f9d0u: goto label_18f9d0;
        case 0x18f9d4u: goto label_18f9d4;
        case 0x18f9d8u: goto label_18f9d8;
        case 0x18f9dcu: goto label_18f9dc;
        case 0x18f9e0u: goto label_18f9e0;
        case 0x18f9e4u: goto label_18f9e4;
        case 0x18f9e8u: goto label_18f9e8;
        case 0x18f9ecu: goto label_18f9ec;
        case 0x18f9f0u: goto label_18f9f0;
        case 0x18f9f4u: goto label_18f9f4;
        case 0x18f9f8u: goto label_18f9f8;
        case 0x18f9fcu: goto label_18f9fc;
        case 0x18fa00u: goto label_18fa00;
        case 0x18fa04u: goto label_18fa04;
        case 0x18fa08u: goto label_18fa08;
        case 0x18fa0cu: goto label_18fa0c;
        case 0x18fa10u: goto label_18fa10;
        case 0x18fa14u: goto label_18fa14;
        case 0x18fa18u: goto label_18fa18;
        case 0x18fa1cu: goto label_18fa1c;
        case 0x18fa20u: goto label_18fa20;
        case 0x18fa24u: goto label_18fa24;
        case 0x18fa28u: goto label_18fa28;
        case 0x18fa2cu: goto label_18fa2c;
        case 0x18fa30u: goto label_18fa30;
        case 0x18fa34u: goto label_18fa34;
        case 0x18fa38u: goto label_18fa38;
        case 0x18fa3cu: goto label_18fa3c;
        case 0x18fa40u: goto label_18fa40;
        case 0x18fa44u: goto label_18fa44;
        case 0x18fa48u: goto label_18fa48;
        case 0x18fa4cu: goto label_18fa4c;
        case 0x18fa50u: goto label_18fa50;
        case 0x18fa54u: goto label_18fa54;
        case 0x18fa58u: goto label_18fa58;
        case 0x18fa5cu: goto label_18fa5c;
        case 0x18fa60u: goto label_18fa60;
        case 0x18fa64u: goto label_18fa64;
        case 0x18fa68u: goto label_18fa68;
        case 0x18fa6cu: goto label_18fa6c;
        case 0x18fa70u: goto label_18fa70;
        case 0x18fa74u: goto label_18fa74;
        case 0x18fa78u: goto label_18fa78;
        case 0x18fa7cu: goto label_18fa7c;
        case 0x18fa80u: goto label_18fa80;
        case 0x18fa84u: goto label_18fa84;
        case 0x18fa88u: goto label_18fa88;
        case 0x18fa8cu: goto label_18fa8c;
        case 0x18fa90u: goto label_18fa90;
        case 0x18fa94u: goto label_18fa94;
        case 0x18fa98u: goto label_18fa98;
        case 0x18fa9cu: goto label_18fa9c;
        case 0x18faa0u: goto label_18faa0;
        case 0x18faa4u: goto label_18faa4;
        case 0x18faa8u: goto label_18faa8;
        case 0x18faacu: goto label_18faac;
        case 0x18fab0u: goto label_18fab0;
        case 0x18fab4u: goto label_18fab4;
        case 0x18fab8u: goto label_18fab8;
        case 0x18fabcu: goto label_18fabc;
        case 0x18fac0u: goto label_18fac0;
        case 0x18fac4u: goto label_18fac4;
        case 0x18fac8u: goto label_18fac8;
        case 0x18faccu: goto label_18facc;
        case 0x18fad0u: goto label_18fad0;
        case 0x18fad4u: goto label_18fad4;
        case 0x18fad8u: goto label_18fad8;
        case 0x18fadcu: goto label_18fadc;
        case 0x18fae0u: goto label_18fae0;
        case 0x18fae4u: goto label_18fae4;
        case 0x18fae8u: goto label_18fae8;
        case 0x18faecu: goto label_18faec;
        case 0x18faf0u: goto label_18faf0;
        case 0x18faf4u: goto label_18faf4;
        case 0x18faf8u: goto label_18faf8;
        case 0x18fafcu: goto label_18fafc;
        case 0x18fb00u: goto label_18fb00;
        case 0x18fb04u: goto label_18fb04;
        case 0x18fb08u: goto label_18fb08;
        case 0x18fb0cu: goto label_18fb0c;
        default: break;
    }

    ctx->pc = 0x18f9c0u;

label_18f9c0:
    // 0x18f9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18f9c4:
    // 0x18f9c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x18f9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f9c8:
    // 0x18f9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18f9cc:
    // 0x18f9cc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x18f9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_18f9d0:
    // 0x18f9d0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x18f9d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18f9d4:
    // 0x18f9d4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x18f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_18f9d8:
    // 0x18f9d8: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x18f9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_18f9dc:
    // 0x18f9dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_18f9e0:
    // 0x18f9e0: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x18f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_18f9e4:
    // 0x18f9e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x18f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_18f9e8:
    // 0x18f9e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18f9ec:
    // 0x18f9ec: 0x24640154  addiu       $a0, $v1, 0x154
    ctx->pc = 0x18f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 340));
label_18f9f0:
    // 0x18f9f0: 0x8c630154  lw          $v1, 0x154($v1)
    ctx->pc = 0x18f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_18f9f4:
    // 0x18f9f4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_18f9f8:
    if (ctx->pc == 0x18F9F8u) {
        ctx->pc = 0x18F9FCu;
        goto label_18f9fc;
    }
    ctx->pc = 0x18F9F4u;
    {
        const bool branch_taken_0x18f9f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f9f4) {
            ctx->pc = 0x18FA44u;
            goto label_18fa44;
        }
    }
    ctx->pc = 0x18F9FCu;
label_18f9fc:
    // 0x18f9fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18f9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18fa00:
    // 0x18fa00: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_18fa04:
    if (ctx->pc == 0x18FA04u) {
        ctx->pc = 0x18FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA00u;
        // 0x18fa04: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FA08u;
        goto label_18fa08;
    }
    ctx->pc = 0x18FA00u;
    {
        const bool branch_taken_0x18fa00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA00u;
        // 0x18fa04: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fa00) {
            ctx->pc = 0x18FA44u;
            goto label_18fa44;
        }
    }
    ctx->pc = 0x18FA08u;
label_18fa08:
    // 0x18fa08: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fa0c:
    // 0x18fa0c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18fa10:
    // 0x18fa10: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x18fa10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18fa14:
    // 0x18fa14: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x18fa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_18fa18:
    // 0x18fa18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18fa18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_18fa1c:
    // 0x18fa1c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x18fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
label_18fa20:
    // 0x18fa20: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x18fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fa24:
    // 0x18fa24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18fa28:
    // 0x18fa28: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x18fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_18fa2c:
    // 0x18fa2c: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x18fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_18fa30:
    // 0x18fa30: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x18fa30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18fa34:
    // 0x18fa34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_18fa38:
    if (ctx->pc == 0x18FA38u) {
        ctx->pc = 0x18FA3Cu;
        goto label_18fa3c;
    }
    ctx->pc = 0x18FA34u;
    {
        const bool branch_taken_0x18fa34 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18fa34) {
            ctx->pc = 0x18FA44u;
            goto label_18fa44;
        }
    }
    ctx->pc = 0x18FA3Cu;
label_18fa3c:
    // 0x18fa3c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18fa40:
    // 0x18fa40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_18fa44:
    // 0x18fa44: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x18fa44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_18fa48:
    // 0x18fa48: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x18fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_18fa4c:
    // 0x18fa4c: 0x34640001  ori         $a0, $v1, 0x1
    ctx->pc = 0x18fa4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_18fa50:
    // 0x18fa50: 0x93880  sll         $a3, $t1, 2
    ctx->pc = 0x18fa50u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_18fa54:
    // 0x18fa54: 0x93140  sll         $a2, $t1, 5
    ctx->pc = 0x18fa54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_18fa58:
    // 0x18fa58: 0xe54021  addu        $t0, $a3, $a1
    ctx->pc = 0x18fa58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_18fa5c:
    // 0x18fa5c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x18fa5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_18fa60:
    // 0x18fa60: 0x8d070034  lw          $a3, 0x34($t0)
    ctx->pc = 0x18fa60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
label_18fa64:
    // 0x18fa64: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x18fa64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_18fa68:
    // 0x18fa68: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x18fa68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_18fa6c:
    // 0x18fa6c: 0x8cc60054  lw          $a2, 0x54($a2)
    ctx->pc = 0x18fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_18fa70:
    // 0x18fa70: 0x10c40024  beq         $a2, $a0, . + 4 + (0x24 << 2)
label_18fa74:
    if (ctx->pc == 0x18FA74u) {
        ctx->pc = 0x18FA78u;
        goto label_18fa78;
    }
    ctx->pc = 0x18FA70u;
    {
        const bool branch_taken_0x18fa70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x18fa70) {
            ctx->pc = 0x18FB04u;
            goto label_18fb04;
        }
    }
    ctx->pc = 0x18FA78u;
label_18fa78:
    // 0x18fa78: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x18fa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_18fa7c:
    // 0x18fa7c: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_18fa80:
    if (ctx->pc == 0x18FA80u) {
        ctx->pc = 0x18FA84u;
        goto label_18fa84;
    }
    ctx->pc = 0x18FA7Cu;
    {
        const bool branch_taken_0x18fa7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x18fa7c) {
            ctx->pc = 0x18FAA8u;
            goto label_18faa8;
        }
    }
    ctx->pc = 0x18FA84u;
label_18fa84:
    // 0x18fa84: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_18fa88:
    if (ctx->pc == 0x18FA88u) {
        ctx->pc = 0x18FA8Cu;
        goto label_18fa8c;
    }
    ctx->pc = 0x18FA84u;
    {
        const bool branch_taken_0x18fa84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fa84) {
            ctx->pc = 0x18FB04u;
            goto label_18fb04;
        }
    }
    ctx->pc = 0x18FA8Cu;
label_18fa8c:
    // 0x18fa8c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18fa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18fa90:
    // 0x18fa90: 0x8c99031c  lw          $t9, 0x31C($a0)
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 796)));
label_18fa94:
    // 0x18fa94: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x18fa94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_18fa98:
    // 0x18fa98: 0x320f809  jalr        $t9
label_18fa9c:
    if (ctx->pc == 0x18FA9Cu) {
        ctx->pc = 0x18FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA98u;
        // 0x18fa9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAA0u;
        goto label_18faa0;
    }
    ctx->pc = 0x18FA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18FAA0u);
        ctx->pc = 0x18FA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FA98u;
        // 0x18fa9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FA98u, 0x18FAA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FAA0u;
label_18faa0:
    // 0x18faa0: 0x10000019  b           . + 4 + (0x19 << 2)
label_18faa4:
    if (ctx->pc == 0x18FAA4u) {
        ctx->pc = 0x18FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAA0u;
        // 0x18faa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAA8u;
        goto label_18faa8;
    }
    ctx->pc = 0x18FAA0u;
    {
        const bool branch_taken_0x18faa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAA0u;
        // 0x18faa4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18faa0) {
            ctx->pc = 0x18FB08u;
            goto label_18fb08;
        }
    }
    ctx->pc = 0x18FAA8u;
label_18faa8:
    // 0x18faa8: 0x8d040254  lw          $a0, 0x254($t0)
    ctx->pc = 0x18faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 596)));
label_18faac:
    // 0x18faac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18fab0:
    // 0x18fab0: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
label_18fab4:
    if (ctx->pc == 0x18FAB4u) {
        ctx->pc = 0x18FAB8u;
        goto label_18fab8;
    }
    ctx->pc = 0x18FAB0u;
    {
        const bool branch_taken_0x18fab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18fab0) {
            ctx->pc = 0x18FB04u;
            goto label_18fb04;
        }
    }
    ctx->pc = 0x18FAB8u;
label_18fab8:
    // 0x18fab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18fabc:
    // 0x18fabc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_18fac0:
    if (ctx->pc == 0x18FAC0u) {
        ctx->pc = 0x18FAC4u;
        goto label_18fac4;
    }
    ctx->pc = 0x18FABCu;
    {
        const bool branch_taken_0x18fabc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x18fabc) {
            ctx->pc = 0x18FAF0u;
            goto label_18faf0;
        }
    }
    ctx->pc = 0x18FAC4u;
label_18fac4:
    // 0x18fac4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_18fac8:
    if (ctx->pc == 0x18FAC8u) {
        ctx->pc = 0x18FACCu;
        goto label_18facc;
    }
    ctx->pc = 0x18FAC4u;
    {
        const bool branch_taken_0x18fac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fac4) {
            ctx->pc = 0x18FAD4u;
            goto label_18fad4;
        }
    }
    ctx->pc = 0x18FACCu;
label_18facc:
    // 0x18facc: 0x1000000d  b           . + 4 + (0xD << 2)
label_18fad0:
    if (ctx->pc == 0x18FAD0u) {
        ctx->pc = 0x18FAD4u;
        goto label_18fad4;
    }
    ctx->pc = 0x18FACCu;
    {
        const bool branch_taken_0x18facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18facc) {
            ctx->pc = 0x18FB04u;
            goto label_18fb04;
        }
    }
    ctx->pc = 0x18FAD4u;
label_18fad4:
    // 0x18fad4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x18fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_18fad8:
    // 0x18fad8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18fadc:
    // 0x18fadc: 0x8c420274  lw          $v0, 0x274($v0)
    ctx->pc = 0x18fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_18fae0:
    // 0x18fae0: 0x40f809  jalr        $v0
label_18fae4:
    if (ctx->pc == 0x18FAE4u) {
        ctx->pc = 0x18FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAE0u;
        // 0x18fae4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FAE8u;
        goto label_18fae8;
    }
    ctx->pc = 0x18FAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FAE8u);
        ctx->pc = 0x18FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAE0u;
        // 0x18fae4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FAE0u, 0x18FAE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18FAE8u;
label_18fae8:
    // 0x18fae8: 0x10000006  b           . + 4 + (0x6 << 2)
label_18faec:
    if (ctx->pc == 0x18FAECu) {
        ctx->pc = 0x18FAF0u;
        goto label_18faf0;
    }
    ctx->pc = 0x18FAE8u;
    {
        const bool branch_taken_0x18fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fae8) {
            ctx->pc = 0x18FB04u;
            goto label_18fb04;
        }
    }
    ctx->pc = 0x18FAF0u;
label_18faf0:
    // 0x18faf0: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x18faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_18faf4:
    // 0x18faf4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x18faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_18faf8:
    // 0x18faf8: 0x8c440280  lw          $a0, 0x280($v0)
    ctx->pc = 0x18faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 640)));
label_18fafc:
    // 0x18fafc: 0xc07a564  jal         func_1E9590
label_18fb00:
    if (ctx->pc == 0x18FB00u) {
        ctx->pc = 0x18FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FAFCu;
        // 0x18fb00: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB04u;
        goto label_18fb04;
    }
    ctx->pc = 0x18FAFCu;
    SET_GPR_U32(ctx, 31, 0x18FB04u);
    ctx->pc = 0x18FB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FAFCu;
    // 0x18fb00: 0x24590274  addiu       $t9, $v0, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9590u, 0x18FAFCu, 0x18FB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FB04u;
label_18fb04:
    // 0x18fb04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fb08:
    // 0x18fb08: 0x3e00008  jr          $ra
label_18fb0c:
    if (ctx->pc == 0x18FB0Cu) {
        ctx->pc = 0x18FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB08u;
        // 0x18fb0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18FB10u;
        goto label_fallthrough_0x18fb08;
    }
    ctx->pc = 0x18FB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FB08u;
        // 0x18fb0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18fb08:
    ctx->pc = 0x18FB10u;
}
