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

// Function: FUN_001f0e80
// Address: 0x1f0e80 - 0x1f0fa0
void FUN_001f0e80_0x1f0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f0e80_0x1f0e80");
#endif

    switch (ctx->pc) {
        case 0x1f0eacu: goto label_1f0eac;
        case 0x1f0ec4u: goto label_1f0ec4;
        case 0x1f0ee0u: goto label_1f0ee0;
        case 0x1f0f2cu: goto label_1f0f2c;
        case 0x1f0f3cu: goto label_1f0f3c;
        case 0x1f0f44u: goto label_1f0f44;
        case 0x1f0f58u: goto label_1f0f58;
        case 0x1f0f68u: goto label_1f0f68;
        case 0x1f0f78u: goto label_1f0f78;
        case 0x1f0f80u: goto label_1f0f80;
        default: break;
    }

    ctx->pc = 0x1f0e80u;

    // 0x1f0e80: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f0e84: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1f0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1f0e88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f0e88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0e8c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1f0e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1f0e90: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f0e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f0e94: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1f0e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f0e98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f0e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1f0e9c: 0x3c130039  lui         $s3, 0x39
    ctx->pc = 0x1f0e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)57 << 16));
    // 0x1f0ea0: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1f0ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1f0ea4: 0xc07bcfa  jal         func_1EF3E8
    ctx->pc = 0x1F0EA4u;
    SET_GPR_U32(ctx, 31, 0x1F0EACu);
    ctx->pc = 0x1F0EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0EA4u;
    // 0x1f0ea8: 0x2670e200  addiu       $s0, $s3, -0x1E00 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF3E8u, 0x1F0EA4u, 0x1F0EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EACu;
label_1f0eac:
    // 0x1f0eac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1f0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1f0eb0: 0x8c62a45c  lw          $v0, -0x5BA4($v1)
    ctx->pc = 0x1f0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21A45Cu));
    // 0x1f0eb4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F0EB4u;
    {
        const bool branch_taken_0x1f0eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0eb4) {
            ctx->pc = 0x1F0EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0EB4u;
            // 0x1f0eb8: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0EC8u;
            goto label_1f0ec8;
        }
    }
    ctx->pc = 0x1F0EBCu;
    // 0x1f0ebc: 0xc07bd3c  jal         func_1EF4F0
    ctx->pc = 0x1F0EBCu;
    SET_GPR_U32(ctx, 31, 0x1F0EC4u);
    ctx->pc = 0x1EF4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF4F0u, 0x1F0EBCu, 0x1F0EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EC4u;
label_1f0ec4:
    // 0x1f0ec4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1f0ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_1f0ec8:
    // 0x1f0ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f0ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f0ecc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1f0eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1f0ed0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f0ed4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1f0ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1f0ed8: 0xc07ad88  jal         func_1EB620
    ctx->pc = 0x1F0ED8u;
    SET_GPR_U32(ctx, 31, 0x1F0EE0u);
    ctx->pc = 0x1F0EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0ED8u;
    // 0x1f0edc: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB620u, 0x1F0ED8u, 0x1F0EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0EE0u;
label_1f0ee0:
    // 0x1f0ee0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f0ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0ee4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1f0ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f0ee8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f0ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f0eec: 0xae71e200  sw          $s1, -0x1E00($s3)
    ctx->pc = 0x1f0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294959616), GPR_U32(ctx, 17));
    // 0x1f0ef0: 0x2452ee40  addiu       $s2, $v0, -0x11C0
    ctx->pc = 0x1f0ef0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962752));
    // 0x1f0ef4: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f0ef8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f0ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0efc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1f0efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1f0f00: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f0f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1f0f04: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x1f0f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x1f0f08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f0f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1f0f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f0f10: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f0f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f0f14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0f14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f18: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1f0f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f0f1c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1f0f1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0f20: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f0f20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f0f24: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F0F24u;
    SET_GPR_U32(ctx, 31, 0x1F0F2Cu);
    ctx->pc = 0x1F0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F24u;
    // 0x1f0f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F0F24u, 0x1F0F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F2Cu;
label_1f0f2c:
    // 0x1f0f2c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F0F2Cu;
    {
        const bool branch_taken_0x1f0f2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F2Cu;
        // 0x1f0f30: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f2c) {
            ctx->pc = 0x1F0F4Cu;
            goto label_1f0f4c;
        }
    }
    ctx->pc = 0x1F0F34u;
    // 0x1f0f34: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0F34u;
    SET_GPR_U32(ctx, 31, 0x1F0F3Cu);
    ctx->pc = 0x1F0F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F34u;
    // 0x1f0f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0F34u, 0x1F0F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F3Cu;
label_1f0f3c:
    // 0x1f0f3c: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F0F44u);
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0F3Cu, 0x1F0F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F44u;
label_1f0f44:
    // 0x1f0f44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F0F44u;
    {
        const bool branch_taken_0x1f0f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F44u;
        // 0x1f0f48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f44) {
            ctx->pc = 0x1F0F84u;
            goto label_1f0f84;
        }
    }
    ctx->pc = 0x1F0F4Cu;
label_1f0f4c:
    // 0x1f0f4c: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x1f0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x1f0f50: 0xc07bd06  jal         func_1EF418
    ctx->pc = 0x1F0F50u;
    SET_GPR_U32(ctx, 31, 0x1F0F58u);
    ctx->pc = 0x1F0F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F50u;
    // 0x1f0f54: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF418u, 0x1F0F50u, 0x1F0F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F58u;
label_1f0f58:
    // 0x1f0f58: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0F58u;
    {
        const bool branch_taken_0x1f0f58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0f58) {
            ctx->pc = 0x1F0F70u;
            goto label_1f0f70;
        }
    }
    ctx->pc = 0x1F0F60u;
    // 0x1f0f60: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0F60u;
    SET_GPR_U32(ctx, 31, 0x1F0F68u);
    ctx->pc = 0x1F0F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F60u;
    // 0x1f0f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0F60u, 0x1F0F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F68u;
label_1f0f68:
    // 0x1f0f68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F0F68u;
    {
        const bool branch_taken_0x1f0f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F68u;
        // 0x1f0f6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0f68) {
            ctx->pc = 0x1F0F84u;
            goto label_1f0f84;
        }
    }
    ctx->pc = 0x1F0F70u;
label_1f0f70:
    // 0x1f0f70: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F0F70u;
    SET_GPR_U32(ctx, 31, 0x1F0F78u);
    ctx->pc = 0x1F0F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F70u;
    // 0x1f0f74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F0F70u, 0x1F0F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F78u;
label_1f0f78:
    // 0x1f0f78: 0xc07ad8c  jal         func_1EB630
    ctx->pc = 0x1F0F78u;
    SET_GPR_U32(ctx, 31, 0x1F0F80u);
    ctx->pc = 0x1F0F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0F78u;
    // 0x1f0f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB630u, 0x1F0F78u, 0x1F0F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0F80u;
label_1f0f80:
    // 0x1f0f80: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f0f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1f0f84:
    // 0x1f0f84: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f0f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f0f88: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1f0f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f0f8c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1f0f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f0f90: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1f0f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f0f94: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f0f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f0f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0F98u;
        // 0x1f0f9c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0FA0u;
}
