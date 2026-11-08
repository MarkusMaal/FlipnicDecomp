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

// Function: FUN_0010fa90
// Address: 0x10fa90 - 0x10fc34
void FUN_0010fa90_0x10fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010fa90_0x10fa90");
#endif

    switch (ctx->pc) {
        case 0x10fa90u: goto label_10fa90;
        case 0x10fa94u: goto label_10fa94;
        case 0x10fa98u: goto label_10fa98;
        case 0x10fa9cu: goto label_10fa9c;
        case 0x10faa0u: goto label_10faa0;
        case 0x10faa4u: goto label_10faa4;
        case 0x10faa8u: goto label_10faa8;
        case 0x10faacu: goto label_10faac;
        case 0x10fab0u: goto label_10fab0;
        case 0x10fab4u: goto label_10fab4;
        case 0x10fab8u: goto label_10fab8;
        case 0x10fabcu: goto label_10fabc;
        case 0x10fac0u: goto label_10fac0;
        case 0x10fac4u: goto label_10fac4;
        case 0x10fac8u: goto label_10fac8;
        case 0x10faccu: goto label_10facc;
        case 0x10fad0u: goto label_10fad0;
        case 0x10fad4u: goto label_10fad4;
        case 0x10fad8u: goto label_10fad8;
        case 0x10fadcu: goto label_10fadc;
        case 0x10fae0u: goto label_10fae0;
        case 0x10fae4u: goto label_10fae4;
        case 0x10fae8u: goto label_10fae8;
        case 0x10faecu: goto label_10faec;
        case 0x10faf0u: goto label_10faf0;
        case 0x10faf4u: goto label_10faf4;
        case 0x10faf8u: goto label_10faf8;
        case 0x10fafcu: goto label_10fafc;
        case 0x10fb00u: goto label_10fb00;
        case 0x10fb04u: goto label_10fb04;
        case 0x10fb08u: goto label_10fb08;
        case 0x10fb0cu: goto label_10fb0c;
        case 0x10fb10u: goto label_10fb10;
        case 0x10fb14u: goto label_10fb14;
        case 0x10fb18u: goto label_10fb18;
        case 0x10fb1cu: goto label_10fb1c;
        case 0x10fb20u: goto label_10fb20;
        case 0x10fb24u: goto label_10fb24;
        case 0x10fb28u: goto label_10fb28;
        case 0x10fb2cu: goto label_10fb2c;
        case 0x10fb30u: goto label_10fb30;
        case 0x10fb34u: goto label_10fb34;
        case 0x10fb38u: goto label_10fb38;
        case 0x10fb3cu: goto label_10fb3c;
        case 0x10fb40u: goto label_10fb40;
        case 0x10fb44u: goto label_10fb44;
        case 0x10fb48u: goto label_10fb48;
        case 0x10fb4cu: goto label_10fb4c;
        case 0x10fb50u: goto label_10fb50;
        case 0x10fb54u: goto label_10fb54;
        case 0x10fb58u: goto label_10fb58;
        case 0x10fb5cu: goto label_10fb5c;
        case 0x10fb60u: goto label_10fb60;
        case 0x10fb64u: goto label_10fb64;
        case 0x10fb68u: goto label_10fb68;
        case 0x10fb6cu: goto label_10fb6c;
        case 0x10fb70u: goto label_10fb70;
        case 0x10fb74u: goto label_10fb74;
        case 0x10fb78u: goto label_10fb78;
        case 0x10fb7cu: goto label_10fb7c;
        case 0x10fb80u: goto label_10fb80;
        case 0x10fb84u: goto label_10fb84;
        case 0x10fb88u: goto label_10fb88;
        case 0x10fb8cu: goto label_10fb8c;
        case 0x10fb90u: goto label_10fb90;
        case 0x10fb94u: goto label_10fb94;
        case 0x10fb98u: goto label_10fb98;
        case 0x10fb9cu: goto label_10fb9c;
        case 0x10fba0u: goto label_10fba0;
        case 0x10fba4u: goto label_10fba4;
        case 0x10fba8u: goto label_10fba8;
        case 0x10fbacu: goto label_10fbac;
        case 0x10fbb0u: goto label_10fbb0;
        case 0x10fbb4u: goto label_10fbb4;
        case 0x10fbb8u: goto label_10fbb8;
        case 0x10fbbcu: goto label_10fbbc;
        case 0x10fbc0u: goto label_10fbc0;
        case 0x10fbc4u: goto label_10fbc4;
        case 0x10fbc8u: goto label_10fbc8;
        case 0x10fbccu: goto label_10fbcc;
        case 0x10fbd0u: goto label_10fbd0;
        case 0x10fbd4u: goto label_10fbd4;
        case 0x10fbd8u: goto label_10fbd8;
        case 0x10fbdcu: goto label_10fbdc;
        case 0x10fbe0u: goto label_10fbe0;
        case 0x10fbe4u: goto label_10fbe4;
        case 0x10fbe8u: goto label_10fbe8;
        case 0x10fbecu: goto label_10fbec;
        case 0x10fbf0u: goto label_10fbf0;
        case 0x10fbf4u: goto label_10fbf4;
        case 0x10fbf8u: goto label_10fbf8;
        case 0x10fbfcu: goto label_10fbfc;
        case 0x10fc00u: goto label_10fc00;
        case 0x10fc04u: goto label_10fc04;
        case 0x10fc08u: goto label_10fc08;
        case 0x10fc0cu: goto label_10fc0c;
        case 0x10fc10u: goto label_10fc10;
        case 0x10fc14u: goto label_10fc14;
        case 0x10fc18u: goto label_10fc18;
        case 0x10fc1cu: goto label_10fc1c;
        case 0x10fc20u: goto label_10fc20;
        case 0x10fc24u: goto label_10fc24;
        case 0x10fc28u: goto label_10fc28;
        case 0x10fc2cu: goto label_10fc2c;
        case 0x10fc30u: goto label_10fc30;
        default: break;
    }

    ctx->pc = 0x10fa90u;

