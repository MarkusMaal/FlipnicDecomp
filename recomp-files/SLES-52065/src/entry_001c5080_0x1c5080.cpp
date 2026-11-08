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

// Function: entry_001c5080
// Address: 0x1c5080 - 0x1c50c8
void entry_001c5080_0x1c5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5080_0x1c5080");
#endif

    switch (ctx->pc) {
        case 0x1c5098u: goto label_1c5098;
        case 0x1c50acu: goto label_1c50ac;
        case 0x1c50b4u: goto label_1c50b4;
        case 0x1c50c4u: goto label_1c50c4;
        default: break;
    }

    ctx->pc = 0x1c5080u;

    // 0x1c5080: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1c5080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1c5084: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1c5084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1c5088: 0x2442f600  addiu       $v0, $v0, -0xA00
    ctx->pc = 0x1c5088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964736));
    // 0x1c508c: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0
    ctx->pc = 0x1c508cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
    // 0x1c5090: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x1C5090u;
    SET_GPR_U32(ctx, 31, 0x1C5098u);
    ctx->pc = 0x1C5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5090u;
    // 0x1c5094: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x1C5090u, 0x1C5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5098u;
label_1c5098:
    // 0x1c5098: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C5098u;
    {
        const bool branch_taken_0x1c5098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5098u;
        // 0x1c509c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5098) {
            ctx->pc = 0x1C50C8u;
            return;
        }
    }
    ctx->pc = 0x1C50A0u;
    // 0x1c50a0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c50a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c50a4: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C50A4u;
    SET_GPR_U32(ctx, 31, 0x1C50ACu);
    ctx->pc = 0x1C50A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50A4u;
    // 0x1c50a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C50A4u, 0x1C50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50ACu;
label_1c50ac:
    // 0x1c50ac: 0xc06e57c  jal         func_1B95F0
    ctx->pc = 0x1C50ACu;
    SET_GPR_U32(ctx, 31, 0x1C50B4u);
    ctx->pc = 0x1C50B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50ACu;
    // 0x1c50b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B95F0u, 0x1C50ACu, 0x1C50B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50B4u;
label_1c50b4:
    // 0x1c50b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1c50b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c50bc: 0xc06dd4c  jal         func_1B7530
    ctx->pc = 0x1C50BCu;
    SET_GPR_U32(ctx, 31, 0x1C50C4u);
    ctx->pc = 0x1C50C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50BCu;
    // 0x1c50c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7530u, 0x1C50BCu, 0x1C50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50C4u;
label_1c50c4:
    // 0x1c50c4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x1c50c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c50c8u;
}
