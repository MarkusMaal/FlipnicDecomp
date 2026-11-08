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

// Function: entry_001d5d10
// Address: 0x1d5d10 - 0x1d5d40
void entry_001d5d10_0x1d5d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5d10_0x1d5d10");
#endif

    switch (ctx->pc) {
        case 0x1d5d34u: goto label_1d5d34;
        default: break;
    }

    ctx->pc = 0x1d5d10u;

    // 0x1d5d10: 0x240209e4  addiu       $v0, $zero, 0x9E4
    ctx->pc = 0x1d5d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2532));
    // 0x1d5d14: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x1d5d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d5d18: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d5d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1d5d1c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1d5d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1d5d20: 0xac320580  sw          $s2, 0x580($at)
    ctx->pc = 0x1d5d20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1408), GPR_U32(ctx, 18));
    // 0x1d5d24: 0x1240010c  beqz        $s2, . + 4 + (0x10C << 2)
    ctx->pc = 0x1D5D24u;
    {
        const bool branch_taken_0x1d5d24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d24) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D2Cu;
    // 0x1d5d2c: 0xc0753e2  jal         func_1D4F88
    ctx->pc = 0x1D5D2Cu;
    SET_GPR_U32(ctx, 31, 0x1D5D34u);
    ctx->pc = 0x1D5D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D2Cu;
    // 0x1d5d30: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4F88u, 0x1D5D2Cu, 0x1D5D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D34u;
label_1d5d34:
    // 0x1d5d34: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x1D5D34u;
    {
        const bool branch_taken_0x1d5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d34) {
            ctx->pc = 0x1D6158u;
            return;
        }
    }
    ctx->pc = 0x1D5D3Cu;
    // 0x1d5d3c: 0x0  nop
    ctx->pc = 0x1d5d3cu;
    // NOP
    ctx->pc = 0x1d5d40u;
}