label_10fa90:
    // 0x10fa90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_10fa94:
    // 0x10fa94: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x10fa94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_10fa98:
    // 0x10fa98: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x10fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_10fa9c:
    // 0x10fa9c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_10faa0:
    // 0x10faa0: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x10faa0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_10faa4:
    // 0x10faa4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x10faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_10faa8:
    // 0x10faa8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x10faa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10faac:
    // 0x10faac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x10faacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10fab0:
    // 0x10fab0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x10fab0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10fab4:
    // 0x10fab4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10fab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10fab8:
    // 0x10fab8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10fab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10fabc:
    // 0x10fabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10fabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_10fac0:
    // 0x10fac0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10fac0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10fac4:
    // 0x10fac4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10fac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10fac8:
    // 0x10fac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10fac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10facc:
    // 0x10facc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10fad0:
    // 0x10fad0: 0x10000049  b           . + 4 + (0x49 << 2)
label_10fad4:
    if (ctx->pc == 0x10FAD4u) {
        ctx->pc = 0x10FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD0u;
        // 0x10fad4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FAD8u;
        goto label_10fad8;
    }
    ctx->pc = 0x10FAD0u;
    {
        const bool branch_taken_0x10fad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAD0u;
        // 0x10fad4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fad0) {
            ctx->pc = 0x10FBF8u;
            goto label_10fbf8;
        }
    }
    ctx->pc = 0x10FAD8u;
label_10fad8:
    // 0x10fad8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x10fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_10fadc:
    // 0x10fadc: 0x8f8385f4  lw          $v1, -0x7A0C($gp)
    ctx->pc = 0x10fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10fae0:
    // 0x10fae0: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x10fae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_10fae4:
    // 0x10fae4: 0x84840000  lh          $a0, 0x0($a0)
    ctx->pc = 0x10fae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_10fae8:
    // 0x10fae8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x10fae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_10faec:
    // 0x10faec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10faecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10faf0:
    // 0x10faf0: 0x8c712cd8  lw          $s1, 0x2CD8($v1)
    ctx->pc = 0x10faf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10faf4:
    // 0x10faf4: 0x92230225  lbu         $v1, 0x225($s1)
    ctx->pc = 0x10faf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 549)));
