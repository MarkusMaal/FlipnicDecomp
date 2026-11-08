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

// Function: entry_0019ca10
// Address: 0x19ca10 - 0x19ca84
void entry_0019ca10_0x19ca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ca10_0x19ca10");
#endif

    switch (ctx->pc) {
        case 0x19ca38u: goto label_19ca38;
        case 0x19ca50u: goto label_19ca50;
        case 0x19ca64u: goto label_19ca64;
        default: break;
    }

    ctx->pc = 0x19ca10u;

label_19ca10:
    // 0x19ca10: 0x8e43068c  lw          $v1, 0x68C($s2)
    ctx->pc = 0x19ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1676)));
label_19ca14:
    // 0x19ca14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19ca14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ca18:
    // 0x19ca18: 0x1466001a  bne         $v1, $a2, . + 4 + (0x1A << 2)
label_19ca1c:
    if (ctx->pc == 0x19CA1Cu) {
        ctx->pc = 0x19CA20u;
        goto label_19ca20;
    }
    ctx->pc = 0x19CA18u;
    {
        const bool branch_taken_0x19ca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x19ca18) {
            ctx->pc = 0x19CA84u;
            return;
        }
    }
    ctx->pc = 0x19CA20u;
label_19ca20:
    // 0x19ca20: 0x8e430688  lw          $v1, 0x688($s2)
    ctx->pc = 0x19ca20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19ca24:
    // 0x19ca24: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_19ca28:
    if (ctx->pc == 0x19CA28u) {
        ctx->pc = 0x19CA2Cu;
        goto label_19ca2c;
    }
    ctx->pc = 0x19CA24u;
    {
        const bool branch_taken_0x19ca24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca24) {
            ctx->pc = 0x19CA84u;
            return;
        }
    }
    ctx->pc = 0x19CA2Cu;
label_19ca2c:
    // 0x19ca2c: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19ca2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19ca30:
    // 0x19ca30: 0xc064c20  jal         func_193080
label_19ca34:
    if (ctx->pc == 0x19CA34u) {
        ctx->pc = 0x19CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA30u;
        // 0x19ca34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA38u;
        goto label_19ca38;
    }
    ctx->pc = 0x19CA30u;
    SET_GPR_U32(ctx, 31, 0x19CA38u);
    ctx->pc = 0x19CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA30u;
    // 0x19ca34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193080u, 0x19CA30u, 0x19CA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA38u;
label_19ca38:
    // 0x19ca38: 0x8e430688  lw          $v1, 0x688($s2)
    ctx->pc = 0x19ca38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19ca3c:
    // 0x19ca3c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19ca40:
    // 0x19ca40: 0x8e450670  lw          $a1, 0x670($s2)
    ctx->pc = 0x19ca40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
label_19ca44:
    // 0x19ca44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ca44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19ca48:
    // 0x19ca48: 0xc064c4c  jal         func_193130
label_19ca4c:
    if (ctx->pc == 0x19CA4Cu) {
        ctx->pc = 0x19CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA48u;
        // 0x19ca4c: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA50u;
        goto label_19ca50;
    }
    ctx->pc = 0x19CA48u;
    SET_GPR_U32(ctx, 31, 0x19CA50u);
    ctx->pc = 0x19CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA48u;
    // 0x19ca4c: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193130u, 0x19CA48u, 0x19CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA50u;
label_19ca50:
    // 0x19ca50: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x19ca50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19ca54:
    // 0x19ca54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19ca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19ca58:
    // 0x19ca58: 0x8f390078  lw          $t9, 0x78($t9)
    ctx->pc = 0x19ca58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 120)));
label_19ca5c:
    // 0x19ca5c: 0x320f809  jalr        $t9
label_19ca60:
    if (ctx->pc == 0x19CA60u) {
        ctx->pc = 0x19CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA5Cu;
        // 0x19ca60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA64u;
        goto label_19ca64;
    }
    ctx->pc = 0x19CA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x19CA64u);
        ctx->pc = 0x19CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA5Cu;
        // 0x19ca60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CA5Cu, 0x19CA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CA64u;
label_19ca64:
    // 0x19ca64: 0x8e440688  lw          $a0, 0x688($s2)
    ctx->pc = 0x19ca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1672)));
label_19ca68:
    // 0x19ca68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19ca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19ca6c:
    // 0x19ca6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_19ca70:
    // 0x19ca70: 0xae440688  sw          $a0, 0x688($s2)
    ctx->pc = 0x19ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1672), GPR_U32(ctx, 4));
label_19ca74:
    // 0x19ca74: 0x8e440698  lw          $a0, 0x698($s2)
    ctx->pc = 0x19ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1688)));
label_19ca78:
    // 0x19ca78: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_19ca7c:
    // 0x19ca7c: 0xae440698  sw          $a0, 0x698($s2)
    ctx->pc = 0x19ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1688), GPR_U32(ctx, 4));
label_19ca80:
    // 0x19ca80: 0xae430674  sw          $v1, 0x674($s2)
    ctx->pc = 0x19ca80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 3));
    ctx->pc = 0x19ca84u;
}
