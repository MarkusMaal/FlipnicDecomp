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

// Function: entry_0015c1c8
// Address: 0x15c1c8 - 0x15c1fc
void entry_0015c1c8_0x15c1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c1c8_0x15c1c8");
#endif

    switch (ctx->pc) {
        case 0x15c1ecu: goto label_15c1ec;
        default: break;
    }

    ctx->pc = 0x15c1c8u;

    // 0x15c1c8: 0x660000c  bltz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x15C1C8u;
    {
        const bool branch_taken_0x15c1c8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x15C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1C8u;
        // 0x15c1cc: 0x2d21021  addu        $v0, $s6, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1c8) {
            ctx->pc = 0x15C1FCu;
            return;
        }
    }
    ctx->pc = 0x15C1D0u;
    // 0x15c1d0: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x15c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x15c1d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15c1d8: 0x84820020  lh          $v0, 0x20($a0)
    ctx->pc = 0x15c1d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15c1dc: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15C1DCu;
    {
        const bool branch_taken_0x15c1dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x15C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1DCu;
        // 0x15c1e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1dc) {
            ctx->pc = 0x15C1FCu;
            return;
        }
    }
    ctx->pc = 0x15C1E4u;
    // 0x15c1e4: 0xc080796  jal         func_201E58
    ctx->pc = 0x15C1E4u;
    SET_GPR_U32(ctx, 31, 0x15C1ECu);
    ctx->pc = 0x15C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C1E4u;
    // 0x15c1e8: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201E58u, 0x15C1E4u, 0x15C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C1ECu;
label_15c1ec:
    // 0x15c1ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C1ECu;
    {
        const bool branch_taken_0x15c1ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c1ec) {
            ctx->pc = 0x15C1FCu;
            return;
        }
    }
    ctx->pc = 0x15C1F4u;
    // 0x15c1f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15C1F4u;
    {
        const bool branch_taken_0x15c1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C1F4u;
        // 0x15c1f8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c1f4) {
            ctx->pc = 0x15C214u;
            return;
        }
    }
    ctx->pc = 0x15C1FCu;
}
