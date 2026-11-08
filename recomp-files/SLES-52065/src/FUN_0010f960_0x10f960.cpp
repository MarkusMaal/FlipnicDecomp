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

// Function: FUN_0010f960
// Address: 0x10f960 - 0x10fa84
void FUN_0010f960_0x10f960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010f960_0x10f960");
#endif

    switch (ctx->pc) {
        case 0x10f960u: goto label_10f960;
        case 0x10f964u: goto label_10f964;
        case 0x10f968u: goto label_10f968;
        case 0x10f96cu: goto label_10f96c;
        case 0x10f970u: goto label_10f970;
        case 0x10f974u: goto label_10f974;
        case 0x10f978u: goto label_10f978;
        case 0x10f97cu: goto label_10f97c;
        case 0x10f980u: goto label_10f980;
        case 0x10f984u: goto label_10f984;
        case 0x10f988u: goto label_10f988;
        case 0x10f98cu: goto label_10f98c;
        case 0x10f990u: goto label_10f990;
        case 0x10f994u: goto label_10f994;
        case 0x10f998u: goto label_10f998;
        case 0x10f99cu: goto label_10f99c;
        case 0x10f9a0u: goto label_10f9a0;
        case 0x10f9a4u: goto label_10f9a4;
        case 0x10f9a8u: goto label_10f9a8;
        case 0x10f9acu: goto label_10f9ac;
        case 0x10f9b0u: goto label_10f9b0;
        case 0x10f9b4u: goto label_10f9b4;
        case 0x10f9b8u: goto label_10f9b8;
        case 0x10f9bcu: goto label_10f9bc;
        case 0x10f9c0u: goto label_10f9c0;
        case 0x10f9c4u: goto label_10f9c4;
        case 0x10f9c8u: goto label_10f9c8;
        case 0x10f9ccu: goto label_10f9cc;
        case 0x10f9d0u: goto label_10f9d0;
        case 0x10f9d4u: goto label_10f9d4;
        case 0x10f9d8u: goto label_10f9d8;
        case 0x10f9dcu: goto label_10f9dc;
        case 0x10f9e0u: goto label_10f9e0;
        case 0x10f9e4u: goto label_10f9e4;
        case 0x10f9e8u: goto label_10f9e8;
        case 0x10f9ecu: goto label_10f9ec;
        case 0x10f9f0u: goto label_10f9f0;
        case 0x10f9f4u: goto label_10f9f4;
        case 0x10f9f8u: goto label_10f9f8;
        case 0x10f9fcu: goto label_10f9fc;
        case 0x10fa00u: goto label_10fa00;
        case 0x10fa04u: goto label_10fa04;
        case 0x10fa08u: goto label_10fa08;
        case 0x10fa0cu: goto label_10fa0c;
        case 0x10fa10u: goto label_10fa10;
        case 0x10fa14u: goto label_10fa14;
        case 0x10fa18u: goto label_10fa18;
        case 0x10fa1cu: goto label_10fa1c;
        case 0x10fa20u: goto label_10fa20;
        case 0x10fa24u: goto label_10fa24;
        case 0x10fa28u: goto label_10fa28;
        case 0x10fa2cu: goto label_10fa2c;
        case 0x10fa30u: goto label_10fa30;
        case 0x10fa34u: goto label_10fa34;
        case 0x10fa38u: goto label_10fa38;
        case 0x10fa3cu: goto label_10fa3c;
        case 0x10fa40u: goto label_10fa40;
        case 0x10fa44u: goto label_10fa44;
        case 0x10fa48u: goto label_10fa48;
        case 0x10fa4cu: goto label_10fa4c;
        case 0x10fa50u: goto label_10fa50;
        case 0x10fa54u: goto label_10fa54;
        case 0x10fa58u: goto label_10fa58;
        case 0x10fa5cu: goto label_10fa5c;
        case 0x10fa60u: goto label_10fa60;
        case 0x10fa64u: goto label_10fa64;
        case 0x10fa68u: goto label_10fa68;
        case 0x10fa6cu: goto label_10fa6c;
        case 0x10fa70u: goto label_10fa70;
        case 0x10fa74u: goto label_10fa74;
        case 0x10fa78u: goto label_10fa78;
        case 0x10fa7cu: goto label_10fa7c;
        case 0x10fa80u: goto label_10fa80;
        default: break;
    }

    ctx->pc = 0x10f960u;

