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

// Function: entry_00193d3c
// Address: 0x193d3c - 0x193d68
void entry_00193d3c_0x193d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d3c_0x193d3c");
#endif

    ctx->pc = 0x193d3cu;

    // 0x193d3c: 0x14e00014  bnez        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x193D3Cu;
    {
        const bool branch_taken_0x193d3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x193D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193D3Cu;
        // 0x193d40: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d3c) {
            ctx->pc = 0x193D90u;
            return;
        }
    }
    ctx->pc = 0x193D44u;
    // 0x193d44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x193d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193d48: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193D48u;
    {
        const bool branch_taken_0x193d48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193d48) {
            ctx->pc = 0x193D68u;
            return;
        }
    }
    ctx->pc = 0x193D50u;
    // 0x193d50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193d58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193d5c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193d5cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193d60: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193D60u;
    SET_GPR_U32(ctx, 31, 0x193D68u);
    ctx->pc = 0x193D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D60u;
    // 0x193d64: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193D60u, 0x193D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D68u;
}
