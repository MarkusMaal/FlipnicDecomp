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

// Function: FUN_0019ab10
// Address: 0x19ab10 - 0x19abf0
void FUN_0019ab10_0x19ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019ab10_0x19ab10");
#endif

    switch (ctx->pc) {
        case 0x19ab10u: goto label_19ab10;
        case 0x19ab14u: goto label_19ab14;
        case 0x19ab18u: goto label_19ab18;
        case 0x19ab1cu: goto label_19ab1c;
        case 0x19ab20u: goto label_19ab20;
        case 0x19ab24u: goto label_19ab24;
        case 0x19ab28u: goto label_19ab28;
        case 0x19ab2cu: goto label_19ab2c;
        case 0x19ab30u: goto label_19ab30;
        case 0x19ab34u: goto label_19ab34;
        case 0x19ab38u: goto label_19ab38;
        case 0x19ab3cu: goto label_19ab3c;
        case 0x19ab40u: goto label_19ab40;
        case 0x19ab44u: goto label_19ab44;
        case 0x19ab48u: goto label_19ab48;
        case 0x19ab4cu: goto label_19ab4c;
        case 0x19ab50u: goto label_19ab50;
        case 0x19ab54u: goto label_19ab54;
        case 0x19ab58u: goto label_19ab58;
        case 0x19ab5cu: goto label_19ab5c;
        case 0x19ab60u: goto label_19ab60;
        case 0x19ab64u: goto label_19ab64;
        case 0x19ab68u: goto label_19ab68;
        case 0x19ab6cu: goto label_19ab6c;
        case 0x19ab70u: goto label_19ab70;
        case 0x19ab74u: goto label_19ab74;
        case 0x19ab78u: goto label_19ab78;
        case 0x19ab7cu: goto label_19ab7c;
        case 0x19ab80u: goto label_19ab80;
        case 0x19ab84u: goto label_19ab84;
        case 0x19ab88u: goto label_19ab88;
        case 0x19ab8cu: goto label_19ab8c;
        case 0x19ab90u: goto label_19ab90;
        case 0x19ab94u: goto label_19ab94;
        case 0x19ab98u: goto label_19ab98;
        case 0x19ab9cu: goto label_19ab9c;
        case 0x19aba0u: goto label_19aba0;
        case 0x19aba4u: goto label_19aba4;
        case 0x19aba8u: goto label_19aba8;
        case 0x19abacu: goto label_19abac;
        case 0x19abb0u: goto label_19abb0;
        case 0x19abb4u: goto label_19abb4;
        case 0x19abb8u: goto label_19abb8;
        case 0x19abbcu: goto label_19abbc;
        case 0x19abc0u: goto label_19abc0;
        case 0x19abc4u: goto label_19abc4;
        case 0x19abc8u: goto label_19abc8;
        case 0x19abccu: goto label_19abcc;
        case 0x19abd0u: goto label_19abd0;
        case 0x19abd4u: goto label_19abd4;
        case 0x19abd8u: goto label_19abd8;
        case 0x19abdcu: goto label_19abdc;
        case 0x19abe0u: goto label_19abe0;
        case 0x19abe4u: goto label_19abe4;
        case 0x19abe8u: goto label_19abe8;
        case 0x19abecu: goto label_19abec;
        default: break;
    }

    ctx->pc = 0x19ab10u;

label_19ab10:
    // 0x19ab10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19ab14:
    // 0x19ab14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19ab14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19ab18:
    // 0x19ab18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ab18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_19ab1c:
    // 0x19ab1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_19ab20:
    // 0x19ab20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19ab20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19ab24:
    // 0x19ab24: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19ab24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19ab28:
    // 0x19ab28: 0xc063dd4  jal         func_18F750
label_19ab2c:
    if (ctx->pc == 0x19AB2Cu) {
        ctx->pc = 0x19AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB28u;
        // 0x19ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB30u;
        goto label_19ab30;
    }
    ctx->pc = 0x19AB28u;
    SET_GPR_U32(ctx, 31, 0x19AB30u);
    ctx->pc = 0x19AB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB28u;
    // 0x19ab2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F750u, 0x19AB28u, 0x19AB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB30u;
label_19ab30:
    // 0x19ab30: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ab34:
    // 0x19ab34: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
