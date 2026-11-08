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

// Function: entry_0021b674
// Address: 0x21b674 - 0x21b6a0
void entry_0021b674_0x21b674(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b674_0x21b674");
#endif

    ctx->pc = 0x21b674u;

    // 0x21b674: 0x8d846700  lw          $a0, 0x6700($t4)
    ctx->pc = 0x21b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x21b678: 0xdd436708  ld          $v1, 0x6708($t2)
    ctx->pc = 0x21b678u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 26376)));
    // 0x21b67c: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x21b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x21b680: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b680u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21b684: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21b688: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21b688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b68c: 0xad846700  sw          $a0, 0x6700($t4)
    ctx->pc = 0x21b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26368), GPR_U32(ctx, 4));
    // 0x21b690: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B690u;
    {
        const bool branch_taken_0x21b690 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B690u;
        // 0x21b694: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b690) {
            ctx->pc = 0x21B6A0u;
            return;
        }
    }
    ctx->pc = 0x21B698u;
    // 0x21b698: 0xc01d918  jal         func_076460
    ctx->pc = 0x21B698u;
    SET_GPR_U32(ctx, 31, 0x21B6A0u);
    ctx->pc = 0x21B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B698u;
    // 0x21b69c: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x21B698u, 0x21B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6A0u;
}
