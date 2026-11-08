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

// Function: FUN_00130e10
// Address: 0x130e10 - 0x130fc4
void FUN_00130e10_0x130e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130e10_0x130e10");
#endif

    switch (ctx->pc) {
        case 0x130e58u: goto label_130e58;
        case 0x130e6cu: goto label_130e6c;
        case 0x130e78u: goto label_130e78;
        case 0x130e80u: goto label_130e80;
        case 0x130e88u: goto label_130e88;
        case 0x130ea8u: goto label_130ea8;
        case 0x130ebcu: goto label_130ebc;
        case 0x130ec8u: goto label_130ec8;
        case 0x130ed0u: goto label_130ed0;
        case 0x130ed8u: goto label_130ed8;
        case 0x130ee4u: goto label_130ee4;
        case 0x130f10u: goto label_130f10;
        case 0x130f24u: goto label_130f24;
        case 0x130f30u: goto label_130f30;
        case 0x130f38u: goto label_130f38;
        case 0x130f40u: goto label_130f40;
        case 0x130f60u: goto label_130f60;
        case 0x130f74u: goto label_130f74;
        case 0x130f80u: goto label_130f80;
        case 0x130f88u: goto label_130f88;
        case 0x130f90u: goto label_130f90;
        case 0x130f9cu: goto label_130f9c;
        case 0x130fa8u: goto label_130fa8;
        default: break;
    }

    ctx->pc = 0x130e10u;

label_130e10:
    // 0x130e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x130e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x130e14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x130e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x130e18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x130e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x130e1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x130e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x130e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x130e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x130e24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130e28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e2c: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x130e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x130e30: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x130E30u;
    {
        const bool branch_taken_0x130e30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E30u;
        // 0x130e34: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e30) {
            ctx->pc = 0x130EE4u;
            goto label_130ee4;
        }
    }
    ctx->pc = 0x130E38u;
    // 0x130e38: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x130e38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130e3c: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x130E3Cu;
    {
        const bool branch_taken_0x130e3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e3c) {
            ctx->pc = 0x130E88u;
            goto label_130e88;
        }
    }
    ctx->pc = 0x130E44u;
    // 0x130e44: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130e48: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130E48u;
    {
        const bool branch_taken_0x130e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e48) {
            ctx->pc = 0x130E58u;
            goto label_130e58;
        }
    }
    ctx->pc = 0x130E50u;
    // 0x130e50: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130E50u;
    SET_GPR_U32(ctx, 31, 0x130E58u);
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130E58u;
label_130e58:
    // 0x130e58: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130e5c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130E5Cu;
    {
        const bool branch_taken_0x130e5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E5Cu;
        // 0x130e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e5c) {
            ctx->pc = 0x130E70u;
            goto label_130e70;
        }
    }
    ctx->pc = 0x130E64u;
    // 0x130e64: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130E64u;
    SET_GPR_U32(ctx, 31, 0x130E6Cu);
    ctx->pc = 0x130E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E64u;
    // 0x130e68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130E6Cu;
label_130e6c:
    // 0x130e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130e70:
    // 0x130e70: 0xc04c3f8  jal         func_130FE0
    ctx->pc = 0x130E70u;
    SET_GPR_U32(ctx, 31, 0x130E78u);
    ctx->pc = 0x130FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FE0u, 0x130E70u, 0x130E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E78u;
label_130e78:
    // 0x130e78: 0xc04c3f4  jal         func_130FD0
    ctx->pc = 0x130E78u;
    SET_GPR_U32(ctx, 31, 0x130E80u);
    ctx->pc = 0x130E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E78u;
    // 0x130e7c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FD0u, 0x130E78u, 0x130E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E80u;
label_130e80:
    // 0x130e80: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130E80u;
    SET_GPR_U32(ctx, 31, 0x130E88u);
    ctx->pc = 0x130E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E80u;
    // 0x130e84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130E80u, 0x130E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E88u;