label_10faf8:
    // 0x10faf8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x10faf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_10fafc:
    // 0x10fafc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_10fb00:
    if (ctx->pc == 0x10FB00u) {
        ctx->pc = 0x10FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAFCu;
        // 0x10fb00: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB04u;
        goto label_10fb04;
    }
    ctx->pc = 0x10FAFCu;
    {
        const bool branch_taken_0x10fafc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FAFCu;
        // 0x10fb00: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fafc) {
            ctx->pc = 0x10FB14u;
            goto label_10fb14;
        }
    }
    ctx->pc = 0x10FB04u;
label_10fb04:
    // 0x10fb04: 0xc043f7c  jal         func_10FDF0
label_10fb08:
    if (ctx->pc == 0x10FB08u) {
        ctx->pc = 0x10FB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB04u;
        // 0x10fb08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB0Cu;
        goto label_10fb0c;
    }
    ctx->pc = 0x10FB04u;
    SET_GPR_U32(ctx, 31, 0x10FB0Cu);
    ctx->pc = 0x10FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB04u;
    // 0x10fb08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDF0u, 0x10FB04u, 0x10FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB0Cu;
label_10fb0c:
    // 0x10fb0c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_10fb10:
    if (ctx->pc == 0x10FB10u) {
        ctx->pc = 0x10FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB0Cu;
        // 0x10fb10: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB14u;
        goto label_10fb14;
    }
    ctx->pc = 0x10FB0Cu;
    {
        const bool branch_taken_0x10fb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB0Cu;
        // 0x10fb10: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb0c) {
            ctx->pc = 0x10FC0Cu;
            goto label_10fc0c;
        }
    }
    ctx->pc = 0x10FB14u;
label_10fb14:
    // 0x10fb14: 0x92230224  lbu         $v1, 0x224($s1)
    ctx->pc = 0x10fb14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_10fb18:
    // 0x10fb18: 0x31e7c  dsll32      $v1, $v1, 25
    ctx->pc = 0x10fb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 25));
label_10fb1c:
    // 0x10fb1c: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10fb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_10fb20:
    // 0x10fb20: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_10fb24:
    if (ctx->pc == 0x10FB24u) {
        ctx->pc = 0x10FB28u;
        goto label_10fb28;
    }
    ctx->pc = 0x10FB20u;
    {
        const bool branch_taken_0x10fb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb20) {
            ctx->pc = 0x10FBECu;
            goto label_10fbec;
        }
    }
    ctx->pc = 0x10FB28u;
label_10fb28:
    // 0x10fb28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10fb28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10fb2c:
    // 0x10fb2c: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x10fb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_10fb30:
    // 0x10fb30: 0x320f809  jalr        $t9
label_10fb34:
    if (ctx->pc == 0x10FB34u) {
        ctx->pc = 0x10FB38u;
        goto label_10fb38;
    }
    ctx->pc = 0x10FB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10FB38u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FB30u, 0x10FB38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10FB38u;
label_10fb38:
    // 0x10fb38: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
label_10fb3c:
    if (ctx->pc == 0x10FB3Cu) {
        ctx->pc = 0x10FB40u;
        goto label_10fb40;
    }
    ctx->pc = 0x10FB38u;
    {
        const bool branch_taken_0x10fb38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x10fb38) {
            ctx->pc = 0x10FB78u;
            goto label_10fb78;
        }
    }
    ctx->pc = 0x10FB40u;
label_10fb40:
    // 0x10fb40: 0x8e230228  lw          $v1, 0x228($s1)
    ctx->pc = 0x10fb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 552)));
label_10fb44:
    // 0x10fb44: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_10fb48:
    if (ctx->pc == 0x10FB48u) {
        ctx->pc = 0x10FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB44u;
        // 0x10fb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB4Cu;
        goto label_10fb4c;
    }
    ctx->pc = 0x10FB44u;
    {
        const bool branch_taken_0x10fb44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB44u;
        // 0x10fb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb44) {
            ctx->pc = 0x10FBECu;
            goto label_10fbec;
        }
    }
    ctx->pc = 0x10FB4Cu;
label_10fb4c:
    // 0x10fb4c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10fb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10fb50:
    // 0x10fb50: 0xc043da0  jal         func_10F680
