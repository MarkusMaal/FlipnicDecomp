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

// Function: entry_00193d68
// Address: 0x193d68 - 0x193d90
void entry_00193d68_0x193d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193d68_0x193d68");
#endif

    switch (ctx->pc) {
        case 0x193d88u: goto label_193d88;
        default: break;
    }

    ctx->pc = 0x193d68u;

    // 0x193d68: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193d6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193d70: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x193d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x193d74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d7c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193d7cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193d80: 0xc053c00  jal         func_14F000
    ctx->pc = 0x193D80u;
    SET_GPR_U32(ctx, 31, 0x193D88u);
    ctx->pc = 0x193D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D80u;
    // 0x193d84: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x193D80u, 0x193D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D88u;
label_193d88:
    // 0x193d88: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x193D88u;
    {
        const bool branch_taken_0x193d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d88) {
            ctx->pc = 0x193DD4u;
            return;
        }
    }
    ctx->pc = 0x193D90u;
}
