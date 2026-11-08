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

// Function: entry_00193cec
// Address: 0x193cec - 0x193d14
void entry_00193cec_0x193cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193cec_0x193cec");
#endif

    ctx->pc = 0x193cecu;

    // 0x193cec: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x193CECu;
    {
        const bool branch_taken_0x193cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x193cec) {
            ctx->pc = 0x193D14u;
            return;
        }
    }
    ctx->pc = 0x193CF4u;
    // 0x193cf4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x193cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x193d00: 0x0  nop
    ctx->pc = 0x193d00u;
    // NOP
    // 0x193d04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x193d04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x193d08: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x193d08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x193d0c: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x193D0Cu;
    SET_GPR_U32(ctx, 31, 0x193D14u);
    ctx->pc = 0x193D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193D0Cu;
    // 0x193d10: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x193D0Cu, 0x193D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D14u;
}
