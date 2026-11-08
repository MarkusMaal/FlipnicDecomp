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

// Function: FUN_001dc4f8
// Address: 0x1dc4f8 - 0x1dc8fc
void FUN_001dc4f8_0x1dc4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dc4f8_0x1dc4f8");
#endif

    switch (ctx->pc) {
        case 0x1dc578u: goto label_1dc578;
        case 0x1dc5b0u: goto label_1dc5b0;
        case 0x1dc8c8u: goto label_1dc8c8;
        default: break;
    }

    ctx->pc = 0x1dc4f8u;

    // 0x1dc4f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1dc4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1dc4fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dc4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc500: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1dc500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1dc504: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1dc504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc508: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1dc508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1dc50c: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1dc50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1dc510: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1dc510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1dc514: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x1dc514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x1dc518: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x1dc518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x1dc51c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1dc51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1dc520: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x1dc520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x1dc524: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x1dc524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x1dc528: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DC528u;
    {
        const bool branch_taken_0x1dc528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DC52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC528u;
        // 0x1dc52c: 0xffbf00b8  sd          $ra, 0xB8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc528) {
            ctx->pc = 0x1DC568u;
            goto label_1dc568;
        }
    }
    ctx->pc = 0x1DC530u;
    // 0x1dc530: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1dc530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1dc534: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DC534u;
    {
        const bool branch_taken_0x1dc534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc534) {
            ctx->pc = 0x1DC538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC534u;
            // 0x1dc538: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC550u;
            goto label_1dc550;
        }
    }
    ctx->pc = 0x1DC53Cu;
    // 0x1dc53c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC53Cu;
    {
        const bool branch_taken_0x1dc53c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc53c) {
            ctx->pc = 0x1DC540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC53Cu;
            // 0x1dc540: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC560u;
            goto label_1dc560;
        }
    }
    ctx->pc = 0x1DC544u;
    // 0x1dc544: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1DC544u;
    {
        const bool branch_taken_0x1dc544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc544) {
            ctx->pc = 0x1DC570u;
            goto label_1dc570;
        }
    }
    ctx->pc = 0x1DC54Cu;
    // 0x1dc54c: 0x0  nop
    ctx->pc = 0x1dc54cu;
    // NOP
label_1dc550:
    // 0x1dc550: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DC550u;
    {
        const bool branch_taken_0x1dc550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dc550) {
            ctx->pc = 0x1DC570u;
            goto label_1dc570;
        }
    }
    ctx->pc = 0x1DC558u;
    // 0x1dc558: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC558u;
    {
        const bool branch_taken_0x1dc558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC558u;
        // 0x1dc55c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc558) {
            ctx->pc = 0x1DC56Cu;
            goto label_1dc56c;
        }
    }
    ctx->pc = 0x1DC560u;
label_1dc560:
    // 0x1dc560: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC560u;
    {
        const bool branch_taken_0x1dc560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC560u;
        // 0x1dc564: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc560) {
            ctx->pc = 0x1DC570u;
            goto label_1dc570;
        }
    }
    ctx->pc = 0x1DC568u;
label_1dc568:
    // 0x1dc568: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1dc568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dc56c:
    // 0x1dc56c: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x1dc56cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1dc570:
    // 0x1dc570: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DC570u;
    SET_GPR_U32(ctx, 31, 0x1DC578u);
    ctx->pc = 0x1DC574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC570u;
    // 0x1dc574: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DC570u, 0x1DC578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC578u;
