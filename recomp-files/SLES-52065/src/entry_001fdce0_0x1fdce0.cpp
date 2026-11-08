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

// Function: entry_001fdce0
// Address: 0x1fdce0 - 0x1fdd14
void entry_001fdce0_0x1fdce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fdce0_0x1fdce0");
#endif

    switch (ctx->pc) {
        case 0x1fdd10u: goto label_1fdd10;
        default: break;
    }

    ctx->pc = 0x1fdce0u;

    // 0x1fdce0: 0x230102f  dsubu       $v0, $s1, $s0
    ctx->pc = 0x1fdce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) - GPR_U64(ctx, 16));
    // 0x1fdce4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1fdce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1fdce8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1fdcec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fdcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fdcf0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1fdcf4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1fdcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1fdcf8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fdcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fdcfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fdcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdd00: 0x8c62ddf8  lw          $v0, -0x2208($v1)
    ctx->pc = 0x1fdd00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21DDF8u));
    // 0x1fdd04: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1fdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1fdd08: 0xc07fe9e  jal         func_1FFA78
    ctx->pc = 0x1FDD08u;
    SET_GPR_U32(ctx, 31, 0x1FDD10u);
    ctx->pc = 0x1FDD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDD08u;
    // 0x1fdd0c: 0xac62ddf8  sw          $v0, -0x2208($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958584), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFA78u, 0x1FDD08u, 0x1FDD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDD10u;
label_1fdd10:
    // 0x1fdd10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1fdd14u;
}
