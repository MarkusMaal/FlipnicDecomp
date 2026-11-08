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

// Function: entry_001b8790
// Address: 0x1b8790 - 0x1b87cc
void entry_001b8790_0x1b8790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8790_0x1b8790");
#endif

    switch (ctx->pc) {
        case 0x1b87a8u: goto label_1b87a8;
        case 0x1b87c0u: goto label_1b87c0;
        default: break;
    }

    ctx->pc = 0x1b8790u;

    // 0x1b8790: 0x8022f2a8  lb          $v0, -0xD58($at)
    ctx->pc = 0x1b8790u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294963880)));
    // 0x1b8794: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B8794u;
    {
        const bool branch_taken_0x1b8794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b8794) {
            ctx->pc = 0x1B87CCu;
            return;
        }
    }
    ctx->pc = 0x1B879Cu;
    // 0x1b879c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x1b879cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x1b87a0: 0xc06e244  jal         func_1B8910
    ctx->pc = 0x1B87A0u;
    SET_GPR_U32(ctx, 31, 0x1B87A8u);
    ctx->pc = 0x1B87A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87A0u;
    // 0x1b87a4: 0x2484f2b0  addiu       $a0, $a0, -0xD50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8910u, 0x1B87A0u, 0x1B87A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87A8u;
label_1b87a8:
    // 0x1b87a8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1b87a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
    // 0x1b87ac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x1b87acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x1b87b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b87b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b87b4: 0x24a589b0  addiu       $a1, $a1, -0x7650
    ctx->pc = 0x1b87b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937008));
    // 0x1b87b8: 0xc07a540  jal         func_1E9500
    ctx->pc = 0x1B87B8u;
    SET_GPR_U32(ctx, 31, 0x1B87C0u);
    ctx->pc = 0x1B87BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B87B8u;
    // 0x1b87bc: 0x24c6f298  addiu       $a2, $a2, -0xD68 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9500u, 0x1B87B8u, 0x1B87C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B87C0u;
label_1b87c0:
    // 0x1b87c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b87c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b87c4: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1b87c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
    // 0x1b87c8: 0xa022f2a8  sb          $v0, -0xD58($at)
    ctx->pc = 0x1b87c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x36F2A8u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x36F2A8u, _value); } while (0);
    ctx->pc = 0x1b87ccu;
}
