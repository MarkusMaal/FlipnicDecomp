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

// Function: FUN_0017e4b0
// Address: 0x17e4b0 - 0x17e5d0
void FUN_0017e4b0_0x17e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017e4b0_0x17e4b0");
#endif

    switch (ctx->pc) {
        case 0x17e4b0u: goto label_17e4b0;
        case 0x17e4b4u: goto label_17e4b4;
        case 0x17e4b8u: goto label_17e4b8;
        case 0x17e4bcu: goto label_17e4bc;
        case 0x17e4c0u: goto label_17e4c0;
        case 0x17e4c4u: goto label_17e4c4;
        case 0x17e4c8u: goto label_17e4c8;
        case 0x17e4ccu: goto label_17e4cc;
        case 0x17e4d0u: goto label_17e4d0;
        case 0x17e4d4u: goto label_17e4d4;
        case 0x17e4d8u: goto label_17e4d8;
        case 0x17e4dcu: goto label_17e4dc;
        case 0x17e4e0u: goto label_17e4e0;
        case 0x17e4e4u: goto label_17e4e4;
        case 0x17e4e8u: goto label_17e4e8;
        case 0x17e4ecu: goto label_17e4ec;
        case 0x17e4f0u: goto label_17e4f0;
        case 0x17e4f4u: goto label_17e4f4;
        case 0x17e4f8u: goto label_17e4f8;
        case 0x17e4fcu: goto label_17e4fc;
        case 0x17e500u: goto label_17e500;
        case 0x17e504u: goto label_17e504;
        case 0x17e508u: goto label_17e508;
        case 0x17e50cu: goto label_17e50c;
        case 0x17e510u: goto label_17e510;
        case 0x17e514u: goto label_17e514;
        case 0x17e518u: goto label_17e518;
        case 0x17e51cu: goto label_17e51c;
        case 0x17e520u: goto label_17e520;
        case 0x17e524u: goto label_17e524;
        case 0x17e528u: goto label_17e528;
        case 0x17e52cu: goto label_17e52c;
        case 0x17e530u: goto label_17e530;
        case 0x17e534u: goto label_17e534;
        case 0x17e538u: goto label_17e538;
        case 0x17e53cu: goto label_17e53c;
        case 0x17e540u: goto label_17e540;
        case 0x17e544u: goto label_17e544;
        case 0x17e548u: goto label_17e548;
        case 0x17e54cu: goto label_17e54c;
        case 0x17e550u: goto label_17e550;
        case 0x17e554u: goto label_17e554;
        case 0x17e558u: goto label_17e558;
        case 0x17e55cu: goto label_17e55c;
        case 0x17e560u: goto label_17e560;
        case 0x17e564u: goto label_17e564;
        case 0x17e568u: goto label_17e568;
        case 0x17e56cu: goto label_17e56c;
        case 0x17e570u: goto label_17e570;
        case 0x17e574u: goto label_17e574;
        case 0x17e578u: goto label_17e578;
        case 0x17e57cu: goto label_17e57c;
        case 0x17e580u: goto label_17e580;
        case 0x17e584u: goto label_17e584;
        case 0x17e588u: goto label_17e588;
        case 0x17e58cu: goto label_17e58c;
        case 0x17e590u: goto label_17e590;
        case 0x17e594u: goto label_17e594;
        case 0x17e598u: goto label_17e598;
        case 0x17e59cu: goto label_17e59c;
        case 0x17e5a0u: goto label_17e5a0;
        case 0x17e5a4u: goto label_17e5a4;
        case 0x17e5a8u: goto label_17e5a8;
        case 0x17e5acu: goto label_17e5ac;
        case 0x17e5b0u: goto label_17e5b0;
        case 0x17e5b4u: goto label_17e5b4;
        case 0x17e5b8u: goto label_17e5b8;
        case 0x17e5bcu: goto label_17e5bc;
        case 0x17e5c0u: goto label_17e5c0;
        case 0x17e5c4u: goto label_17e5c4;
        case 0x17e5c8u: goto label_17e5c8;
        case 0x17e5ccu: goto label_17e5cc;
        default: break;
    }

    ctx->pc = 0x17e4b0u;

