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

// Function: entry_001582fc
// Address: 0x1582fc - 0x158328
void entry_001582fc_0x1582fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001582fc_0x1582fc");
#endif

    switch (ctx->pc) {
        case 0x158320u: goto label_158320;
        default: break;
    }

    ctx->pc = 0x1582fcu;

    // 0x1582fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1582fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x158300: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x158304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158308: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x158308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15830c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x15830cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x158310: 0x0  nop
    ctx->pc = 0x158310u;
    // NOP
    // 0x158314: 0x0  nop
    ctx->pc = 0x158314u;
    // NOP
    // 0x158318: 0xc0548c8  jal         func_152320
    ctx->pc = 0x158318u;
    SET_GPR_U32(ctx, 31, 0x158320u);
    ctx->pc = 0x152320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152320u, 0x158318u, 0x158320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158320u;
label_158320:
    // 0x158320: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x158320u;
    {
        const bool branch_taken_0x158320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158320u;
        // 0x158324: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158320) {
            ctx->pc = 0x158358u;
            return;
        }
    }
    ctx->pc = 0x158328u;
}