label_130e88:
    // 0x130e88: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x130e88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130e8c: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x130E8Cu;
    {
        const bool branch_taken_0x130e8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E8Cu;
        // 0x130e90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e8c) {
            ctx->pc = 0x130EDCu;
            goto label_130edc;
        }
    }
    ctx->pc = 0x130E94u;
    // 0x130e94: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130e98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130E98u;
    {
        const bool branch_taken_0x130e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E98u;
        // 0x130e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e98) {
            ctx->pc = 0x130EA8u;
            goto label_130ea8;
        }
    }
    ctx->pc = 0x130EA0u;
    // 0x130ea0: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130EA0u;
    SET_GPR_U32(ctx, 31, 0x130EA8u);
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130EA8u;
label_130ea8:
    // 0x130ea8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130eac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130EACu;
    {
        const bool branch_taken_0x130eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EACu;
        // 0x130eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130eac) {
            ctx->pc = 0x130EC0u;
            goto label_130ec0;
        }
    }
    ctx->pc = 0x130EB4u;
    // 0x130eb4: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130EB4u;
    SET_GPR_U32(ctx, 31, 0x130EBCu);
    ctx->pc = 0x130EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EB4u;
    // 0x130eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130EBCu;
label_130ebc:
    // 0x130ebc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130ec0:
    // 0x130ec0: 0xc04c3f8  jal         func_130FE0
    ctx->pc = 0x130EC0u;
    SET_GPR_U32(ctx, 31, 0x130EC8u);
    ctx->pc = 0x130FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FE0u, 0x130EC0u, 0x130EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EC8u;
label_130ec8:
    // 0x130ec8: 0xc04c3f4  jal         func_130FD0
    ctx->pc = 0x130EC8u;
    SET_GPR_U32(ctx, 31, 0x130ED0u);
    ctx->pc = 0x130ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EC8u;
    // 0x130ecc: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FD0u, 0x130EC8u, 0x130ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130ED0u;
label_130ed0:
    // 0x130ed0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130ED0u;
    SET_GPR_U32(ctx, 31, 0x130ED8u);
    ctx->pc = 0x130ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130ED0u;
    // 0x130ed4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130ED0u, 0x130ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130ED8u;
label_130ed8:
    // 0x130ed8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_130edc:
    // 0x130edc: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130EDCu;
    SET_GPR_U32(ctx, 31, 0x130EE4u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130EDCu, 0x130EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EE4u;
label_130ee4:
    // 0x130ee4: 0x8e120004  lw          $s2, 0x4($s0)
    ctx->pc = 0x130ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x130ee8: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x130EE8u;
    {
        const bool branch_taken_0x130ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EE8u;
        // 0x130eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ee8) {
            ctx->pc = 0x130FA0u;
            goto label_130fa0;
        }
    }
    ctx->pc = 0x130EF0u;
    // 0x130ef0: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x130ef0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130ef4: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x130EF4u;
    {
        const bool branch_taken_0x130ef4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ef4) {
            ctx->pc = 0x130F40u;
            goto label_130f40;
        }
    }
    ctx->pc = 0x130EFCu;
    // 0x130efc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130efcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130f00: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130F00u;
    {
        const bool branch_taken_0x130f00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F00u;
        // 0x130f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f00) {
            ctx->pc = 0x130F10u;
            goto label_130f10;
        }
    }
    ctx->pc = 0x130F08u;
    // 0x130f08: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130F08u;
    SET_GPR_U32(ctx, 31, 0x130F10u);
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130F10u;
label_130f10:
    // 0x130f10: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130f14: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130F14u;
    {
        const bool branch_taken_0x130f14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F14u;
        // 0x130f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f14) {
            ctx->pc = 0x130F28u;
            goto label_130f28;
        }
    }
    ctx->pc = 0x130F1Cu;
    // 0x130f1c: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130F1Cu;
    SET_GPR_U32(ctx, 31, 0x130F24u);
    ctx->pc = 0x130F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F1Cu;
    // 0x130f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130F24u;
