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

// Function: FUN_001df088
// Address: 0x1df088 - 0x1df298
void FUN_001df088_0x1df088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001df088_0x1df088");
#endif

    switch (ctx->pc) {
        case 0x1df0bcu: goto label_1df0bc;
        case 0x1df0c8u: goto label_1df0c8;
        case 0x1df0d8u: goto label_1df0d8;
        case 0x1df118u: goto label_1df118;
        case 0x1df174u: goto label_1df174;
        case 0x1df184u: goto label_1df184;
        case 0x1df198u: goto label_1df198;
        case 0x1df1d4u: goto label_1df1d4;
        case 0x1df1dcu: goto label_1df1dc;
        case 0x1df1e8u: goto label_1df1e8;
        case 0x1df200u: goto label_1df200;
        case 0x1df20cu: goto label_1df20c;
        case 0x1df21cu: goto label_1df21c;
        case 0x1df228u: goto label_1df228;
        case 0x1df26cu: goto label_1df26c;
        default: break;
    }

    ctx->pc = 0x1df088u;

    // 0x1df088: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1df088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1df08c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df094: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1df094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1df098: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1df098u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df09c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1df09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1df0a0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1df0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1df0a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df0a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1df0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1df0ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1df0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1df0b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1df0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1df0b4: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DF0B4u;
    SET_GPR_U32(ctx, 31, 0x1DF0BCu);
    ctx->pc = 0x1DF0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0B4u;
    // 0x1df0b8: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DF0B4u, 0x1DF0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0BCu;
label_1df0bc:
    // 0x1df0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0c0: 0xc07837a  jal         func_1E0DE8
    ctx->pc = 0x1DF0C0u;
    SET_GPR_U32(ctx, 31, 0x1DF0C8u);
    ctx->pc = 0x1DF0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF0C0u;
    // 0x1df0c4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0DE8u, 0x1DF0C0u, 0x1DF0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF0C8u;
label_1df0c8:
    // 0x1df0c8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DF0C8u;
    {
        const bool branch_taken_0x1df0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0C8u;
        // 0x1df0cc: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0c8) {
            ctx->pc = 0x1DF0F8u;
            goto label_1df0f8;
        }
    }
    ctx->pc = 0x1DF0D0u;
    // 0x1df0d0: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1DF0D0u;
    {
        const bool branch_taken_0x1df0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0D0u;
        // 0x1df0d4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0d0) {
            ctx->pc = 0x1DF25Cu;
            goto label_1df25c;
        }
    }
    ctx->pc = 0x1DF0D8u;
label_1df0d8:
    // 0x1df0d8: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1df0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1df0dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1df0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df0e0: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x1df0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x1df0e4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x1df0e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df0e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1df0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1df0ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DF0ECu;
    {
        const bool branch_taken_0x1df0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF0ECu;
        // 0x1df0f0: 0xaca90004  sw          $t1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df0ec) {
            ctx->pc = 0x1DF13Cu;
            goto label_1df13c;
        }
    }
    ctx->pc = 0x1DF0F4u;
    // 0x1df0f4: 0x0  nop
    ctx->pc = 0x1df0f4u;
    // NOP
label_1df0f8:
    // 0x1df0f8: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1df0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1df0fc: 0x244ca304  addiu       $t4, $v0, -0x5CFC
    ctx->pc = 0x1df0fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943492));
    // 0x1df100: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x1df100u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df104: 0x8d890000  lw          $t1, 0x0($t4)
    ctx->pc = 0x1df104u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1df108: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df10c: 0x248b9f00  addiu       $t3, $a0, -0x6100
    ctx->pc = 0x1df10cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942464));
    // 0x1df110: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1df114: 0x0  nop
    ctx->pc = 0x1df114u;
    // NOP
label_1df118:
    // 0x1df118: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1df118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1df11c: 0x30480007  andi        $t0, $v0, 0x7
    ctx->pc = 0x1df11cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1df120: 0x811c0  sll         $v0, $t0, 7
    ctx->pc = 0x1df120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 7));
    // 0x1df124: 0x4b2821  addu        $a1, $v0, $t3
    ctx->pc = 0x1df124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1df128: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1df128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1df12c: 0x1060ffea  beqz        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1DF12Cu;
    {
        const bool branch_taken_0x1df12c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF12Cu;
        // 0x1df130: 0x28e60008  slti        $a2, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df12c) {
            ctx->pc = 0x1DF0D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df0d8;
        }
    }
    ctx->pc = 0x1DF134u;
    // 0x1df134: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DF134u;
    {
        const bool branch_taken_0x1df134 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF134u;
        // 0x1df138: 0x1271021  addu        $v0, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df134) {
            ctx->pc = 0x1DF118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df118;
        }
    }
    ctx->pc = 0x1DF13Cu;