label_10f960:
    // 0x10f960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10f964:
    // 0x10f964: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_10f968:
    // 0x10f968: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10f968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10f96c:
    // 0x10f96c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10f970:
    // 0x10f970: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10f970u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10f974:
    // 0x10f974: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_10f978:
    if (ctx->pc == 0x10F978u) {
        ctx->pc = 0x10F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F974u;
        // 0x10f978: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F97Cu;
        goto label_10f97c;
    }
    ctx->pc = 0x10F974u;
    {
        const bool branch_taken_0x10f974 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F974u;
        // 0x10f978: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f974) {
            ctx->pc = 0x10F984u;
            goto label_10f984;
        }
    }
    ctx->pc = 0x10F97Cu;
label_10f97c:
    // 0x10f97c: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x10f97cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10f980:
    // 0x10f980: 0x0  nop
    ctx->pc = 0x10f980u;
    // NOP
label_10f984:
    // 0x10f984: 0xae480038  sw          $t0, 0x38($s2)
    ctx->pc = 0x10f984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 8));
label_10f988:
    // 0x10f988: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x10f988u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f98c:
    // 0x10f98c: 0xae48003c  sw          $t0, 0x3C($s2)
    ctx->pc = 0x10f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 8));
label_10f990:
    // 0x10f990: 0xa2470040  sb          $a3, 0x40($s2)
    ctx->pc = 0x10f990u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 64), (uint8_t)GPR_U32(ctx, 7));
label_10f994:
    // 0x10f994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10f998:
    // 0x10f998: 0xae450024  sw          $a1, 0x24($s2)
    ctx->pc = 0x10f998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 5));
label_10f99c:
    // 0x10f99c: 0xae460028  sw          $a2, 0x28($s2)
    ctx->pc = 0x10f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 6));
label_10f9a0:
    // 0x10f9a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_10f9a4:
    if (ctx->pc == 0x10F9A4u) {
        ctx->pc = 0x10F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9A0u;
        // 0x10f9a4: 0xa2490043  sb          $t1, 0x43($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 67), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F9A8u;
        goto label_10f9a8;
    }
    ctx->pc = 0x10F9A0u;
    {
        const bool branch_taken_0x10f9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9A0u;
        // 0x10f9a4: 0xa2490043  sb          $t1, 0x43($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 67), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9a0) {
            ctx->pc = 0x10F9D4u;
            goto label_10f9d4;
        }
    }
    ctx->pc = 0x10F9A8u;
label_10f9a8:
    // 0x10f9a8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x10f9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10f9ac:
    // 0x10f9ac: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x10f9acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_10f9b0:
    // 0x10f9b0: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10f9b4:
    // 0x10f9b4: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x10f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_10f9b8:
    // 0x10f9b8: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10f9b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10f9bc:
    // 0x10f9bc: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x10f9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_10f9c0:
    // 0x10f9c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10f9c4:
    // 0x10f9c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10f9c8:
    // 0x10f9c8: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x10f9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10f9cc:
    // 0x10f9cc: 0xac600228  sw          $zero, 0x228($v1)
    ctx->pc = 0x10f9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 0));
label_10f9d0:
    // 0x10f9d0: 0xac600230  sw          $zero, 0x230($v1)
    ctx->pc = 0x10f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 0));
label_10f9d4:
    // 0x10f9d4: 0x0  nop
    ctx->pc = 0x10f9d4u;
    // NOP
label_10f9d8:
    // 0x10f9d8: 0x8e510038  lw          $s1, 0x38($s2)
    ctx->pc = 0x10f9d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_10f9dc:
    // 0x10f9dc: 0x151182a  slt         $v1, $t2, $s1
    ctx->pc = 0x10f9dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_10f9e0:
    // 0x10f9e0: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_10f9e4:
    if (ctx->pc == 0x10F9E4u) {
        ctx->pc = 0x10F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9E0u;
        // 0x10f9e4: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10F9E8u;
        goto label_10f9e8;
    }
    ctx->pc = 0x10F9E0u;
    {
        const bool branch_taken_0x10f9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F9E0u;
        // 0x10f9e4: 0x118040  sll         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f9e0) {
            ctx->pc = 0x10F9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f9a8;
        }
    }
    ctx->pc = 0x10F9E8u;
