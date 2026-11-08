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

// Function: FUN_001ca440
// Address: 0x1ca440 - 0x1ca540
void FUN_001ca440_0x1ca440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ca440_0x1ca440");
#endif

    switch (ctx->pc) {
        case 0x1ca478u: goto label_1ca478;
        case 0x1ca490u: goto label_1ca490;
        case 0x1ca4a0u: goto label_1ca4a0;
        case 0x1ca4b4u: goto label_1ca4b4;
        case 0x1ca4ccu: goto label_1ca4cc;
        case 0x1ca4e4u: goto label_1ca4e4;
        case 0x1ca500u: goto label_1ca500;
        case 0x1ca514u: goto label_1ca514;
        case 0x1ca528u: goto label_1ca528;
        default: break;
    }

    ctx->pc = 0x1ca440u;

    // 0x1ca440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca444: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca448: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca44c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ca450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca454: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ca458: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1ca45c: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1ca460: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA460u;
    {
        const bool branch_taken_0x1ca460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA460u;
        // 0x1ca464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca460) {
            ctx->pc = 0x1CA470u;
            goto label_1ca470;
        }
    }
    ctx->pc = 0x1CA468u;
    // 0x1ca468: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA468u;
    {
        const bool branch_taken_0x1ca468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca468) {
            ctx->pc = 0x1CA4BCu;
            goto label_1ca4bc;
        }
    }
    ctx->pc = 0x1CA470u;
label_1ca470:
    // 0x1ca470: 0xc073098  jal         func_1CC260
    ctx->pc = 0x1CA470u;
    SET_GPR_U32(ctx, 31, 0x1CA478u);
    ctx->pc = 0x1CA474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA470u;
    // 0x1ca474: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC260u, 0x1CA470u, 0x1CA478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA478u;
label_1ca478:
    // 0x1ca478: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ca478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca47c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca480: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1CA480u;
    {
        const bool branch_taken_0x1ca480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA480u;
        // 0x1ca484: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca480) {
            ctx->pc = 0x1CA4F0u;
            goto label_1ca4f0;
        }
    }
    ctx->pc = 0x1CA488u;
    // 0x1ca488: 0xc053bc4  jal         func_14EF10
    ctx->pc = 0x1CA488u;
    SET_GPR_U32(ctx, 31, 0x1CA490u);
    ctx->pc = 0x14EF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF10u, 0x1CA488u, 0x1CA490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA490u;
label_1ca490:
    // 0x1ca490: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca494: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca498: 0xc053c38  jal         func_14F0E0
    ctx->pc = 0x1CA498u;
    SET_GPR_U32(ctx, 31, 0x1CA4A0u);
    ctx->pc = 0x1CA49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA498u;
    // 0x1ca49c: 0x24a569a0  addiu       $a1, $a1, 0x69A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0E0u, 0x1CA498u, 0x1CA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4A0u;
label_1ca4a0:
    // 0x1ca4a0: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca4a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ca4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4a8: 0x24a56990  addiu       $a1, $a1, 0x6990
    ctx->pc = 0x1ca4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27024));
    // 0x1ca4ac: 0xc053bd8  jal         func_14EF60
    ctx->pc = 0x1CA4ACu;
    SET_GPR_U32(ctx, 31, 0x1CA4B4u);
    ctx->pc = 0x1CA4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4ACu;
    // 0x1ca4b0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EF60u, 0x1CA4ACu, 0x1CA4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4B4u;
label_1ca4b4:
    // 0x1ca4b4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CA4B4u;
    {
        const bool branch_taken_0x1ca4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca4b4) {
            ctx->pc = 0x1CA4ECu;
            goto label_1ca4ec;
        }
    }
    ctx->pc = 0x1CA4BCu;
label_1ca4bc:
    // 0x1ca4bc: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1ca4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ca4c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ca4c4: 0xc0730dc  jal         func_1CC370
    ctx->pc = 0x1CA4C4u;
    SET_GPR_U32(ctx, 31, 0x1CA4CCu);
    ctx->pc = 0x1CA4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4C4u;
    // 0x1ca4c8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC370u, 0x1CA4C4u, 0x1CA4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4CCu;
label_1ca4cc:
    // 0x1ca4cc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ca4d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1ca4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ca4d4: 0x90450084  lbu         $a1, 0x84($v0)
    ctx->pc = 0x1ca4d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1ca4d8: 0x9046008c  lbu         $a2, 0x8C($v0)
    ctx->pc = 0x1ca4d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1ca4dc: 0xc07154c  jal         func_1C5530
    ctx->pc = 0x1CA4DCu;
    SET_GPR_U32(ctx, 31, 0x1CA4E4u);
    ctx->pc = 0x1CA4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4DCu;
    // 0x1ca4e0: 0x9044007c  lbu         $a0, 0x7C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5530u, 0x1CA4DCu, 0x1CA4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4E4u;
label_1ca4e4:
    // 0x1ca4e4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1ca4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca4e8: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x1ca4e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ca4ec:
    // 0x1ca4ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ca4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4f0:
    // 0x1ca4f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ca4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4f8: 0xc06e028  jal         func_1B80A0
    ctx->pc = 0x1CA4F8u;
    SET_GPR_U32(ctx, 31, 0x1CA500u);
    ctx->pc = 0x1CA4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4F8u;
    // 0x1ca4fc: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B80A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B80A0u, 0x1CA4F8u, 0x1CA500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA500u;
label_1ca500:
    // 0x1ca500: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca508: 0x24a57190  addiu       $a1, $a1, 0x7190
    ctx->pc = 0x1ca508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29072));
    // 0x1ca50c: 0xc06de84  jal         func_1B7A10
    ctx->pc = 0x1CA50Cu;
    SET_GPR_U32(ctx, 31, 0x1CA514u);
    ctx->pc = 0x1CA510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA50Cu;
    // 0x1ca510: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7A10u, 0x1CA50Cu, 0x1CA514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA514u;
label_1ca514:
    // 0x1ca514: 0x3c050021  lui         $a1, 0x21
    ctx->pc = 0x1ca514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)33 << 16));
    // 0x1ca518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca51c: 0x24a57430  addiu       $a1, $a1, 0x7430
    ctx->pc = 0x1ca51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29744));
    // 0x1ca520: 0xc06de24  jal         func_1B7890
    ctx->pc = 0x1CA520u;
    SET_GPR_U32(ctx, 31, 0x1CA528u);
    ctx->pc = 0x1CA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA520u;
    // 0x1ca524: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7890u, 0x1CA520u, 0x1CA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA528u;
label_1ca528:
    // 0x1ca528: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca52c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca52cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ca534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca538: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA538u;
        // 0x1ca53c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA540u;
}
