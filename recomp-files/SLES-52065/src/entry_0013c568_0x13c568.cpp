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

// Function: entry_0013c568
// Address: 0x13c568 - 0x13c640
void entry_0013c568_0x13c568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c568_0x13c568");
#endif

    switch (ctx->pc) {
        case 0x13c588u: goto label_13c588;
        case 0x13c598u: goto label_13c598;
        case 0x13c5a8u: goto label_13c5a8;
        case 0x13c5b8u: goto label_13c5b8;
        case 0x13c5c8u: goto label_13c5c8;
        case 0x13c5e0u: goto label_13c5e0;
        case 0x13c5f0u: goto label_13c5f0;
        case 0x13c608u: goto label_13c608;
        case 0x13c624u: goto label_13c624;
        default: break;
    }

    ctx->pc = 0x13c568u;

    // 0x13c568: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x13c568u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13c56c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13c56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13c570: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x13C570u;
    {
        const bool branch_taken_0x13c570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x13C574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C570u;
        // 0x13c574: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c570) {
            ctx->pc = 0x13C78Cu;
            return;
        }
    }
    ctx->pc = 0x13C578u;
    // 0x13c578: 0x27a40168  addiu       $a0, $sp, 0x168
    ctx->pc = 0x13c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x13c57c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c580: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C580u;
    SET_GPR_U32(ctx, 31, 0x13C588u);
    ctx->pc = 0x13C584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C580u;
    // 0x13c584: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C580u, 0x13C588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C588u;
label_13c588:
    // 0x13c588: 0x27a4016c  addiu       $a0, $sp, 0x16C
    ctx->pc = 0x13c588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x13c58c: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x13c58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x13c590: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C590u;
    SET_GPR_U32(ctx, 31, 0x13C598u);
    ctx->pc = 0x13C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C590u;
    // 0x13c594: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C590u, 0x13C598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C598u;
label_13c598:
    // 0x13c598: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x13c598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x13c59c: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x13c59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x13c5a0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C5A0u;
    SET_GPR_U32(ctx, 31, 0x13C5A8u);
    ctx->pc = 0x13C5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5A0u;
    // 0x13c5a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5A0u, 0x13C5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5A8u;
label_13c5a8:
    // 0x13c5a8: 0x27a40174  addiu       $a0, $sp, 0x174
    ctx->pc = 0x13c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x13c5ac: 0x2645000c  addiu       $a1, $s2, 0xC
    ctx->pc = 0x13c5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x13c5b0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C5B0u;
    SET_GPR_U32(ctx, 31, 0x13C5B8u);
    ctx->pc = 0x13C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5B0u;
    // 0x13c5b4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5B0u, 0x13C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5B8u;
label_13c5b8:
    // 0x13c5b8: 0x27a4017c  addiu       $a0, $sp, 0x17C
    ctx->pc = 0x13c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x13c5bc: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x13c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x13c5c0: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C5C0u;
    SET_GPR_U32(ctx, 31, 0x13C5C8u);
    ctx->pc = 0x13C5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5C0u;
    // 0x13c5c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5C0u, 0x13C5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5C8u;
label_13c5c8:
    // 0x13c5c8: 0x93a2017c  lbu         $v0, 0x17C($sp)
    ctx->pc = 0x13c5c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x13c5cc: 0x27a4017d  addiu       $a0, $sp, 0x17D
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 381));
    // 0x13c5d0: 0x26450011  addiu       $a1, $s2, 0x11
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 17));
    // 0x13c5d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c5d8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C5D8u;
    SET_GPR_U32(ctx, 31, 0x13C5E0u);
    ctx->pc = 0x13C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5D8u;
    // 0x13c5dc: 0xa2620188  sb          $v0, 0x188($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 392), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5D8u, 0x13C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5E0u;
label_13c5e0:
    // 0x13c5e0: 0x27a4017e  addiu       $a0, $sp, 0x17E
    ctx->pc = 0x13c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 382));
    // 0x13c5e4: 0x26450012  addiu       $a1, $s2, 0x12
    ctx->pc = 0x13c5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x13c5e8: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C5E8u;
    SET_GPR_U32(ctx, 31, 0x13C5F0u);
    ctx->pc = 0x13C5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5E8u;
    // 0x13c5ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C5E8u, 0x13C5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5F0u;
label_13c5f0:
    // 0x13c5f0: 0x93a2017e  lbu         $v0, 0x17E($sp)
    ctx->pc = 0x13c5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 382)));
    // 0x13c5f4: 0x27a4017f  addiu       $a0, $sp, 0x17F
    ctx->pc = 0x13c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 383));
    // 0x13c5f8: 0x26450013  addiu       $a1, $s2, 0x13
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 19));
    // 0x13c5fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c600: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x13C600u;
    SET_GPR_U32(ctx, 31, 0x13C608u);
    ctx->pc = 0x13C604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C600u;
    // 0x13c604: 0xa262018a  sb          $v0, 0x18A($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 394), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x13C600u, 0x13C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C608u;
label_13c608:
    // 0x13c608: 0x93a2017f  lbu         $v0, 0x17F($sp)
    ctx->pc = 0x13c608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 383)));
    // 0x13c60c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13c610: 0x2512821  addu        $a1, $s2, $s1
    ctx->pc = 0x13c610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x13c614: 0xae6201b8  sw          $v0, 0x1B8($s3)
    ctx->pc = 0x13c614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 440), GPR_U32(ctx, 2));
    // 0x13c618: 0x8fa60174  lw          $a2, 0x174($sp)
    ctx->pc = 0x13c618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x13c61c: 0xc05099c  jal         func_142670
    ctx->pc = 0x13C61Cu;
    SET_GPR_U32(ctx, 31, 0x13C624u);
    ctx->pc = 0x13C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C61Cu;
    // 0x13c620: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142670u, 0x13C61Cu, 0x13C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C624u;
label_13c624:
    // 0x13c624: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x13c624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13c628: 0x93a2017d  lbu         $v0, 0x17D($sp)
    ctx->pc = 0x13c628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 381)));
    // 0x13c62c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C62Cu;
    {
        const bool branch_taken_0x13c62c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c62c) {
            ctx->pc = 0x13C640u;
            return;
        }
    }
    ctx->pc = 0x13C634u;
    // 0x13c634: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x13c638: 0xae620084  sw          $v0, 0x84($s3)
    ctx->pc = 0x13c638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 2));
    // 0x13c63c: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->pc = 0x13c640u;
}