label_1df13c:
    // 0x1df13c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1df13cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1df140: 0x11520046  beq         $t2, $s2, . + 4 + (0x46 << 2)
    ctx->pc = 0x1DF140u;
    {
        const bool branch_taken_0x1df140 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 18));
        ctx->pc = 0x1DF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF140u;
        // 0x1df144: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df140) {
            ctx->pc = 0x1DF25Cu;
            goto label_1df25c;
        }
    }
    ctx->pc = 0x1DF148u;
    // 0x1df148: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1df148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df14c: 0x24849f00  addiu       $a0, $a0, -0x6100
    ctx->pc = 0x1df14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942464));
    // 0x1df150: 0x1319c0  sll         $v1, $s3, 7
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1df154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1df154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df158: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x1df158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1df15c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1df15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1df160: 0x5445003e  bnel        $v0, $a1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1DF160u;
    {
        const bool branch_taken_0x1df160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1df160) {
            ctx->pc = 0x1DF164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF160u;
            // 0x1df164: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            goto label_1df25c;
        }
    }
    ctx->pc = 0x1DF168u;
    // 0x1df168: 0xae340060  sw          $s4, 0x60($s1)
    ctx->pc = 0x1df168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 20));
    // 0x1df16c: 0xc077be6  jal         func_1DEF98
    ctx->pc = 0x1DF16Cu;
    SET_GPR_U32(ctx, 31, 0x1DF174u);
    ctx->pc = 0x1DF170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF16Cu;
    // 0x1df170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEF98u, 0x1DF16Cu, 0x1DF174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF174u;
label_1df174:
    // 0x1df174: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1DF174u;
    {
        const bool branch_taken_0x1df174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df174) {
            ctx->pc = 0x1DF178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF174u;
            // 0x1df178: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            goto label_1df25c;
        }
    }
    ctx->pc = 0x1DF17Cu;
    // 0x1df17c: 0xc077c16  jal         func_1DF058
    ctx->pc = 0x1DF17Cu;
    SET_GPR_U32(ctx, 31, 0x1DF184u);
    ctx->pc = 0x1DF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF17Cu;
    // 0x1df180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF058u, 0x1DF17Cu, 0x1DF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF184u;
label_1df184:
    // 0x1df184: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1DF184u;
    {
        const bool branch_taken_0x1df184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df184) {
            ctx->pc = 0x1DF188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF184u;
            // 0x1df188: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            goto label_1df25c;
        }
    }
    ctx->pc = 0x1DF18Cu;
    // 0x1df18c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1df18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df190: 0xc075586  jal         func_1D5618
    ctx->pc = 0x1DF190u;
    SET_GPR_U32(ctx, 31, 0x1DF198u);
    ctx->pc = 0x1DF194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF190u;
    // 0x1df194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5618u, 0x1DF190u, 0x1DF198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF198u;
label_1df198:
    // 0x1df198: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1df198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df19c: 0x5072002f  beql        $v1, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x1DF19Cu;
    {
        const bool branch_taken_0x1df19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x1df19c) {
            ctx->pc = 0x1DF1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF19Cu;
            // 0x1df1a0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF25Cu;
            goto label_1df25c;
        }
    }
    ctx->pc = 0x1DF1A4u;
    // 0x1df1a4: 0x340280bc  ori         $v0, $zero, 0x80BC
    ctx->pc = 0x1df1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32956);
    // 0x1df1a8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x1df1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x1df1ac: 0x341480b2  ori         $s4, $zero, 0x80B2
    ctx->pc = 0x1df1acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32946);
    // 0x1df1b0: 0x14a3fc  dsll32      $s4, $s4, 15
    ctx->pc = 0x1df1b0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 15));
    // 0x1df1b4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1df1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1df1b8: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x1df1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x1df1bc: 0xde250038  ld          $a1, 0x38($s1)
    ctx->pc = 0x1df1bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1df1c0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1df1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1df1c4: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1df1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x1df1c8: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x1df1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x1df1cc: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF1CCu;
    SET_GPR_U32(ctx, 31, 0x1DF1D4u);
    ctx->pc = 0x1DF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1CCu;
    // 0x1df1d0: 0xfe340078  sd          $s4, 0x78($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 120), GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF1CCu, 0x1DF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1D4u;
