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

// Function: entry_0011a1d8
// Address: 0x11a1d8 - 0x11a22c
void entry_0011a1d8_0x11a1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a1d8_0x11a1d8");
#endif

    switch (ctx->pc) {
        case 0x11a1e0u: goto label_11a1e0;
        case 0x11a1fcu: goto label_11a1fc;
        default: break;
    }

    ctx->pc = 0x11a1d8u;

label_11a1d8:
    // 0x11a1d8: 0xc07ae70  jal         func_1EB9C0
    ctx->pc = 0x11A1D8u;
    SET_GPR_U32(ctx, 31, 0x11A1E0u);
    ctx->pc = 0x11A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1D8u;
    // 0x11a1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9C0u, 0x11A1D8u, 0x11A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1E0u;
label_11a1e0:
    // 0x11a1e0: 0x0  nop
    ctx->pc = 0x11a1e0u;
    // NOP
    // 0x11a1e4: 0x0  nop
    ctx->pc = 0x11a1e4u;
    // NOP
    // 0x11a1e8: 0x0  nop
    ctx->pc = 0x11a1e8u;
    // NOP
    // 0x11a1ec: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A1ECu;
    {
        const bool branch_taken_0x11a1ec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11a1ec) {
            ctx->pc = 0x11A1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a1d8;
        }
    }
    ctx->pc = 0x11A1F4u;
    // 0x11a1f4: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A1F4u;
    SET_GPR_U32(ctx, 31, 0x11A1FCu);
    ctx->pc = 0x11A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1F4u;
    // 0x11a1f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A1F4u, 0x11A1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1FCu;
label_11a1fc:
    // 0x11a1fc: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x11a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x11a200: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x11a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x11a204: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11a208: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x11a208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x11a20c: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x11a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a210: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x11a210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x11a214: 0xae2300bc  sw          $v1, 0xBC($s1)
    ctx->pc = 0x11a214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x11a218: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x11a218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a21c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11a21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11a220: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11A220u;
    {
        const bool branch_taken_0x11a220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A220u;
        // 0x11a224: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a220) {
            ctx->pc = 0x11A22Cu;
            return;
        }
    }
    ctx->pc = 0x11A228u;
    // 0x11a228: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x11a228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    ctx->pc = 0x11a22cu;
}
