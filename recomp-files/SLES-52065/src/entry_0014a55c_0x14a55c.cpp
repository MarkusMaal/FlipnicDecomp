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

// Function: entry_0014a55c
// Address: 0x14a55c - 0x14a5b8
void entry_0014a55c_0x14a55c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a55c_0x14a55c");
#endif

    switch (ctx->pc) {
        case 0x14a568u: goto label_14a568;
        case 0x14a58cu: goto label_14a58c;
        case 0x14a59cu: goto label_14a59c;
        default: break;
    }

    ctx->pc = 0x14a55cu;

    // 0x14a55c: 0x27a40820  addiu       $a0, $sp, 0x820
    ctx->pc = 0x14a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
    // 0x14a560: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A560u;
    SET_GPR_U32(ctx, 31, 0x14A568u);
    ctx->pc = 0x14A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A560u;
    // 0x14a564: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A560u, 0x14A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A568u;
label_14a568:
    // 0x14a568: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a56c: 0x27a40820  addiu       $a0, $sp, 0x820
    ctx->pc = 0x14a56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2080));
    // 0x14a570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a574: 0xafa2082c  sw          $v0, 0x82C($sp)
    ctx->pc = 0x14a574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2092), GPR_U32(ctx, 2));
    // 0x14a578: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14a578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a57c: 0xafa20830  sw          $v0, 0x830($sp)
    ctx->pc = 0x14a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2096), GPR_U32(ctx, 2));
    // 0x14a580: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a584: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14A584u;
    SET_GPR_U32(ctx, 31, 0x14A58Cu);
    ctx->pc = 0x14A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A584u;
    // 0x14a588: 0xafa20834  sw          $v0, 0x834($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2100), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD0u, 0x14A584u, 0x14A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A58Cu;
label_14a58c:
    // 0x14a58c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14a58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a590: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x14a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x14a594: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A594u;
    SET_GPR_U32(ctx, 31, 0x14A59Cu);
    ctx->pc = 0x14A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A594u;
    // 0x14a598: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A594u, 0x14A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A59Cu;
label_14a59c:
    // 0x14a59c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x14a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x14a5a0: 0x27a20360  addiu       $v0, $sp, 0x360
    ctx->pc = 0x14a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x14a5a4: 0xafa3036c  sw          $v1, 0x36C($sp)
    ctx->pc = 0x14a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 3));
    // 0x14a5a8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x14a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x14a5ac: 0xafa30370  sw          $v1, 0x370($sp)
    ctx->pc = 0x14a5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 3));
    // 0x14a5b0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x14a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x14a5b4: 0xafa30374  sw          $v1, 0x374($sp)
    ctx->pc = 0x14a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 884), GPR_U32(ctx, 3));
    ctx->pc = 0x14a5b8u;
}