label_10f9e8:
    // 0x10f9e8: 0x1000000e  b           . + 4 + (0xE << 2)
label_10f9ec:
    if (ctx->pc == 0x10F9ECu) {
        ctx->pc = 0x10F9F0u;
        goto label_10f9f0;
    }
    ctx->pc = 0x10F9E8u;
    {
        const bool branch_taken_0x10f9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f9e8) {
            ctx->pc = 0x10FA24u;
            goto label_10fa24;
        }
    }
    ctx->pc = 0x10F9F0u;
label_10f9f0:
    // 0x10f9f0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x10f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_10f9f4:
    // 0x10f9f4: 0x8f8285f4  lw          $v0, -0x7A0C($gp)
    ctx->pc = 0x10f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10f9f8:
    // 0x10f9f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10f9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_10f9fc:
    // 0x10f9fc: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x10f9fcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_10fa00:
    // 0x10fa00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10fa04:
    // 0x10fa04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10fa08:
    // 0x10fa08: 0x8c442cd8  lw          $a0, 0x2CD8($v0)
    ctx->pc = 0x10fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
label_10fa0c:
    // 0x10fa0c: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x10fa0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_10fa10:
    // 0x10fa10: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x10fa10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_10fa14:
    // 0x10fa14: 0x320f809  jalr        $t9
label_10fa18:
    if (ctx->pc == 0x10FA18u) {
        ctx->pc = 0x10FA1Cu;
        goto label_10fa1c;
    }
    ctx->pc = 0x10FA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10FA1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA14u, 0x10FA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FA1Cu;
label_10fa1c:
    // 0x10fa1c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x10fa1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_10fa20:
    // 0x10fa20: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10fa20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10fa24:
    // 0x10fa24: 0x0  nop
    ctx->pc = 0x10fa24u;
    // NOP
label_10fa28:
    // 0x10fa28: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_10fa2c:
    // 0x10fa2c: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x10fa2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10fa30:
    // 0x10fa30: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_10fa34:
    if (ctx->pc == 0x10FA34u) {
        ctx->pc = 0x10FA38u;
        goto label_10fa38;
    }
    ctx->pc = 0x10FA30u;
    {
        const bool branch_taken_0x10fa30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fa30) {
            ctx->pc = 0x10F9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10f9f0;
        }
    }
    ctx->pc = 0x10FA38u;
label_10fa38:
    // 0x10fa38: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x10fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_10fa3c:
    // 0x10fa3c: 0x3c040021  lui         $a0, 0x21
    ctx->pc = 0x10fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)33 << 16));
label_10fa40:
    // 0x10fa40: 0x24840270  addiu       $a0, $a0, 0x270
    ctx->pc = 0x10fa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 624));
label_10fa44:
    // 0x10fa44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10fa48:
    // 0x10fa48: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x10fa48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_10fa4c:
    // 0x10fa4c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x10fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10fa50:
    // 0x10fa50: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x10fa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10fa54:
    // 0x10fa54: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x10fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_10fa58:
    // 0x10fa58: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x10fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_10fa5c:
    // 0x10fa5c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x10fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_10fa60:
    // 0x10fa60: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x10fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_10fa64:
    // 0x10fa64: 0xa2400041  sb          $zero, 0x41($s2)
    ctx->pc = 0x10fa64u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 65), (uint8_t)GPR_U32(ctx, 0));
label_10fa68:
    // 0x10fa68: 0xa2400042  sb          $zero, 0x42($s2)
    ctx->pc = 0x10fa68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 66), (uint8_t)GPR_U32(ctx, 0));
label_10fa6c:
    // 0x10fa6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10fa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10fa70:
    // 0x10fa70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fa70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10fa74:
    // 0x10fa74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10fa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10fa78:
    // 0x10fa78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10fa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10fa7c:
    // 0x10fa7c: 0x3e00008  jr          $ra
label_10fa80:
    if (ctx->pc == 0x10FA80u) {
        ctx->pc = 0x10FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA7Cu;
        // 0x10fa80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FA84u;
        goto label_fallthrough_0x10fa7c;
    }
    ctx->pc = 0x10FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FA7Cu;
        // 0x10fa80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10fa7c:
    ctx->pc = 0x10FA84u;
}
