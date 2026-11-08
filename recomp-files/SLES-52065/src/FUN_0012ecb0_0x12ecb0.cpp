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

// Function: FUN_0012ecb0
// Address: 0x12ecb0 - 0x12ee64
void FUN_0012ecb0_0x12ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012ecb0_0x12ecb0");
#endif

    switch (ctx->pc) {
        case 0x12ecf8u: goto label_12ecf8;
        case 0x12ed0cu: goto label_12ed0c;
        case 0x12ed18u: goto label_12ed18;
        case 0x12ed20u: goto label_12ed20;
        case 0x12ed28u: goto label_12ed28;
        case 0x12ed48u: goto label_12ed48;
        case 0x12ed5cu: goto label_12ed5c;
        case 0x12ed68u: goto label_12ed68;
        case 0x12ed70u: goto label_12ed70;
        case 0x12ed78u: goto label_12ed78;
        case 0x12ed84u: goto label_12ed84;
        case 0x12edb0u: goto label_12edb0;
        case 0x12edc4u: goto label_12edc4;
        case 0x12edd0u: goto label_12edd0;
        case 0x12edd8u: goto label_12edd8;
        case 0x12ede0u: goto label_12ede0;
        case 0x12ee00u: goto label_12ee00;
        case 0x12ee14u: goto label_12ee14;
        case 0x12ee20u: goto label_12ee20;
        case 0x12ee28u: goto label_12ee28;
        case 0x12ee30u: goto label_12ee30;
        case 0x12ee3cu: goto label_12ee3c;
        case 0x12ee48u: goto label_12ee48;
        default: break;
    }

    ctx->pc = 0x12ecb0u;

label_12ecb0:
    // 0x12ecb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12ecb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12ecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12ecb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12ecbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12ecc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12ecc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12ecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12ecc8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12ecc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eccc: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x12ecccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12ecd0: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x12ECD0u;
    {
        const bool branch_taken_0x12ecd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECD0u;
        // 0x12ecd4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecd0) {
            ctx->pc = 0x12ED84u;
            goto label_12ed84;
        }
    }
    ctx->pc = 0x12ECD8u;
    // 0x12ecd8: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x12ecd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ecdc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x12ECDCu;
    {
        const bool branch_taken_0x12ecdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecdc) {
            ctx->pc = 0x12ED28u;
            goto label_12ed28;
        }
    }
    ctx->pc = 0x12ECE4u;
    // 0x12ece4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12ece8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ECE8u;
    {
        const bool branch_taken_0x12ece8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ece8) {
            ctx->pc = 0x12ECF8u;
            goto label_12ecf8;
        }
    }
    ctx->pc = 0x12ECF0u;
    // 0x12ecf0: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12ECF0u;
    SET_GPR_U32(ctx, 31, 0x12ECF8u);
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12ECF8u;
label_12ecf8:
    // 0x12ecf8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12ecf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12ecfc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ECFCu;
    {
        const bool branch_taken_0x12ecfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECFCu;
        // 0x12ed00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecfc) {
            ctx->pc = 0x12ED10u;
            goto label_12ed10;
        }
    }
    ctx->pc = 0x12ED04u;
    // 0x12ed04: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12ED04u;
    SET_GPR_U32(ctx, 31, 0x12ED0Cu);
    ctx->pc = 0x12ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED04u;
    // 0x12ed08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12ED0Cu;
