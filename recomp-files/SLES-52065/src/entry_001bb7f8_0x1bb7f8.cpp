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

// Function: entry_001bb7f8
// Address: 0x1bb7f8 - 0x1bb844
void entry_001bb7f8_0x1bb7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb7f8_0x1bb7f8");
#endif

    switch (ctx->pc) {
        case 0x1bb808u: goto label_1bb808;
        case 0x1bb814u: goto label_1bb814;
        case 0x1bb820u: goto label_1bb820;
        case 0x1bb838u: goto label_1bb838;
        default: break;
    }

    ctx->pc = 0x1bb7f8u;

    // 0x1bb7f8: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BB7F8u;
    {
        const bool branch_taken_0x1bb7f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB7F8u;
        // 0x1bb7fc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb7f8) {
            ctx->pc = 0x1BB844u;
            return;
        }
    }
    ctx->pc = 0x1BB800u;
    // 0x1bb800: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB800u;
    SET_GPR_U32(ctx, 31, 0x1BB808u);
    ctx->pc = 0x1BB804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB800u;
    // 0x1bb804: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB800u, 0x1BB808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB808u;
label_1bb808:
    // 0x1bb808: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bb808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb80c: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BB80Cu;
    SET_GPR_U32(ctx, 31, 0x1BB814u);
    ctx->pc = 0x1BB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB80Cu;
    // 0x1bb810: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BB80Cu, 0x1BB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB814u;
label_1bb814:
    // 0x1bb814: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bb814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb818: 0xc048880  jal         func_122200
    ctx->pc = 0x1BB818u;
    SET_GPR_U32(ctx, 31, 0x1BB820u);
    ctx->pc = 0x1BB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB818u;
    // 0x1bb81c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BB818u, 0x1BB820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB820u;
label_1bb820:
    // 0x1bb820: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1bb820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb824: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1bb824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb828: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x1bb828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1bb82c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bb82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb830: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BB830u;
    SET_GPR_U32(ctx, 31, 0x1BB838u);
    ctx->pc = 0x1BB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB830u;
    // 0x1bb834: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BB830u, 0x1BB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB838u;
label_1bb838:
    // 0x1bb838: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1BB838u;
    {
        const bool branch_taken_0x1bb838 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bb838) {
            ctx->pc = 0x1BB870u;
            return;
        }
    }
    ctx->pc = 0x1BB840u;
    // 0x1bb840: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1bb840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1bb844u;
}
