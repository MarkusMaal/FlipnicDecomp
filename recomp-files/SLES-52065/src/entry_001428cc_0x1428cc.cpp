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

// Function: entry_001428cc
// Address: 0x1428cc - 0x142904
void entry_001428cc_0x1428cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001428cc_0x1428cc");
#endif

    switch (ctx->pc) {
        case 0x1428ecu: goto label_1428ec;
        default: break;
    }

    ctx->pc = 0x1428ccu;

    // 0x1428cc: 0x0  nop
    ctx->pc = 0x1428ccu;
    // NOP
    // 0x1428d0: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x1428d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1428d4: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1428D4u;
    {
        const bool branch_taken_0x1428d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1428d4) {
            ctx->pc = 0x142904u;
            return;
        }
    }
    ctx->pc = 0x1428DCu;
    // 0x1428dc: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x1428dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1428e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1428e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1428e4: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x1428E4u;
    SET_GPR_U32(ctx, 31, 0x1428ECu);
    ctx->pc = 0x1428E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1428E4u;
    // 0x1428e8: 0xc44c007c  lwc1        $f12, 0x7C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x1428E4u, 0x1428ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428ECu;
label_1428ec:
    // 0x1428ec: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x1428ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1428f0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x1428f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1428f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1428f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1428f8: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1428fc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1428fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x142900: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x142900u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x142904u;
}
