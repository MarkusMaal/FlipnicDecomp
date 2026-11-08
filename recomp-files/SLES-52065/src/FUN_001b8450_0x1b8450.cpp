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

// Function: FUN_001b8450
// Address: 0x1b8450 - 0x1b86e4
void FUN_001b8450_0x1b8450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b8450_0x1b8450");
#endif

    switch (ctx->pc) {
        case 0x1b8484u: goto label_1b8484;
        case 0x1b8498u: goto label_1b8498;
        case 0x1b84a8u: goto label_1b84a8;
        case 0x1b84b4u: goto label_1b84b4;
        case 0x1b84c0u: goto label_1b84c0;
        case 0x1b84c8u: goto label_1b84c8;
        case 0x1b84d0u: goto label_1b84d0;
        case 0x1b84fcu: goto label_1b84fc;
        case 0x1b8510u: goto label_1b8510;
        case 0x1b852cu: goto label_1b852c;
        case 0x1b8538u: goto label_1b8538;
        case 0x1b8540u: goto label_1b8540;
        case 0x1b8548u: goto label_1b8548;
        case 0x1b855cu: goto label_1b855c;
        case 0x1b8574u: goto label_1b8574;
        case 0x1b8580u: goto label_1b8580;
        case 0x1b8594u: goto label_1b8594;
        case 0x1b85b4u: goto label_1b85b4;
        case 0x1b85d4u: goto label_1b85d4;
        case 0x1b85f4u: goto label_1b85f4;
        case 0x1b8610u: goto label_1b8610;
        case 0x1b861cu: goto label_1b861c;
        case 0x1b8630u: goto label_1b8630;
        case 0x1b863cu: goto label_1b863c;
        case 0x1b864cu: goto label_1b864c;
        case 0x1b865cu: goto label_1b865c;
        case 0x1b8674u: goto label_1b8674;
        case 0x1b8680u: goto label_1b8680;
        case 0x1b86a0u: goto label_1b86a0;
        default: break;
    }

    ctx->pc = 0x1b8450u;

    // 0x1b8450: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1b8450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1b8454: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b8454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b8458: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b8458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b845c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b845cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b8460: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1b8460u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8464: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b8464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b8468: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1b8468u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b846c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b846cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b8470: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b8470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b8474: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b8474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b8478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b847c: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1B847Cu;
    SET_GPR_U32(ctx, 31, 0x1B8484u);
    ctx->pc = 0x1B8480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B847Cu;
    // 0x1b8480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1B847Cu, 0x1B8484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8484u;
label_1b8484:
    // 0x1b8484: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b8484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b8488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1b8488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b848c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1b848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8490: 0xc080702  jal         func_201C08
    ctx->pc = 0x1B8490u;
    SET_GPR_U32(ctx, 31, 0x1B8498u);
    ctx->pc = 0x1B8494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8490u;
    // 0x1b8494: 0x24a51008  addiu       $a1, $a1, 0x1008 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x1B8490u, 0x1B8498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8498u;
label_1b8498:
    // 0x1b8498: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1b8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1b849c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1b849cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b84a0: 0xc080664  jal         func_201990
    ctx->pc = 0x1B84A0u;
    SET_GPR_U32(ctx, 31, 0x1B84A8u);
    ctx->pc = 0x1B84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84A0u;
    // 0x1b84a4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201990u, 0x1B84A0u, 0x1B84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84A8u;
label_1b84a8:
    // 0x1b84a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b84a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84ac: 0xc046b90  jal         func_11AE40
    ctx->pc = 0x1B84ACu;
    SET_GPR_U32(ctx, 31, 0x1B84B4u);
    ctx->pc = 0x1B84B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84ACu;
    // 0x1b84b0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AE40u, 0x1B84ACu, 0x1B84B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84B4u;
label_1b84b4:
    // 0x1b84b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b84b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84b8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B84B8u;
    SET_GPR_U32(ctx, 31, 0x1B84C0u);
    ctx->pc = 0x1B84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84B8u;
    // 0x1b84bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B84B8u, 0x1B84C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84C0u;
label_1b84c0:
    // 0x1b84c0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B84C0u;
    {
        const bool branch_taken_0x1b84c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b84c0) {
            ctx->pc = 0x1B84E4u;
            goto label_1b84e4;
        }
    }
    ctx->pc = 0x1B84C8u;
