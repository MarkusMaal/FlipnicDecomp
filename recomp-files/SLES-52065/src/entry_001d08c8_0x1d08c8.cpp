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

// Function: entry_001d08c8
// Address: 0x1d08c8 - 0x1d08fc
void entry_001d08c8_0x1d08c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d08c8_0x1d08c8");
#endif

    switch (ctx->pc) {
        case 0x1d08f8u: goto label_1d08f8;
        default: break;
    }

    ctx->pc = 0x1d08c8u;

    // 0x1d08c8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1d08c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1d08cc: 0x240200b3  addiu       $v0, $zero, 0xB3
    ctx->pc = 0x1d08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x1d08d0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D08D0u;
    {
        const bool branch_taken_0x1d08d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08D0u;
        // 0x1d08d4: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08d0) {
            ctx->pc = 0x1D08FCu;
            return;
        }
    }
    ctx->pc = 0x1D08D8u;
    // 0x1d08d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d08d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d08dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d08dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1d08e0: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1d08e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1d08e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d08e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d08e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d08ec: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1d08ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d08f0: 0xc053c00  jal         func_14F000
    ctx->pc = 0x1D08F0u;
    SET_GPR_U32(ctx, 31, 0x1D08F8u);
    ctx->pc = 0x1D08F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08F0u;
    // 0x1d08f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F000u, 0x1D08F0u, 0x1D08F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D08F8u;
label_1d08f8:
    // 0x1d08f8: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1d08f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    ctx->pc = 0x1d08fcu;
}