label_19ab38:
    if (ctx->pc == 0x19AB38u) {
        ctx->pc = 0x19AB3Cu;
        goto label_19ab3c;
    }
    ctx->pc = 0x19AB34u;
    {
        const bool branch_taken_0x19ab34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ab34) {
            ctx->pc = 0x19ABA0u;
            goto label_19aba0;
        }
    }
    ctx->pc = 0x19AB3Cu;
label_19ab3c:
    // 0x19ab3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19ab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19ab40:
    // 0x19ab40: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_19ab44:
    if (ctx->pc == 0x19AB44u) {
        ctx->pc = 0x19AB48u;
        goto label_19ab48;
    }
    ctx->pc = 0x19AB40u;
    {
        const bool branch_taken_0x19ab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ab40) {
            ctx->pc = 0x19AB74u;
            goto label_19ab74;
        }
    }
    ctx->pc = 0x19AB48u;
label_19ab48:
    // 0x19ab48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_19ab4c:
    if (ctx->pc == 0x19AB4Cu) {
        ctx->pc = 0x19AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB48u;
        // 0x19ab4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB50u;
        goto label_19ab50;
    }
    ctx->pc = 0x19AB48u;
    {
        const bool branch_taken_0x19ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB48u;
        // 0x19ab4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab48) {
            ctx->pc = 0x19AB5Cu;
            goto label_19ab5c;
        }
    }
    ctx->pc = 0x19AB50u;
label_19ab50:
    // 0x19ab50: 0x10000019  b           . + 4 + (0x19 << 2)
label_19ab54:
    if (ctx->pc == 0x19AB54u) {
        ctx->pc = 0x19AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB50u;
        // 0x19ab54: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB58u;
        goto label_19ab58;
    }
    ctx->pc = 0x19AB50u;
    {
        const bool branch_taken_0x19ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB50u;
        // 0x19ab54: 0x8e230320  lw          $v1, 0x320($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ab50) {
            ctx->pc = 0x19ABB8u;
            goto label_19abb8;
        }
    }
    ctx->pc = 0x19AB58u;
label_19ab58:
    // 0x19ab58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ab5c:
    // 0x19ab5c: 0xc0667bc  jal         func_199EF0
label_19ab60:
    if (ctx->pc == 0x19AB60u) {
        ctx->pc = 0x19AB64u;
        goto label_19ab64;
    }
    ctx->pc = 0x19AB5Cu;
    SET_GPR_U32(ctx, 31, 0x19AB64u);
    ctx->pc = 0x199EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199EF0u, 0x19AB5Cu, 0x19AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB64u;
label_19ab64:
    // 0x19ab64: 0xc063e14  jal         func_18F850
label_19ab68:
    if (ctx->pc == 0x19AB68u) {
        ctx->pc = 0x19AB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB64u;
        // 0x19ab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB6Cu;
        goto label_19ab6c;
    }
    ctx->pc = 0x19AB64u;
    SET_GPR_U32(ctx, 31, 0x19AB6Cu);
    ctx->pc = 0x19AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB64u;
    // 0x19ab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x19AB64u, 0x19AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB6Cu;
label_19ab6c:
    // 0x19ab6c: 0x10000011  b           . + 4 + (0x11 << 2)
label_19ab70:
    if (ctx->pc == 0x19AB70u) {
        ctx->pc = 0x19AB74u;
        goto label_19ab74;
    }
    ctx->pc = 0x19AB6Cu;
    {
        const bool branch_taken_0x19ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab6c) {
            ctx->pc = 0x19ABB4u;
            goto label_19abb4;
        }
    }
    ctx->pc = 0x19AB74u;
label_19ab74:
    // 0x19ab74: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x19ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
label_19ab78:
    // 0x19ab78: 0x8c452848  lw          $a1, 0x2848($v0)
    ctx->pc = 0x19ab78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10312)));
label_19ab7c:
    // 0x19ab7c: 0xc0667e0  jal         func_199F80
label_19ab80:
    if (ctx->pc == 0x19AB80u) {
        ctx->pc = 0x19AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB7Cu;
        // 0x19ab80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB84u;
        goto label_19ab84;
    }
    ctx->pc = 0x19AB7Cu;
    SET_GPR_U32(ctx, 31, 0x19AB84u);
    ctx->pc = 0x19AB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB7Cu;
    // 0x19ab80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199F80u, 0x19AB7Cu, 0x19AB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB84u;
