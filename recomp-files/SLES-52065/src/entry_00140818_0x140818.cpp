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

// Function: entry_00140818
// Address: 0x140818 - 0x140848
void entry_00140818_0x140818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140818_0x140818");
#endif

    switch (ctx->pc) {
        case 0x140824u: goto label_140824;
        default: break;
    }

    ctx->pc = 0x140818u;

    // 0x140818: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x140818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x14081c: 0xc05021c  jal         func_140870
    ctx->pc = 0x14081Cu;
    SET_GPR_U32(ctx, 31, 0x140824u);
    ctx->pc = 0x140820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14081Cu;
    // 0x140820: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140870u, 0x14081Cu, 0x140824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140824u;
label_140824:
    // 0x140824: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x140824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x140828: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x140828u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x14082c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x140830: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x140830u;
    {
        const bool branch_taken_0x140830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140830) {
            ctx->pc = 0x1407FCu;
            return;
        }
    }
    ctx->pc = 0x140838u;
    // 0x140838: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140838u;
    {
        const bool branch_taken_0x140838 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140838u;
        // 0x14083c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140838) {
            ctx->pc = 0x140848u;
            return;
        }
    }
    ctx->pc = 0x140840u;
    // 0x140840: 0xc0401a4  jal         func_100690
    ctx->pc = 0x140840u;
    SET_GPR_U32(ctx, 31, 0x140848u);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x140840u, 0x140848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140848u;
}