label_1df1d4:
    // 0x1df1d4: 0xc074c4c  jal         func_1D3130
    ctx->pc = 0x1DF1D4u;
    SET_GPR_U32(ctx, 31, 0x1DF1DCu);
    ctx->pc = 0x1DF1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1D4u;
    // 0x1df1d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3130u, 0x1DF1D4u, 0x1DF1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1DCu;
label_1df1dc:
    // 0x1df1dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1df1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df1e0: 0xc08218c  jal         func_208630
    ctx->pc = 0x1DF1E0u;
    SET_GPR_U32(ctx, 31, 0x1DF1E8u);
    ctx->pc = 0x1DF1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1E0u;
    // 0x1df1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208630u, 0x1DF1E0u, 0x1DF1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF1E8u;
label_1df1e8:
    // 0x1df1e8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DF1E8u;
    {
        const bool branch_taken_0x1df1e8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1df1e8) {
            ctx->pc = 0x1DF200u;
            goto label_1df200;
        }
    }
    ctx->pc = 0x1DF1F0u;
    // 0x1df1f0: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1df1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1df1f4: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1df1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1df1f8: 0xc081ffe  jal         func_207FF8
    ctx->pc = 0x1DF1F8u;
    SET_GPR_U32(ctx, 31, 0x1DF200u);
    ctx->pc = 0x1DF1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF1F8u;
    // 0x1df1fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207FF8u, 0x1DF1F8u, 0x1DF200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF200u;
label_1df200:
    // 0x1df200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1df200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df204: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF204u;
    SET_GPR_U32(ctx, 31, 0x1DF20Cu);
    ctx->pc = 0x1DF208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF204u;
    // 0x1df208: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF204u, 0x1DF20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF20Cu;
label_1df20c:
    // 0x1df20c: 0xde250078  ld          $a1, 0x78($s1)
    ctx->pc = 0x1df20cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1df210: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df210u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df214: 0xc08202e  jal         func_2080B8
    ctx->pc = 0x1DF214u;
    SET_GPR_U32(ctx, 31, 0x1DF21Cu);
    ctx->pc = 0x1DF218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF214u;
    // 0x1df218: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2080B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2080B8u, 0x1DF214u, 0x1DF21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF21Cu;
label_1df21c:
    // 0x1df21c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1df21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df220: 0xc0820d8  jal         func_208360
    ctx->pc = 0x1DF220u;
    SET_GPR_U32(ctx, 31, 0x1DF228u);
    ctx->pc = 0x1DF224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF220u;
    // 0x1df224: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208360u, 0x1DF220u, 0x1DF228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF228u;
label_1df228:
    // 0x1df228: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x1df228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1df22c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x1df22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1df230: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1df234: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x1df234u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
    // 0x1df238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df23c: 0xfe220048  sd          $v0, 0x48($s1)
    ctx->pc = 0x1df23cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 2));
    // 0x1df240: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x1df240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
    // 0x1df244: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x1df244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x1df248: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x1df248u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
    // 0x1df24c: 0xae250010  sw          $a1, 0x10($s1)
    ctx->pc = 0x1df24cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 5));
    // 0x1df250: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x1df250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x1df254: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x1df254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x1df258: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x1df258u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_1df25c:
    // 0x1df25c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DF25Cu;
    {
        const bool branch_taken_0x1df25c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF25Cu;
        // 0x1df260: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df25c) {
            ctx->pc = 0x1DF270u;
            goto label_1df270;
        }
    }
    ctx->pc = 0x1DF264u;
    // 0x1df264: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DF264u;
    SET_GPR_U32(ctx, 31, 0x1DF26Cu);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DF264u, 0x1DF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF26Cu;
label_1df26c:
    // 0x1df26c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1df26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1df270:
    // 0x1df270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df278: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1df278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df27c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1df27cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1df280: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1df280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1df284: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1df284u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1df288: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1df288u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1df28c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1df28cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1df290: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF290u;
        // 0x1df294: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF298u;
}
