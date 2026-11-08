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

// Function: entry_001bb21c
// Address: 0x1bb21c - 0x1bb244
void entry_001bb21c_0x1bb21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb21c_0x1bb21c");
#endif

    switch (ctx->pc) {
        case 0x1bb228u: goto label_1bb228;
        default: break;
    }

    ctx->pc = 0x1bb21cu;

    // 0x1bb21c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bb21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb220: 0xc048afc  jal         func_122BF0
    ctx->pc = 0x1BB220u;
    SET_GPR_U32(ctx, 31, 0x1BB228u);
    ctx->pc = 0x1BB224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB220u;
    // 0x1bb224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122BF0u, 0x1BB220u, 0x1BB228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB228u;
label_1bb228:
    // 0x1bb228: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bb228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bb22c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bb22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb230: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1bb230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1bb234: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1bb234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1bb238: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bb23c: 0xc07fdfe  jal         func_1FF7F8
    ctx->pc = 0x1BB23Cu;
    SET_GPR_U32(ctx, 31, 0x1BB244u);
    ctx->pc = 0x1BB240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB23Cu;
    // 0x1bb240: 0x702821  addu        $a1, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF7F8u, 0x1BB23Cu, 0x1BB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB244u;
}
