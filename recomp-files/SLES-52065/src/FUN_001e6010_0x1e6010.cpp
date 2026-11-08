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

// Function: FUN_001e6010
// Address: 0x1e6010 - 0x1e61d8
void FUN_001e6010_0x1e6010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e6010_0x1e6010");
#endif

    switch (ctx->pc) {
        case 0x1e6010u: goto label_1e6010;
        case 0x1e6014u: goto label_1e6014;
        case 0x1e6018u: goto label_1e6018;
        case 0x1e601cu: goto label_1e601c;
        case 0x1e6020u: goto label_1e6020;
        case 0x1e6024u: goto label_1e6024;
        case 0x1e6028u: goto label_1e6028;
        case 0x1e602cu: goto label_1e602c;
        case 0x1e6030u: goto label_1e6030;
        case 0x1e6034u: goto label_1e6034;
        case 0x1e6038u: goto label_1e6038;
        case 0x1e603cu: goto label_1e603c;
        case 0x1e6040u: goto label_1e6040;
        case 0x1e6044u: goto label_1e6044;
        case 0x1e6048u: goto label_1e6048;
        case 0x1e604cu: goto label_1e604c;
        case 0x1e6050u: goto label_1e6050;
        case 0x1e6054u: goto label_1e6054;
        case 0x1e6058u: goto label_1e6058;
        case 0x1e605cu: goto label_1e605c;
        case 0x1e6060u: goto label_1e6060;
        case 0x1e6064u: goto label_1e6064;
        case 0x1e6068u: goto label_1e6068;
        case 0x1e606cu: goto label_1e606c;
        case 0x1e6070u: goto label_1e6070;
        case 0x1e6074u: goto label_1e6074;
        case 0x1e6078u: goto label_1e6078;
        case 0x1e607cu: goto label_1e607c;
        case 0x1e6080u: goto label_1e6080;
        case 0x1e6084u: goto label_1e6084;
        case 0x1e6088u: goto label_1e6088;
        case 0x1e608cu: goto label_1e608c;
        case 0x1e6090u: goto label_1e6090;
        case 0x1e6094u: goto label_1e6094;
        case 0x1e6098u: goto label_1e6098;
        case 0x1e609cu: goto label_1e609c;
        case 0x1e60a0u: goto label_1e60a0;
        case 0x1e60a4u: goto label_1e60a4;
        case 0x1e60a8u: goto label_1e60a8;
        case 0x1e60acu: goto label_1e60ac;
        case 0x1e60b0u: goto label_1e60b0;
        case 0x1e60b4u: goto label_1e60b4;
        case 0x1e60b8u: goto label_1e60b8;
        case 0x1e60bcu: goto label_1e60bc;
        case 0x1e60c0u: goto label_1e60c0;
        case 0x1e60c4u: goto label_1e60c4;
        case 0x1e60c8u: goto label_1e60c8;
        case 0x1e60ccu: goto label_1e60cc;
        case 0x1e60d0u: goto label_1e60d0;
        case 0x1e60d4u: goto label_1e60d4;
        case 0x1e60d8u: goto label_1e60d8;
        case 0x1e60dcu: goto label_1e60dc;
        case 0x1e60e0u: goto label_1e60e0;
        case 0x1e60e4u: goto label_1e60e4;
        case 0x1e60e8u: goto label_1e60e8;
        case 0x1e60ecu: goto label_1e60ec;
        case 0x1e60f0u: goto label_1e60f0;
        case 0x1e60f4u: goto label_1e60f4;
        case 0x1e60f8u: goto label_1e60f8;
        case 0x1e60fcu: goto label_1e60fc;
        case 0x1e6100u: goto label_1e6100;
        case 0x1e6104u: goto label_1e6104;
        case 0x1e6108u: goto label_1e6108;
        case 0x1e610cu: goto label_1e610c;
        case 0x1e6110u: goto label_1e6110;
        case 0x1e6114u: goto label_1e6114;
        case 0x1e6118u: goto label_1e6118;
        case 0x1e611cu: goto label_1e611c;
        case 0x1e6120u: goto label_1e6120;
        case 0x1e6124u: goto label_1e6124;
        case 0x1e6128u: goto label_1e6128;
        case 0x1e612cu: goto label_1e612c;
        case 0x1e6130u: goto label_1e6130;
        case 0x1e6134u: goto label_1e6134;
        case 0x1e6138u: goto label_1e6138;
        case 0x1e613cu: goto label_1e613c;
        case 0x1e6140u: goto label_1e6140;
        case 0x1e6144u: goto label_1e6144;
        case 0x1e6148u: goto label_1e6148;
        case 0x1e614cu: goto label_1e614c;
        case 0x1e6150u: goto label_1e6150;
        case 0x1e6154u: goto label_1e6154;
        case 0x1e6158u: goto label_1e6158;
        case 0x1e615cu: goto label_1e615c;
        case 0x1e6160u: goto label_1e6160;
        case 0x1e6164u: goto label_1e6164;
        case 0x1e6168u: goto label_1e6168;
        case 0x1e616cu: goto label_1e616c;
        case 0x1e6170u: goto label_1e6170;
        case 0x1e6174u: goto label_1e6174;
        case 0x1e6178u: goto label_1e6178;
        case 0x1e617cu: goto label_1e617c;
        case 0x1e6180u: goto label_1e6180;
        case 0x1e6184u: goto label_1e6184;
        case 0x1e6188u: goto label_1e6188;
        case 0x1e618cu: goto label_1e618c;
        case 0x1e6190u: goto label_1e6190;
        case 0x1e6194u: goto label_1e6194;
        case 0x1e6198u: goto label_1e6198;
        case 0x1e619cu: goto label_1e619c;
        case 0x1e61a0u: goto label_1e61a0;
        case 0x1e61a4u: goto label_1e61a4;
        case 0x1e61a8u: goto label_1e61a8;
        case 0x1e61acu: goto label_1e61ac;
        case 0x1e61b0u: goto label_1e61b0;
        case 0x1e61b4u: goto label_1e61b4;
        case 0x1e61b8u: goto label_1e61b8;
        case 0x1e61bcu: goto label_1e61bc;
        case 0x1e61c0u: goto label_1e61c0;
        case 0x1e61c4u: goto label_1e61c4;
        case 0x1e61c8u: goto label_1e61c8;
        case 0x1e61ccu: goto label_1e61cc;
        case 0x1e61d0u: goto label_1e61d0;
        case 0x1e61d4u: goto label_1e61d4;
        default: break;
    }

    ctx->pc = 0x1e6010u;

