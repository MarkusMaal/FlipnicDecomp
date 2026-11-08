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

// Function: entry_0015e898
// Address: 0x15e898 - 0x15e8e4
void entry_0015e898_0x15e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e898_0x15e898");
#endif

    switch (ctx->pc) {
        case 0x15e8c4u: goto label_15e8c4;
        default: break;
    }

    ctx->pc = 0x15e898u;

label_15e898:
    // 0x15e898: 0x3d21821  addu        $v1, $fp, $s2
    ctx->pc = 0x15e898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_15e89c:
    // 0x15e89c: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x15e89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_15e8a0:
    // 0x15e8a0: 0x24772cd8  addiu       $s7, $v1, 0x2CD8
    ctx->pc = 0x15e8a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 11480));
label_15e8a4:
    // 0x15e8a4: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15e8a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15e8a8:
    // 0x15e8a8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_15e8ac:
    if (ctx->pc == 0x15E8ACu) {
        ctx->pc = 0x15E8B0u;
        goto label_15e8b0;
    }
    ctx->pc = 0x15E8A8u;
    {
        const bool branch_taken_0x15e8a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e8a8) {
            ctx->pc = 0x15E8E4u;
            return;
        }
    }
    ctx->pc = 0x15E8B0u;
label_15e8b0:
    // 0x15e8b0: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e8b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e8b4:
    // 0x15e8b4: 0x26d50040  addiu       $s5, $s6, 0x40
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_15e8b8:
    // 0x15e8b8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x15e8b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_15e8bc:
    // 0x15e8bc: 0x320f809  jalr        $t9
label_15e8c0:
    if (ctx->pc == 0x15E8C0u) {
        ctx->pc = 0x15E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8BCu;
        // 0x15e8c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8C4u;
        goto label_15e8c4;
    }
    ctx->pc = 0x15E8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E8C4u);
        ctx->pc = 0x15E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8BCu;
        // 0x15e8c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8BCu, 0x15E8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E8C4u;
label_15e8c4:
    // 0x15e8c4: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x15e8c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_15e8c8:
    // 0x15e8c8: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_15e8cc:
    if (ctx->pc == 0x15E8CCu) {
        ctx->pc = 0x15E8D0u;
        goto label_15e8d0;
    }
    ctx->pc = 0x15E8C8u;
    {
        const bool branch_taken_0x15e8c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e8c8) {
            ctx->pc = 0x15E8E4u;
            return;
        }
    }
    ctx->pc = 0x15E8D0u;
label_15e8d0:
    // 0x15e8d0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x15e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_15e8d4:
    // 0x15e8d4: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15e8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15e8d8:
    // 0x15e8d8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x15e8d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_15e8dc:
    // 0x15e8dc: 0x320f809  jalr        $t9
label_15e8e0:
    if (ctx->pc == 0x15E8E0u) {
        ctx->pc = 0x15E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8DCu;
        // 0x15e8e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E8E4u;
        goto label_fallthrough_0x15e8dc;
    }
    ctx->pc = 0x15E8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15E8E4u);
        ctx->pc = 0x15E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E8DCu;
        // 0x15e8e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E8DCu, 0x15E8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15e8dc:
    ctx->pc = 0x15E8E4u;
}