label_1b84c8:
    // 0x1b84c8: 0xc046c8c  jal         func_11B230
    ctx->pc = 0x1B84C8u;
    SET_GPR_U32(ctx, 31, 0x1B84D0u);
    ctx->pc = 0x1B84CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84C8u;
    // 0x1b84cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B230u, 0x1B84C8u, 0x1B84D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84D0u;
label_1b84d0:
    // 0x1b84d0: 0x0  nop
    ctx->pc = 0x1b84d0u;
    // NOP
    // 0x1b84d4: 0x0  nop
    ctx->pc = 0x1b84d4u;
    // NOP
    // 0x1b84d8: 0x0  nop
    ctx->pc = 0x1b84d8u;
    // NOP
    // 0x1b84dc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B84DCu;
    {
        const bool branch_taken_0x1b84dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b84dc) {
            ctx->pc = 0x1B84C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b84c8;
        }
    }
    ctx->pc = 0x1B84E4u;
label_1b84e4:
    // 0x1b84e4: 0x0  nop
    ctx->pc = 0x1b84e4u;
    // NOP
    // 0x1b84e8: 0x27a401b4  addiu       $a0, $sp, 0x1B4
    ctx->pc = 0x1b84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x1b84ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b84ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b84f0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1b84f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b84f4: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1B84F4u;
    SET_GPR_U32(ctx, 31, 0x1B84FCu);
    ctx->pc = 0x1B84F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B84F4u;
    // 0x1b84f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1B84F4u, 0x1B84FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B84FCu;
label_1b84fc:
    // 0x1b84fc: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x1b84fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x1b8500: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1b8500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b8504: 0x27a601b8  addiu       $a2, $sp, 0x1B8
    ctx->pc = 0x1b8504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x1b8508: 0xc04889c  jal         func_122270
    ctx->pc = 0x1B8508u;
    SET_GPR_U32(ctx, 31, 0x1B8510u);
    ctx->pc = 0x1B850Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8508u;
    // 0x1b850c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122270u, 0x1B8508u, 0x1B8510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8510u;
label_1b8510:
    // 0x1b8510: 0x26c20014  addiu       $v0, $s6, 0x14
    ctx->pc = 0x1b8510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x1b8514: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x1b8514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x1b8518: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x1b8518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
    // 0x1b851c: 0x26c50010  addiu       $a1, $s6, 0x10
    ctx->pc = 0x1b851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b8520: 0x27a601c4  addiu       $a2, $sp, 0x1C4
    ctx->pc = 0x1b8520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x1b8524: 0xc06ee98  jal         func_1BBA60
    ctx->pc = 0x1B8524u;
    SET_GPR_U32(ctx, 31, 0x1B852Cu);
    ctx->pc = 0x1B8528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8524u;
    // 0x1b8528: 0x27a701bc  addiu       $a3, $sp, 0x1BC (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBA60u, 0x1B8524u, 0x1B852Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B852Cu;
label_1b852c:
    // 0x1b852c: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x1b852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x1b8530: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B8530u;
    SET_GPR_U32(ctx, 31, 0x1B8538u);
    ctx->pc = 0x1B8534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8530u;
    // 0x1b8534: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B8530u, 0x1B8538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8538u;
label_1b8538:
    // 0x1b8538: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1B8538u;
    {
        const bool branch_taken_0x1b8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8538u;
        // 0x1b853c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8538) {
            ctx->pc = 0x1B86A4u;
            goto label_1b86a4;
        }
    }
    ctx->pc = 0x1B8540u;
label_1b8540:
    // 0x1b8540: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B8540u;
    SET_GPR_U32(ctx, 31, 0x1B8548u);
    ctx->pc = 0x1B8544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8540u;
    // 0x1b8544: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B8540u, 0x1B8548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8548u;
label_1b8548:
    // 0x1b8548: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b8548u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b854c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B854Cu;
    {
        const bool branch_taken_0x1b854c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B854Cu;
        // 0x1b8550: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b854c) {
            ctx->pc = 0x1B8560u;
            goto label_1b8560;
        }
    }
    ctx->pc = 0x1B8554u;
    // 0x1b8554: 0xc06e1fc  jal         func_1B87F0
    ctx->pc = 0x1B8554u;
    SET_GPR_U32(ctx, 31, 0x1B855Cu);
    ctx->pc = 0x1B87F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B87F0u, 0x1B8554u, 0x1B855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B855Cu;