label_1e6010:
    // 0x1e6010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e6010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e6014:
    // 0x1e6014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e6014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e6018:
    // 0x1e6018: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e6018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e601c:
    // 0x1e601c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e601cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e6020:
    // 0x1e6020: 0x27a8005c  addiu       $t0, $sp, 0x5C
    ctx->pc = 0x1e6020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_1e6024:
    // 0x1e6024: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e6024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e6028:
    // 0x1e6028: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e6028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e602c:
    // 0x1e602c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e6030:
    // 0x1e6030: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e6030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e6034:
    // 0x1e6034: 0xa7a60046  sh          $a2, 0x46($sp)
    ctx->pc = 0x1e6034u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 6));
label_1e6038:
    // 0x1e6038: 0x26450028  addiu       $a1, $s2, 0x28
    ctx->pc = 0x1e6038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1e603c:
    // 0x1e603c: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x1e603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_1e6040:
    // 0x1e6040: 0x27a60046  addiu       $a2, $sp, 0x46
    ctx->pc = 0x1e6040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
label_1e6044:
    // 0x1e6044: 0x27a90048  addiu       $t1, $sp, 0x48
    ctx->pc = 0x1e6044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e6048:
    // 0x1e6048: 0x27aa0054  addiu       $t2, $sp, 0x54
    ctx->pc = 0x1e6048u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1e604c:
    // 0x1e604c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e604cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6050:
    // 0x1e6050: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1e6050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1e6054:
    // 0x1e6054: 0x320f809  jalr        $t9
label_1e6058:
    if (ctx->pc == 0x1E6058u) {
        ctx->pc = 0x1E6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6054u;
        // 0x1e6058: 0x27ab0058  addiu       $t3, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E605Cu;
        goto label_1e605c;
    }
    ctx->pc = 0x1E6054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E605Cu);
        ctx->pc = 0x1E6058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6054u;
        // 0x1e6058: 0x27ab0058  addiu       $t3, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6054u, 0x1E605Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E605Cu;
label_1e605c:
    // 0x1e605c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1e605cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1e6060:
    // 0x1e6060: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_1e6064:
    if (ctx->pc == 0x1E6064u) {
        ctx->pc = 0x1E6068u;
        goto label_1e6068;
    }
    ctx->pc = 0x1E6060u;
    {
        const bool branch_taken_0x1e6060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6060) {
            ctx->pc = 0x1E60B8u;
            goto label_1e60b8;
        }
    }
    ctx->pc = 0x1E6068u;
