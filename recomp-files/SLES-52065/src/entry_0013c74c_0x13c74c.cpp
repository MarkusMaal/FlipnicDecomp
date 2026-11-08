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

// Function: entry_0013c74c
// Address: 0x13c74c - 0x13c78c
void entry_0013c74c_0x13c74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c74c_0x13c74c");
#endif

    switch (ctx->pc) {
        case 0x13c768u: goto label_13c768;
        case 0x13c774u: goto label_13c774;
        default: break;
    }

    ctx->pc = 0x13c74cu;

label_13c74c:
    // 0x13c74c: 0x0  nop
    ctx->pc = 0x13c74cu;
    // NOP
label_13c750:
    // 0x13c750: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x13c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_13c754:
    // 0x13c754: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13c754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13c758:
    // 0x13c758: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_13c75c:
    if (ctx->pc == 0x13C75Cu) {
        ctx->pc = 0x13C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C758u;
        // 0x13c75c: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C760u;
        goto label_13c760;
    }
    ctx->pc = 0x13C758u;
    {
        const bool branch_taken_0x13c758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C758u;
        // 0x13c75c: 0x266400b0  addiu       $a0, $s3, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c758) {
            ctx->pc = 0x13C68Cu;
            return;
        }
    }
    ctx->pc = 0x13C760u;
label_13c760:
    // 0x13c760: 0xc050910  jal         func_142440
label_13c764:
    if (ctx->pc == 0x13C764u) {
        ctx->pc = 0x13C768u;
        goto label_13c768;
    }
    ctx->pc = 0x13C760u;
    SET_GPR_U32(ctx, 31, 0x13C768u);
    ctx->pc = 0x142440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142440u, 0x13C760u, 0x13C768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C768u;
label_13c768:
    // 0x13c768: 0x266400b0  addiu       $a0, $s3, 0xB0
    ctx->pc = 0x13c768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 176));
label_13c76c:
    // 0x13c76c: 0xc050be0  jal         func_142F80
label_13c770:
    if (ctx->pc == 0x13C770u) {
        ctx->pc = 0x13C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C76Cu;
        // 0x13c770: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C774u;
        goto label_13c774;
    }
    ctx->pc = 0x13C76Cu;
    SET_GPR_U32(ctx, 31, 0x13C774u);
    ctx->pc = 0x13C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C76Cu;
    // 0x13c770: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x142F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142F80u, 0x13C76Cu, 0x13C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C774u;
label_13c774:
    // 0x13c774: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x13c774u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_13c778:
    // 0x13c778: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13c778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_13c77c:
    // 0x13c77c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c780:
    // 0x13c780: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x13c780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_13c784:
    // 0x13c784: 0x320f809  jalr        $t9
label_13c788:
    if (ctx->pc == 0x13C788u) {
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C78Cu;
        goto label_fallthrough_0x13c784;
    }
    ctx->pc = 0x13C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x13C78Cu);
        ctx->pc = 0x13C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C784u;
        // 0x13c788: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C784u, 0x13C78Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x13c784:
    ctx->pc = 0x13C78Cu;
}