label_10fb54:
    if (ctx->pc == 0x10FB54u) {
        ctx->pc = 0x10FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB50u;
        // 0x10fb54: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB58u;
        goto label_10fb58;
    }
    ctx->pc = 0x10FB50u;
    SET_GPR_U32(ctx, 31, 0x10FB58u);
    ctx->pc = 0x10FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB50u;
    // 0x10fb54: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x10FB50u, 0x10FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB58u;
label_10fb58:
    // 0x10fb58: 0x92250224  lbu         $a1, 0x224($s1)
    ctx->pc = 0x10fb58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_10fb5c:
    // 0x10fb5c: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x10fb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_10fb60:
    // 0x10fb60: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x10fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_10fb64:
    // 0x10fb64: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_10fb68:
    // 0x10fb68: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10fb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10fb6c:
    // 0x10fb6c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10fb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10fb70:
    // 0x10fb70: 0x1000001e  b           . + 4 + (0x1E << 2)
label_10fb74:
    if (ctx->pc == 0x10FB74u) {
        ctx->pc = 0x10FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB70u;
        // 0x10fb74: 0xa2230224  sb          $v1, 0x224($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB78u;
        goto label_10fb78;
    }
    ctx->pc = 0x10FB70u;
    {
        const bool branch_taken_0x10fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB70u;
        // 0x10fb74: 0xa2230224  sb          $v1, 0x224($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb70) {
            ctx->pc = 0x10FBECu;
            goto label_10fbec;
        }
    }
    ctx->pc = 0x10FB78u;
label_10fb78:
    // 0x10fb78: 0x92240224  lbu         $a0, 0x224($s1)
    ctx->pc = 0x10fb78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_10fb7c:
    // 0x10fb7c: 0x30830007  andi        $v1, $a0, 0x7
    ctx->pc = 0x10fb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
label_10fb80:
    // 0x10fb80: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_10fb84:
    if (ctx->pc == 0x10FB84u) {
        ctx->pc = 0x10FB88u;
        goto label_10fb88;
    }
    ctx->pc = 0x10FB80u;
    {
        const bool branch_taken_0x10fb80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb80) {
            ctx->pc = 0x10FBA0u;
            goto label_10fba0;
        }
    }
    ctx->pc = 0x10FB88u;
label_10fb88:
    // 0x10fb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10fb8c:
    // 0x10fb8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10fb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10fb90:
    // 0x10fb90: 0xc043da0  jal         func_10F680
label_10fb94:
    if (ctx->pc == 0x10FB94u) {
        ctx->pc = 0x10FB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB90u;
        // 0x10fb94: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FB98u;
        goto label_10fb98;
    }
    ctx->pc = 0x10FB90u;
    SET_GPR_U32(ctx, 31, 0x10FB98u);
    ctx->pc = 0x10FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB90u;
    // 0x10fb94: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F680u, 0x10FB90u, 0x10FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB98u;
label_10fb98:
    // 0x10fb98: 0x10000014  b           . + 4 + (0x14 << 2)
label_10fb9c:
    if (ctx->pc == 0x10FB9Cu) {
        ctx->pc = 0x10FBA0u;
        goto label_10fba0;
    }
    ctx->pc = 0x10FB98u;
    {
        const bool branch_taken_0x10fb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fb98) {
            ctx->pc = 0x10FBECu;
            goto label_10fbec;
        }
    }
    ctx->pc = 0x10FBA0u;
label_10fba0:
    // 0x10fba0: 0x92230225  lbu         $v1, 0x225($s1)
    ctx->pc = 0x10fba0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 549)));
label_10fba4:
    // 0x10fba4: 0x31fbc  dsll32      $v1, $v1, 30
    ctx->pc = 0x10fba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 30));
label_10fba8:
    // 0x10fba8: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10fba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_10fbac:
    // 0x10fbac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_10fbb0:
    if (ctx->pc == 0x10FBB0u) {
        ctx->pc = 0x10FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBACu;
        // 0x10fbb0: 0x41ebc  dsll32      $v1, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBB4u;
        goto label_10fbb4;
    }
    ctx->pc = 0x10FBACu;
    {
        const bool branch_taken_0x10fbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBACu;
        // 0x10fbb0: 0x41ebc  dsll32      $v1, $a0, 26 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fbac) {
            ctx->pc = 0x10FBC0u;
            goto label_10fbc0;
        }
    }
    ctx->pc = 0x10FBB4u;
