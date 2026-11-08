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

// Function: entry_0014a0c8
// Address: 0x14a0c8 - 0x14a12c
void entry_0014a0c8_0x14a0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a0c8_0x14a0c8");
#endif

    switch (ctx->pc) {
        case 0x14a104u: goto label_14a104;
        default: break;
    }

    ctx->pc = 0x14a0c8u;

    // 0x14a0c8: 0x1020004a  beqz        $at, . + 4 + (0x4A << 2)
    ctx->pc = 0x14A0C8u;
    {
        const bool branch_taken_0x14a0c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0C8u;
        // 0x14a0cc: 0x27a30130  addiu       $v1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0c8) {
            ctx->pc = 0x14A1F4u;
            return;
        }
    }
    ctx->pc = 0x14A0D0u;
    // 0x14a0d0: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x14a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
    // 0x14a0d4: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x14a0d4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a0d8: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x14a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x14a0dc: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x14a0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
    // 0x14a0e0: 0x27a40500  addiu       $a0, $sp, 0x500
    ctx->pc = 0x14a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1280));
    // 0x14a0e4: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x14a0e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x14a0e8: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x14a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
    // 0x14a0ec: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x14a0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x14a0f0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x14a0f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a0f4: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x14a0f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14a0f8: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x14a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x14a0fc: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A0FCu;
    SET_GPR_U32(ctx, 31, 0x14A104u);
    ctx->pc = 0x14A100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A0FCu;
    // 0x14a100: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A0FCu, 0x14A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A104u;
label_14a104:
    // 0x14a104: 0x27b2054c  addiu       $s2, $sp, 0x54C
    ctx->pc = 0x14a104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1356));
    // 0x14a108: 0x27b10550  addiu       $s1, $sp, 0x550
    ctx->pc = 0x14a108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1360));
    // 0x14a10c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a110: 0x27b60554  addiu       $s6, $sp, 0x554
    ctx->pc = 0x14a110u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1364));
    // 0x14a114: 0xafa3050c  sw          $v1, 0x50C($sp)
    ctx->pc = 0x14a114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1292), GPR_U32(ctx, 3));
    // 0x14a118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a11c: 0xafa30510  sw          $v1, 0x510($sp)
    ctx->pc = 0x14a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1296), GPR_U32(ctx, 3));
    // 0x14a120: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x14a120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a124: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14A124u;
    {
        const bool branch_taken_0x14a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A124u;
        // 0x14a128: 0xafa30514  sw          $v1, 0x514($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a124) {
            ctx->pc = 0x14A1A0u;
            return;
        }
    }
    ctx->pc = 0x14A12Cu;
}
