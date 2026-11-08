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

// Function: FUN_001d90d8
// Address: 0x1d90d8 - 0x1d92f0
void FUN_001d90d8_0x1d90d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d90d8_0x1d90d8");
#endif

    switch (ctx->pc) {
        case 0x1d911cu: goto label_1d911c;
        case 0x1d9128u: goto label_1d9128;
        case 0x1d9138u: goto label_1d9138;
        case 0x1d9170u: goto label_1d9170;
        case 0x1d9204u: goto label_1d9204;
        case 0x1d9218u: goto label_1d9218;
        case 0x1d9234u: goto label_1d9234;
        case 0x1d9260u: goto label_1d9260;
        case 0x1d9268u: goto label_1d9268;
        case 0x1d9278u: goto label_1d9278;
        case 0x1d92acu: goto label_1d92ac;
        case 0x1d92bcu: goto label_1d92bc;
        default: break;
    }

    ctx->pc = 0x1d90d8u;

    // 0x1d90d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d90d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d90dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d90dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d90e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d90e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d90e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d90e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d90ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d90f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d90f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1d90f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1d90f8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1d90f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d90fc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1d90fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1d9100: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1d9100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1d9104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d910c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d910cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d9110: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1d9110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1d9114: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1D9114u;
    SET_GPR_U32(ctx, 31, 0x1D911Cu);
    ctx->pc = 0x1D9118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9114u;
    // 0x1d9118: 0x100b82d  daddu       $s7, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1D9114u, 0x1D911Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D911Cu;
label_1d911c:
    // 0x1d911c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9120: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1D9120u;
    SET_GPR_U32(ctx, 31, 0x1D9128u);
    ctx->pc = 0x1D9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9120u;
    // 0x1d9124: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1D9120u, 0x1D9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9128u;
label_1d9128:
    // 0x1d9128: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9128u;
    {
        const bool branch_taken_0x1d9128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9128u;
        // 0x1d912c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9128) {
            ctx->pc = 0x1D9150u;
            goto label_1d9150;
        }
    }
    ctx->pc = 0x1D9130u;
    // 0x1d9130: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1D9130u;
    {
        const bool branch_taken_0x1d9130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9130u;
        // 0x1d9134: 0x2411fffc  addiu       $s1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9130) {
            ctx->pc = 0x1D92ACu;
            goto label_1d92ac;
        }
    }
    ctx->pc = 0x1D9138u;
label_1d9138:
    // 0x1d9138: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1d9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d913c: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x1d913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x1d9140: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x1d9140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9144: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1D9144u;
    {
        const bool branch_taken_0x1d9144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9144u;
        // 0x1d9148: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9144) {
            ctx->pc = 0x1D91B4u;
            goto label_1d91b4;
        }
    }
    ctx->pc = 0x1D914Cu;
    // 0x1d914c: 0x0  nop
    ctx->pc = 0x1d914cu;
    // NOP
label_1d9150:
    // 0x1d9150: 0x3c0c0038  lui         $t4, 0x38
    ctx->pc = 0x1d9150u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)56 << 16));
    // 0x1d9154: 0x244b70c0  addiu       $t3, $v0, 0x70C0
    ctx->pc = 0x1d9154u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 28864));
    // 0x1d9158: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1d9158u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d915c: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x1d915cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d9160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d9160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9164: 0x258a66c0  addiu       $t2, $t4, 0x66C0
    ctx->pc = 0x1d9164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 26304));
    // 0x1d9168: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1d9168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1d916c: 0x0  nop
    ctx->pc = 0x1d916cu;
    // NOP
label_1d9170:
    // 0x1d9170: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d9170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d9174: 0x2485001f  addiu       $a1, $a0, 0x1F
    ctx->pc = 0x1d9174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x1d9178: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1d9178u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1d917c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d917cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9180: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x1d9180u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1d9184: 0x22943  sra         $a1, $v0, 5
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 5));
    // 0x1d9188: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x1d9188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1d918c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1d918cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d9190: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d9194: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d9194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d9198: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d919c: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x1d919cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d91a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d91a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d91a4: 0x1060ffe4  beqz        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D91A4u;
    {
        const bool branch_taken_0x1d91a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91A4u;
        // 0x1d91a8: 0x28c70020  slti        $a3, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91a4) {
            ctx->pc = 0x1D9138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9138;
        }
    }
    ctx->pc = 0x1D91ACu;
    // 0x1d91ac: 0x54e0fff0  bnel        $a3, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D91ACu;
    {
        const bool branch_taken_0x1d91ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d91ac) {
            ctx->pc = 0x1D91B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D91ACu;
            // 0x1d91b0: 0x1062021  addu        $a0, $t0, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9170;
        }
    }
    ctx->pc = 0x1D91B4u;
label_1d91b4:
    // 0x1d91b4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1d91b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d91b8: 0x1135003c  beq         $t1, $s5, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D91B8u;
    {
        const bool branch_taken_0x1d91b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 21));
        ctx->pc = 0x1D91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91B8u;
        // 0x1d91bc: 0x2411fffd  addiu       $s1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91b8) {
            ctx->pc = 0x1D92ACu;
            goto label_1d92ac;
        }
    }
    ctx->pc = 0x1D91C0u;
    // 0x1d91c0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1d91c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1d91c8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d91cc: 0x258466c0  addiu       $a0, $t4, 0x66C0
    ctx->pc = 0x1d91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 26304));
    // 0x1d91d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d91d4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1d91d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1d91d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d91dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D91DCu;
    {
        const bool branch_taken_0x1d91dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91DCu;
        // 0x1d91e0: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91dc) {
            ctx->pc = 0x1D9204u;
            goto label_1d9204;
        }
    }
    ctx->pc = 0x1D91E4u;
    // 0x1d91e4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1d91e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d91e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d91ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d91f0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d91f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d91f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d91f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d91f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91fc: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x1D91FCu;
    SET_GPR_U32(ctx, 31, 0x1D9204u);
    ctx->pc = 0x1D9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91FCu;
    // 0x1d9200: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x1D91FCu, 0x1D9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9204u;