label_130f24:
    // 0x130f24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130f28:
    // 0x130f28: 0xc04c3f8  jal         func_130FE0
    ctx->pc = 0x130F28u;
    SET_GPR_U32(ctx, 31, 0x130F30u);
    ctx->pc = 0x130FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FE0u, 0x130F28u, 0x130F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F30u;
label_130f30:
    // 0x130f30: 0xc04c3f4  jal         func_130FD0
    ctx->pc = 0x130F30u;
    SET_GPR_U32(ctx, 31, 0x130F38u);
    ctx->pc = 0x130F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F30u;
    // 0x130f34: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FD0u, 0x130F30u, 0x130F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F38u;
label_130f38:
    // 0x130f38: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130F38u;
    SET_GPR_U32(ctx, 31, 0x130F40u);
    ctx->pc = 0x130F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F38u;
    // 0x130f3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130F38u, 0x130F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F40u;
label_130f40:
    // 0x130f40: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x130f40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130f44: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x130F44u;
    {
        const bool branch_taken_0x130f44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F44u;
        // 0x130f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f44) {
            ctx->pc = 0x130F94u;
            goto label_130f94;
        }
    }
    ctx->pc = 0x130F4Cu;
    // 0x130f4c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x130f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x130f50: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130F50u;
    {
        const bool branch_taken_0x130f50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F50u;
        // 0x130f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f50) {
            ctx->pc = 0x130F60u;
            goto label_130f60;
        }
    }
    ctx->pc = 0x130F58u;
    // 0x130f58: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130F58u;
    SET_GPR_U32(ctx, 31, 0x130F60u);
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130F60u;
label_130f60:
    // 0x130f60: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x130f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x130f64: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x130F64u;
    {
        const bool branch_taken_0x130f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x130F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130F64u;
        // 0x130f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130f64) {
            ctx->pc = 0x130F78u;
            goto label_130f78;
        }
    }
    ctx->pc = 0x130F6Cu;
    // 0x130f6c: 0xc04c384  jal         func_130E10
    ctx->pc = 0x130F6Cu;
    SET_GPR_U32(ctx, 31, 0x130F74u);
    ctx->pc = 0x130F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F6Cu;
    // 0x130f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130E10u;
    goto label_130e10;
    ctx->pc = 0x130F74u;
label_130f74:
    // 0x130f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_130f78:
    // 0x130f78: 0xc04c3f8  jal         func_130FE0
    ctx->pc = 0x130F78u;
    SET_GPR_U32(ctx, 31, 0x130F80u);
    ctx->pc = 0x130FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FE0u, 0x130F78u, 0x130F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F80u;
label_130f80:
    // 0x130f80: 0xc04c3f4  jal         func_130FD0
    ctx->pc = 0x130F80u;
    SET_GPR_U32(ctx, 31, 0x130F88u);
    ctx->pc = 0x130F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F80u;
    // 0x130f84: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130FD0u, 0x130F80u, 0x130F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F88u;
label_130f88:
    // 0x130f88: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130F88u;
    SET_GPR_U32(ctx, 31, 0x130F90u);
    ctx->pc = 0x130F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130F88u;
    // 0x130f8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130F88u, 0x130F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F90u;
label_130f90:
    // 0x130f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_130f94:
    // 0x130f94: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130F94u;
    SET_GPR_U32(ctx, 31, 0x130F9Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130F94u, 0x130F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F9Cu;
label_130f9c:
    // 0x130f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_130fa0:
    // 0x130fa0: 0xc0401a4  jal         func_100690
    ctx->pc = 0x130FA0u;
    SET_GPR_U32(ctx, 31, 0x130FA8u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x130FA0u, 0x130FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FA8u;
label_130fa8:
    // 0x130fa8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x130fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130fac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x130facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130fb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x130fb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130fb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x130fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x130fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x130FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FBCu;
        // 0x130fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130FC4u;
}
