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

// Function: entry_0018d4b4
// Address: 0x18d4b4 - 0x18d550
void entry_0018d4b4_0x18d4b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d4b4_0x18d4b4");
#endif

    switch (ctx->pc) {
        case 0x18d4bcu: goto label_18d4bc;
        case 0x18d4ccu: goto label_18d4cc;
        case 0x18d510u: goto label_18d510;
        case 0x18d540u: goto label_18d540;
        case 0x18d548u: goto label_18d548;
        default: break;
    }

    ctx->pc = 0x18d4b4u;

label_18d4b4:
    // 0x18d4b4: 0xc05f878  jal         func_17E1E0
label_18d4b8:
    if (ctx->pc == 0x18D4B8u) {
        ctx->pc = 0x18D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4B4u;
        // 0x18d4b8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4BCu;
        goto label_18d4bc;
    }
    ctx->pc = 0x18D4B4u;
    SET_GPR_U32(ctx, 31, 0x18D4BCu);
    ctx->pc = 0x18D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D4B4u;
    // 0x18d4b8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D4B4u, 0x18D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D4BCu;
label_18d4bc:
    // 0x18d4bc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18d4bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18d4c0:
    // 0x18d4c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18d4c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18d4c4:
    // 0x18d4c4: 0x320f809  jalr        $t9
label_18d4c8:
    if (ctx->pc == 0x18D4C8u) {
        ctx->pc = 0x18D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4C4u;
        // 0x18d4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4CCu;
        goto label_18d4cc;
    }
    ctx->pc = 0x18D4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18D4CCu);
        ctx->pc = 0x18D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4C4u;
        // 0x18d4c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D4C4u, 0x18D4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D4CCu;
label_18d4cc:
    // 0x18d4cc: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_18d4d0:
    if (ctx->pc == 0x18D4D0u) {
        ctx->pc = 0x18D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4CCu;
        // 0x18d4d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D4D4u;
        goto label_18d4d4;
    }
    ctx->pc = 0x18D4CCu;
    {
        const bool branch_taken_0x18d4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4CCu;
        // 0x18d4d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4cc) {
            ctx->pc = 0x18D55Cu;
            return;
        }
    }
    ctx->pc = 0x18D4D4u;
label_18d4d4:
    // 0x18d4d4: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18d4d8:
    // 0x18d4d8: 0x8e242724  lw          $a0, 0x2724($s1)
    ctx->pc = 0x18d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d4dc:
    // 0x18d4dc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d4e0:
    // 0x18d4e0: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d4e4:
    // 0x18d4e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d4e8:
    // 0x18d4e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d4ec:
    // 0x18d4ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d4f0:
    // 0x18d4f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18d4f4:
    // 0x18d4f4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x18d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18d4f8:
    // 0x18d4f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_18d4fc:
    if (ctx->pc == 0x18D4FCu) {
        ctx->pc = 0x18D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F8u;
        // 0x18d4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D500u;
        goto label_18d500;
    }
    ctx->pc = 0x18D4F8u;
    {
        const bool branch_taken_0x18d4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D4F8u;
        // 0x18d4fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d4f8) {
            ctx->pc = 0x18D550u;
            return;
        }
    }
    ctx->pc = 0x18D500u;
label_18d500:
    // 0x18d500: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18d500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
label_18d504:
    // 0x18d504: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d508:
    // 0x18d508: 0xc05f878  jal         func_17E1E0
label_18d50c:
    if (ctx->pc == 0x18D50Cu) {
        ctx->pc = 0x18D50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D508u;
        // 0x18d50c: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D510u;
        goto label_18d510;
    }
    ctx->pc = 0x18D508u;
    SET_GPR_U32(ctx, 31, 0x18D510u);
    ctx->pc = 0x18D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D508u;
    // 0x18d50c: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18D508u, 0x18D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D510u;
label_18d510:
    // 0x18d510: 0x8e230484  lw          $v1, 0x484($s1)
    ctx->pc = 0x18d510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1156)));
label_18d514:
    // 0x18d514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18d514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d518:
    // 0x18d518: 0x8e252724  lw          $a1, 0x2724($s1)
    ctx->pc = 0x18d518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10020)));
label_18d51c:
    // 0x18d51c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18d520:
    // 0x18d520: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18d520u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d524:
    // 0x18d524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18d524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18d528:
    // 0x18d528: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18d528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18d52c:
    // 0x18d52c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18d530:
    // 0x18d530: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18d534:
    // 0x18d534: 0x8c450030  lw          $a1, 0x30($v0)
    ctx->pc = 0x18d534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18d538:
    // 0x18d538: 0xc0532f4  jal         func_14CBD0
label_18d53c:
    if (ctx->pc == 0x18D53Cu) {
        ctx->pc = 0x18D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D538u;
        // 0x18d53c: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D540u;
        goto label_18d540;
    }
    ctx->pc = 0x18D538u;
    SET_GPR_U32(ctx, 31, 0x18D540u);
    ctx->pc = 0x18D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D538u;
    // 0x18d53c: 0x8e260450  lw          $a2, 0x450($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18D538u, 0x18D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D540u;
label_18d540:
    // 0x18d540: 0xc063e14  jal         func_18F850
label_18d544:
    if (ctx->pc == 0x18D544u) {
        ctx->pc = 0x18D544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D540u;
        // 0x18d544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D548u;
        goto label_18d548;
    }
    ctx->pc = 0x18D540u;
    SET_GPR_U32(ctx, 31, 0x18D548u);
    ctx->pc = 0x18D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D540u;
    // 0x18d544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F850u, 0x18D540u, 0x18D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D548u;
label_18d548:
    // 0x18d548: 0x10000003  b           . + 4 + (0x3 << 2)
label_18d54c:
    if (ctx->pc == 0x18D54Cu) {
        ctx->pc = 0x18D550u;
        goto label_fallthrough_0x18d548;
    }
    ctx->pc = 0x18D548u;
    {
        const bool branch_taken_0x18d548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d548) {
            ctx->pc = 0x18D558u;
            return;
        }
    }
label_fallthrough_0x18d548:
    ctx->pc = 0x18D550u;
}