label_1b855c:
    // 0x1b855c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b855cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8560:
    // 0x1b8560: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1b8560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1b8564: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x1b8564u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x1b8568: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1b8568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1b856c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1B856Cu;
    {
        const bool branch_taken_0x1b856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B856Cu;
        // 0x1b8570: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b856c) {
            ctx->pc = 0x1B85D8u;
            goto label_1b85d8;
        }
    }
    ctx->pc = 0x1B8574u;
label_1b8574:
    // 0x1b8574: 0x0  nop
    ctx->pc = 0x1b8574u;
    // NOP
    // 0x1b8578: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1B8578u;
    SET_GPR_U32(ctx, 31, 0x1B8580u);
    ctx->pc = 0x1B857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8578u;
    // 0x1b857c: 0x24040140  addiu       $a0, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1B8578u, 0x1B8580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8580u;
label_1b8580:
    // 0x1b8580: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b8580u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8584: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8584u;
    {
        const bool branch_taken_0x1b8584 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8584u;
        // 0x1b8588: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8584) {
            ctx->pc = 0x1B8598u;
            goto label_1b8598;
        }
    }
    ctx->pc = 0x1B858Cu;
    // 0x1b858c: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1B858Cu;
    SET_GPR_U32(ctx, 31, 0x1B8594u);
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1B858Cu, 0x1B8594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8594u;
label_1b8594:
    // 0x1b8594: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1b8594u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b8598:
    // 0x1b8598: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1b8598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1b859c: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x1b859cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x1b85a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b85a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b85a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b85a8: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x1b85a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1b85ac: 0xc06e57c  jal         func_1B95F0
    ctx->pc = 0x1B85ACu;
    SET_GPR_U32(ctx, 31, 0x1B85B4u);
    ctx->pc = 0x1B85B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85ACu;
    // 0x1b85b0: 0xa2a20008  sb          $v0, 0x8($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 8), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B95F0u, 0x1B85ACu, 0x1B85B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85B4u;
label_1b85b4:
    // 0x1b85b4: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1b85b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1b85b8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1b85b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x1b85bc: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x1b85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1b85c0: 0x27a60198  addiu       $a2, $sp, 0x198
    ctx->pc = 0x1b85c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x1b85c4: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1b85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1b85c8: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1b85c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1b85cc: 0xc06ed14  jal         func_1BB450
    ctx->pc = 0x1B85CCu;
    SET_GPR_U32(ctx, 31, 0x1B85D4u);
    ctx->pc = 0x1B85D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85CCu;
    // 0x1b85d0: 0xafb5019c  sw          $s5, 0x19C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB450u, 0x1B85CCu, 0x1B85D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85D4u;
label_1b85d4:
    // 0x1b85d4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b85d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b85d8:
    // 0x1b85d8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1b85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b85dc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1b85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b85e0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1b85e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b85e4: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1B85E4u;
    {
        const bool branch_taken_0x1b85e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B85E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B85E4u;
        // 0x1b85e8: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b85e4) {
            ctx->pc = 0x1B8574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8574;
        }
    }
    ctx->pc = 0x1B85ECu;
    // 0x1b85ec: 0xc048920  jal         func_122480
    ctx->pc = 0x1B85ECu;
    SET_GPR_U32(ctx, 31, 0x1B85F4u);
    ctx->pc = 0x1B85F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B85ECu;
    // 0x1b85f0: 0x27a501cc  addiu       $a1, $sp, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122480u, 0x1B85ECu, 0x1B85F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B85F4u;
label_1b85f4:
    // 0x1b85f4: 0x27b50194  addiu       $s5, $sp, 0x194
    ctx->pc = 0x1b85f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 404));
    // 0x1b85f8: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b85fc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1b85fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8604: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1b8604u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8608: 0xc06ec00  jal         func_1BB000
    ctx->pc = 0x1B8608u;
    SET_GPR_U32(ctx, 31, 0x1B8610u);
    ctx->pc = 0x1B860Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8608u;
    // 0x1b860c: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB000u, 0x1B8608u, 0x1B8610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8610u;
