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

// Function: entry_00167c90
// Address: 0x167c90 - 0x167ca8
void entry_00167c90_0x167c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167c90_0x167c90");
#endif

    ctx->pc = 0x167c90u;

    // 0x167c90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x167c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x167c94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x167c98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167c9c: 0x8065002b  lb          $a1, 0x2B($v1)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 43)));
    // 0x167ca0: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167CA0u;
    SET_GPR_U32(ctx, 31, 0x167CA8u);
    ctx->pc = 0x167CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167CA0u;
    // 0x167ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167CA0u, 0x167CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CA8u;
}
