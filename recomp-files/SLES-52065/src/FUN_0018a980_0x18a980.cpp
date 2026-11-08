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

// Function: FUN_0018a980
// Address: 0x18a980 - 0x18ab7c
void FUN_0018a980_0x18a980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018a980_0x18a980");
#endif

    switch (ctx->pc) {
        case 0x18a9d0u: goto label_18a9d0;
        case 0x18a9ecu: goto label_18a9ec;
        case 0x18aa04u: goto label_18aa04;
        case 0x18aa28u: goto label_18aa28;
        case 0x18aa34u: goto label_18aa34;
        case 0x18aa3cu: goto label_18aa3c;
        case 0x18aa5cu: goto label_18aa5c;
        case 0x18aa78u: goto label_18aa78;
        case 0x18aa9cu: goto label_18aa9c;
        case 0x18aaa8u: goto label_18aaa8;
        case 0x18aac4u: goto label_18aac4;
        case 0x18aad0u: goto label_18aad0;
        case 0x18aad4u: goto label_18aad4;
        case 0x18aadcu: goto label_18aadc;
        case 0x18aaf8u: goto label_18aaf8;
        case 0x18ab0cu: goto label_18ab0c;
        case 0x18ab24u: goto label_18ab24;
        case 0x18ab2cu: goto label_18ab2c;
        case 0x18ab34u: goto label_18ab34;
        default: break;
    }

    ctx->pc = 0x18a980u;

    // 0x18a980: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18a980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18a984: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x18a984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x18a988: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18a988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18a98c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18a98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18a990: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x18a990u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a994: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18a994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18a998: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18a998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18a99c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18a99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18a9a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18a9a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18a9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18a9a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18a9a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18a9acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18a9b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x18a9b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18a9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18a9b8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x18a9b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18a9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18a9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18a9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9c4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x18a9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9c8: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x18A9C8u;
    SET_GPR_U32(ctx, 31, 0x18A9D0u);
    ctx->pc = 0x18A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9C8u;
    // 0x18a9cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x18A9C8u, 0x18A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9D0u;
label_18a9d0:
    // 0x18a9d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x18a9d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9d4: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x18A9D4u;
    {
        const bool branch_taken_0x18a9d4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9D4u;
        // 0x18a9d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9d4) {
            ctx->pc = 0x18A9E4u;
            goto label_18a9e4;
        }
    }
    ctx->pc = 0x18A9DCu;
    // 0x18a9dc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x18A9DCu;
    {
        const bool branch_taken_0x18a9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9DCu;
        // 0x18a9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9dc) {
            ctx->pc = 0x18AB4Cu;
            goto label_18ab4c;
        }
    }
    ctx->pc = 0x18A9E4u;
label_18a9e4:
    // 0x18a9e4: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x18A9E4u;
    SET_GPR_U32(ctx, 31, 0x18A9ECu);
    ctx->pc = 0x18A9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9E4u;
    // 0x18a9e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x18A9E4u, 0x18A9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A9ECu;
label_18a9ec:
    // 0x18a9ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18a9ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9f0: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x18A9F0u;
    {
        const bool branch_taken_0x18a9f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A9F0u;
        // 0x18a9f4: 0x148880  sll         $s1, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a9f0) {
            ctx->pc = 0x18AA0Cu;
            goto label_18aa0c;
        }
    }
    ctx->pc = 0x18A9F8u;
    // 0x18a9f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18a9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a9fc: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18A9FCu;
    SET_GPR_U32(ctx, 31, 0x18AA04u);
    ctx->pc = 0x18AA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A9FCu;
    // 0x18aa00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18A9FCu, 0x18AA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA04u;
label_18aa04:
    // 0x18aa04: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x18AA04u;
    {
        const bool branch_taken_0x18aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA04u;
        // 0x18aa08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa04) {
            ctx->pc = 0x18AB4Cu;
            goto label_18ab4c;
        }
    }
    ctx->pc = 0x18AA0Cu;
label_18aa0c:
    // 0x18aa0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18aa0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa10: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x18aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x18aa14: 0x2351821  addu        $v1, $s1, $s5
    ctx->pc = 0x18aa14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x18aa18: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x18aa18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x18aa1c: 0xac730040  sw          $s3, 0x40($v1)
    ctx->pc = 0x18aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 19));
    // 0x18aa20: 0xc080702  jal         func_201C08
    ctx->pc = 0x18AA20u;
    SET_GPR_U32(ctx, 31, 0x18AA28u);
    ctx->pc = 0x18AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA20u;
    // 0x18aa24: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18AA20u, 0x18AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA28u;
