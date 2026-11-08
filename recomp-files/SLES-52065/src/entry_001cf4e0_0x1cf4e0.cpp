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

// Function: entry_001cf4e0
// Address: 0x1cf4e0 - 0x1cf548
void entry_001cf4e0_0x1cf4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf4e0_0x1cf4e0");
#endif

    switch (ctx->pc) {
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf528u: goto label_1cf528;
        default: break;
    }

    ctx->pc = 0x1cf4e0u;

    // 0x1cf4e0: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
    // 0x1cf4e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cf4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4e8: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1CF4E8u;
    SET_GPR_U32(ctx, 31, 0x1CF4F0u);
    ctx->pc = 0x1CF4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4E8u;
    // 0x1cf4ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1CF4E8u, 0x1CF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4F0u;
label_1cf4f0:
    // 0x1cf4f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cf4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf4f4: 0xc06eb68  jal         func_1BADA0
    ctx->pc = 0x1CF4F4u;
    SET_GPR_U32(ctx, 31, 0x1CF4FCu);
    ctx->pc = 0x1CF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF4F4u;
    // 0x1cf4f8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BADA0u, 0x1CF4F4u, 0x1CF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF4FCu;
label_1cf4fc:
    // 0x1cf4fc: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x1cf4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cf500: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x1cf500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cf504: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x1cf504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1cf508: 0xc7af007c  lwc1        $f15, 0x7C($sp)
    ctx->pc = 0x1cf508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cf50c: 0xc062860  jal         func_18A180
    ctx->pc = 0x1CF50Cu;
    SET_GPR_U32(ctx, 31, 0x1CF514u);
    ctx->pc = 0x1CF510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF50Cu;
    // 0x1cf510: 0x8ea40060  lw          $a0, 0x60($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1CF50Cu, 0x1CF514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF514u;
label_1cf514:
    // 0x1cf514: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x1cf514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1cf518: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1cf518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1cf51c: 0x324600ff  andi        $a2, $s2, 0xFF
    ctx->pc = 0x1cf51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1cf520: 0xc0627bc  jal         func_189EF0
    ctx->pc = 0x1CF520u;
    SET_GPR_U32(ctx, 31, 0x1CF528u);
    ctx->pc = 0x1CF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF520u;
    // 0x1cf524: 0x24a53170  addiu       $a1, $a1, 0x3170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189EF0u, 0x1CF520u, 0x1CF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF528u;
label_1cf528:
    // 0x1cf528: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x1cf528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cf52c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CF52Cu;
    {
        const bool branch_taken_0x1cf52c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf52c) {
            ctx->pc = 0x1CF548u;
            return;
        }
    }
    ctx->pc = 0x1CF534u;
    // 0x1cf534: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1cf534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1cf538: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1cf53c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF53Cu;
    {
        const bool branch_taken_0x1cf53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF53Cu;
        // 0x1cf540: 0x21d1021  addu        $v0, $s0, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf53c) {
            ctx->pc = 0x1CF548u;
            return;
        }
    }
    ctx->pc = 0x1CF544u;
    // 0x1cf544: 0xa052008c  sb          $s2, 0x8C($v0)
    ctx->pc = 0x1cf544u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 140), (uint8_t)GPR_U32(ctx, 18));
    ctx->pc = 0x1cf548u;
}