label_1b8610:
    // 0x1b8610: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1b8610u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1b8614: 0xc080748  jal         func_201D20
    ctx->pc = 0x1B8614u;
    SET_GPR_U32(ctx, 31, 0x1B861Cu);
    ctx->pc = 0x1B8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8614u;
    // 0x1b8618: 0x24841010  addiu       $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1B8614u, 0x1B861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B861Cu;
label_1b861c:
    // 0x1b861c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1b861cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1b8620: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8624: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b8624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8628: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1B8628u;
    SET_GPR_U32(ctx, 31, 0x1B8630u);
    ctx->pc = 0x1B862Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8628u;
    // 0x1b862c: 0x24a51010  addiu       $a1, $a1, 0x1010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1B8628u, 0x1B8630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8630u;
label_1b8630:
    // 0x1b8630: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1b8630u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1b8634: 0xc080748  jal         func_201D20
    ctx->pc = 0x1B8634u;
    SET_GPR_U32(ctx, 31, 0x1B863Cu);
    ctx->pc = 0x1B8638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8634u;
    // 0x1b8638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201D20u, 0x1B8634u, 0x1B863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B863Cu;
label_1b863c:
    // 0x1b863c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1b863cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8640: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b8640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8644: 0xc049c74  jal         func_1271D0
    ctx->pc = 0x1B8644u;
    SET_GPR_U32(ctx, 31, 0x1B864Cu);
    ctx->pc = 0x1B8648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8644u;
    // 0x1b8648: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1271D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1271D0u, 0x1B8644u, 0x1B864Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B864Cu;
label_1b864c:
    // 0x1b864c: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1b864cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x1b8650: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1b8650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8654: 0xc0488c8  jal         func_122320
    ctx->pc = 0x1B8654u;
    SET_GPR_U32(ctx, 31, 0x1B865Cu);
    ctx->pc = 0x1B8658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8654u;
    // 0x1b8658: 0xaeb40000  sw          $s4, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122320u, 0x1B8654u, 0x1B865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B865Cu;
label_1b865c:
    // 0x1b865c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1b865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1b8660: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x1b8660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x1b8664: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1b8664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8668: 0x27a601a8  addiu       $a2, $sp, 0x1A8
    ctx->pc = 0x1b8668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x1b866c: 0xc06edd0  jal         func_1BB740
    ctx->pc = 0x1B866Cu;
    SET_GPR_U32(ctx, 31, 0x1B8674u);
    ctx->pc = 0x1B8670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B866Cu;
    // 0x1b8670: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB740u, 0x1B866Cu, 0x1B8674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8674u;
label_1b8674:
    // 0x1b8674: 0x27a401a8  addiu       $a0, $sp, 0x1A8
    ctx->pc = 0x1b8674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x1b8678: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B8678u;
    SET_GPR_U32(ctx, 31, 0x1B8680u);
    ctx->pc = 0x1B867Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8678u;
    // 0x1b867c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B8678u, 0x1B8680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8680u;
label_1b8680:
    // 0x1b8680: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8684: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1b8684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1b8688: 0x8c22f288  lw          $v0, -0xD78($at)
    ctx->pc = 0x1b8688u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x36F288u));
    // 0x1b868c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b8690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b8694: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b8694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b8698: 0xc04619c  jal         func_118670
    ctx->pc = 0x1B8698u;
    SET_GPR_U32(ctx, 31, 0x1B86A0u);
    ctx->pc = 0x1B869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8698u;
    // 0x1b869c: 0xac22f288  sw          $v0, -0xD78($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963848), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118670u, 0x1B8698u, 0x1B86A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B86A0u;
label_1b86a0:
    // 0x1b86a0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b86a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b86a4:
    // 0x1b86a4: 0x0  nop
    ctx->pc = 0x1b86a4u;
    // NOP
    // 0x1b86a8: 0x8fa301b4  lw          $v1, 0x1B4($sp)
    ctx->pc = 0x1b86a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x1b86ac: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x1b86acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b86b0: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1B86B0u;
    {
        const bool branch_taken_0x1b86b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b86b0) {
            ctx->pc = 0x1B8540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8540;
        }
    }
    ctx->pc = 0x1B86B8u;
    // 0x1b86b8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b86b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b86bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b86bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b86c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b86c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b86c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b86c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b86c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b86c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b86cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b86ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b86d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b86d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b86d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b86d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b86d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b86d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b86dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B86DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B86DCu;
        // 0x1b86e0: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B86DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B86E4u;
}