label_1e6068:
    // 0x1e6068: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e6068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e606c:
    // 0x1e606c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1e6070:
    if (ctx->pc == 0x1E6070u) {
        ctx->pc = 0x1E6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E606Cu;
        // 0x1e6070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6074u;
        goto label_1e6074;
    }
    ctx->pc = 0x1E606Cu;
    {
        const bool branch_taken_0x1e606c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E606Cu;
        // 0x1e6070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e606c) {
            ctx->pc = 0x1E609Cu;
            goto label_1e609c;
        }
    }
    ctx->pc = 0x1E6074u;
label_1e6074:
    // 0x1e6074: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1e6078:
    if (ctx->pc == 0x1E6078u) {
        ctx->pc = 0x1E607Cu;
        goto label_1e607c;
    }
    ctx->pc = 0x1E6074u;
    {
        const bool branch_taken_0x1e6074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1e6074) {
            ctx->pc = 0x1E6090u;
            goto label_1e6090;
        }
    }
    ctx->pc = 0x1E607Cu;
label_1e607c:
    // 0x1e607c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e6080:
    // 0x1e6080: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1e6084:
    if (ctx->pc == 0x1E6084u) {
        ctx->pc = 0x1E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6080u;
        // 0x1e6084: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6088u;
        goto label_1e6088;
    }
    ctx->pc = 0x1E6080u;
    {
        const bool branch_taken_0x1e6080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E6084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6080u;
        // 0x1e6084: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6080) {
            ctx->pc = 0x1E6094u;
            goto label_1e6094;
        }
    }
    ctx->pc = 0x1E6088u;
label_1e6088:
    // 0x1e6088: 0x1000000f  b           . + 4 + (0xF << 2)
label_1e608c:
    if (ctx->pc == 0x1E608Cu) {
        ctx->pc = 0x1E608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6088u;
        // 0x1e608c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6090u;
        goto label_1e6090;
    }
    ctx->pc = 0x1E6088u;
    {
        const bool branch_taken_0x1e6088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6088u;
        // 0x1e608c: 0x11082a  slt         $at, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6088) {
            ctx->pc = 0x1E60C8u;
            goto label_1e60c8;
        }
    }
    ctx->pc = 0x1E6090u;
label_1e6090:
    // 0x1e6090: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e6090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e6094:
    // 0x1e6094: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1e6098:
    if (ctx->pc == 0x1E6098u) {
        ctx->pc = 0x1E6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6094u;
        // 0x1e6098: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E609Cu;
        goto label_1e609c;
    }
    ctx->pc = 0x1E6094u;
    {
        const bool branch_taken_0x1e6094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6094u;
        // 0x1e6098: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6094) {
            ctx->pc = 0x1E61C4u;
            goto label_1e61c4;
        }
    }
    ctx->pc = 0x1E609Cu;
label_1e609c:
    // 0x1e609c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1e609cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e60a0:
    // 0x1e60a0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1e60a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e60a4:
    // 0x1e60a4: 0x27a50046  addiu       $a1, $sp, 0x46
    ctx->pc = 0x1e60a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 70));
label_1e60a8:
    // 0x1e60a8: 0xc07fdfe  jal         func_1FF7F8
label_1e60ac:
    if (ctx->pc == 0x1E60ACu) {
        ctx->pc = 0x1E60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60A8u;
        // 0x1e60ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60B0u;
        goto label_1e60b0;
    }
    ctx->pc = 0x1E60A8u;
    SET_GPR_U32(ctx, 31, 0x1E60B0u);
    ctx->pc = 0x1E60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E60A8u;
    // 0x1e60ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1E60A8u, 0x1E60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E60B0u;
label_1e60b0:
    // 0x1e60b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1e60b4:
    if (ctx->pc == 0x1E60B4u) {
        ctx->pc = 0x1E60B8u;
        goto label_1e60b8;
    }
    ctx->pc = 0x1E60B0u;
    {
        const bool branch_taken_0x1e60b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e60b0) {
            ctx->pc = 0x1E60C4u;
            goto label_1e60c4;
        }
    }
    ctx->pc = 0x1E60B8u;
label_1e60b8:
    // 0x1e60b8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1e60bc:
    // 0x1e60bc: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e60bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e60c0:
    // 0x1e60c0: 0x628823  subu        $s1, $v1, $v0
    ctx->pc = 0x1e60c0u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e60c4:
    // 0x1e60c4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1e60c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e60c8:
    // 0x1e60c8: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_1e60cc:
    if (ctx->pc == 0x1E60CCu) {
        ctx->pc = 0x1E60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60C8u;
        // 0x1e60cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60D0u;
        goto label_1e60d0;
    }
    ctx->pc = 0x1E60C8u;
    {
        const bool branch_taken_0x1e60c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60C8u;
        // 0x1e60cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60c8) {
            ctx->pc = 0x1E61B4u;
            goto label_1e61b4;
        }
    }
    ctx->pc = 0x1E60D0u;