label_19ab84:
    // 0x19ab84: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19ab88:
    if (ctx->pc == 0x19AB88u) {
        ctx->pc = 0x19AB8Cu;
        goto label_19ab8c;
    }
    ctx->pc = 0x19AB84u;
    {
        const bool branch_taken_0x19ab84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab84) {
            ctx->pc = 0x19ABB4u;
            goto label_19abb4;
        }
    }
    ctx->pc = 0x19AB8Cu;
label_19ab8c:
    // 0x19ab8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ab8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ab90:
    // 0x19ab90: 0xc063e08  jal         func_18F820
label_19ab94:
    if (ctx->pc == 0x19AB94u) {
        ctx->pc = 0x19AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AB90u;
        // 0x19ab94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19AB98u;
        goto label_19ab98;
    }
    ctx->pc = 0x19AB90u;
    SET_GPR_U32(ctx, 31, 0x19AB98u);
    ctx->pc = 0x19AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AB90u;
    // 0x19ab94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19AB90u, 0x19AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AB98u;
label_19ab98:
    // 0x19ab98: 0x10000006  b           . + 4 + (0x6 << 2)
label_19ab9c:
    if (ctx->pc == 0x19AB9Cu) {
        ctx->pc = 0x19ABA0u;
        goto label_19aba0;
    }
    ctx->pc = 0x19AB98u;
    {
        const bool branch_taken_0x19ab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab98) {
            ctx->pc = 0x19ABB4u;
            goto label_19abb4;
        }
    }
    ctx->pc = 0x19ABA0u;
label_19aba0:
    // 0x19aba0: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x19aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_19aba4:
    // 0x19aba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19aba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19aba8:
    // 0x19aba8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19abac:
    // 0x19abac: 0xc063e08  jal         func_18F820
label_19abb0:
    if (ctx->pc == 0x19ABB0u) {
        ctx->pc = 0x19ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABACu;
        // 0x19abb0: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABB4u;
        goto label_19abb4;
    }
    ctx->pc = 0x19ABACu;
    SET_GPR_U32(ctx, 31, 0x19ABB4u);
    ctx->pc = 0x19ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19ABACu;
    // 0x19abb0: 0xae200328  sw          $zero, 0x328($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x19ABACu, 0x19ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABB4u;
label_19abb4:
    // 0x19abb4: 0x8e230320  lw          $v1, 0x320($s1)
    ctx->pc = 0x19abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_19abb8:
    // 0x19abb8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_19abbc:
    if (ctx->pc == 0x19ABBCu) {
        ctx->pc = 0x19ABC0u;
        goto label_19abc0;
    }
    ctx->pc = 0x19ABB8u;
    {
        const bool branch_taken_0x19abb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19abb8) {
            ctx->pc = 0x19ABDCu;
            goto label_19abdc;
        }
    }
    ctx->pc = 0x19ABC0u;
label_19abc0:
    // 0x19abc0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_19abc4:
    if (ctx->pc == 0x19ABC4u) {
        ctx->pc = 0x19ABC8u;
        goto label_19abc8;
    }
    ctx->pc = 0x19ABC0u;
    {
        const bool branch_taken_0x19abc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19abc0) {
            ctx->pc = 0x19ABDCu;
            goto label_19abdc;
        }
    }
    ctx->pc = 0x19ABC8u;
label_19abc8:
    // 0x19abc8: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x19abc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_19abcc:
    // 0x19abcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19abccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19abd0:
    // 0x19abd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x19abd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_19abd4:
    // 0x19abd4: 0x320f809  jalr        $t9
label_19abd8:
    if (ctx->pc == 0x19ABD8u) {
        ctx->pc = 0x19ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABD4u;
        // 0x19abd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABDCu;
        goto label_19abdc;
    }
    ctx->pc = 0x19ABD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19ABDCu);
        ctx->pc = 0x19ABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABD4u;
        // 0x19abd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ABD4u, 0x19ABDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19ABDCu;
label_19abdc:
    // 0x19abdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19abdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19abe0:
    // 0x19abe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19abe4:
    // 0x19abe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19abe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_19abe8:
    // 0x19abe8: 0x3e00008  jr          $ra
label_19abec:
    if (ctx->pc == 0x19ABECu) {
        ctx->pc = 0x19ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABE8u;
        // 0x19abec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19ABF0u;
        goto label_fallthrough_0x19abe8;
    }
    ctx->pc = 0x19ABE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19ABE8u;
        // 0x19abec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ABE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19abe8:
    ctx->pc = 0x19ABF0u;
}
