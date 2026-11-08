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

// Function: FUN_00130c10
// Address: 0x130c10 - 0x130dc4
void FUN_00130c10_0x130c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130c10_0x130c10");
#endif

    switch (ctx->pc) {
        case 0x130c58u: goto label_130c58;
        case 0x130c6cu: goto label_130c6c;
        case 0x130c78u: goto label_130c78;
        case 0x130c80u: goto label_130c80;
        case 0x130c88u: goto label_130c88;
        case 0x130ca8u: goto label_130ca8;
        case 0x130cbcu: goto label_130cbc;
        case 0x130cc8u: goto label_130cc8;
        case 0x130cd0u: goto label_130cd0;
        case 0x130cd8u: goto label_130cd8;
        case 0x130ce4u: goto label_130ce4;
        case 0x130d10u: goto label_130d10;
        case 0x130d24u: goto label_130d24;
        case 0x130d30u: goto label_130d30;
        case 0x130d38u: goto label_130d38;
        case 0x130d40u: goto label_130d40;
        case 0x130d60u: goto label_130d60;
        case 0x130d74u: goto label_130d74;
        case 0x130d80u: goto label_130d80;
        case 0x130d88u: goto label_130d88;
        case 0x130d90u: goto label_130d90;
        case 0x130d9cu: goto label_130d9c;
        case 0x130da8u: goto label_130da8;
        default: break;
    }

    ctx->pc = 0x130c10u;

label_130c10:
    // 0x130c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x130c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130c14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x130c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130c28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c2c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x130c2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130c30: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x130C30u;
    {
        const bool branch_taken_0x130c30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C30u;
        // 0x130c34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c30) {
            ctx->pc = 0x130CE4u;
            goto label_130ce4;
        }
    }
    ctx->pc = 0x130C38u;
    // 0x130c38: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x130c38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130c3c: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x130C3Cu;
    {
        const bool branch_taken_0x130c3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c3c) {
            ctx->pc = 0x130C88u;
            goto label_130c88;
        }
    }
    ctx->pc = 0x130C44u;
    // 0x130c44: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130c48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130C48u;
    {
        const bool branch_taken_0x130c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130c48) {
            ctx->pc = 0x130C58u;
            goto label_130c58;
        }
    }
    ctx->pc = 0x130C50u;
    // 0x130c50: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130C50u;
    SET_GPR_U32(ctx, 31, 0x130C58u);
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130C58u;
label_130c58:
    // 0x130c58: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130c5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130C5Cu;
    {
        const bool branch_taken_0x130c5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C5Cu;
        // 0x130c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c5c) {
            ctx->pc = 0x130C70u;
            goto label_130c70;
        }
    }
    ctx->pc = 0x130C64u;
    // 0x130c64: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130C64u;
    SET_GPR_U32(ctx, 31, 0x130C6Cu);
    ctx->pc = 0x130C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C64u;
    // 0x130c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130C6Cu;
label_130c6c:
    // 0x130c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130c70:
    // 0x130c70: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130C70u;
    SET_GPR_U32(ctx, 31, 0x130C78u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130C70u, 0x130C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C78u;
label_130c78:
    // 0x130c78: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130C78u;
    SET_GPR_U32(ctx, 31, 0x130C80u);
    ctx->pc = 0x130C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C78u;
    // 0x130c7c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130C78u, 0x130C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C80u;
label_130c80:
    // 0x130c80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130C80u;
    SET_GPR_U32(ctx, 31, 0x130C88u);
    ctx->pc = 0x130C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C80u;
    // 0x130c84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130C80u, 0x130C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C88u;
label_130c88:
    // 0x130c88: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x130c88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130c8c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x130C8Cu;
    {
        const bool branch_taken_0x130c8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C8Cu;
        // 0x130c90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c8c) {
            ctx->pc = 0x130CDCu;
            goto label_130cdc;
        }
    }
    ctx->pc = 0x130C94u;
    // 0x130c94: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130c98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130C98u;
    {
        const bool branch_taken_0x130c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C98u;
        // 0x130c9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c98) {
            ctx->pc = 0x130CA8u;
            goto label_130ca8;
        }
    }
    ctx->pc = 0x130CA0u;
    // 0x130ca0: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130CA0u;
    SET_GPR_U32(ctx, 31, 0x130CA8u);
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130CA8u;
label_130ca8:
    // 0x130ca8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130cac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130CACu;
    {
        const bool branch_taken_0x130cac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CACu;
        // 0x130cb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130cac) {
            ctx->pc = 0x130CC0u;
            goto label_130cc0;
        }
    }
    ctx->pc = 0x130CB4u;
    // 0x130cb4: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130CB4u;
    SET_GPR_U32(ctx, 31, 0x130CBCu);
    ctx->pc = 0x130CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CB4u;
    // 0x130cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130CBCu;
