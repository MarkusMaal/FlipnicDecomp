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

// Function: FUN_001f8e70
// Address: 0x1f8e70 - 0x1f8fb8
void FUN_001f8e70_0x1f8e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8e70_0x1f8e70");
#endif

    switch (ctx->pc) {
        case 0x1f8ed4u: goto label_1f8ed4;
        case 0x1f8ef8u: goto label_1f8ef8;
        case 0x1f8f28u: goto label_1f8f28;
        case 0x1f8f3cu: goto label_1f8f3c;
        case 0x1f8f68u: goto label_1f8f68;
        case 0x1f8f88u: goto label_1f8f88;
        default: break;
    }

    ctx->pc = 0x1f8e70u;

    // 0x1f8e70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f8e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f8e74: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8e78: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1f8e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1f8e7c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f8e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f8e80: 0x24571600  addiu       $s7, $v0, 0x1600
    ctx->pc = 0x1f8e80u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1f8e84: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f8e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f8e88: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1f8e88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e8c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f8e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f8e90: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f8e90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f8e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f8e98: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f8e98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e9c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f8e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8ea0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x1f8ea0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ea4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8ea8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1f8ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8eac: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f8eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f8eb0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f8eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f8eb4: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x1f8eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8eb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8EB8u;
    {
        const bool branch_taken_0x1f8eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EB8u;
        // 0x1f8ebc: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8eb8) {
            ctx->pc = 0x1F8EC8u;
            goto label_1f8ec8;
        }
    }
    ctx->pc = 0x1F8EC0u;
    // 0x1f8ec0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1F8EC0u;
    {
        const bool branch_taken_0x1f8ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EC0u;
        // 0x1f8ec4: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ec0) {
            ctx->pc = 0x1F8F8Cu;
            goto label_1f8f8c;
        }
    }
    ctx->pc = 0x1F8EC8u;
label_1f8ec8:
    // 0x1f8ec8: 0x3c150022  lui         $s5, 0x22
    ctx->pc = 0x1f8ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)34 << 16));
    // 0x1f8ecc: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8ECCu;
    SET_GPR_U32(ctx, 31, 0x1F8ED4u);
    ctx->pc = 0x1F8ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8ECCu;
    // 0x1f8ed0: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8ECCu, 0x1F8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8ED4u;
label_1f8ed4:
    // 0x1f8ed4: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1F8ED4u;
    {
        const bool branch_taken_0x1f8ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1F8ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8ED4u;
        // 0x1f8ed8: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ed4) {
            ctx->pc = 0x1F8F8Cu;
            goto label_1f8f8c;
        }
    }
    ctx->pc = 0x1F8EDCu;
    // 0x1f8edc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8EDCu;
    {
        const bool branch_taken_0x1f8edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8edc) {
            ctx->pc = 0x1F8EF0u;
            goto label_1f8ef0;
        }
    }
    ctx->pc = 0x1F8EE4u;
    // 0x1f8ee4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1f8ee4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8ee8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8EE8u;
    {
        const bool branch_taken_0x1f8ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EE8u;
        // 0x1f8eec: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ee8) {
            ctx->pc = 0x1F8F00u;
            goto label_1f8f00;
        }
    }
    ctx->pc = 0x1F8EF0u;
label_1f8ef0:
    // 0x1f8ef0: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8EF0u;
    SET_GPR_U32(ctx, 31, 0x1F8EF8u);
    ctx->pc = 0x1F8EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8EF0u;
    // 0x1f8ef4: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8EF0u, 0x1F8EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8EF8u;
label_1f8ef8:
    // 0x1f8ef8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F8EF8u;
    {
        const bool branch_taken_0x1f8ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8EF8u;
        // 0x1f8efc: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ef8) {
            ctx->pc = 0x1F8F8Cu;
            goto label_1f8f8c;
        }
    }
    ctx->pc = 0x1F8F00u;
label_1f8f00:
    // 0x1f8f00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f04: 0x245016b0  addiu       $s0, $v0, 0x16B0
    ctx->pc = 0x1f8f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5808));
    // 0x1f8f08: 0xac5616b0  sw          $s6, 0x16B0($v0)
    ctx->pc = 0x1f8f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5808), GPR_U32(ctx, 22));
    // 0x1f8f0c: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x1f8f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x1f8f10: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1f8f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1f8f14: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x1f8f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x1f8f18: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1f8f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1f8f1c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1f8f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1f8f20: 0xc080804  jal         func_202010
    ctx->pc = 0x1F8F20u;
    SET_GPR_U32(ctx, 31, 0x1F8F28u);
    ctx->pc = 0x1F8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F20u;
    // 0x1f8f24: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202010u, 0x1F8F20u, 0x1F8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F28u;
label_1f8f28:
    // 0x1f8f28: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8F28u;
    {
        const bool branch_taken_0x1f8f28 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F28u;
        // 0x1f8f2c: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f28) {
            ctx->pc = 0x1F8F3Cu;
            goto label_1f8f3c;
        }
    }
    ctx->pc = 0x1F8F30u;
    // 0x1f8f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f8f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f34: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F8F34u;
    SET_GPR_U32(ctx, 31, 0x1F8F3Cu);
    ctx->pc = 0x1F8F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F34u;
    // 0x1f8f38: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F8F34u, 0x1F8F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F3Cu;
label_1f8f3c:
    // 0x1f8f3c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f8f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8f40: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f8f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1f8f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f48: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8f48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8f4c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f8f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f8f50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1f8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f8f54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8f58: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1f8f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1f8f5c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1f8f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8f60: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8F60u;
    SET_GPR_U32(ctx, 31, 0x1F8F68u);
    ctx->pc = 0x1F8F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F60u;
    // 0x1f8f64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8F60u, 0x1F8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F68u;
label_1f8f68:
    // 0x1f8f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f6c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8F6Cu;
    {
        const bool branch_taken_0x1f8f6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F6Cu;
        // 0x1f8f70: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f6c) {
            ctx->pc = 0x1F8F80u;
            goto label_1f8f80;
        }
    }
    ctx->pc = 0x1F8F74u;
    // 0x1f8f74: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1f8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1f8f78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8F78u;
    {
        const bool branch_taken_0x1f8f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F78u;
        // 0x1f8f7c: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f78) {
            ctx->pc = 0x1F8F88u;
            goto label_1f8f88;
        }
    }
    ctx->pc = 0x1F8F80u;
label_1f8f80:
    // 0x1f8f80: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8F80u;
    SET_GPR_U32(ctx, 31, 0x1F8F88u);
    ctx->pc = 0x1F8F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F80u;
    // 0x1f8f84: 0x8ea4d6bc  lw          $a0, -0x2944($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8F80u, 0x1F8F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8F88u;
label_1f8f88:
    // 0x1f8f88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f8c:
    // 0x1f8f8c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f8f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f8f90: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1f8f90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8f94: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f8f94u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f8f98: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f8f98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8f9c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f8f9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8fa0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f8fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8fa4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f8fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8fa8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8fac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FB0u;
        // 0x1f8fb4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8FB8u;
}
