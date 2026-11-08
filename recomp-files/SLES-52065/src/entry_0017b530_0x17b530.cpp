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

// Function: entry_0017b530
// Address: 0x17b530 - 0x17b5b4
void entry_0017b530_0x17b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b530_0x17b530");
#endif

    switch (ctx->pc) {
        case 0x17b540u: goto label_17b540;
        case 0x17b554u: goto label_17b554;
        default: break;
    }

    ctx->pc = 0x17b530u;

label_17b530:
    // 0x17b530: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b534:
    // 0x17b534: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x17b534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_17b538:
    // 0x17b538: 0x320f809  jalr        $t9
label_17b53c:
    if (ctx->pc == 0x17B53Cu) {
        ctx->pc = 0x17B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B538u;
        // 0x17b53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B540u;
        goto label_17b540;
    }
    ctx->pc = 0x17B538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B540u);
        ctx->pc = 0x17B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B538u;
        // 0x17b53c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B538u, 0x17B540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B540u;
label_17b540:
    // 0x17b540: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b544:
    // 0x17b544: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x17b544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17b548:
    // 0x17b548: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x17b548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_17b54c:
    // 0x17b54c: 0x320f809  jalr        $t9
label_17b550:
    if (ctx->pc == 0x17B550u) {
        ctx->pc = 0x17B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B54Cu;
        // 0x17b550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B554u;
        goto label_17b554;
    }
    ctx->pc = 0x17B54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17B554u);
        ctx->pc = 0x17B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B54Cu;
        // 0x17b550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B54Cu, 0x17B554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B554u;
label_17b554:
    // 0x17b554: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x17b554u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_17b558:
    // 0x17b558: 0x14200068  bnez        $at, . + 4 + (0x68 << 2)
label_17b55c:
    if (ctx->pc == 0x17B55Cu) {
        ctx->pc = 0x17B560u;
        goto label_17b560;
    }
    ctx->pc = 0x17B558u;
    {
        const bool branch_taken_0x17b558 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b558) {
            ctx->pc = 0x17B6FCu;
            return;
        }
    }
    ctx->pc = 0x17B560u;
label_17b560:
    // 0x17b560: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x17b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
label_17b564:
    // 0x17b564: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b568:
    // 0x17b568: 0x10620064  beq         $v1, $v0, . + 4 + (0x64 << 2)
label_17b56c:
    if (ctx->pc == 0x17B56Cu) {
        ctx->pc = 0x17B570u;
        goto label_17b570;
    }
    ctx->pc = 0x17B568u;
    {
        const bool branch_taken_0x17b568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x17b568) {
            ctx->pc = 0x17B6FCu;
            return;
        }
    }
    ctx->pc = 0x17B570u;
label_17b570:
    // 0x17b570: 0x8e04041c  lw          $a0, 0x41C($s0)
    ctx->pc = 0x17b570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1052)));
label_17b574:
    // 0x17b574: 0x8f85838c  lw          $a1, -0x7C74($gp)
    ctx->pc = 0x17b574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935436)));
label_17b578:
    // 0x17b578: 0x8f838318  lw          $v1, -0x7CE8($gp)
    ctx->pc = 0x17b578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935320)));
label_17b57c:
    // 0x17b57c: 0x93828488  lbu         $v0, -0x7B78($gp)
    ctx->pc = 0x17b57cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_17b580:
    // 0x17b580: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17b584:
    // 0x17b584: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x17b584u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_17b588:
    // 0x17b588: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x17b588u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_17b58c:
    // 0x17b58c: 0x80c5006c  lb          $a1, 0x6C($a2)
    ctx->pc = 0x17b58cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 108)));
label_17b590:
    // 0x17b590: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x17b590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_17b594:
    // 0x17b594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17b598:
    // 0x17b598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17b59c:
    if (ctx->pc == 0x17B59Cu) {
        ctx->pc = 0x17B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B598u;
        // 0x17b59c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B5A0u;
        goto label_17b5a0;
    }
    ctx->pc = 0x17B598u;
    {
        const bool branch_taken_0x17b598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B598u;
        // 0x17b59c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b598) {
            ctx->pc = 0x17B5B4u;
            return;
        }
    }
    ctx->pc = 0x17B5A0u;
label_17b5a0:
    // 0x17b5a0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_17b5a4:
    // 0x17b5a4: 0x24422eb0  addiu       $v0, $v0, 0x2EB0
    ctx->pc = 0x17b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11952));
label_17b5a8:
    // 0x17b5a8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_17b5ac:
    // 0x17b5ac: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x17b5acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_17b5b0:
    // 0x17b5b0: 0x0  nop
    ctx->pc = 0x17b5b0u;
    // NOP
    ctx->pc = 0x17b5b4u;
}