label_130cbc:
    // 0x130cbc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130cc0:
    // 0x130cc0: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130CC0u;
    SET_GPR_U32(ctx, 31, 0x130CC8u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130CC0u, 0x130CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CC8u;
label_130cc8:
    // 0x130cc8: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130CC8u;
    SET_GPR_U32(ctx, 31, 0x130CD0u);
    ctx->pc = 0x130CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CC8u;
    // 0x130ccc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130CC8u, 0x130CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CD0u;
label_130cd0:
    // 0x130cd0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130CD0u;
    SET_GPR_U32(ctx, 31, 0x130CD8u);
    ctx->pc = 0x130CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130CD0u;
    // 0x130cd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130CD0u, 0x130CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CD8u;
label_130cd8:
    // 0x130cd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_130cdc:
    // 0x130cdc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130CDCu;
    SET_GPR_U32(ctx, 31, 0x130CE4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130CDCu, 0x130CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CE4u;
label_130ce4:
    // 0x130ce4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x130ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130ce8: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x130CE8u;
    {
        const bool branch_taken_0x130ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CE8u;
        // 0x130cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ce8) {
            ctx->pc = 0x130DA0u;
            goto label_130da0;
        }
    }
    ctx->pc = 0x130CF0u;
    // 0x130cf0: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130cf4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x130CF4u;
    {
        const bool branch_taken_0x130cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130cf4) {
            ctx->pc = 0x130D40u;
            goto label_130d40;
        }
    }
    ctx->pc = 0x130CFCu;
    // 0x130cfc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130d00: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130D00u;
    {
        const bool branch_taken_0x130d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D00u;
        // 0x130d04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d00) {
            ctx->pc = 0x130D10u;
            goto label_130d10;
        }
    }
    ctx->pc = 0x130D08u;
    // 0x130d08: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D08u;
    SET_GPR_U32(ctx, 31, 0x130D10u);
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130D10u;
label_130d10:
    // 0x130d10: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130d14: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130D14u;
    {
        const bool branch_taken_0x130d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D14u;
        // 0x130d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d14) {
            ctx->pc = 0x130D28u;
            goto label_130d28;
        }
    }
    ctx->pc = 0x130D1Cu;
    // 0x130d1c: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D1Cu;
    SET_GPR_U32(ctx, 31, 0x130D24u);
    ctx->pc = 0x130D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D1Cu;
    // 0x130d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130D24u;
label_130d24:
    // 0x130d24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130d28:
    // 0x130d28: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130D28u;
    SET_GPR_U32(ctx, 31, 0x130D30u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130D28u, 0x130D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D30u;
label_130d30:
    // 0x130d30: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130D30u;
    SET_GPR_U32(ctx, 31, 0x130D38u);
    ctx->pc = 0x130D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D30u;
    // 0x130d34: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130D30u, 0x130D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D38u;
label_130d38:
    // 0x130d38: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130D38u;
    SET_GPR_U32(ctx, 31, 0x130D40u);
    ctx->pc = 0x130D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D38u;
    // 0x130d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130D38u, 0x130D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D40u;
label_130d40:
    // 0x130d40: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x130d40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130d44: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x130D44u;
    {
        const bool branch_taken_0x130d44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D44u;
        // 0x130d48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d44) {
            ctx->pc = 0x130D94u;
            goto label_130d94;
        }
    }
    ctx->pc = 0x130D4Cu;
    // 0x130d4c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130d50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130D50u;
    {
        const bool branch_taken_0x130d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D50u;
        // 0x130d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d50) {
            ctx->pc = 0x130D60u;
            goto label_130d60;
        }
    }
    ctx->pc = 0x130D58u;
    // 0x130d58: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D58u;
    SET_GPR_U32(ctx, 31, 0x130D60u);
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130D60u;
label_130d60:
    // 0x130d60: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130d64: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130D64u;
    {
        const bool branch_taken_0x130d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130D64u;
        // 0x130d68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130d64) {
            ctx->pc = 0x130D78u;
            goto label_130d78;
        }
    }
    ctx->pc = 0x130D6Cu;
    // 0x130d6c: 0xc04c304  jal         func_130C10
    ctx->pc = 0x130D6Cu;
    SET_GPR_U32(ctx, 31, 0x130D74u);
    ctx->pc = 0x130D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D6Cu;
    // 0x130d70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C10u;
    goto label_130c10;
    ctx->pc = 0x130D74u;
label_130d74:
    // 0x130d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130d78:
    // 0x130d78: 0xc04c378  jal         func_130DE0
    ctx->pc = 0x130D78u;
    SET_GPR_U32(ctx, 31, 0x130D80u);
    ctx->pc = 0x130DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DE0u, 0x130D78u, 0x130D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D80u;
label_130d80:
    // 0x130d80: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x130D80u;
    SET_GPR_U32(ctx, 31, 0x130D88u);
    ctx->pc = 0x130D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D80u;
    // 0x130d84: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130DD0u, 0x130D80u, 0x130D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D88u;
label_130d88:
    // 0x130d88: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130D88u;
    SET_GPR_U32(ctx, 31, 0x130D90u);
    ctx->pc = 0x130D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130D88u;
    // 0x130d8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130D88u, 0x130D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D90u;
label_130d90:
    // 0x130d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_130d94:
    // 0x130d94: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130D94u;
    SET_GPR_U32(ctx, 31, 0x130D9Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130D94u, 0x130D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D9Cu;
label_130d9c:
    // 0x130d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130da0:
    // 0x130da0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130DA0u;
    SET_GPR_U32(ctx, 31, 0x130DA8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130DA0u, 0x130DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DA8u;
label_130da8:
    // 0x130da8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130dac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130db0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130db0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130db4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x130DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130DBCu;
        // 0x130dc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130DC4u;
}
