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

// Function: entry_0017321c
// Address: 0x17321c - 0x173244
void entry_0017321c_0x17321c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017321c_0x17321c");
#endif

    switch (ctx->pc) {
        case 0x173228u: goto label_173228;
        default: break;
    }

    ctx->pc = 0x17321cu;

    // 0x17321c: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x17321cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x173220: 0xc07d392  jal         func_1F4E48
    ctx->pc = 0x173220u;
    SET_GPR_U32(ctx, 31, 0x173228u);
    ctx->pc = 0x173224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173220u;
    // 0x173224: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4E48u, 0x173220u, 0x173228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173228u;
label_173228:
    // 0x173228: 0x8e236024  lw          $v1, 0x6024($s1)
    ctx->pc = 0x173228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24612)));
    // 0x17322c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x17322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x173230: 0x8f8283a8  lw          $v0, -0x7C58($gp)
    ctx->pc = 0x173230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935464)));
    // 0x173234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173238: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x173238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17323c: 0xc0465f0  jal         func_1197C0
    ctx->pc = 0x17323Cu;
    SET_GPR_U32(ctx, 31, 0x173244u);
    ctx->pc = 0x173240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17323Cu;
    // 0x173240: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1197C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1197C0u, 0x17323Cu, 0x173244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173244u;
}
