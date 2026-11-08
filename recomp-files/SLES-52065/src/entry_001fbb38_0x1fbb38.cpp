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

// Function: entry_001fbb38
// Address: 0x1fbb38 - 0x1fbb4c
void entry_001fbb38_0x1fbb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbb38_0x1fbb38");
#endif

    switch (ctx->pc) {
        case 0x1fbb44u: goto label_1fbb44;
        default: break;
    }

    ctx->pc = 0x1fbb38u;

    // 0x1fbb38: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x1fbb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1fbb3c: 0xc07e952  jal         func_1FA548
    ctx->pc = 0x1FBB3Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB44u);
    ctx->pc = 0x1FBB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB3Cu;
    // 0x1fbb40: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA548u, 0x1FBB3Cu, 0x1FBB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB44u;
label_1fbb44:
    // 0x1fbb44: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FBB44u;
    {
        const bool branch_taken_0x1fbb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB44u;
        // 0x1fbb48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb44) {
            ctx->pc = 0x1FBB70u;
            return;
        }
    }
    ctx->pc = 0x1FBB4Cu;
}
