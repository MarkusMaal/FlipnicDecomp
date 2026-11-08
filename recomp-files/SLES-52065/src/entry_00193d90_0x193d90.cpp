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

// Function: entry_00193d90
// Address: 0x193d90 - 0x193db4
void entry_00193d90_0x193d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d90_0x193d90");
#endif

    ctx->pc = 0x193d90u;

    // 0x193d90: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193D90u;
    {
        const bool branch_taken_0x193d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193d90) {
            ctx->pc = 0x193DB4u;
            return;
        }
    }
    ctx->pc = 0x193D98u;
    // 0x193d98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193da0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193da4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x193da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193da8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193da8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193dac: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193DACu;
    SET_GPR_U32(ctx, 31, 0x193DB4u);
    ctx->pc = 0x193DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193DACu;
    // 0x193db0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193DACu, 0x193DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DB4u;
}