label_18aa28:
    // 0x18aa28: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x18aa28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x18aa2c: 0xc080702  jal         func_201C08
    ctx->pc = 0x18AA2Cu;
    SET_GPR_U32(ctx, 31, 0x18AA34u);
    ctx->pc = 0x18AA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA2Cu;
    // 0x18aa30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18AA2Cu, 0x18AA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA34u;
label_18aa34:
    // 0x18aa34: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x18AA34u;
    SET_GPR_U32(ctx, 31, 0x18AA3Cu);
    ctx->pc = 0x18AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA34u;
    // 0x18aa38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x18AA34u, 0x18AA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA3Cu;
label_18aa3c:
    // 0x18aa3c: 0x0  nop
    ctx->pc = 0x18aa3cu;
    // NOP
    // 0x18aa40: 0x0  nop
    ctx->pc = 0x18aa40u;
    // NOP
    // 0x18aa44: 0x0  nop
    ctx->pc = 0x18aa44u;
    // NOP
    // 0x18aa48: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AA48u;
    {
        const bool branch_taken_0x18aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aa48) {
            ctx->pc = 0x18AA34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aa34;
        }
    }
    ctx->pc = 0x18AA50u;
    // 0x18aa50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18aa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa54: 0xc047988  jal         func_11E620
    ctx->pc = 0x18AA54u;
    SET_GPR_U32(ctx, 31, 0x18AA5Cu);
    ctx->pc = 0x18AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AA54u;
    // 0x18aa58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E620u, 0x18AA54u, 0x18AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA5Cu;
label_18aa5c:
    // 0x18aa5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18aa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa60: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA60u;
    {
        const bool branch_taken_0x18aa60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA60u;
        // 0x18aa64: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa60) {
            ctx->pc = 0x18AA70u;
            goto label_18aa70;
        }
    }
    ctx->pc = 0x18AA68u;
    // 0x18aa68: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x18AA68u;
    {
        const bool branch_taken_0x18aa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA68u;
        // 0x18aa6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa68) {
            ctx->pc = 0x18AB4Cu;
            goto label_18ab4c;
        }
    }
    ctx->pc = 0x18AA70u;
label_18aa70:
    // 0x18aa70: 0xc07845e  jal         func_1E1178
    ctx->pc = 0x18AA70u;
    SET_GPR_U32(ctx, 31, 0x18AA78u);
    ctx->pc = 0x1E1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1178u, 0x18AA70u, 0x18AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA78u;
label_18aa78:
    // 0x18aa78: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x18aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x18aa7c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18aa80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18aa84: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AA84u;
    {
        const bool branch_taken_0x18aa84 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18aa84) {
            ctx->pc = 0x18AA94u;
            goto label_18aa94;
        }
    }
    ctx->pc = 0x18AA8Cu;
    // 0x18aa8c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x18AA8Cu;
    {
        const bool branch_taken_0x18aa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AA8Cu;
        // 0x18aa90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aa8c) {
            ctx->pc = 0x18AB4Cu;
            goto label_18ab4c;
        }
    }
    ctx->pc = 0x18AA94u;
label_18aa94:
    // 0x18aa94: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x18AA94u;
    SET_GPR_U32(ctx, 31, 0x18AA9Cu);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x18AA94u, 0x18AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AA9Cu;
label_18aa9c:
    // 0x18aa9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18aa9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aaa0: 0xc07c980  jal         func_1F2600
    ctx->pc = 0x18AAA0u;
    SET_GPR_U32(ctx, 31, 0x18AAA8u);
    ctx->pc = 0x18AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAA0u;
    // 0x18aaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2600u, 0x18AAA0u, 0x18AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAA8u;
label_18aaa8:
    // 0x18aaa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x18aaa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aaac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18aaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aab0: 0xafb600a0  sw          $s6, 0xA0($sp)
    ctx->pc = 0x18aab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 22));
    // 0x18aab4: 0xafb300a4  sw          $s3, 0xA4($sp)
    ctx->pc = 0x18aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 19));
    // 0x18aab8: 0xafb000a8  sw          $s0, 0xA8($sp)
    ctx->pc = 0x18aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 16));
    // 0x18aabc: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x18AABCu;
    SET_GPR_U32(ctx, 31, 0x18AAC4u);
    ctx->pc = 0x18AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AABCu;
    // 0x18aac0: 0xafa000ac  sw          $zero, 0xAC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x18AABCu, 0x18AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAC4u;
