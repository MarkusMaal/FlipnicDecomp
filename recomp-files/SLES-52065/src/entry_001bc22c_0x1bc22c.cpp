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

// Function: entry_001bc22c
// Address: 0x1bc22c - 0x1bc264
void entry_001bc22c_0x1bc22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bc22c_0x1bc22c");
#endif

    switch (ctx->pc) {
        case 0x1bc234u: goto label_1bc234;
        case 0x1bc258u: goto label_1bc258;
        case 0x1bc260u: goto label_1bc260;
        default: break;
    }

    ctx->pc = 0x1bc22cu;

    // 0x1bc22c: 0xc0401bc  jal         func_1006F0
    ctx->pc = 0x1BC22Cu;
    SET_GPR_U32(ctx, 31, 0x1BC234u);
    ctx->pc = 0x1BC230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC22Cu;
    // 0x1bc230: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1006F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1006F0u, 0x1BC22Cu, 0x1BC234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC234u;
label_1bc234:
    // 0x1bc234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc238: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BC238u;
    {
        const bool branch_taken_0x1bc238 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC238u;
        // 0x1bc23c: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc238) {
            ctx->pc = 0x1BC264u;
            return;
        }
    }
    ctx->pc = 0x1BC240u;
    // 0x1bc240: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x1bc240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x1bc244: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1bc244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1bc248: 0x8c22d9ac  lw          $v0, -0x2654($at)
    ctx->pc = 0x1bc248u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D9ACu));
    // 0x1bc24c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1bc24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1bc250: 0xc07f5d4  jal         func_1FD750
    ctx->pc = 0x1BC250u;
    SET_GPR_U32(ctx, 31, 0x1BC258u);
    ctx->pc = 0x1BC254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC250u;
    // 0x1bc254: 0x24a510f0  addiu       $a1, $a1, 0x10F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD750u, 0x1BC250u, 0x1BC258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC258u;
label_1bc258:
    // 0x1bc258: 0xc07ef8a  jal         func_1FBE28
    ctx->pc = 0x1BC258u;
    SET_GPR_U32(ctx, 31, 0x1BC260u);
    ctx->pc = 0x1FBE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE28u, 0x1BC258u, 0x1BC260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC260u;
label_1bc260:
    // 0x1bc260: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x1bc260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->pc = 0x1bc264u;
}
