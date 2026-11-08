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

// Function: caseD_0
// Address: 0x1c693c - 0x1c6968
void caseD_0_0x1c693c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1c693c");
#endif

    switch (ctx->pc) {
        case 0x1c6948u: goto label_1c6948;
        default: break;
    }

    ctx->pc = 0x1c693cu;

    // 0x1c693c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6940: 0xc071e10  jal         func_1C7840
    ctx->pc = 0x1C6940u;
    SET_GPR_U32(ctx, 31, 0x1C6948u);
    ctx->pc = 0x1C6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6940u;
    // 0x1c6944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7840u, 0x1C6940u, 0x1C6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6948u;
label_1c6948:
    // 0x1c6948: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c694c: 0x8022f898  lb          $v0, -0x768($at)
    ctx->pc = 0x1c694cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x36F898u));
    // 0x1c6950: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6950u;
    {
        const bool branch_taken_0x1c6950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6950u;
        // 0x1c6954: 0x3c010037  lui         $at, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6950) {
            ctx->pc = 0x1C6968u;
            return;
        }
    }
    ctx->pc = 0x1C6958u;
    // 0x1c6958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c695c: 0xa020f890  sb          $zero, -0x770($at)
    ctx->pc = 0x1c695cu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294965392), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6960: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6964: 0xa022f898  sb          $v0, -0x768($at)
    ctx->pc = 0x1c6964u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F898u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F898u, _value); } while (0);
    ctx->pc = 0x1c6968u;
}
