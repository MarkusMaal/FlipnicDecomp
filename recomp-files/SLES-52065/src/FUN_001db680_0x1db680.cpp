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

// Function: FUN_001db680
// Address: 0x1db680 - 0x1dbb78
void FUN_001db680_0x1db680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001db680_0x1db680");
#endif

    switch (ctx->pc) {
        case 0x1db708u: goto label_1db708;
        case 0x1db740u: goto label_1db740;
        case 0x1db7a8u: goto label_1db7a8;
        case 0x1db818u: goto label_1db818;
        case 0x1dbb44u: goto label_1dbb44;
        default: break;
    }

    ctx->pc = 0x1db680u;

    // 0x1db680: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x1db680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
    // 0x1db684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db688: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1db688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1db68c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1db68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db690: 0xffb30218  sd          $s3, 0x218($sp)
    ctx->pc = 0x1db690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 19));
    // 0x1db694: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1db694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db698: 0xffb40220  sd          $s4, 0x220($sp)
    ctx->pc = 0x1db698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 20));
    // 0x1db69c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1db69cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6a0: 0xffb50228  sd          $s5, 0x228($sp)
    ctx->pc = 0x1db6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 21));
    // 0x1db6a4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1db6a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db6a8: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1db6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1db6ac: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1db6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1db6b0: 0xffb60230  sd          $s6, 0x230($sp)
    ctx->pc = 0x1db6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 22));
    // 0x1db6b4: 0xffb70238  sd          $s7, 0x238($sp)
    ctx->pc = 0x1db6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 23));
    // 0x1db6b8: 0xffbe0240  sd          $fp, 0x240($sp)
    ctx->pc = 0x1db6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 576), GPR_U64(ctx, 30));
    // 0x1db6bc: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DB6BCu;
    {
        const bool branch_taken_0x1db6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DB6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6BCu;
        // 0x1db6c0: 0xffbf0248  sd          $ra, 0x248($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 584), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6bc) {
            ctx->pc = 0x1DB6F8u;
            goto label_1db6f8;
        }
    }
    ctx->pc = 0x1DB6C4u;
    // 0x1db6c4: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x1db6c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1db6c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB6C8u;
    {
        const bool branch_taken_0x1db6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6c8) {
            ctx->pc = 0x1DB6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB6C8u;
            // 0x1db6cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6E0u;
            goto label_1db6e0;
        }
    }
    ctx->pc = 0x1DB6D0u;
    // 0x1db6d0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB6D0u;
    {
        const bool branch_taken_0x1db6d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6d0) {
            ctx->pc = 0x1DB6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB6D0u;
            // 0x1db6d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB6F0u;
            goto label_1db6f0;
        }
    }
    ctx->pc = 0x1DB6D8u;
    // 0x1db6d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DB6D8u;
    {
        const bool branch_taken_0x1db6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db6d8) {
            ctx->pc = 0x1DB700u;
            goto label_1db700;
        }
    }
    ctx->pc = 0x1DB6E0u;
label_1db6e0:
    // 0x1db6e0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DB6E0u;
    {
        const bool branch_taken_0x1db6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1db6e0) {
            ctx->pc = 0x1DB700u;
            goto label_1db700;
        }
    }
    ctx->pc = 0x1DB6E8u;
    // 0x1db6e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB6E8u;
    {
        const bool branch_taken_0x1db6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6E8u;
        // 0x1db6ec: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6e8) {
            ctx->pc = 0x1DB6FCu;
            goto label_1db6fc;
        }
    }
    ctx->pc = 0x1DB6F0u;
label_1db6f0:
    // 0x1db6f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB6F0u;
    {
        const bool branch_taken_0x1db6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB6F0u;
        // 0x1db6f4: 0x24100018  addiu       $s0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db6f0) {
            ctx->pc = 0x1DB700u;
            goto label_1db700;
        }
    }
    ctx->pc = 0x1DB6F8u;