label_1e60d0:
    // 0x1e60d0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1e60d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e60d4:
    // 0x1e60d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1e60d8:
    // 0x1e60d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1e60d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e60dc:
    // 0x1e60dc: 0x4410020  bgez        $v0, . + 4 + (0x20 << 2)
label_1e60e0:
    if (ctx->pc == 0x1E60E0u) {
        ctx->pc = 0x1E60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60DCu;
        // 0x1e60e0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E60E4u;
        goto label_1e60e4;
    }
    ctx->pc = 0x1E60DCu;
    {
        const bool branch_taken_0x1e60dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60DCu;
        // 0x1e60e0: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60dc) {
            ctx->pc = 0x1E6160u;
            goto label_1e6160;
        }
    }
    ctx->pc = 0x1E60E4u;
label_1e60e4:
    // 0x1e60e4: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e60e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e60e8:
    // 0x1e60e8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e60e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1e60ec:
    // 0x1e60ec: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1e60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1e60f0:
    // 0x1e60f0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1e60f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1e60f4:
    // 0x1e60f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e60f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e60f8:
    // 0x1e60f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1e60fc:
    if (ctx->pc == 0x1E60FCu) {
        ctx->pc = 0x1E60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60F8u;
        // 0x1e60fc: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6100u;
        goto label_1e6100;
    }
    ctx->pc = 0x1E60F8u;
    {
        const bool branch_taken_0x1e60f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E60FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E60F8u;
        // 0x1e60fc: 0x27a30048  addiu       $v1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e60f8) {
            ctx->pc = 0x1E6144u;
            goto label_1e6144;
        }
    }
    ctx->pc = 0x1E6100u;
label_1e6100:
    // 0x1e6100: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e6104:
    // 0x1e6104: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1e6104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1e6108:
    // 0x1e6108: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1e6108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1e610c:
    // 0x1e610c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e610cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6110:
    // 0x1e6110: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e6110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e6114:
    // 0x1e6114: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x1e6114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e6118:
    // 0x1e6118: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1e6118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e611c:
    // 0x1e611c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e611cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6120:
    // 0x1e6120: 0x10440004  beq         $v0, $a0, . + 4 + (0x4 << 2)
label_1e6124:
    if (ctx->pc == 0x1E6124u) {
        ctx->pc = 0x1E6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6120u;
        // 0x1e6124: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6128u;
        goto label_1e6128;
    }
    ctx->pc = 0x1E6120u;
    {
        const bool branch_taken_0x1e6120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E6124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6120u;
        // 0x1e6124: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6120) {
            ctx->pc = 0x1E6134u;
            goto label_1e6134;
        }
    }
    ctx->pc = 0x1E6128u;
label_1e6128:
    // 0x1e6128: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1e6128u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1e612c:
    // 0x1e612c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1e6130:
    if (ctx->pc == 0x1E6130u) {
        ctx->pc = 0x1E6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E612Cu;
        // 0x1e6130: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6134u;
        goto label_1e6134;
    }
    ctx->pc = 0x1E612Cu;
    {
        const bool branch_taken_0x1e612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E612Cu;
        // 0x1e6130: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e612c) {
            ctx->pc = 0x1E613Cu;
            goto label_1e613c;
        }
    }
    ctx->pc = 0x1E6134u;
label_1e6134:
    // 0x1e6134: 0xc0817ae  jal         func_205EB8
label_1e6138:
    if (ctx->pc == 0x1E6138u) {
        ctx->pc = 0x1E613Cu;
        goto label_1e613c;
    }
    ctx->pc = 0x1E6134u;
    SET_GPR_U32(ctx, 31, 0x1E613Cu);
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E6134u, 0x1E613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E613Cu;
label_1e613c:
    // 0x1e613c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1e6140:
    if (ctx->pc == 0x1E6140u) {
        ctx->pc = 0x1E6144u;
        goto label_1e6144;
    }
    ctx->pc = 0x1E613Cu;
    {
        const bool branch_taken_0x1e613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e613c) {
            ctx->pc = 0x1E6158u;
            goto label_1e6158;
        }
    }
    ctx->pc = 0x1E6144u;
label_1e6144:
    // 0x1e6144: 0x0  nop
    ctx->pc = 0x1e6144u;
    // NOP
label_1e6148:
    // 0x1e6148: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e614c:
    // 0x1e614c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1e614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e6150:
    // 0x1e6150: 0xc0817ae  jal         func_205EB8
