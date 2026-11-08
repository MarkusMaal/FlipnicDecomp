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

// Function: entry_001b2224
// Address: 0x1b2224 - 0x1b2260
void entry_001b2224_0x1b2224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2224_0x1b2224");
#endif

    switch (ctx->pc) {
        case 0x1b222cu: goto label_1b222c;
        default: break;
    }

    ctx->pc = 0x1b2224u;

    // 0x1b2224: 0xc06d14c  jal         func_1B4530
    ctx->pc = 0x1B2224u;
    SET_GPR_U32(ctx, 31, 0x1B222Cu);
    ctx->pc = 0x1B2228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2224u;
    // 0x1b2228: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4530u, 0x1B2224u, 0x1B222Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B222Cu;
label_1b222c:
    // 0x1b222c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b2230: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b2230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b2234: 0x8fa301c0  lw          $v1, 0x1C0($sp)
    ctx->pc = 0x1b2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1b2238: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x1b2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b223c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b223cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b2240: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1b2240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b2244: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1b2248: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x1b2248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x1b224c: 0x8fa20360  lw          $v0, 0x360($sp)
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1b2250: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2250u;
    {
        const bool branch_taken_0x1b2250 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2250u;
        // 0x1b2254: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2250) {
            ctx->pc = 0x1B2260u;
            return;
        }
    }
    ctx->pc = 0x1B2258u;
    // 0x1b2258: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b2258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b225c: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1b225cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x1b2260u;
}