label_17e4b0:
    // 0x17e4b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17e4b4:
    // 0x17e4b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17e4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17e4b8:
    // 0x17e4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17e4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_17e4bc:
    // 0x17e4bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17e4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_17e4c0:
    // 0x17e4c0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17e4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e4c4:
    // 0x17e4c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x17e4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17e4c8:
    // 0x17e4c8: 0x8c861020  lw          $a2, 0x1020($a0)
    ctx->pc = 0x17e4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4128)));
label_17e4cc:
    // 0x17e4cc: 0x8c871024  lw          $a3, 0x1024($a0)
    ctx->pc = 0x17e4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4132)));
label_17e4d0:
    // 0x17e4d0: 0xc05fb00  jal         func_17EC00
label_17e4d4:
    if (ctx->pc == 0x17E4D4u) {
        ctx->pc = 0x17E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4D0u;
        // 0x17e4d4: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E4D8u;
        goto label_17e4d8;
    }
    ctx->pc = 0x17E4D0u;
    SET_GPR_U32(ctx, 31, 0x17E4D8u);
    ctx->pc = 0x17E4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E4D0u;
    // 0x17e4d4: 0x8c85101c  lw          $a1, 0x101C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EC00u, 0x17E4D0u, 0x17E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E4D8u;
label_17e4d8:
    // 0x17e4d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_17e4dc:
    if (ctx->pc == 0x17E4DCu) {
        ctx->pc = 0x17E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4D8u;
        // 0x17e4dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E4E0u;
        goto label_17e4e0;
    }
    ctx->pc = 0x17E4D8u;
    {
        const bool branch_taken_0x17e4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4D8u;
        // 0x17e4dc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4d8) {
            ctx->pc = 0x17E4E8u;
            goto label_17e4e8;
        }
    }
    ctx->pc = 0x17E4E0u;
label_17e4e0:
    // 0x17e4e0: 0x10000036  b           . + 4 + (0x36 << 2)
label_17e4e4:
    if (ctx->pc == 0x17E4E4u) {
        ctx->pc = 0x17E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4E0u;
        // 0x17e4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E4E8u;
        goto label_17e4e8;
    }
    ctx->pc = 0x17E4E0u;
    {
        const bool branch_taken_0x17e4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E4E0u;
        // 0x17e4e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e4e0) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E4E8u;
label_17e4e8:
    // 0x17e4e8: 0x1223001a  beq         $s1, $v1, . + 4 + (0x1A << 2)
label_17e4ec:
    if (ctx->pc == 0x17E4ECu) {
        ctx->pc = 0x17E4F0u;
        goto label_17e4f0;
    }
    ctx->pc = 0x17E4E8u;
    {
        const bool branch_taken_0x17e4e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e4e8) {
            ctx->pc = 0x17E554u;
            goto label_17e554;
        }
    }
    ctx->pc = 0x17E4F0u;
label_17e4f0:
    // 0x17e4f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e4f4:
    // 0x17e4f4: 0x1223000e  beq         $s1, $v1, . + 4 + (0xE << 2)
label_17e4f8:
    if (ctx->pc == 0x17E4F8u) {
        ctx->pc = 0x17E4FCu;
        goto label_17e4fc;
    }
    ctx->pc = 0x17E4F4u;
    {
        const bool branch_taken_0x17e4f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x17e4f4) {
            ctx->pc = 0x17E530u;
            goto label_17e530;
        }
    }
    ctx->pc = 0x17E4FCu;
label_17e4fc:
    // 0x17e4fc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_17e500:
    if (ctx->pc == 0x17E500u) {
        ctx->pc = 0x17E504u;
        goto label_17e504;
    }
    ctx->pc = 0x17E4FCu;
    {
        const bool branch_taken_0x17e4fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e4fc) {
            ctx->pc = 0x17E50Cu;
            goto label_17e50c;
        }
    }
    ctx->pc = 0x17E504u;
label_17e504:
    // 0x17e504: 0x1000002d  b           . + 4 + (0x2D << 2)
label_17e508:
    if (ctx->pc == 0x17E508u) {
        ctx->pc = 0x17E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E504u;
        // 0x17e508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E50Cu;
        goto label_17e50c;
    }
    ctx->pc = 0x17E504u;
    {
        const bool branch_taken_0x17e504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E504u;
        // 0x17e508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e504) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E50Cu;
label_17e50c:
    // 0x17e50c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e510:
    // 0x17e510: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e514:
    if (ctx->pc == 0x17E514u) {
        ctx->pc = 0x17E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E510u;
        // 0x17e514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E518u;
        goto label_17e518;
    }
    ctx->pc = 0x17E510u;
    {
        const bool branch_taken_0x17e510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E510u;
        // 0x17e514: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e510) {
            ctx->pc = 0x17E520u;
            goto label_17e520;
        }
    }
    ctx->pc = 0x17E518u;
