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

// Function: entry_001af320
// Address: 0x1af320 - 0x1af344
void entry_001af320_0x1af320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af320_0x1af320");
#endif

    switch (ctx->pc) {
        case 0x1af32cu: goto label_1af32c;
        default: break;
    }

    ctx->pc = 0x1af320u;

    // 0x1af320: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x1af320u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1af324: 0xc069afc  jal         func_1A6BF0
    ctx->pc = 0x1AF324u;
    SET_GPR_U32(ctx, 31, 0x1AF32Cu);
    ctx->pc = 0x1AF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF324u;
    // 0x1af328: 0x262406d0  addiu       $a0, $s1, 0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BF0u, 0x1AF324u, 0x1AF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF32Cu;
label_1af32c:
    // 0x1af32c: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x1af32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x1af330: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x1af330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x1af334: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF334u;
    {
        const bool branch_taken_0x1af334 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF334u;
        // 0x1af338: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af334) {
            ctx->pc = 0x1AF344u;
            return;
        }
    }
    ctx->pc = 0x1AF33Cu;
    // 0x1af33c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF33Cu;
    {
        const bool branch_taken_0x1af33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF33Cu;
        // 0x1af340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af33c) {
            ctx->pc = 0x1AF35Cu;
            return;
        }
    }
    ctx->pc = 0x1AF344u;
}
