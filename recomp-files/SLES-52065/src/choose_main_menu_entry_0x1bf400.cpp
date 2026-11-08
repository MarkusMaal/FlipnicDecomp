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

// Function: choose_main_menu_entry
// Address: 0x1bf400 - 0x1bf594
void choose_main_menu_entry_0x1bf400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("choose_main_menu_entry_0x1bf400");
#endif

    switch (ctx->pc) {
        case 0x1bf428u: goto label_1bf428;
        case 0x1bf43cu: goto label_1bf43c;
        case 0x1bf4dcu: goto label_1bf4dc;
        case 0x1bf4e4u: goto label_1bf4e4;
        case 0x1bf4f8u: goto label_1bf4f8;
        case 0x1bf52cu: goto label_1bf52c;
        case 0x1bf540u: goto label_1bf540;
        case 0x1bf544u: goto label_1bf544;
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf56cu: goto label_1bf56c;
        case 0x1bf580u: goto label_1bf580;
        default: break;
    }

    ctx->pc = 0x1bf400u;

    // 0x1bf400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bf400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bf404: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf408: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1bf408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1bf40c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bf40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bf410: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bf414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf418: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BF418u;
    {
        const bool branch_taken_0x1bf418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF418u;
        // 0x1bf41c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf418) {
            ctx->pc = 0x1BF444u;
            goto label_1bf444;
        }
    }
    ctx->pc = 0x1BF420u;
    // 0x1bf420: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1BF420u;
    SET_GPR_U32(ctx, 31, 0x1BF428u);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1BF420u, 0x1BF428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF428u;
label_1bf428:
    // 0x1bf428: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf42c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf430: 0x24a53080  addiu       $a1, $a1, 0x3080
    ctx->pc = 0x1bf430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12416));
    // 0x1bf434: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1BF434u;
    SET_GPR_U32(ctx, 31, 0x1BF43Cu);
    ctx->pc = 0x1BF438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF434u;
    // 0x1bf438: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1BF434u, 0x1BF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF43Cu;
label_1bf43c:
    // 0x1bf43c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1BF43Cu;
    {
        const bool branch_taken_0x1bf43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF43Cu;
        // 0x1bf440: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf43c) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF444u;
label_1bf444:
    // 0x1bf444: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1bf444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1bf448: 0x8c23f4e8  lw          $v1, -0xB18($at)
    ctx->pc = 0x1bf448u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x36F4E8u));
    // 0x1bf44c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x1bf44cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1bf450: 0x1020003d  beqz        $at, . + 4 + (0x3D << 2)
    ctx->pc = 0x1BF450u;
    {
        const bool branch_taken_0x1bf450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF450u;
        // 0x1bf454: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf450) {
            ctx->pc = 0x1BF548u;
            goto label_1bf548;
        }
    }
    ctx->pc = 0x1BF458u;
    // 0x1bf458: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bf458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bf45c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bf45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1bf460: 0x24a513f0  addiu       $a1, $a1, 0x13F0
    ctx->pc = 0x1bf460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5104));
    // 0x1bf464: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1bf464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1bf468: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bf468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bf46c: 0x600008  jr          $v1
    ctx->pc = 0x1BF46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BF474u: goto label_1bf474;
            case 0x1BF480u: goto label_1bf480;
            case 0x1BF48Cu: goto label_1bf48c;
            case 0x1BF498u: goto label_1bf498;
            case 0x1BF4B4u: goto label_1bf4b4;
            case 0x1BF4C0u: goto label_1bf4c0;
            case 0x1BF504u: goto label_1bf504;
            case 0x1BF510u: goto label_1bf510;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF46Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BF474u;
label_1bf474:
    // 0x1bf474: 0x24100007  addiu       $s0, $zero, 0x7
    ctx->pc = 0x1bf474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1bf478: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1BF478u;
    {
        const bool branch_taken_0x1bf478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF478u;
        // 0x1bf47c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf478) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF480u;
label_1bf480:
    // 0x1bf480: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1bf484: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1BF484u;
    {
        const bool branch_taken_0x1bf484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF484u;
        // 0x1bf488: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf484) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF48Cu;
label_1bf48c:
    // 0x1bf48c: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x1bf48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1bf490: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1BF490u;
    {
        const bool branch_taken_0x1bf490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF490u;
        // 0x1bf494: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf490) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF498u;
label_1bf498:
    // 0x1bf498: 0x8e24004c  lw          $a0, 0x4C($s1)
    ctx->pc = 0x1bf498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1bf49c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf4a0: 0x9084006b  lbu         $a0, 0x6B($a0)
    ctx->pc = 0x1bf4a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 107)));
    // 0x1bf4a4: 0x10830036  beq         $a0, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1BF4A4u;
    {
        const bool branch_taken_0x1bf4a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1BF4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4A4u;
        // 0x1bf4a8: 0x2410000e  addiu       $s0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4a4) {
            ctx->pc = 0x1BF580u;
            goto label_1bf580;
        }
    }
    ctx->pc = 0x1BF4ACu;
    // 0x1bf4ac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1BF4ACu;
    {
        const bool branch_taken_0x1bf4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4ACu;
        // 0x1bf4b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4ac) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF4B4u;
label_1bf4b4:
    // 0x1bf4b4: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x1bf4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1bf4b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BF4B8u;
    {
        const bool branch_taken_0x1bf4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4B8u;
        // 0x1bf4bc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4b8) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF4C0u;
label_1bf4c0:
    // 0x1bf4c0: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x1bf4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1bf4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf4c8: 0x90a5006b  lbu         $a1, 0x6B($a1)
    ctx->pc = 0x1bf4c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 107)));
    // 0x1bf4cc: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1BF4CCu;
    {
        const bool branch_taken_0x1bf4cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf4cc) {
            ctx->pc = 0x1BF580u;
            goto label_1bf580;
        }
    }
    ctx->pc = 0x1BF4D4u;
    // 0x1bf4d4: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1BF4D4u;
    SET_GPR_U32(ctx, 31, 0x1BF4DCu);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1BF4D4u, 0x1BF4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4DCu;
