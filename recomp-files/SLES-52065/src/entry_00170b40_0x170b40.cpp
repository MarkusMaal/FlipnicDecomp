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

// Function: entry_00170b40
// Address: 0x170b40 - 0x170b64
void entry_00170b40_0x170b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170b40_0x170b40");
#endif

    ctx->pc = 0x170b40u;

    // 0x170b40: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x170b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170b44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x170B44u;
    {
        const bool branch_taken_0x170b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170B44u;
        // 0x170b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b44) {
            ctx->pc = 0x170B64u;
            return;
        }
    }
    ctx->pc = 0x170B4Cu;
    // 0x170b4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x170b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x170b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170b54: 0x0  nop
    ctx->pc = 0x170b54u;
    // NOP
    // 0x170b58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x170b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x170b5c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x170b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x170b60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170b64u;
}
