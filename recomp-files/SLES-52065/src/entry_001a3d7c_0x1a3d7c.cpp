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

// Function: entry_001a3d7c
// Address: 0x1a3d7c - 0x1a3d98
void entry_001a3d7c_0x1a3d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3d7c_0x1a3d7c");
#endif

    ctx->pc = 0x1a3d7cu;

label_1a3d7c:
    // 0x1a3d7c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1a3d80:
    if (ctx->pc == 0x1A3D80u) {
        ctx->pc = 0x1A3D84u;
        goto label_1a3d84;
    }
    ctx->pc = 0x1A3D7Cu;
    {
        const bool branch_taken_0x1a3d7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3d7c) {
            ctx->pc = 0x1A3D98u;
            return;
        }
    }
    ctx->pc = 0x1A3D84u;
label_1a3d84:
    // 0x1a3d84: 0x8e39031c  lw          $t9, 0x31C($s1)
    ctx->pc = 0x1a3d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_1a3d88:
    // 0x1a3d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a3d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a3d8c:
    // 0x1a3d8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1a3d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1a3d90:
    // 0x1a3d90: 0x320f809  jalr        $t9
label_1a3d94:
    if (ctx->pc == 0x1A3D94u) {
        ctx->pc = 0x1A3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D90u;
        // 0x1a3d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3D98u;
        goto label_fallthrough_0x1a3d90;
    }
    ctx->pc = 0x1A3D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1A3D98u);
        ctx->pc = 0x1A3D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3D90u;
        // 0x1a3d94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3D90u, 0x1A3D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1a3d90:
    ctx->pc = 0x1A3D98u;
}