label_1db6f8:
    // 0x1db6f8: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1db6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1db6fc:
    // 0x1db6fc: 0x24100030  addiu       $s0, $zero, 0x30
    ctx->pc = 0x1db6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1db700:
    // 0x1db700: 0xc07d0d8  jal         func_1F4360
    ctx->pc = 0x1DB700u;
    SET_GPR_U32(ctx, 31, 0x1DB708u);
    ctx->pc = 0x1F4360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4360u, 0x1DB700u, 0x1DB708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB708u;
label_1db708:
    // 0x1db708: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1db708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db70c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x1db70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x1db710: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1db710u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1db714: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DB714u;
    {
        const bool branch_taken_0x1db714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB714u;
        // 0x1db718: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db714) {
            ctx->pc = 0x1DB780u;
            goto label_1db780;
        }
    }
    ctx->pc = 0x1DB71Cu;
    // 0x1db71c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1db71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1db720: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1db720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db724: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1db724u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db72c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db730: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db734: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db738: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1db738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1db73c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1db73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1db740:
    // 0x1db740: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x1db740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x1db744: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1DB744u;
    {
        const bool branch_taken_0x1db744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1db744) {
            ctx->pc = 0x1DB748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB744u;
            // 0x1db748: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB774u;
            goto label_1db774;
        }
    }
    ctx->pc = 0x1DB74Cu;
    // 0x1db74c: 0x8c62fff8  lw          $v0, -0x8($v1)
    ctx->pc = 0x1db74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
    // 0x1db750: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB750u;
    {
        const bool branch_taken_0x1db750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1db750) {
            ctx->pc = 0x1DB754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB750u;
            // 0x1db754: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB774u;
            goto label_1db774;
        }
    }
    ctx->pc = 0x1DB758u;
    // 0x1db758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1db758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db75c: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB75Cu;
    {
        const bool branch_taken_0x1db75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1db75c) {
            ctx->pc = 0x1DB760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB75Cu;
            // 0x1db760: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB774u;
            goto label_1db774;
        }
    }
    ctx->pc = 0x1DB764u;
    // 0x1db764: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1db764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1db768: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1db768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1db76c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1db76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1db770: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1db770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1db774:
    // 0x1db774: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1db774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1db778: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1DB778u;
    {
        const bool branch_taken_0x1db778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB778u;
        // 0x1db77c: 0x246300e8  addiu       $v1, $v1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db778) {
            ctx->pc = 0x1DB740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db740;
        }
    }
    ctx->pc = 0x1DB780u;
label_1db780:
    // 0x1db780: 0x112000f1  beqz        $t1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x1DB780u;
    {
        const bool branch_taken_0x1db780 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB780u;
        // 0x1db784: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db780) {
            ctx->pc = 0x1DBB48u;
            goto label_1dbb48;
        }
    }
    ctx->pc = 0x1DB788u;
    // 0x1db788: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DB788u;
    {
        const bool branch_taken_0x1db788 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1DB78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB788u;
        // 0x1db78c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db788) {
            ctx->pc = 0x1DB7E4u;
            goto label_1db7e4;
        }
    }
    ctx->pc = 0x1DB790u;
    // 0x1db790: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1db790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1db794: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1db794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db798: 0x244a7334  addiu       $t2, $v0, 0x7334
    ctx->pc = 0x1db798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 29492));
    // 0x1db79c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1db79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1db7a0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1db7a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7a4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1db7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1db7a8:
    // 0x1db7a8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1db7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1db7ac: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1db7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db7b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db7b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1db7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db7b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db7bc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1db7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1db7c0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x1db7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1db7c4: 0x14750004  bne         $v1, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB7C4u;
    {
        const bool branch_taken_0x1db7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x1DB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7C4u;
        // 0x1db7c8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7c4) {
            ctx->pc = 0x1DB7D8u;
            goto label_1db7d8;
        }
    }
    ctx->pc = 0x1DB7CCu;
    // 0x1db7cc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1db7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x1db7d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1db7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1db7d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1db7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1db7d8:
    // 0x1db7d8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1db7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1db7dc: 0x54a0fff2  bnel        $a1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DB7DCu;
    {
        const bool branch_taken_0x1db7dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db7dc) {
            ctx->pc = 0x1DB7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB7DCu;
            // 0x1db7e0: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db7a8;
        }
    }
    ctx->pc = 0x1DB7E4u;