label_12ed0c:
    // 0x12ed0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ed10:
    // 0x12ed10: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12ED10u;
    SET_GPR_U32(ctx, 31, 0x12ED18u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12ED10u, 0x12ED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED18u;
label_12ed18:
    // 0x12ed18: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12ED18u;
    SET_GPR_U32(ctx, 31, 0x12ED20u);
    ctx->pc = 0x12ED1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED18u;
    // 0x12ed1c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12ED18u, 0x12ED20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED20u;
label_12ed20:
    // 0x12ed20: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12ED20u;
    SET_GPR_U32(ctx, 31, 0x12ED28u);
    ctx->pc = 0x12ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED20u;
    // 0x12ed24: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12ED20u, 0x12ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED28u;
label_12ed28:
    // 0x12ed28: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12ed2c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x12ED2Cu;
    {
        const bool branch_taken_0x12ed2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED2Cu;
        // 0x12ed30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed2c) {
            ctx->pc = 0x12ED7Cu;
            goto label_12ed7c;
        }
    }
    ctx->pc = 0x12ED34u;
    // 0x12ed34: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12ed38: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ED38u;
    {
        const bool branch_taken_0x12ed38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED38u;
        // 0x12ed3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed38) {
            ctx->pc = 0x12ED48u;
            goto label_12ed48;
        }
    }
    ctx->pc = 0x12ED40u;
    // 0x12ed40: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12ED40u;
    SET_GPR_U32(ctx, 31, 0x12ED48u);
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12ED48u;
label_12ed48:
    // 0x12ed48: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12ed48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12ed4c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ED4Cu;
    {
        const bool branch_taken_0x12ed4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED4Cu;
        // 0x12ed50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed4c) {
            ctx->pc = 0x12ED60u;
            goto label_12ed60;
        }
    }
    ctx->pc = 0x12ED54u;
    // 0x12ed54: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12ED54u;
    SET_GPR_U32(ctx, 31, 0x12ED5Cu);
    ctx->pc = 0x12ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED54u;
    // 0x12ed58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12ED5Cu;
label_12ed5c:
    // 0x12ed5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ed5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ed60:
    // 0x12ed60: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12ED60u;
    SET_GPR_U32(ctx, 31, 0x12ED68u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12ED60u, 0x12ED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED68u;
label_12ed68:
    // 0x12ed68: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12ED68u;
    SET_GPR_U32(ctx, 31, 0x12ED70u);
    ctx->pc = 0x12ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED68u;
    // 0x12ed6c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12ED68u, 0x12ED70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED70u;
label_12ed70:
    // 0x12ed70: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12ED70u;
    SET_GPR_U32(ctx, 31, 0x12ED78u);
    ctx->pc = 0x12ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED70u;
    // 0x12ed74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12ED70u, 0x12ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED78u;
label_12ed78:
    // 0x12ed78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ed7c:
    // 0x12ed7c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12ED7Cu;
    SET_GPR_U32(ctx, 31, 0x12ED84u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12ED7Cu, 0x12ED84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED84u;
label_12ed84:
    // 0x12ed84: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x12ed84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12ed88: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x12ED88u;
    {
        const bool branch_taken_0x12ed88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED88u;
        // 0x12ed8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed88) {
            ctx->pc = 0x12EE40u;
            goto label_12ee40;
        }
    }
    ctx->pc = 0x12ED90u;
    // 0x12ed90: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x12ed90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ed94: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x12ED94u;
    {
        const bool branch_taken_0x12ed94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ed94) {
            ctx->pc = 0x12EDE0u;
            goto label_12ede0;
        }
    }
    ctx->pc = 0x12ED9Cu;
    // 0x12ed9c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12eda0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EDA0u;
    {
        const bool branch_taken_0x12eda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDA0u;
        // 0x12eda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eda0) {
            ctx->pc = 0x12EDB0u;
            goto label_12edb0;
        }
    }
    ctx->pc = 0x12EDA8u;
    // 0x12eda8: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EDA8u;
    SET_GPR_U32(ctx, 31, 0x12EDB0u);
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12EDB0u;
label_12edb0:
    // 0x12edb0: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12edb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12edb4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EDB4u;
    {
        const bool branch_taken_0x12edb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDB4u;
        // 0x12edb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edb4) {
            ctx->pc = 0x12EDC8u;
            goto label_12edc8;
        }
    }
    ctx->pc = 0x12EDBCu;
    // 0x12edbc: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EDBCu;
    SET_GPR_U32(ctx, 31, 0x12EDC4u);
    ctx->pc = 0x12EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDBCu;
    // 0x12edc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12EDC4u;