label_10fbb4:
    // 0x10fbb4: 0x31ffe  dsrl32      $v1, $v1, 31
    ctx->pc = 0x10fbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 31));
label_10fbb8:
    // 0x10fbb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_10fbbc:
    if (ctx->pc == 0x10FBBCu) {
        ctx->pc = 0x10FBC0u;
        goto label_10fbc0;
    }
    ctx->pc = 0x10FBB8u;
    {
        const bool branch_taken_0x10fbb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10fbb8) {
            ctx->pc = 0x10FBCCu;
            goto label_10fbcc;
        }
    }
    ctx->pc = 0x10FBC0u;
label_10fbc0:
    // 0x10fbc0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10fbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10fbc4:
    // 0x10fbc4: 0xc043f10  jal         func_10FC40
label_10fbc8:
    if (ctx->pc == 0x10FBC8u) {
        ctx->pc = 0x10FBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FBC4u;
        // 0x10fbc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FBCCu;
        goto label_10fbcc;
    }
    ctx->pc = 0x10FBC4u;
    SET_GPR_U32(ctx, 31, 0x10FBCCu);
    ctx->pc = 0x10FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FBC4u;
    // 0x10fbc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC40u, 0x10FBC4u, 0x10FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FBCCu;
label_10fbcc:
    // 0x10fbcc: 0x0  nop
    ctx->pc = 0x10fbccu;
    // NOP
label_10fbd0:
    // 0x10fbd0: 0x92250224  lbu         $a1, 0x224($s1)
    ctx->pc = 0x10fbd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 548)));
label_10fbd4:
    // 0x10fbd4: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x10fbd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_10fbd8:
    // 0x10fbd8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x10fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_10fbdc:
    // 0x10fbdc: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x10fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_10fbe0:
    // 0x10fbe0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x10fbe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_10fbe4:
    // 0x10fbe4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x10fbe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_10fbe8:
    // 0x10fbe8: 0xa2230224  sb          $v1, 0x224($s1)
    ctx->pc = 0x10fbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 548), (uint8_t)GPR_U32(ctx, 3));
label_10fbec:
    // 0x10fbec: 0x0  nop
    ctx->pc = 0x10fbecu;
    // NOP
label_10fbf0:
    // 0x10fbf0: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x10fbf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_10fbf4:
    // 0x10fbf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10fbf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10fbf8:
    // 0x10fbf8: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x10fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_10fbfc:
    // 0x10fbfc: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x10fbfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_10fc00:
    // 0x10fc00: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
label_10fc04:
    if (ctx->pc == 0x10FC04u) {
        ctx->pc = 0x10FC08u;
        goto label_10fc08;
    }
    ctx->pc = 0x10FC00u;
    {
        const bool branch_taken_0x10fc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10fc00) {
            ctx->pc = 0x10FAD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10fad8;
        }
    }
    ctx->pc = 0x10FC08u;
label_10fc08:
    // 0x10fc08: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x10fc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_10fc0c:
    // 0x10fc0c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x10fc0cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10fc10:
    // 0x10fc10: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x10fc10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10fc14:
    // 0x10fc14: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x10fc14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10fc18:
    // 0x10fc18: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x10fc18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10fc1c:
    // 0x10fc1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10fc1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10fc20:
    // 0x10fc20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10fc20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10fc24:
    // 0x10fc24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10fc24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10fc28:
    // 0x10fc28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10fc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10fc2c:
    // 0x10fc2c: 0x3e00008  jr          $ra
label_10fc30:
    if (ctx->pc == 0x10FC30u) {
        ctx->pc = 0x10FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC2Cu;
        // 0x10fc30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10FC34u;
        goto label_fallthrough_0x10fc2c;
    }
    ctx->pc = 0x10FC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC2Cu;
        // 0x10fc30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10fc2c:
    ctx->pc = 0x10FC34u;
}
