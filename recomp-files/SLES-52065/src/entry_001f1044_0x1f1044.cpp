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

// Function: entry_001f1044
// Address: 0x1f1044 - 0x1f1064
void entry_001f1044_0x1f1044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1044_0x1f1044");
#endif

    switch (ctx->pc) {
        case 0x1f104cu: goto label_1f104c;
        default: break;
    }

    ctx->pc = 0x1f1044u;

    // 0x1f1044: 0xc07ad98  jal         func_1EB660
    ctx->pc = 0x1F1044u;
    SET_GPR_U32(ctx, 31, 0x1F104Cu);
    ctx->pc = 0x1F1048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1044u;
    // 0x1f1048: 0x8e04a468  lw          $a0, -0x5B98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB660u, 0x1F1044u, 0x1F104Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F104Cu;
label_1f104c:
    // 0x1f104c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f1050: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1f1050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1f1054: 0x2463f700  addiu       $v1, $v1, -0x900
    ctx->pc = 0x1f1054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964992));
    // 0x1f1058: 0x8e04a468  lw          $a0, -0x5B98($s0)
    ctx->pc = 0x1f1058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943848)));
    // 0x1f105c: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1f105cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1f1060: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x1f1060u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1f1064u;
}
