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

// Function: entry_0018e4c0
// Address: 0x18e4c0 - 0x18e54c
void entry_0018e4c0_0x18e4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e4c0_0x18e4c0");
#endif

    switch (ctx->pc) {
        case 0x18e4c8u: goto label_18e4c8;
        case 0x18e4d8u: goto label_18e4d8;
        case 0x18e4ecu: goto label_18e4ec;
        case 0x18e51cu: goto label_18e51c;
        case 0x18e544u: goto label_18e544;
        default: break;
    }

    ctx->pc = 0x18e4c0u;

label_18e4c0:
    // 0x18e4c0: 0xc05f878  jal         func_17E1E0
label_18e4c4:
    if (ctx->pc == 0x18E4C4u) {
        ctx->pc = 0x18E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4C0u;
        // 0x18e4c4: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4C8u;
        goto label_18e4c8;
    }
    ctx->pc = 0x18E4C0u;
    SET_GPR_U32(ctx, 31, 0x18E4C8u);
    ctx->pc = 0x18E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4C0u;
    // 0x18e4c4: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E4C0u, 0x18E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4C8u;
label_18e4c8:
    // 0x18e4c8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x18e4c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18e4cc:
    // 0x18e4cc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x18e4ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_18e4d0:
    // 0x18e4d0: 0x320f809  jalr        $t9
label_18e4d4:
    if (ctx->pc == 0x18E4D4u) {
        ctx->pc = 0x18E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D0u;
        // 0x18e4d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4D8u;
        goto label_18e4d8;
    }
    ctx->pc = 0x18E4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18E4D8u);
        ctx->pc = 0x18E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D0u;
        // 0x18e4d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E4D0u, 0x18E4D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E4D8u;
label_18e4d8:
    // 0x18e4d8: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_18e4dc:
    if (ctx->pc == 0x18E4DCu) {
        ctx->pc = 0x18E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D8u;
        // 0x18e4dc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4E0u;
        goto label_18e4e0;
    }
    ctx->pc = 0x18E4D8u;
    {
        const bool branch_taken_0x18e4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4D8u;
        // 0x18e4dc: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e4d8) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
    ctx->pc = 0x18E4E0u;
label_18e4e0:
    // 0x18e4e0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x18e4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18e4e4:
    // 0x18e4e4: 0xc05f878  jal         func_17E1E0
label_18e4e8:
    if (ctx->pc == 0x18E4E8u) {
        ctx->pc = 0x18E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E4E4u;
        // 0x18e4e8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E4ECu;
        goto label_18e4ec;
    }
    ctx->pc = 0x18E4E4u;
    SET_GPR_U32(ctx, 31, 0x18E4ECu);
    ctx->pc = 0x18E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4E4u;
    // 0x18e4e8: 0x24a5fce0  addiu       $a1, $a1, -0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E1E0u, 0x18E4E4u, 0x18E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4ECu;
label_18e4ec:
    // 0x18e4ec: 0x8e430484  lw          $v1, 0x484($s2)
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1156)));
label_18e4f0:
    // 0x18e4f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e4f4:
    // 0x18e4f4: 0x8e452724  lw          $a1, 0x2724($s2)
    ctx->pc = 0x18e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10020)));
label_18e4f8:
    // 0x18e4f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x18e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18e4fc:
    // 0x18e4fc: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x18e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e500:
    // 0x18e500: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18e504:
    // 0x18e504: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18e504u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18e508:
    // 0x18e508: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18e508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18e50c:
    // 0x18e50c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x18e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_18e510:
    // 0x18e510: 0x8c450038  lw          $a1, 0x38($v0)
    ctx->pc = 0x18e510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_18e514:
    // 0x18e514: 0xc0532f4  jal         func_14CBD0
label_18e518:
    if (ctx->pc == 0x18E518u) {
        ctx->pc = 0x18E518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E514u;
        // 0x18e518: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E51Cu;
        goto label_18e51c;
    }
    ctx->pc = 0x18E514u;
    SET_GPR_U32(ctx, 31, 0x18E51Cu);
    ctx->pc = 0x18E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E514u;
    // 0x18e518: 0x8e460450  lw          $a2, 0x450($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14CBD0u, 0x18E514u, 0x18E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E51Cu;
label_18e51c:
    // 0x18e51c: 0xae40045c  sw          $zero, 0x45C($s2)
    ctx->pc = 0x18e51cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1116), GPR_U32(ctx, 0));
label_18e520:
    // 0x18e520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18e524:
    // 0x18e524: 0xae400460  sw          $zero, 0x460($s2)
    ctx->pc = 0x18e524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1120), GPR_U32(ctx, 0));
label_18e528:
    // 0x18e528: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x18e528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18e52c:
    // 0x18e52c: 0xae400464  sw          $zero, 0x464($s2)
    ctx->pc = 0x18e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1124), GPR_U32(ctx, 0));
label_18e530:
    // 0x18e530: 0xae40046c  sw          $zero, 0x46C($s2)
    ctx->pc = 0x18e530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1132), GPR_U32(ctx, 0));
label_18e534:
    // 0x18e534: 0xae400468  sw          $zero, 0x468($s2)
    ctx->pc = 0x18e534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 0));
label_18e538:
    // 0x18e538: 0xae402714  sw          $zero, 0x2714($s2)
    ctx->pc = 0x18e538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10004), GPR_U32(ctx, 0));
label_18e53c:
    // 0x18e53c: 0xc063e08  jal         func_18F820
label_18e540:
    if (ctx->pc == 0x18E540u) {
        ctx->pc = 0x18E540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E53Cu;
        // 0x18e540: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E544u;
        goto label_18e544;
    }
    ctx->pc = 0x18E53Cu;
    SET_GPR_U32(ctx, 31, 0x18E544u);
    ctx->pc = 0x18E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E53Cu;
    // 0x18e540: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E53Cu, 0x18E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E544u;
label_18e544:
    // 0x18e544: 0x1000006a  b           . + 4 + (0x6A << 2)
label_18e548:
    if (ctx->pc == 0x18E548u) {
        ctx->pc = 0x18E54Cu;
        goto label_fallthrough_0x18e544;
    }
    ctx->pc = 0x18E544u;
    {
        const bool branch_taken_0x18e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e544) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
label_fallthrough_0x18e544:
    ctx->pc = 0x18E54Cu;
}
