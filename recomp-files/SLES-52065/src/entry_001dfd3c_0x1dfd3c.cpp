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

// Function: entry_001dfd3c
// Address: 0x1dfd3c - 0x1dfd68
void entry_001dfd3c_0x1dfd3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfd3c_0x1dfd3c");
#endif

    switch (ctx->pc) {
        case 0x1dfd54u: goto label_1dfd54;
        default: break;
    }

    ctx->pc = 0x1dfd3cu;

label_1dfd3c:
    // 0x1dfd3c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1dfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_1dfd40:
    // 0x1dfd40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1dfd44:
    // 0x1dfd44: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1dfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1dfd48:
    // 0x1dfd48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dfd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1dfd4c:
    // 0x1dfd4c: 0x60f809  jalr        $v1
label_1dfd50:
    if (ctx->pc == 0x1DFD50u) {
        ctx->pc = 0x1DFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD4Cu;
        // 0x1dfd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD54u;
        goto label_1dfd54;
    }
    ctx->pc = 0x1DFD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DFD54u);
        ctx->pc = 0x1DFD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD4Cu;
        // 0x1dfd50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFD4Cu, 0x1DFD54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DFD54u;
label_1dfd54:
    // 0x1dfd54: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x1dfd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_1dfd58:
    // 0x1dfd58: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_1dfd5c:
    if (ctx->pc == 0x1DFD5Cu) {
        ctx->pc = 0x1DFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD58u;
        // 0x1dfd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD60u;
        goto label_1dfd60;
    }
    ctx->pc = 0x1DFD58u;
    {
        const bool branch_taken_0x1dfd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD58u;
        // 0x1dfd5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd58) {
            ctx->pc = 0x1DFDF8u;
            return;
        }
    }
    ctx->pc = 0x1DFD60u;
label_1dfd60:
    // 0x1dfd60: 0x10000003  b           . + 4 + (0x3 << 2)
label_1dfd64:
    if (ctx->pc == 0x1DFD64u) {
        ctx->pc = 0x1DFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD60u;
        // 0x1dfd64: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DFD68u;
        goto label_fallthrough_0x1dfd60;
    }
    ctx->pc = 0x1DFD60u;
    {
        const bool branch_taken_0x1dfd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFD60u;
        // 0x1dfd64: 0x26460060  addiu       $a2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd60) {
            ctx->pc = 0x1DFD70u;
            return;
        }
    }
label_fallthrough_0x1dfd60:
    ctx->pc = 0x1DFD68u;
}
