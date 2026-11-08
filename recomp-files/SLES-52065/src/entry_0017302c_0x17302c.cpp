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

// Function: entry_0017302c
// Address: 0x17302c - 0x17304c
void entry_0017302c_0x17302c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017302c_0x17302c");
#endif

    ctx->pc = 0x17302cu;

    // 0x17302c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17302cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x173030: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x173030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x173034: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x173034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x173038: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x173038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x17303c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17303Cu;
    {
        const bool branch_taken_0x17303c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x17303c) {
            ctx->pc = 0x17304Cu;
            return;
        }
    }
    ctx->pc = 0x173044u;
    // 0x173044: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173044u;
    {
        const bool branch_taken_0x173044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173044u;
        // 0x173048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173044) {
            ctx->pc = 0x173068u;
            return;
        }
    }
    ctx->pc = 0x17304Cu;
}
