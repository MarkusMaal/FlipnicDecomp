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

// Function: entry_00172ff0
// Address: 0x172ff0 - 0x173010
void entry_00172ff0_0x172ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172ff0_0x172ff0");
#endif

    ctx->pc = 0x172ff0u;

    // 0x172ff0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x172ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x172ff4: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x172ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x172ff8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x172ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x172ffc: 0x8c832cd0  lw          $v1, 0x2CD0($a0)
    ctx->pc = 0x172ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    // 0x173000: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173000u;
    {
        const bool branch_taken_0x173000 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x173000) {
            ctx->pc = 0x173010u;
            return;
        }
    }
    ctx->pc = 0x173008u;
    // 0x173008: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173008u;
    {
        const bool branch_taken_0x173008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173008u;
        // 0x17300c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173008) {
            ctx->pc = 0x17302Cu;
            return;
        }
    }
    ctx->pc = 0x173010u;
}
