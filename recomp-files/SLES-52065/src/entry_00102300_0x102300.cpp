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

// Function: entry_00102300
// Address: 0x102300 - 0x10232c
void entry_00102300_0x102300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102300_0x102300");
#endif

    ctx->pc = 0x102300u;

    // 0x102300: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x102300u;
    {
        const bool branch_taken_0x102300 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x102300) {
            ctx->pc = 0x10232Cu;
            return;
        }
    }
    ctx->pc = 0x102308u;
    // 0x102308: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10230c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102310: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102314: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102318: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10231c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x10231cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102320: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x102320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x102324: 0xc05635c  jal         func_158D70
    ctx->pc = 0x102324u;
    SET_GPR_U32(ctx, 31, 0x10232Cu);
    ctx->pc = 0x102328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102324u;
    // 0x102328: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D70u, 0x102324u, 0x10232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10232Cu;
}
