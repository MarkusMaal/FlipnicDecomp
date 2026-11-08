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

// Function: entry_001a60ac
// Address: 0x1a60ac - 0x1a60e0
void entry_001a60ac_0x1a60ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a60ac_0x1a60ac");
#endif

    switch (ctx->pc) {
        case 0x1a60d0u: goto label_1a60d0;
        default: break;
    }

    ctx->pc = 0x1a60acu;

    // 0x1a60ac: 0x0  nop
    ctx->pc = 0x1a60acu;
    // NOP
    // 0x1a60b0: 0xde8400c0  ld          $a0, 0xC0($s4)
    ctx->pc = 0x1a60b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x1a60b4: 0xde8300d8  ld          $v1, 0xD8($s4)
    ctx->pc = 0x1a60b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x1a60b8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1a60b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x1a60bc: 0x83182d  daddu       $v1, $a0, $v1
    ctx->pc = 0x1a60bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a60c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A60C0u;
    {
        const bool branch_taken_0x1a60c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A60C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60C0u;
        // 0x1a60c4: 0xfe8300c0  sd          $v1, 0xC0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 192), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a60c0) {
            ctx->pc = 0x1A60E0u;
            return;
        }
    }
    ctx->pc = 0x1A60C8u;
    // 0x1a60c8: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1A60C8u;
    SET_GPR_U32(ctx, 31, 0x1A60D0u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1A60C8u, 0x1A60D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60D0u;
label_1a60d0:
    // 0x1a60d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a60d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a60d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a60d8: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1A60D8u;
    SET_GPR_U32(ctx, 31, 0x1A60E0u);
    ctx->pc = 0x1A60DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60D8u;
    // 0x1a60dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1A60D8u, 0x1A60E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60E0u;
}