label_17e518:
    // 0x17e518: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e51c:
    if (ctx->pc == 0x17E51Cu) {
        ctx->pc = 0x17E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E518u;
        // 0x17e51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E520u;
        goto label_17e520;
    }
    ctx->pc = 0x17E518u;
    {
        const bool branch_taken_0x17e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E518u;
        // 0x17e51c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e518) {
            ctx->pc = 0x17E528u;
            goto label_17e528;
        }
    }
    ctx->pc = 0x17E520u;
label_17e520:
    // 0x17e520: 0xc05f538  jal         func_17D4E0
label_17e524:
    if (ctx->pc == 0x17E524u) {
        ctx->pc = 0x17E528u;
        goto label_17e528;
    }
    ctx->pc = 0x17E520u;
    SET_GPR_U32(ctx, 31, 0x17E528u);
    ctx->pc = 0x17D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4E0u, 0x17E520u, 0x17E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E528u;
label_17e528:
    // 0x17e528: 0x10000025  b           . + 4 + (0x25 << 2)
label_17e52c:
    if (ctx->pc == 0x17E52Cu) {
        ctx->pc = 0x17E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E528u;
        // 0x17e52c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E530u;
        goto label_17e530;
    }
    ctx->pc = 0x17E528u;
    {
        const bool branch_taken_0x17e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E528u;
        // 0x17e52c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e528) {
            ctx->pc = 0x17E5C0u;
            goto label_17e5c0;
        }
    }
    ctx->pc = 0x17E530u;
label_17e530:
    // 0x17e530: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17e534:
    // 0x17e534: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e538:
    if (ctx->pc == 0x17E538u) {
        ctx->pc = 0x17E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E534u;
        // 0x17e538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E53Cu;
        goto label_17e53c;
    }
    ctx->pc = 0x17E534u;
    {
        const bool branch_taken_0x17e534 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E534u;
        // 0x17e538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e534) {
            ctx->pc = 0x17E544u;
            goto label_17e544;
        }
    }
    ctx->pc = 0x17E53Cu;
label_17e53c:
    // 0x17e53c: 0x10000003  b           . + 4 + (0x3 << 2)
label_17e540:
    if (ctx->pc == 0x17E540u) {
        ctx->pc = 0x17E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E53Cu;
        // 0x17e540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E544u;
        goto label_17e544;
    }
    ctx->pc = 0x17E53Cu;
    {
        const bool branch_taken_0x17e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E53Cu;
        // 0x17e540: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e53c) {
            ctx->pc = 0x17E54Cu;
            goto label_17e54c;
        }
    }
    ctx->pc = 0x17E544u;
label_17e544:
    // 0x17e544: 0xc05f550  jal         func_17D540
label_17e548:
    if (ctx->pc == 0x17E548u) {
        ctx->pc = 0x17E54Cu;
        goto label_17e54c;
    }
    ctx->pc = 0x17E544u;
    SET_GPR_U32(ctx, 31, 0x17E54Cu);
    ctx->pc = 0x17D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D540u, 0x17E544u, 0x17E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E54Cu;
label_17e54c:
    // 0x17e54c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_17e550:
    if (ctx->pc == 0x17E550u) {
        ctx->pc = 0x17E554u;
        goto label_17e554;
    }
    ctx->pc = 0x17E54Cu;
    {
        const bool branch_taken_0x17e54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e54c) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E554u;
label_17e554:
    // 0x17e554: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17e558:
    // 0x17e558: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_17e55c:
    if (ctx->pc == 0x17E55Cu) {
        ctx->pc = 0x17E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E558u;
        // 0x17e55c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E560u;
        goto label_17e560;
    }
    ctx->pc = 0x17E558u;
    {
        const bool branch_taken_0x17e558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E558u;
        // 0x17e55c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e558) {
            ctx->pc = 0x17E568u;
            goto label_17e568;
        }
    }
    ctx->pc = 0x17E560u;
label_17e560:
    // 0x17e560: 0x10000016  b           . + 4 + (0x16 << 2)