label_1e6154:
    if (ctx->pc == 0x1E6154u) {
        ctx->pc = 0x1E6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6150u;
        // 0x1e6154: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E6158u;
        goto label_1e6158;
    }
    ctx->pc = 0x1E6150u;
    SET_GPR_U32(ctx, 31, 0x1E6158u);
    ctx->pc = 0x1E6154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6150u;
    // 0x1e6154: 0x80440000  lb          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205EB8u, 0x1E6150u, 0x1E6158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6158u;
label_1e6158:
    // 0x1e6158: 0x1000000d  b           . + 4 + (0xD << 2)
label_1e615c:
    if (ctx->pc == 0x1E615Cu) {
        ctx->pc = 0x1E6160u;
        goto label_1e6160;
    }
    ctx->pc = 0x1E6158u;
    {
        const bool branch_taken_0x1e6158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6158) {
            ctx->pc = 0x1E6190u;
            goto label_1e6190;
        }
    }
    ctx->pc = 0x1E6160u;
label_1e6160:
    // 0x1e6160: 0x27a20048  addiu       $v0, $sp, 0x48
    ctx->pc = 0x1e6160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1e6164:
    // 0x1e6164: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x1e6164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1e6168:
    // 0x1e6168: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1e6168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e616c:
    // 0x1e616c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1e616cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e6170:
    // 0x1e6170: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e6170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1e6174:
    // 0x1e6174: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1e6174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_1e6178:
    // 0x1e6178: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1e617c:
    // 0x1e617c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e6180:
    // 0x1e6180: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1e6180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1e6184:
    // 0x1e6184: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1e6184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e6188:
    // 0x1e6188: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1e6188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1e618c:
    // 0x1e618c: 0x0  nop
    ctx->pc = 0x1e618cu;
    // NOP
label_1e6190:
    // 0x1e6190: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e6190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e6194:
    // 0x1e6194: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1e6198:
    if (ctx->pc == 0x1E6198u) {
        ctx->pc = 0x1E619Cu;
        goto label_1e619c;
    }
    ctx->pc = 0x1E6194u;
    {
        const bool branch_taken_0x1e6194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e6194) {
            ctx->pc = 0x1E61A4u;
            goto label_1e61a4;
        }
    }
    ctx->pc = 0x1E619Cu;
label_1e619c:
    // 0x1e619c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1e61a0:
    if (ctx->pc == 0x1E61A0u) {
        ctx->pc = 0x1E61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E619Cu;
        // 0x1e61a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61A4u;
        goto label_1e61a4;
    }
    ctx->pc = 0x1E619Cu;
    {
        const bool branch_taken_0x1e619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E619Cu;
        // 0x1e61a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e619c) {
            ctx->pc = 0x1E61C0u;
            goto label_1e61c0;
        }
    }
    ctx->pc = 0x1E61A4u;
label_1e61a4:
    // 0x1e61a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e61a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e61a8:
    // 0x1e61a8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x1e61a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1e61ac:
    // 0x1e61ac: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
label_1e61b0:
    if (ctx->pc == 0x1E61B0u) {
        ctx->pc = 0x1E61B4u;
        goto label_1e61b4;
    }
    ctx->pc = 0x1E61ACu;
    {
        const bool branch_taken_0x1e61ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e61ac) {
            ctx->pc = 0x1E60D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e60d0;
        }
    }
    ctx->pc = 0x1E61B4u;
label_1e61b4:
    // 0x1e61b4: 0x0  nop
    ctx->pc = 0x1e61b4u;
    // NOP
label_1e61b8:
    // 0x1e61b8: 0x97a20046  lhu         $v0, 0x46($sp)
    ctx->pc = 0x1e61b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 70)));
label_1e61bc:
    // 0x1e61bc: 0x0  nop
    ctx->pc = 0x1e61bcu;
    // NOP
label_1e61c0:
    // 0x1e61c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e61c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e61c4:
    // 0x1e61c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e61c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e61c8:
    // 0x1e61c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e61c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e61cc:
    // 0x1e61cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e61ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e61d0:
    // 0x1e61d0: 0x3e00008  jr          $ra
label_1e61d4:
    if (ctx->pc == 0x1E61D4u) {
        ctx->pc = 0x1E61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61D0u;
        // 0x1e61d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E61D8u;
        goto label_fallthrough_0x1e61d0;
    }
    ctx->pc = 0x1E61D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E61D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E61D0u;
        // 0x1e61d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E61D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e61d0:
    ctx->pc = 0x1E61D8u;
}
