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

// Function: entry_00193c98
// Address: 0x193c98 - 0x193cc8
void entry_00193c98_0x193c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193c98_0x193c98");
#endif

    ctx->pc = 0x193c98u;

    // 0x193c98: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x193C98u;
    {
        const bool branch_taken_0x193c98 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x193C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C98u;
        // 0x193c9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193c98) {
            ctx->pc = 0x193CECu;
            return;
        }
    }
    ctx->pc = 0x193CA0u;
    // 0x193ca0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x193ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193ca4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x193CA4u;
    {
        const bool branch_taken_0x193ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193ca4) {
            ctx->pc = 0x193CC8u;
            return;
        }
    }
    ctx->pc = 0x193CACu;
    // 0x193cac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193cb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193cb4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cbc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193cbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193cc0: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193CC0u;
    SET_GPR_U32(ctx, 31, 0x193CC8u);
    ctx->pc = 0x193CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CC0u;
    // 0x193cc4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193CC0u, 0x193CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CC8u;
}
