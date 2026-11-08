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

// Function: entry_00203820
// Address: 0x203820 - 0x203850
void entry_00203820_0x203820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203820_0x203820");
#endif

    switch (ctx->pc) {
        case 0x203830u: goto label_203830;
        default: break;
    }

    ctx->pc = 0x203820u;

    // 0x203820: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x203820u;
    {
        const bool branch_taken_0x203820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203820) {
            ctx->pc = 0x203824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x203820u;
            // 0x203824: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x203850u;
            return;
        }
    }
    ctx->pc = 0x203828u;
    // 0x203828: 0xc07f4fc  jal         func_1FD3F0
    ctx->pc = 0x203828u;
    SET_GPR_U32(ctx, 31, 0x203830u);
    ctx->pc = 0x20382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203828u;
    // 0x20382c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD3F0u, 0x203828u, 0x203830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203830u;
label_203830:
    // 0x203830: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x203830u;
    {
        const bool branch_taken_0x203830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203830u;
        // 0x203834: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203830) {
            ctx->pc = 0x20391Cu;
            return;
        }
    }
    ctx->pc = 0x203838u;
    // 0x203838: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x203838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20383c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x20383cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x203840: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x203840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x203844: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x203844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x203848: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x203848u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x20384c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x20384cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x203850u;
}