label_18aac4:
    // 0x18aac4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18aac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18aac8: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x18AAC8u;
    SET_GPR_U32(ctx, 31, 0x18AAD0u);
    ctx->pc = 0x18AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAC8u;
    // 0x18aacc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x18AAC8u, 0x18AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAD0u;
label_18aad0:
    // 0x18aad0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18aad0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18aad4:
    // 0x18aad4: 0xc07ae70  jal         func_1EB9C0
    ctx->pc = 0x18AAD4u;
    SET_GPR_U32(ctx, 31, 0x18AADCu);
    ctx->pc = 0x18AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAD4u;
    // 0x18aad8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9C0u, 0x18AAD4u, 0x18AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AADCu;
label_18aadc:
    // 0x18aadc: 0x0  nop
    ctx->pc = 0x18aadcu;
    // NOP
    // 0x18aae0: 0x0  nop
    ctx->pc = 0x18aae0u;
    // NOP
    // 0x18aae4: 0x0  nop
    ctx->pc = 0x18aae4u;
    // NOP
    // 0x18aae8: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AAE8u;
    {
        const bool branch_taken_0x18aae8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x18aae8) {
            ctx->pc = 0x18AAD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aad4;
        }
    }
    ctx->pc = 0x18AAF0u;
    // 0x18aaf0: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x18AAF0u;
    SET_GPR_U32(ctx, 31, 0x18AAF8u);
    ctx->pc = 0x18AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAF0u;
    // 0x18aaf4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x18AAF0u, 0x18AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AAF8u;
label_18aaf8:
    // 0x18aaf8: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x18aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x18aafc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18aafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab00: 0x8c450880  lw          $a1, 0x880($v0)
    ctx->pc = 0x18ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2176)));
    // 0x18ab04: 0xc074c70  jal         func_1D31C0
    ctx->pc = 0x18AB04u;
    SET_GPR_U32(ctx, 31, 0x18AB0Cu);
    ctx->pc = 0x18AB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB04u;
    // 0x18ab08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D31C0u, 0x18AB04u, 0x18AB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB0Cu;
label_18ab0c:
    // 0x18ab0c: 0xaea208c0  sw          $v0, 0x8C0($s5)
    ctx->pc = 0x18ab0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2240), GPR_U32(ctx, 2));
    // 0x18ab10: 0xaeb408c4  sw          $s4, 0x8C4($s5)
    ctx->pc = 0x18ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 2244), GPR_U32(ctx, 20));
    // 0x18ab14: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AB14u;
    {
        const bool branch_taken_0x18ab14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB14u;
        // 0x18ab18: 0xaeb308c8  sw          $s3, 0x8C8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 2248), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab14) {
            ctx->pc = 0x18AB24u;
            goto label_18ab24;
        }
    }
    ctx->pc = 0x18AB1Cu;
    // 0x18ab1c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x18AB1Cu;
    SET_GPR_U32(ctx, 31, 0x18AB24u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x18AB1Cu, 0x18AB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB24u;
label_18ab24:
    // 0x18ab24: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AB24u;
    {
        const bool branch_taken_0x18ab24 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab24) {
            ctx->pc = 0x18AB48u;
            goto label_18ab48;
        }
    }
    ctx->pc = 0x18AB2Cu;
label_18ab2c:
    // 0x18ab2c: 0xc062ae0  jal         func_18AB80
    ctx->pc = 0x18AB2Cu;
    SET_GPR_U32(ctx, 31, 0x18AB34u);
    ctx->pc = 0x18AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB2Cu;
    // 0x18ab30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AB80u, 0x18AB2Cu, 0x18AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AB34u;
label_18ab34:
    // 0x18ab34: 0x0  nop
    ctx->pc = 0x18ab34u;
    // NOP
    // 0x18ab38: 0x0  nop
    ctx->pc = 0x18ab38u;
    // NOP
    // 0x18ab3c: 0x0  nop
    ctx->pc = 0x18ab3cu;
    // NOP
    // 0x18ab40: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18AB40u;
    {
        const bool branch_taken_0x18ab40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab40) {
            ctx->pc = 0x18AB2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ab2c;
        }
    }
    ctx->pc = 0x18AB48u;
label_18ab48:
    // 0x18ab48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18ab4c:
    // 0x18ab4c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x18ab4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18ab50: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x18ab50u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18ab54: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x18ab54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18ab58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18ab58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18ab5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18ab5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ab60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18ab60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ab64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ab64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ab68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ab68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ab6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ab6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ab70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18ab70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ab74: 0x3e00008  jr          $ra
    ctx->pc = 0x18AB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB74u;
        // 0x18ab78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AB7Cu;
}
