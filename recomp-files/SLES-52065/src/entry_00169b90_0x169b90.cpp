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

// Function: entry_00169b90
// Address: 0x169b90 - 0x169bb0
void entry_00169b90_0x169b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169b90_0x169b90");
#endif

    ctx->pc = 0x169b90u;

    // 0x169b90: 0x92030222  lbu         $v1, 0x222($s0)
    ctx->pc = 0x169b90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x169b94: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169B94u;
    {
        const bool branch_taken_0x169b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x169b94) {
            ctx->pc = 0x169BB0u;
            return;
        }
    }
    ctx->pc = 0x169B9Cu;
    // 0x169b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x169b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x169ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ba4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x169ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169ba8: 0xc0425a4  jal         func_109690
    ctx->pc = 0x169BA8u;
    SET_GPR_U32(ctx, 31, 0x169BB0u);
    ctx->pc = 0x169BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169BA8u;
    // 0x169bac: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x169BA8u, 0x169BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169BB0u;
}
