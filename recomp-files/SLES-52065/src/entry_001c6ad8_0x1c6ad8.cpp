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

// Function: entry_001c6ad8
// Address: 0x1c6ad8 - 0x1c6b04
void entry_001c6ad8_0x1c6ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6ad8_0x1c6ad8");
#endif

    switch (ctx->pc) {
        case 0x1c6af4u: goto label_1c6af4;
        default: break;
    }

    ctx->pc = 0x1c6ad8u;

    // 0x1c6ad8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6adc: 0x9022f8a0  lbu         $v0, -0x760($at)
    ctx->pc = 0x1c6adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x36F8A0u));
    // 0x1c6ae0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6AE0u;
    {
        const bool branch_taken_0x1c6ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6AE0u;
        // 0x1c6ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6ae0) {
            ctx->pc = 0x1C6B04u;
            return;
        }
    }
    ctx->pc = 0x1C6AE8u;
    // 0x1c6ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6aec: 0xc071e1c  jal         func_1C7870
    ctx->pc = 0x1C6AECu;
    SET_GPR_U32(ctx, 31, 0x1C6AF4u);
    ctx->pc = 0x1C6AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6AECu;
    // 0x1c6af0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7870u, 0x1C6AECu, 0x1C6AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6AF4u;
label_1c6af4:
    // 0x1c6af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c6af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6af8: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1c6af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1c6afc: 0xa022f8a0  sb          $v0, -0x760($at)
    ctx->pc = 0x1c6afcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F8A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F8A0u, _value); } while (0);
    // 0x1c6b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c6b04u;
}
