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

// Function: entry_00189c3c
// Address: 0x189c3c - 0x189c68
void entry_00189c3c_0x189c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189c3c_0x189c3c");
#endif

    switch (ctx->pc) {
        case 0x189c54u: goto label_189c54;
        case 0x189c5cu: goto label_189c5c;
        default: break;
    }

    ctx->pc = 0x189c3cu;

    // 0x189c3c: 0x0  nop
    ctx->pc = 0x189c3cu;
    // NOP
    // 0x189c40: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x189c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x189c44: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x189c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x189c48: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x189c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189c4c: 0xc045c38  jal         func_1170E0
    ctx->pc = 0x189C4Cu;
    SET_GPR_U32(ctx, 31, 0x189C54u);
    ctx->pc = 0x189C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C4Cu;
    // 0x189c50: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170E0u, 0x189C4Cu, 0x189C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C54u;
label_189c54:
    // 0x189c54: 0xc045c58  jal         func_117160
    ctx->pc = 0x189C54u;
    SET_GPR_U32(ctx, 31, 0x189C5Cu);
    ctx->pc = 0x189C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189C54u;
    // 0x189c58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117160u, 0x189C54u, 0x189C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189C5Cu;
label_189c5c:
    // 0x189c5c: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x189C5Cu;
    {
        const bool branch_taken_0x189c5c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x189c5c) {
            ctx->pc = 0x189C68u;
            return;
        }
    }
    ctx->pc = 0x189C64u;
    // 0x189c64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x189c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x189c68u;
}
