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

// Function: entry_0010236c
// Address: 0x10236c - 0x102398
void entry_0010236c_0x10236c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010236c_0x10236c");
#endif

    ctx->pc = 0x10236cu;

    // 0x10236c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10236Cu;
    {
        const bool branch_taken_0x10236c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x10236c) {
            ctx->pc = 0x102398u;
            return;
        }
    }
    ctx->pc = 0x102374u;
    // 0x102374: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x102374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x102378: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10237c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10237cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102380: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x102384: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x102384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x102388: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10238c: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x10238cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x102390: 0xc056358  jal         func_158D60
    ctx->pc = 0x102390u;
    SET_GPR_U32(ctx, 31, 0x102398u);
    ctx->pc = 0x102394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102390u;
    // 0x102394: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D60u, 0x102390u, 0x102398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102398u;
}
