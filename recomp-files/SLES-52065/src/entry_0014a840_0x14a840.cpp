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

// Function: entry_0014a840
// Address: 0x14a840 - 0x14a898
void entry_0014a840_0x14a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a840_0x14a840");
#endif

    switch (ctx->pc) {
        case 0x14a848u: goto label_14a848;
        case 0x14a86cu: goto label_14a86c;
        case 0x14a87cu: goto label_14a87c;
        default: break;
    }

    ctx->pc = 0x14a840u;

    // 0x14a840: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A840u;
    SET_GPR_U32(ctx, 31, 0x14A848u);
    ctx->pc = 0x14A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A840u;
    // 0x14a844: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A840u, 0x14A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A848u;
label_14a848:
    // 0x14a848: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x14a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x14a84c: 0x2342823  subu        $a1, $s1, $s4
    ctx->pc = 0x14a84cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x14a850: 0x27a40860  addiu       $a0, $sp, 0x860
    ctx->pc = 0x14a850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
    // 0x14a854: 0xafa2086c  sw          $v0, 0x86C($sp)
    ctx->pc = 0x14a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2156), GPR_U32(ctx, 2));
    // 0x14a858: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x14a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x14a85c: 0xafa20870  sw          $v0, 0x870($sp)
    ctx->pc = 0x14a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 2));
    // 0x14a860: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a864: 0xc052af4  jal         func_14ABD0
    ctx->pc = 0x14A864u;
    SET_GPR_U32(ctx, 31, 0x14A86Cu);
    ctx->pc = 0x14A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A864u;
    // 0x14a868: 0xafa20874  sw          $v0, 0x874($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2164), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ABD0u, 0x14A864u, 0x14A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A86Cu;
label_14a86c:
    // 0x14a86c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14a86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a870: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x14a874: 0xc04fcbc  jal         func_13F2F0
    ctx->pc = 0x14A874u;
    SET_GPR_U32(ctx, 31, 0x14A87Cu);
    ctx->pc = 0x14A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A874u;
    // 0x14a878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F2F0u, 0x14A874u, 0x14A87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A87Cu;
label_14a87c:
    // 0x14a87c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14a87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14a880: 0x27a803e0  addiu       $t0, $sp, 0x3E0
    ctx->pc = 0x14a880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
    // 0x14a884: 0xafa303ec  sw          $v1, 0x3EC($sp)
    ctx->pc = 0x14a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1004), GPR_U32(ctx, 3));
    // 0x14a888: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x14a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x14a88c: 0xafa303f0  sw          $v1, 0x3F0($sp)
    ctx->pc = 0x14a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 3));
    // 0x14a890: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x14a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x14a894: 0xafa303f4  sw          $v1, 0x3F4($sp)
    ctx->pc = 0x14a894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 3));
    ctx->pc = 0x14a898u;
}
