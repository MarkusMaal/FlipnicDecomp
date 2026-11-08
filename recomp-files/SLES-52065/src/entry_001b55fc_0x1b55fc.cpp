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

// Function: entry_001b55fc
// Address: 0x1b55fc - 0x1b5624
void entry_001b55fc_0x1b55fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b55fc_0x1b55fc");
#endif

    switch (ctx->pc) {
        case 0x1b5614u: goto label_1b5614;
        case 0x1b561cu: goto label_1b561c;
        default: break;
    }

    ctx->pc = 0x1b55fcu;

    // 0x1b55fc: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b55fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b5600: 0x9022f258  lbu         $v0, -0xDA8($at)
    ctx->pc = 0x1b5600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F258u));
    // 0x1b5604: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B5604u;
    {
        const bool branch_taken_0x1b5604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5604u;
        // 0x1b5608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5604) {
            ctx->pc = 0x1B5628u;
            return;
        }
    }
    ctx->pc = 0x1B560Cu;
    // 0x1b560c: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1B560Cu;
    SET_GPR_U32(ctx, 31, 0x1B5614u);
    ctx->pc = 0x1B5610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B560Cu;
    // 0x1b5610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1B560Cu, 0x1B5614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5614u;
label_1b5614:
    // 0x1b5614: 0xc06d3ec  jal         func_1B4FB0
    ctx->pc = 0x1B5614u;
    SET_GPR_U32(ctx, 31, 0x1B561Cu);
    ctx->pc = 0x1B4FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4FB0u, 0x1B5614u, 0x1B561Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B561Cu;
label_1b561c:
    // 0x1b561c: 0xc045f20  jal         func_117C80
    ctx->pc = 0x1B561Cu;
    SET_GPR_U32(ctx, 31, 0x1B5624u);
    ctx->pc = 0x1B5620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B561Cu;
    // 0x1b5620: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C80u, 0x1B561Cu, 0x1B5624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5624u;
}