label_1dc578:
    // 0x1dc578: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1dc578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc57c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1dc57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1dc580: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1dc580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1dc584: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x1dc584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dc588: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DC588u;
    {
        const bool branch_taken_0x1dc588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC588u;
        // 0x1dc58c: 0x8c467320  lw          $a2, 0x7320($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc588) {
            ctx->pc = 0x1DC5E4u;
            goto label_1dc5e4;
        }
    }
    ctx->pc = 0x1DC590u;
    // 0x1dc590: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1dc590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1dc594: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1dc594u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc59c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc5a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc5a4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1dc5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x1dc5a8: 0x24847338  addiu       $a0, $a0, 0x7338
    ctx->pc = 0x1dc5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29496));
    // 0x1dc5ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1dc5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1dc5b0:
    // 0x1dc5b0: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x1dc5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x1dc5b4: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DC5B4u;
    {
        const bool branch_taken_0x1dc5b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1dc5b4) {
            ctx->pc = 0x1DC5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC5B4u;
            // 0x1dc5b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC5D8u;
            goto label_1dc5d8;
        }
    }
    ctx->pc = 0x1DC5BCu;
    // 0x1dc5bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dc5c0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1dc5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1dc5c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC5C4u;
    {
        const bool branch_taken_0x1dc5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dc5c4) {
            ctx->pc = 0x1DC5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC5C4u;
            // 0x1dc5c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC5D8u;
            goto label_1dc5d8;
        }
    }
    ctx->pc = 0x1DC5CCu;
    // 0x1dc5cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1dc5ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5d0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1dc5d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc5d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1dc5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1dc5d8:
    // 0x1dc5d8: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1dc5d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1dc5dc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DC5DCu;
    {
        const bool branch_taken_0x1dc5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5DCu;
        // 0x1dc5e0: 0x248400e8  addiu       $a0, $a0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5dc) {
            ctx->pc = 0x1DC5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dc5b0;
        }
    }
    ctx->pc = 0x1DC5E4u;
