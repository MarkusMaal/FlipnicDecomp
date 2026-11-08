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

// Function: entry_0011f4e8
// Address: 0x11f4e8 - 0x11f510
void entry_0011f4e8_0x11f4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f4e8_0x11f4e8");
#endif

    switch (ctx->pc) {
        case 0x11f4fcu: goto label_11f4fc;
        default: break;
    }

    ctx->pc = 0x11f4e8u;

    // 0x11f4e8: 0xae722020  sw          $s2, 0x2020($s3)
    ctx->pc = 0x11f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8224), GPR_U32(ctx, 18));
    // 0x11f4ec: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x11f4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x11f4f0: 0x8e64201c  lw          $a0, 0x201C($s3)
    ctx->pc = 0x11f4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8220)));
    // 0x11f4f4: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x11F4F4u;
    SET_GPR_U32(ctx, 31, 0x11F4FCu);
    ctx->pc = 0x11F4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F4F4u;
    // 0x11f4f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x11F4F4u, 0x11F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F4FCu;
label_11f4fc:
    // 0x11f4fc: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x11f4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x11f500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f504: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x11f504u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    // 0x11f508: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x11f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x11f50c: 0xae632028  sw          $v1, 0x2028($s3)
    ctx->pc = 0x11f50cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8232), GPR_U32(ctx, 3));
    ctx->pc = 0x11f510u;
}
