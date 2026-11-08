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

// Function: entry_001bc0e8
// Address: 0x1bc0e8 - 0x1bc120
void entry_001bc0e8_0x1bc0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc0e8_0x1bc0e8");
#endif

    switch (ctx->pc) {
        case 0x1bc0f0u: goto label_1bc0f0;
        case 0x1bc114u: goto label_1bc114;
        case 0x1bc11cu: goto label_1bc11c;
        default: break;
    }

    ctx->pc = 0x1bc0e8u;

    // 0x1bc0e8: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BC0E8u;
    SET_GPR_U32(ctx, 31, 0x1BC0F0u);
    ctx->pc = 0x1BC0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC0E8u;
    // 0x1bc0ec: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BC0E8u, 0x1BC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC0F0u;
label_1bc0f0:
    // 0x1bc0f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc0f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc0f4: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC0F4u;
    {
        const bool branch_taken_0x1bc0f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC0F4u;
        // 0x1bc0f8: 0x2603000c  addiu       $v1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc0f4) {
            ctx->pc = 0x1BC120u;
            return;
        }
    }
    ctx->pc = 0x1BC0FCu;
    // 0x1bc0fc: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bc0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bc100: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc104: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bc104u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bc108: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bc108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc10c: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BC10Cu;
    SET_GPR_U32(ctx, 31, 0x1BC114u);
    ctx->pc = 0x1BC110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC10Cu;
    // 0x1bc110: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BC10Cu, 0x1BC114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC114u;
label_1bc114:
    // 0x1bc114: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BC114u;
    SET_GPR_U32(ctx, 31, 0x1BC11Cu);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BC114u, 0x1BC11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC11Cu;
label_1bc11c:
    // 0x1bc11c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1bc11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1bc120u;
}
