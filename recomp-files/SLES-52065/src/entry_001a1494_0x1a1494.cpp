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

// Function: entry_001a1494
// Address: 0x1a1494 - 0x1a14d0
void entry_001a1494_0x1a1494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1494_0x1a1494");
#endif

    switch (ctx->pc) {
        case 0x1a14c8u: goto label_1a14c8;
        default: break;
    }

    ctx->pc = 0x1a1494u;

    // 0x1a1494: 0x0  nop
    ctx->pc = 0x1a1494u;
    // NOP
    // 0x1a1498: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a149c: 0x2a03000a  slti        $v1, $s0, 0xA
    ctx->pc = 0x1a149cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1a14a0: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A14A0u;
    {
        const bool branch_taken_0x1a14a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A14A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14A0u;
        // 0x1a14a4: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14a0) {
            ctx->pc = 0x1A144Cu;
            return;
        }
    }
    ctx->pc = 0x1A14A8u;
    // 0x1a14a8: 0xae800694  sw          $zero, 0x694($s4)
    ctx->pc = 0x1a14a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1684), GPR_U32(ctx, 0));
    // 0x1a14ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1a14acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a14b0: 0x8e840678  lw          $a0, 0x678($s4)
    ctx->pc = 0x1a14b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1656)));
    // 0x1a14b4: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A14B4u;
    {
        const bool branch_taken_0x1a14b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a14b4) {
            ctx->pc = 0x1A14D0u;
            return;
        }
    }
    ctx->pc = 0x1A14BCu;
    // 0x1a14bc: 0x8e8506ac  lw          $a1, 0x6AC($s4)
    ctx->pc = 0x1a14bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1708)));
    // 0x1a14c0: 0xc064fb8  jal         func_193EE0
    ctx->pc = 0x1A14C0u;
    SET_GPR_U32(ctx, 31, 0x1A14C8u);
    ctx->pc = 0x1A14C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A14C0u;
    // 0x1a14c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193EE0u, 0x1A14C0u, 0x1A14C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A14C8u;
label_1a14c8:
    // 0x1a14c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1A14C8u;
    {
        const bool branch_taken_0x1a14c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A14CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A14C8u;
        // 0x1a14cc: 0x928308b8  lbu         $v1, 0x8B8($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a14c8) {
            ctx->pc = 0x1A1544u;
            return;
        }
    }
    ctx->pc = 0x1A14D0u;
}