label_1db7e4:
    // 0x1db7e4: 0x5ce00003  bgtzl       $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB7E4u;
    {
        const bool branch_taken_0x1db7e4 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x1db7e4) {
            ctx->pc = 0x1DB7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB7E4u;
            // 0x1db7e8: 0x27a300c0  addiu       $v1, $sp, 0xC0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB7F4u;
            goto label_1db7f4;
        }
    }
    ctx->pc = 0x1DB7ECu;
    // 0x1db7ec: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1db7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f0: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x1db7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1db7f4:
    // 0x1db7f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db7f8: 0x18e00016  blez        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DB7F8u;
    {
        const bool branch_taken_0x1db7f8 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1DB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB7F8u;
        // 0x1db7fc: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db7f8) {
            ctx->pc = 0x1DB854u;
            goto label_1db854;
        }
    }
    ctx->pc = 0x1DB800u;
    // 0x1db800: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1db800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x1db804: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1db804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db808: 0x24497338  addiu       $t1, $v0, 0x7338
    ctx->pc = 0x1db808u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 29496));
    // 0x1db80c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1db80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db810: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1db810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1db814: 0x0  nop
    ctx->pc = 0x1db814u;
    // NOP
label_1db818:
    // 0x1db818: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1db81c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1db81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db824: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1db824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db828: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db82c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1db82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1db830: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1db830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1db834: 0x48182a  slt         $v1, $v0, $t0
    ctx->pc = 0x1db834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1db838: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB838u;
    {
        const bool branch_taken_0x1db838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB838u;
        // 0x1db83c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db838) {
            ctx->pc = 0x1DB848u;
            goto label_1db848;
        }
    }
    ctx->pc = 0x1DB840u;
    // 0x1db840: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1db840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db844: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1db844u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1db848:
    // 0x1db848: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1db848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1db84c: 0x54a0fff2  bnel        $a1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DB84Cu;
    {
        const bool branch_taken_0x1db84c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db84c) {
            ctx->pc = 0x1DB850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB84Cu;
            // 0x1db850: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db818;
        }
    }
    ctx->pc = 0x1DB854u;
