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

// Function: entry_001801f4
// Address: 0x1801f4 - 0x180228
void entry_001801f4_0x1801f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001801f4_0x1801f4");
#endif

    switch (ctx->pc) {
        case 0x180204u: goto label_180204;
        default: break;
    }

    ctx->pc = 0x1801f4u;

    // 0x1801f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1801f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1801f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1801fc: 0xc0485b4  jal         func_1216D0
    ctx->pc = 0x1801FCu;
    SET_GPR_U32(ctx, 31, 0x180204u);
    ctx->pc = 0x180200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1801FCu;
    // 0x180200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216D0u, 0x1801FCu, 0x180204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180204u;
label_180204:
    // 0x180204: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x180204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x180208: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x180208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x18020c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x18020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x180210: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x180210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x180214: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x180214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x180218: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180218u;
    {
        const bool branch_taken_0x180218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180218u;
        // 0x18021c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180218) {
            ctx->pc = 0x180228u;
            return;
        }
    }
    ctx->pc = 0x180220u;
    // 0x180220: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x180220u;
    {
        const bool branch_taken_0x180220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180220u;
        // 0x180224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180220) {
            ctx->pc = 0x18030Cu;
            return;
        }
    }
    ctx->pc = 0x180228u;
}