label_1d9204:
    // 0x1d9204: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x1d9204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x1d9208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d920c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d920cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9210: 0xc07839a  jal         func_1E0E68
    ctx->pc = 0x1D9210u;
    SET_GPR_U32(ctx, 31, 0x1D9218u);
    ctx->pc = 0x1D9214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9210u;
    // 0x1d9214: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E68u, 0x1D9210u, 0x1D9218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9218u;
label_1d9218:
    // 0x1d9218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9218u;
    {
        const bool branch_taken_0x1d9218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9218u;
        // 0x1d921c: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9218) {
            ctx->pc = 0x1D9228u;
            goto label_1d9228;
        }
    }
    ctx->pc = 0x1D9220u;
    // 0x1d9220: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D9220u;
    {
        const bool branch_taken_0x1d9220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9220u;
        // 0x1d9224: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9220) {
            ctx->pc = 0x1D92ACu;
            goto label_1d92ac;
        }
    }
    ctx->pc = 0x1D9228u;
label_1d9228:
    // 0x1d9228: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d9228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d922c: 0xc0755f2  jal         func_1D57C8
    ctx->pc = 0x1D922Cu;
    SET_GPR_U32(ctx, 31, 0x1D9234u);
    ctx->pc = 0x1D9230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D922Cu;
    // 0x1d9230: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D57C8u, 0x1D922Cu, 0x1D9234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9234u;
label_1d9234:
    // 0x1d9234: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d9234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9238: 0x54750003  bnel        $v1, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9238u;
    {
        const bool branch_taken_0x1d9238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1d9238) {
            ctx->pc = 0x1D923Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9238u;
            // 0x1d923c: 0x8e020040  lw          $v0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9248u;
            goto label_1d9248;
        }
    }
    ctx->pc = 0x1D9240u;
    // 0x1d9240: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9240u;
    {
        const bool branch_taken_0x1d9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9240u;
        // 0x1d9244: 0x2411fffe  addiu       $s1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9240) {
            ctx->pc = 0x1D92ACu;
            goto label_1d92ac;
        }
    }
    ctx->pc = 0x1D9248u;
label_1d9248:
    // 0x1d9248: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d9248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d924c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1d9250: 0xfe040028  sd          $a0, 0x28($s0)
    ctx->pc = 0x1d9250u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 4));
    // 0x1d9254: 0xfe040030  sd          $a0, 0x30($s0)
    ctx->pc = 0x1d9254u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 4));
    // 0x1d9258: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1D9258u;
    SET_GPR_U32(ctx, 31, 0x1D9260u);
    ctx->pc = 0x1D925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9258u;
    // 0x1d925c: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1D9258u, 0x1D9260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9260u;
label_1d9260:
    // 0x1d9260: 0xc08218c  jal         func_208630
    ctx->pc = 0x1D9260u;
    SET_GPR_U32(ctx, 31, 0x1D9268u);
    ctx->pc = 0x1D9264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9260u;
    // 0x1d9264: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1D9260u, 0x1D9268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9268u;
label_1d9268:
    // 0x1d9268: 0x340480fc  ori         $a0, $zero, 0x80FC
    ctx->pc = 0x1d9268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33020);
    // 0x1d926c: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1d926cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1d9270: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1D9270u;
    SET_GPR_U32(ctx, 31, 0x1D9278u);
    ctx->pc = 0x1D9274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9270u;
    // 0x1d9274: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1D9270u, 0x1D9278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9278u;
label_1d9278:
    // 0x1d9278: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1d9278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1d927c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9280: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1d9280u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1d9284: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d9284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d9288: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x1d9288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x1d928c: 0xae120018  sw          $s2, 0x18($s0)
    ctx->pc = 0x1d928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 18));
    // 0x1d9290: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9290u;
    {
        const bool branch_taken_0x1d9290 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9290u;
        // 0x1d9294: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9290) {
            ctx->pc = 0x1D92ACu;
            goto label_1d92ac;
        }
    }
    ctx->pc = 0x1D9298u;
    // 0x1d9298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d9298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d929c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d929cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d92a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d92a4: 0xc0763ee  jal         func_1D8FB8
    ctx->pc = 0x1D92A4u;
    SET_GPR_U32(ctx, 31, 0x1D92ACu);
    ctx->pc = 0x1D92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D92A4u;
    // 0x1d92a8: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FB8u, 0x1D92A4u, 0x1D92ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92ACu;
label_1d92ac:
    // 0x1d92ac: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D92ACu;
    {
        const bool branch_taken_0x1d92ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D92B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92ACu;
        // 0x1d92b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d92ac) {
            ctx->pc = 0x1D92C0u;
            goto label_1d92c0;
        }
    }
    ctx->pc = 0x1D92B4u;
    // 0x1d92b4: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1D92B4u;
    SET_GPR_U32(ctx, 31, 0x1D92BCu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1D92B4u, 0x1D92BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D92BCu;
label_1d92bc:
    // 0x1d92bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d92bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d92c0:
    // 0x1d92c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d92c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d92c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d92c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d92c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d92c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d92cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d92ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d92d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d92d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d92d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d92d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d92d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1d92d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d92dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1d92dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d92e0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1d92e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d92e4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1d92e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d92e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D92E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D92ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D92E8u;
        // 0x1d92ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D92E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D92F0u;
}