label_12edc4:
    // 0x12edc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12edc8:
    // 0x12edc8: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12EDC8u;
    SET_GPR_U32(ctx, 31, 0x12EDD0u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12EDC8u, 0x12EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDD0u;
label_12edd0:
    // 0x12edd0: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12EDD0u;
    SET_GPR_U32(ctx, 31, 0x12EDD8u);
    ctx->pc = 0x12EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDD0u;
    // 0x12edd4: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12EDD0u, 0x12EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDD8u;
label_12edd8:
    // 0x12edd8: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EDD8u;
    SET_GPR_U32(ctx, 31, 0x12EDE0u);
    ctx->pc = 0x12EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EDD8u;
    // 0x12eddc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EDD8u, 0x12EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EDE0u;
label_12ede0:
    // 0x12ede0: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x12ede0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12ede4: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x12EDE4u;
    {
        const bool branch_taken_0x12ede4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDE4u;
        // 0x12ede8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ede4) {
            ctx->pc = 0x12EE34u;
            goto label_12ee34;
        }
    }
    ctx->pc = 0x12EDECu;
    // 0x12edec: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x12edecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12edf0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12EDF0u;
    {
        const bool branch_taken_0x12edf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EDF0u;
        // 0x12edf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edf0) {
            ctx->pc = 0x12EE00u;
            goto label_12ee00;
        }
    }
    ctx->pc = 0x12EDF8u;
    // 0x12edf8: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EDF8u;
    SET_GPR_U32(ctx, 31, 0x12EE00u);
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12EE00u;
label_12ee00:
    // 0x12ee00: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x12ee00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x12ee04: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12EE04u;
    {
        const bool branch_taken_0x12ee04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE04u;
        // 0x12ee08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ee04) {
            ctx->pc = 0x12EE18u;
            goto label_12ee18;
        }
    }
    ctx->pc = 0x12EE0Cu;
    // 0x12ee0c: 0xc04bb2c  jal         func_12ECB0
    ctx->pc = 0x12EE0Cu;
    SET_GPR_U32(ctx, 31, 0x12EE14u);
    ctx->pc = 0x12EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE0Cu;
    // 0x12ee10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECB0u;
    goto label_12ecb0;
    ctx->pc = 0x12EE14u;
label_12ee14:
    // 0x12ee14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ee14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12ee18:
    // 0x12ee18: 0xc04bba0  jal         func_12EE80
    ctx->pc = 0x12EE18u;
    SET_GPR_U32(ctx, 31, 0x12EE20u);
    ctx->pc = 0x12EE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE80u, 0x12EE18u, 0x12EE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE20u;
label_12ee20:
    // 0x12ee20: 0xc04bb9c  jal         func_12EE70
    ctx->pc = 0x12EE20u;
    SET_GPR_U32(ctx, 31, 0x12EE28u);
    ctx->pc = 0x12EE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE20u;
    // 0x12ee24: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EE70u, 0x12EE20u, 0x12EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE28u;
label_12ee28:
    // 0x12ee28: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EE28u;
    SET_GPR_U32(ctx, 31, 0x12EE30u);
    ctx->pc = 0x12EE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EE28u;
    // 0x12ee2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EE28u, 0x12EE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE30u;
label_12ee30:
    // 0x12ee30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12ee30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12ee34:
    // 0x12ee34: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EE34u;
    SET_GPR_U32(ctx, 31, 0x12EE3Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EE34u, 0x12EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE3Cu;
label_12ee3c:
    // 0x12ee3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ee3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ee40:
    // 0x12ee40: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12EE40u;
    SET_GPR_U32(ctx, 31, 0x12EE48u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12EE40u, 0x12EE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EE48u;
label_12ee48:
    // 0x12ee48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12ee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ee4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12ee4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ee50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12ee50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ee54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ee54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ee58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12ee58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ee5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EE5Cu;
        // 0x12ee60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EE64u;
}