label_1db854:
    // 0x1db854: 0x7c000b6  bltz        $fp, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1DB854u;
    {
        const bool branch_taken_0x1db854 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x1DB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB854u;
        // 0x1db858: 0x1e10c0  sll         $v0, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db854) {
            ctx->pc = 0x1DBB30u;
            goto label_1dbb30;
        }
    }
    ctx->pc = 0x1DB85Cu;
    // 0x1db85c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db860: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x1db860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1db864: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x1db864u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x1db868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db86c: 0x24637330  addiu       $v1, $v1, 0x7330
    ctx->pc = 0x1db86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29488));
    // 0x1db870: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x1db870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x1db874: 0x256b7344  addiu       $t3, $t3, 0x7344
    ctx->pc = 0x1db874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29508));
    // 0x1db878: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1db878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1db87c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x1db87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x1db880: 0x244a00b0  addiu       $t2, $v0, 0xB0
    ctx->pc = 0x1db880u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1db884: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x1db884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1db888: 0x14b5821  addu        $t3, $t2, $t3
    ctx->pc = 0x1db888u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1db88c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1db88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1db890: 0xafab01dc  sw          $t3, 0x1DC($sp)
    ctx->pc = 0x1db890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 11));
    // 0x1db894: 0x445821  addu        $t3, $v0, $a0
    ctx->pc = 0x1db894u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db898: 0xafab01e0  sw          $t3, 0x1E0($sp)
    ctx->pc = 0x1db898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 11));
    // 0x1db89c: 0x2055821  addu        $t3, $s0, $a1
    ctx->pc = 0x1db89cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1db8a0: 0x244c0040  addiu       $t4, $v0, 0x40
    ctx->pc = 0x1db8a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1db8a4: 0xafab01e4  sw          $t3, 0x1E4($sp)
    ctx->pc = 0x1db8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 11));
    // 0x1db8a8: 0x24510030  addiu       $s1, $v0, 0x30
    ctx->pc = 0x1db8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1db8ac: 0x1845821  addu        $t3, $t4, $a0
    ctx->pc = 0x1db8acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1db8b0: 0xafab01a0  sw          $t3, 0x1A0($sp)
    ctx->pc = 0x1db8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 11));
    // 0x1db8b4: 0x2235821  addu        $t3, $s1, $v1
    ctx->pc = 0x1db8b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1db8b8: 0x244f0050  addiu       $t7, $v0, 0x50
    ctx->pc = 0x1db8b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x1db8bc: 0xafab01a8  sw          $t3, 0x1A8($sp)
    ctx->pc = 0x1db8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 11));
    // 0x1db8c0: 0x244d0080  addiu       $t5, $v0, 0x80
    ctx->pc = 0x1db8c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1db8c4: 0x1e45821  addu        $t3, $t7, $a0
    ctx->pc = 0x1db8c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 4)));
    // 0x1db8c8: 0xafab01ac  sw          $t3, 0x1AC($sp)
    ctx->pc = 0x1db8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 11));
    // 0x1db8cc: 0x1a35821  addu        $t3, $t5, $v1
    ctx->pc = 0x1db8ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1db8d0: 0x244e00a0  addiu       $t6, $v0, 0xA0
    ctx->pc = 0x1db8d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1db8d4: 0x24670008  addiu       $a3, $v1, 0x8
    ctx->pc = 0x1db8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1db8d8: 0xafab01b4  sw          $t3, 0x1B4($sp)
    ctx->pc = 0x1db8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 11));
    // 0x1db8dc: 0x1c45821  addu        $t3, $t6, $a0
    ctx->pc = 0x1db8dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 4)));
    // 0x1db8e0: 0x24480090  addiu       $t0, $v0, 0x90
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1db8e4: 0xafab01bc  sw          $t3, 0x1BC($sp)
    ctx->pc = 0x1db8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 11));
    // 0x1db8e8: 0x24550060  addiu       $s5, $v0, 0x60
    ctx->pc = 0x1db8e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1db8ec: 0x1075821  addu        $t3, $t0, $a3
    ctx->pc = 0x1db8ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1db8f0: 0xafab01c0  sw          $t3, 0x1C0($sp)
    ctx->pc = 0x1db8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 11));
    // 0x1db8f4: 0x2a45821  addu        $t3, $s5, $a0
    ctx->pc = 0x1db8f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1db8f8: 0x24530070  addiu       $s3, $v0, 0x70
    ctx->pc = 0x1db8f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1db8fc: 0xafab01c4  sw          $t3, 0x1C4($sp)
    ctx->pc = 0x1db8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 11));
    // 0x1db900: 0x245200d0  addiu       $s2, $v0, 0xD0
    ctx->pc = 0x1db900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x1db904: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x1db904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1db908: 0x2635821  addu        $t3, $s3, $v1
    ctx->pc = 0x1db908u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1db90c: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x1db90cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db910: 0xafab01c8  sw          $t3, 0x1C8($sp)
    ctx->pc = 0x1db910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 11));
    // 0x1db914: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x1db914u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1db918: 0xafab01d0  sw          $t3, 0x1D0($sp)
    ctx->pc = 0x1db918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 11));
    // 0x1db91c: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x1db91cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db920: 0xafab0184  sw          $t3, 0x184($sp)
    ctx->pc = 0x1db920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 11));
    // 0x1db924: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x1db924u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db928: 0xafab0188  sw          $t3, 0x188($sp)
    ctx->pc = 0x1db928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 11));
    // 0x1db92c: 0x2075821  addu        $t3, $s0, $a3
    ctx->pc = 0x1db92cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1db930: 0xafab018c  sw          $t3, 0x18C($sp)
    ctx->pc = 0x1db930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 11));
    // 0x1db934: 0x1045821  addu        $t3, $t0, $a0
    ctx->pc = 0x1db934u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1db938: 0xafab01b8  sw          $t3, 0x1B8($sp)
    ctx->pc = 0x1db938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 11));
    // 0x1db93c: 0x2275821  addu        $t3, $s1, $a3
    ctx->pc = 0x1db93cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x1db940: 0xafab0190  sw          $t3, 0x190($sp)
    ctx->pc = 0x1db940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 11));
    // 0x1db944: 0x2245821  addu        $t3, $s1, $a0
    ctx->pc = 0x1db944u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1db948: 0xafab0194  sw          $t3, 0x194($sp)
    ctx->pc = 0x1db948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 11));
    // 0x1db94c: 0x1855821  addu        $t3, $t4, $a1
    ctx->pc = 0x1db94cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x1db950: 0xafab0198  sw          $t3, 0x198($sp)
    ctx->pc = 0x1db950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 11));
    // 0x1db954: 0x1e35821  addu        $t3, $t7, $v1
    ctx->pc = 0x1db954u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1db958: 0x183c021  addu        $t8, $t4, $v1
    ctx->pc = 0x1db958u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1db95c: 0x1876021  addu        $t4, $t4, $a3
    ctx->pc = 0x1db95cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x1db960: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x1db960u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1db964: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1db964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db968: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x1db968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
    // 0x1db96c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1db96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x1db970: 0xafab019c  sw          $t3, 0x19C($sp)
    ctx->pc = 0x1db970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 11));
    // 0x1db974: 0x2655821  addu        $t3, $s3, $a1
    ctx->pc = 0x1db974u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x1db978: 0x47c821  addu        $t9, $v0, $a3
    ctx->pc = 0x1db978u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1db97c: 0xafab01a4  sw          $t3, 0x1A4($sp)
    ctx->pc = 0x1db97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 11));
    // 0x1db980: 0x24637344  addiu       $v1, $v1, 0x7344
    ctx->pc = 0x1db980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29508));
    // 0x1db984: 0x320582d  daddu       $t3, $t9, $zero
    ctx->pc = 0x1db984u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db988: 0xafab01b0  sw          $t3, 0x1B0($sp)
    ctx->pc = 0x1db988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 11));
    // 0x1db98c: 0x1055821  addu        $t3, $t0, $a1
    ctx->pc = 0x1db98cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1db990: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x1db990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1db994: 0x2451821  addu        $v1, $s2, $a1
    ctx->pc = 0x1db994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1db998: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1db998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
    // 0x1db99c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1db99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1db9a0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1db9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db9a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1db9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1db9a8: 0x1e5b021  addu        $s6, $t7, $a1
    ctx->pc = 0x1db9a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x1db9ac: 0x1e77821  addu        $t7, $t7, $a3
    ctx->pc = 0x1db9acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 7)));
    // 0x1db9b0: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1db9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1db9b4: 0x8fa501f0  lw          $a1, 0x1F0($sp)
    ctx->pc = 0x1db9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1db9b8: 0x3c090022  lui         $t1, 0x22
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)34 << 16));
    // 0x1db9bc: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1db9bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1db9c0: 0x2529a000  addiu       $t1, $t1, -0x6000
    ctx->pc = 0x1db9c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942720));
    // 0x1db9c4: 0x2463a03c  addiu       $v1, $v1, -0x5FC4
    ctx->pc = 0x1db9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942780));
    // 0x1db9c8: 0x1a46821  addu        $t5, $t5, $a0
    ctx->pc = 0x1db9c8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1db9cc: 0x1c77021  addu        $t6, $t6, $a3
    ctx->pc = 0x1db9ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1db9d0: 0xafaa01d4  sw          $t2, 0x1D4($sp)
    ctx->pc = 0x1db9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 10));
    // 0x1db9d4: 0x240a007f  addiu       $t2, $zero, 0x7F
    ctx->pc = 0x1db9d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1db9d8: 0xafa601d8  sw          $a2, 0x1D8($sp)
    ctx->pc = 0x1db9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 6));
    // 0x1db9dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db9e0: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x1db9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
    // 0x1db9e4: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1db9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1db9e8: 0xada90000  sw          $t1, 0x0($t5)
    ctx->pc = 0x1db9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
    // 0x1db9ec: 0x24140040  addiu       $s4, $zero, 0x40
    ctx->pc = 0x1db9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1db9f0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1db9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x1db9f4: 0x2679821  addu        $s3, $s3, $a3
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x1db9f8: 0xadc90000  sw          $t1, 0x0($t6)
    ctx->pc = 0x1db9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 9));
    // 0x1db9fc: 0x2473821  addu        $a3, $s2, $a3
    ctx->pc = 0x1db9fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x1dba00: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x1dba00u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x1dba04: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1dba04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dba08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dba08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dba0c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1dba0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dba10: 0x8fa501bc  lw          $a1, 0x1BC($sp)
    ctx->pc = 0x1dba10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x1dba14: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1dba14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1dba18: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dba18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dba1c: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dba20: 0xaf200000  sw          $zero, 0x0($t9)
    ctx->pc = 0x1dba20u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 0));
    // 0x1dba24: 0x8fa30188  lw          $v1, 0x188($sp)
    ctx->pc = 0x1dba24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dba28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dba28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dba2c: 0xaee00020  sw          $zero, 0x20($s7)
    ctx->pc = 0x1dba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 0));
    // 0x1dba30: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x1dba30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x1dba34: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dba38: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dba38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dba3c: 0xaf0a0000  sw          $t2, 0x0($t8)
    ctx->pc = 0x1dba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 10));
    // 0x1dba40: 0x8fab0194  lw          $t3, 0x194($sp)
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x1dba44: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1dba44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1dba48: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x1dba48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1dba4c: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x1dba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x1dba50: 0xad8a0000  sw          $t2, 0x0($t4)
    ctx->pc = 0x1dba50u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    // 0x1dba54: 0x8fa50198  lw          $a1, 0x198($sp)
    ctx->pc = 0x1dba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x1dba58: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x1dba58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x1dba5c: 0xaed40000  sw          $s4, 0x0($s6)
    ctx->pc = 0x1dba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 20));
    // 0x1dba60: 0x8fab019c  lw          $t3, 0x19C($sp)
    ctx->pc = 0x1dba60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x1dba64: 0xad740000  sw          $s4, 0x0($t3)
    ctx->pc = 0x1dba64u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 20));
    // 0x1dba68: 0x240b1000  addiu       $t3, $zero, 0x1000
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1dba6c: 0xade60000  sw          $a2, 0x0($t7)
    ctx->pc = 0x1dba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 6));
    // 0x1dba70: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1dba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1dba74: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dba74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dba78: 0x8fa501a4  lw          $a1, 0x1A4($sp)
    ctx->pc = 0x1dba78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x1dba7c: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x1dba7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x1dba80: 0xae2b0000  sw          $t3, 0x0($s1)
    ctx->pc = 0x1dba80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 11));
    // 0x1dba84: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1dba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1dba88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dba88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dba8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dba90: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x1dba90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
    // 0x1dba94: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dba94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dba98: 0xaeb40000  sw          $s4, 0x0($s5)
    ctx->pc = 0x1dba98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    // 0x1dba9c: 0x8fab01b0  lw          $t3, 0x1B0($sp)
    ctx->pc = 0x1dba9cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1dbaa0: 0xad630074  sw          $v1, 0x74($t3)
    ctx->pc = 0x1dbaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 116), GPR_U32(ctx, 3));
    // 0x1dbaa4: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1dbaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1dbaa8: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1dbaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1dbaac: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbaacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbab0: 0x8fab01b4  lw          $t3, 0x1B4($sp)
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1dbab4: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbab4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbab8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1dbab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1dbabc: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1dbabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1dbac0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1dbac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1dbac4: 0x8fa501c8  lw          $a1, 0x1C8($sp)
    ctx->pc = 0x1dbac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1dbac8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x1dbac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x1dbacc: 0x8fab01c4  lw          $t3, 0x1C4($sp)
    ctx->pc = 0x1dbaccu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
    // 0x1dbad0: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x1dbad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x1dbad4: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dbad4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dbad8: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1dbad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
    // 0x1dbadc: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x1dbadcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x1dbae0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1dbae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1dbae4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dbae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dbae8: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x1dbae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
    // 0x1dbaec: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1dbaf0: 0x8fa501dc  lw          $a1, 0x1DC($sp)
    ctx->pc = 0x1dbaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x1dbaf4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dbaf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dbaf8: 0x8fab0184  lw          $t3, 0x184($sp)
    ctx->pc = 0x1dbaf8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
    // 0x1dbafc: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x1dbafcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x1dbb00: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1dbb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1dbb04: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1dbb04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1dbb08: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1dbb0c: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x1dbb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x1dbb10: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x1dbb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
    // 0x1dbb14: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1dbb14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1dbb18: 0x8fab018c  lw          $t3, 0x18C($sp)
    ctx->pc = 0x1dbb18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1dbb1c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x1dbb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x1dbb20: 0x8fa201e4  lw          $v0, 0x1E4($sp)
    ctx->pc = 0x1dbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 484)));
    // 0x1dbb24: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1dbb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1dbb28: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x1dbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1dbb2c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1dbb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_1dbb30:
    // 0x1dbb30: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x1dbb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1dbb34: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBB34u;
    {
        const bool branch_taken_0x1dbb34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB34u;
        // 0x1dbb38: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb34) {
            ctx->pc = 0x1DBB48u;
            goto label_1dbb48;
        }
    }
    ctx->pc = 0x1DBB3Cu;
    // 0x1dbb3c: 0xc07d0ea  jal         func_1F43A8
    ctx->pc = 0x1DBB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB44u);
    ctx->pc = 0x1F43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F43A8u, 0x1DBB3Cu, 0x1DBB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB44u;
label_1dbb44:
    // 0x1dbb44: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1dbb44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1dbb48:
    // 0x1dbb48: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1dbb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1dbb4c: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1dbb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1dbb50: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1dbb50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1dbb54: 0xdfb30218  ld          $s3, 0x218($sp)
    ctx->pc = 0x1dbb54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1dbb58: 0xdfb40220  ld          $s4, 0x220($sp)
    ctx->pc = 0x1dbb58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1dbb5c: 0xdfb50228  ld          $s5, 0x228($sp)
    ctx->pc = 0x1dbb5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1dbb60: 0xdfb60230  ld          $s6, 0x230($sp)
    ctx->pc = 0x1dbb60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1dbb64: 0xdfb70238  ld          $s7, 0x238($sp)
    ctx->pc = 0x1dbb64u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1dbb68: 0xdfbe0240  ld          $fp, 0x240($sp)
    ctx->pc = 0x1dbb68u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1dbb6c: 0xdfbf0248  ld          $ra, 0x248($sp)
    ctx->pc = 0x1dbb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x1dbb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB70u;
        // 0x1dbb74: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBB78u;
}
