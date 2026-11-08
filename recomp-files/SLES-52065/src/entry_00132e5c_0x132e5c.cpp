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

// Function: entry_00132e5c
// Address: 0x132e5c - 0x132e80
void entry_00132e5c_0x132e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132e5c_0x132e5c");
#endif

    ctx->pc = 0x132e5cu;

    // 0x132e5c: 0x0  nop
    ctx->pc = 0x132e5cu;
    // NOP
    // 0x132e60: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x132e60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x132e64: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x132e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132e68: 0x29260003  slti        $a2, $t1, 0x3
    ctx->pc = 0x132e68u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x132e6c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x132e6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x132e70: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x132E70u;
    {
        const bool branch_taken_0x132e70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x132E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E70u;
        // 0x132e74: 0xe5800000  swc1        $f0, 0x0($t4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e70) {
            ctx->pc = 0x132DDCu;
            return;
        }
    }
    ctx->pc = 0x132E78u;
    // 0x132e78: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x132e78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x132e7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x132e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x132e80u;
}