label_1bf4dc:
    // 0x1bf4dc: 0xc073b34  jal         func_1CECD0
    ctx->pc = 0x1BF4DCu;
    SET_GPR_U32(ctx, 31, 0x1BF4E4u);
    ctx->pc = 0x1BF4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4DCu;
    // 0x1bf4e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECD0u, 0x1BF4DCu, 0x1BF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4E4u;
label_1bf4e4:
    // 0x1bf4e4: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf4e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf4ec: 0x24a53080  addiu       $a1, $a1, 0x3080
    ctx->pc = 0x1bf4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12416));
    // 0x1bf4f0: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1BF4F0u;
    SET_GPR_U32(ctx, 31, 0x1BF4F8u);
    ctx->pc = 0x1BF4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4F0u;
    // 0x1bf4f4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1BF4F0u, 0x1BF4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4F8u;
label_1bf4f8:
    // 0x1bf4f8: 0x2410001a  addiu       $s0, $zero, 0x1A
    ctx->pc = 0x1bf4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1bf4fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BF4FCu;
    {
        const bool branch_taken_0x1bf4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4FCu;
        // 0x1bf500: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf4fc) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF504u;
label_1bf504:
    // 0x1bf504: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x1bf504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1bf508: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1BF508u;
    {
        const bool branch_taken_0x1bf508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF508u;
        // 0x1bf50c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf508) {
            ctx->pc = 0x1BF544u;
            goto label_1bf544;
        }
    }
    ctx->pc = 0x1BF510u;
label_1bf510:
    // 0x1bf510: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x1bf510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x1bf514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf518: 0x90a5006b  lbu         $a1, 0x6B($a1)
    ctx->pc = 0x1bf518u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 107)));
    // 0x1bf51c: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BF51Cu;
    {
        const bool branch_taken_0x1bf51c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bf51c) {
            ctx->pc = 0x1BF580u;
            goto label_1bf580;
        }
    }
    ctx->pc = 0x1BF524u;
    // 0x1bf524: 0xc06ddb8  jal         func_1B76E0
    ctx->pc = 0x1BF524u;
    SET_GPR_U32(ctx, 31, 0x1BF52Cu);
    ctx->pc = 0x1B76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76E0u, 0x1BF524u, 0x1BF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF52Cu;
label_1bf52c:
    // 0x1bf52c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf52cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf530: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bf530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf534: 0x24a53080  addiu       $a1, $a1, 0x3080
    ctx->pc = 0x1bf534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12416));
    // 0x1bf538: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1BF538u;
    SET_GPR_U32(ctx, 31, 0x1BF540u);
    ctx->pc = 0x1BF53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF538u;
    // 0x1bf53c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1BF538u, 0x1BF540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF540u;
label_1bf540:
    // 0x1bf540: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1bf540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bf544:
    // 0x1bf544: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1bf544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bf548:
    // 0x1bf548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf54c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf54cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf550: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1BF550u;
    SET_GPR_U32(ctx, 31, 0x1BF558u);
    ctx->pc = 0x1BF554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF550u;
    // 0x1bf554: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1BF550u, 0x1BF558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF558u;
label_1bf558:
    // 0x1bf558: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf55c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf560: 0x24a534b0  addiu       $a1, $a1, 0x34B0
    ctx->pc = 0x1bf560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13488));
    // 0x1bf564: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1BF564u;
    SET_GPR_U32(ctx, 31, 0x1BF56Cu);
    ctx->pc = 0x1BF568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF564u;
    // 0x1bf568: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1BF564u, 0x1BF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF56Cu;
label_1bf56c:
    // 0x1bf56c: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1bf56cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1bf570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bf570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf574: 0x24a535c0  addiu       $a1, $a1, 0x35C0
    ctx->pc = 0x1bf574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13760));
    // 0x1bf578: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1BF578u;
    SET_GPR_U32(ctx, 31, 0x1BF580u);
    ctx->pc = 0x1BF57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF578u;
    // 0x1bf57c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1BF578u, 0x1BF580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF580u;
label_1bf580:
    // 0x1bf580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1bf580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bf584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf58c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF58Cu;
        // 0x1bf590: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF594u;
}
