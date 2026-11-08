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

// Function: entry_0011a234
// Address: 0x11a234 - 0x11a268
void entry_0011a234_0x11a234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a234_0x11a234");
#endif

    switch (ctx->pc) {
        case 0x11a258u: goto label_11a258;
        case 0x11a264u: goto label_11a264;
        default: break;
    }

    ctx->pc = 0x11a234u;

    // 0x11a234: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x11a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x11a238: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a23c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x11a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x11a240: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11a244: 0xafb30074  sw          $s3, 0x74($sp)
    ctx->pc = 0x11a244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 19));
    // 0x11a248: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x11a248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x11a24c: 0xafb20078  sw          $s2, 0x78($sp)
    ctx->pc = 0x11a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 18));
    // 0x11a250: 0xc07ae28  jal         func_1EB8A0
    ctx->pc = 0x11A250u;
    SET_GPR_U32(ctx, 31, 0x11A258u);
    ctx->pc = 0x11A254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A250u;
    // 0x11a254: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB8A0u, 0x11A250u, 0x11A258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A258u;
label_11a258:
    // 0x11a258: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x11a258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11a25c: 0xc07ae78  jal         func_1EB9E0
    ctx->pc = 0x11A25Cu;
    SET_GPR_U32(ctx, 31, 0x11A264u);
    ctx->pc = 0x11A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A25Cu;
    // 0x11a260: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB9E0u, 0x11A25Cu, 0x11A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A264u;
label_11a264:
    // 0x11a264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11a264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11a268u;
}