label_17e564:
    if (ctx->pc == 0x17E564u) {
        ctx->pc = 0x17E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E560u;
        // 0x17e564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E568u;
        goto label_17e568;
    }
    ctx->pc = 0x17E560u;
    {
        const bool branch_taken_0x17e560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E560u;
        // 0x17e564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e560) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E568u;
label_17e568:
    // 0x17e568: 0xc051198  jal         func_144660
label_17e56c:
    if (ctx->pc == 0x17E56Cu) {
        ctx->pc = 0x17E570u;
        goto label_17e570;
    }
    ctx->pc = 0x17E568u;
    SET_GPR_U32(ctx, 31, 0x17E570u);
    ctx->pc = 0x144660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144660u, 0x17E568u, 0x17E570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E570u;
label_17e570:
    // 0x17e570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17e570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e574:
    // 0x17e574: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_17e578:
    if (ctx->pc == 0x17E578u) {
        ctx->pc = 0x17E57Cu;
        goto label_17e57c;
    }
    ctx->pc = 0x17E574u;
    {
        const bool branch_taken_0x17e574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e574) {
            ctx->pc = 0x17E584u;
            goto label_17e584;
        }
    }
    ctx->pc = 0x17E57Cu;
label_17e57c:
    // 0x17e57c: 0x1000000f  b           . + 4 + (0xF << 2)
label_17e580:
    if (ctx->pc == 0x17E580u) {
        ctx->pc = 0x17E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E57Cu;
        // 0x17e580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E584u;
        goto label_17e584;
    }
    ctx->pc = 0x17E57Cu;
    {
        const bool branch_taken_0x17e57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E57Cu;
        // 0x17e580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e57c) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E584u;
label_17e584:
    // 0x17e584: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e588:
    // 0x17e588: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x17e588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_17e58c:
    // 0x17e58c: 0x320f809  jalr        $t9
label_17e590:
    if (ctx->pc == 0x17E590u) {
        ctx->pc = 0x17E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E58Cu;
        // 0x17e590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E594u;
        goto label_17e594;
    }
    ctx->pc = 0x17E58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E594u);
        ctx->pc = 0x17E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E58Cu;
        // 0x17e590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E58Cu, 0x17E594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E594u;
label_17e594:
    // 0x17e594: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_17e598:
    if (ctx->pc == 0x17E598u) {
        ctx->pc = 0x17E59Cu;
        goto label_17e59c;
    }
    ctx->pc = 0x17E594u;
    {
        const bool branch_taken_0x17e594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e594) {
            ctx->pc = 0x17E5B8u;
            goto label_17e5b8;
        }
    }
    ctx->pc = 0x17E59Cu;
label_17e59c:
    // 0x17e59c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x17e59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17e5a0:
    // 0x17e5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e5a4:
    // 0x17e5a4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x17e5a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_17e5a8:
    // 0x17e5a8: 0x320f809  jalr        $t9
label_17e5ac:
    if (ctx->pc == 0x17E5ACu) {
        ctx->pc = 0x17E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5A8u;
        // 0x17e5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5B0u;
        goto label_17e5b0;
    }
    ctx->pc = 0x17E5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E5B0u);
        ctx->pc = 0x17E5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5A8u;
        // 0x17e5ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E5A8u, 0x17E5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E5B0u;
label_17e5b0:
    // 0x17e5b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_17e5b4:
    if (ctx->pc == 0x17E5B4u) {
        ctx->pc = 0x17E5B8u;
        goto label_17e5b8;
    }
    ctx->pc = 0x17E5B0u;
    {
        const bool branch_taken_0x17e5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e5b0) {
            ctx->pc = 0x17E5BCu;
            goto label_17e5bc;
        }
    }
    ctx->pc = 0x17E5B8u;
label_17e5b8:
    // 0x17e5b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e5bc:
    // 0x17e5bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17e5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17e5c0:
    // 0x17e5c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17e5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_17e5c4:
    // 0x17e5c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17e5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17e5c8:
    // 0x17e5c8: 0x3e00008  jr          $ra
label_17e5cc:
    if (ctx->pc == 0x17E5CCu) {
        ctx->pc = 0x17E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5C8u;
        // 0x17e5cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E5D0u;
        goto label_fallthrough_0x17e5c8;
    }
    ctx->pc = 0x17E5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E5C8u;
        // 0x17e5cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e5c8:
    ctx->pc = 0x17E5D0u;
}