label_1dc5e4:
    // 0x1dc5e4: 0x7c000b3  bltz        $fp, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1DC5E4u;
    {
        const bool branch_taken_0x1dc5e4 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DC5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC5E4u;
        // 0x1dc5e8: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc5e4) {
            ctx->pc = 0x1DC8B4u;
            goto label_1dc8b4;
        }
    }
    ctx->pc = 0x1DC5ECu;
    // 0x1dc5ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc5f0: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1dc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dc5f4: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x1dc5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x1dc5f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc5fc: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1dc5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1dc600: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1dc600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1dc604: 0x25297344  addiu       $t1, $t1, 0x7344
    ctx->pc = 0x1dc604u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29508));
    // 0x1dc608: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dc608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dc60c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1dc60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dc610: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1dc610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dc614: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1dc614u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dc618: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x1dc618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1dc61c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1dc61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1dc620: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x1dc620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x1dc624: 0x2054821  addu        $t1, $s0, $a1
    ctx->pc = 0x1dc624u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1dc628: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1dc628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1dc62c: 0xafa9005c  sw          $t1, 0x5C($sp)
    ctx->pc = 0x1dc62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 9));
    // 0x1dc630: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1dc630u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1dc634: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1dc634u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1dc638: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x1dc638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1dc63c: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1dc63cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1dc640: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1dc640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1dc644: 0xafab0058  sw          $t3, 0x58($sp)
    ctx->pc = 0x1dc644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 11));
    // 0x1dc648: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x1dc648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x1dc64c: 0x1a34821  addu        $t1, $t5, $v1
    ctx->pc = 0x1dc64cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1dc650: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1dc650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dc654: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1dc654u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1dc658: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1dc658u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1dc65c: 0xafa9002c  sw          $t1, 0x2C($sp)
    ctx->pc = 0x1dc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 9));
    // 0x1dc660: 0xafab001c  sw          $t3, 0x1C($sp)
    ctx->pc = 0x1dc660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 11));
    // 0x1dc664: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1dc664u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1dc668: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1dc668u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1dc66c: 0x1074821  addu        $t1, $t0, $a3
    ctx->pc = 0x1dc66cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1dc670: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1dc670u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1dc674: 0xafab0024  sw          $t3, 0x24($sp)
    ctx->pc = 0x1dc674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 11));
    // 0x1dc678: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x1dc678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x1dc67c: 0x2634821  addu        $t1, $s3, $v1
    ctx->pc = 0x1dc67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1dc680: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1dc680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1dc684: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1dc684u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1dc688: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1dc688u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1dc68c: 0xafab0034  sw          $t3, 0x34($sp)
    ctx->pc = 0x1dc68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 11));
    // 0x1dc690: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x1dc690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x1dc694: 0x434821  addu        $t1, $v0, $v1
    ctx->pc = 0x1dc694u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc698: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1dc698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1dc69c: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1dc69cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1dc6a0: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1dc6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1dc6a4: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x1dc6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x1dc6a8: 0xafab003c  sw          $t3, 0x3C($sp)
    ctx->pc = 0x1dc6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 11));
    // 0x1dc6ac: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1dc6acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1dc6b0: 0x2074821  addu        $t1, $s0, $a3
    ctx->pc = 0x1dc6b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1dc6b4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1dc6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1dc6b8: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x1dc6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x1dc6bc: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1dc6bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc6c0: 0xafa9000c  sw          $t1, 0xC($sp)
    ctx->pc = 0x1dc6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    // 0x1dc6c4: 0x2274821  addu        $t1, $s1, $a3
    ctx->pc = 0x1dc6c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1dc6c8: 0xafab0008  sw          $t3, 0x8($sp)
    ctx->pc = 0x1dc6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 11));
    // 0x1dc6cc: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1dc6ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dc6d0: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x1dc6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
    // 0x1dc6d4: 0x1e34821  addu        $t1, $t7, $v1
    ctx->pc = 0x1dc6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1dc6d8: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1dc6d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc6dc: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1dc6dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1dc6e0: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1dc6e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1dc6e4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1dc6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dc6e8: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x1dc6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x1dc6ec: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1dc6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1dc6f0: 0xafab0030  sw          $t3, 0x30($sp)
    ctx->pc = 0x1dc6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 11));
    // 0x1dc6f4: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1dc6f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1dc6f8: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1dc6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1dc6fc: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x1dc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x1dc700: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1dc700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1dc704: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1dc704u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc708: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x1dc708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x1dc70c: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1dc70cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1dc710: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1dc710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1dc714: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1dc714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1dc718: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x1dc718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x1dc71c: 0x2654821  addu        $t1, $s3, $a1
    ctx->pc = 0x1dc71cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1dc720: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1dc720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x1dc724: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1dc724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1dc728: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1dc728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1dc72c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1dc72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1dc730: 0x224a021  addu        $s4, $s1, $a0
    ctx->pc = 0x1dc730u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1dc734: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1dc734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1dc738: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1dc738u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1dc73c: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1dc73cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1dc740: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1dc740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1dc744: 0x2463a000  addiu       $v1, $v1, -0x6000
    ctx->pc = 0x1dc744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942720));
    // 0x1dc748: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1dc748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1dc74c: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x1dc74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x1dc750: 0xafaa004c  sw          $t2, 0x4C($sp)
    ctx->pc = 0x1dc750u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 10));
    // 0x1dc754: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1dc754u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1dc758: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dc758u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dc75c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1dc75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1dc760: 0x24a5a03c  addiu       $a1, $a1, -0x5FC4
    ctx->pc = 0x1dc760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942780));
    // 0x1dc764: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1dc764u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1dc768: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x1dc768u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x1dc76c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dc76cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc770: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dc770u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dc774: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1dc774u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1dc778: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x1dc778u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x1dc77c: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1dc77cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1dc780: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x1dc780u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x1dc784: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1dc784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1dc788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc78c: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1dc78cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dc790: 0x8fab0034  lw          $t3, 0x34($sp)
    ctx->pc = 0x1dc790u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1dc794: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dc794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dc798: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x1dc798u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x1dc79c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dc79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dc7a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc7a4: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1dc7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1dc7a8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dc7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc7ac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc7acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc7b0: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1dc7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1dc7b4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1dc7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1dc7b8: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x1dc7b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dc7bc: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc7c0: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x1dc7c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dc7c4: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1dc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1dc7c8: 0xae8a0000  sw          $t2, 0x0($s4)
    ctx->pc = 0x1dc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 10));
    // 0x1dc7cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dc7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dc7d0: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1dc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1dc7d4: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1dc7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1dc7d8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1dc7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1dc7dc: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dc7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dc7e0: 0xaecb0000  sw          $t3, 0x0($s6)
    ctx->pc = 0x1dc7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 11));
    // 0x1dc7e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1dc7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dc7e8: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x1dc7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x1dc7ec: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1dc7ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dc7f0: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dc7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dc7f4: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x1dc7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x1dc7f8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dc7fc: 0xad2b0000  sw          $t3, 0x0($t1)
    ctx->pc = 0x1dc7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 11));
    // 0x1dc800: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x1dc800u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1dc804: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1dc804u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1dc808: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1dc808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dc80c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc80cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dc810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dc814: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1dc814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1dc818: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc818u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc81c: 0xaea90000  sw          $t1, 0x0($s5)
    ctx->pc = 0x1dc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 9));
    // 0x1dc820: 0x8fab0028  lw          $t3, 0x28($sp)
    ctx->pc = 0x1dc820u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dc824: 0xad630074  sw          $v1, 0x74($t3)
    ctx->pc = 0x1dc824u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 116), GPR_U32(ctx, 3));
    // 0x1dc828: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1dc828u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1dc82c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1dc82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dc830: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc834: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x1dc834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1dc838: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x1dc838u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x1dc83c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dc83cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dc840: 0x8fab0038  lw          $t3, 0x38($sp)
    ctx->pc = 0x1dc840u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1dc844: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dc844u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dc848: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1dc848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dc84c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dc84cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dc850: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1dc850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1dc854: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1dc854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1dc858: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc858u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dc85c: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1dc85cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1dc860: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1dc860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1dc864: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x1dc864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1dc868: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1dc868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1dc86c: 0x8fab0044  lw          $t3, 0x44($sp)
    ctx->pc = 0x1dc86cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1dc870: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dc870u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dc874: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x1dc874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x1dc878: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dc878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dc87c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1dc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1dc880: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dc880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dc884: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x1dc884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dc888: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1dc888u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x1dc88c: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x1dc88cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1dc890: 0xe52000c0  swc1        $f0, 0xC0($t1)
    ctx->pc = 0x1dc890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 192), bits); }
    // 0x1dc894: 0x8fab004c  lw          $t3, 0x4C($sp)
    ctx->pc = 0x1dc894u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1dc898: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x1dc898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x1dc89c: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1dc89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1dc8a0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1dc8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1dc8a4: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x1dc8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1dc8a8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dc8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dc8ac: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1dc8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1dc8b0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dc8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_1dc8b4:
    // 0x1dc8b4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x1dc8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc8b8: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC8B8u;
    {
        const bool branch_taken_0x1dc8b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8B8u;
        // 0x1dc8bc: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc8b8) {
            ctx->pc = 0x1DC8CCu;
            goto label_1dc8cc;
        }
    }
    ctx->pc = 0x1DC8C0u;
    // 0x1dc8c0: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DC8C0u;
    SET_GPR_U32(ctx, 31, 0x1DC8C8u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DC8C0u, 0x1DC8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC8C8u;
label_1dc8c8:
    // 0x1dc8c8: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1dc8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1dc8cc:
    // 0x1dc8cc: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1dc8ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1dc8d0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1dc8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1dc8d4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1dc8d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dc8d8: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1dc8d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1dc8dc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1dc8dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1dc8e0: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1dc8e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1dc8e4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1dc8e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1dc8e8: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x1dc8e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1dc8ec: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x1dc8ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dc8f0: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x1dc8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1dc8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC8F4u;
        // 0x1dc8f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC8FCu;
}
