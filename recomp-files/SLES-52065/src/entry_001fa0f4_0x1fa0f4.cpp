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

// Function: entry_001fa0f4
// Address: 0x1fa0f4 - 0x1fa10c
void entry_001fa0f4_0x1fa0f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa0f4_0x1fa0f4");
#endif

    ctx->pc = 0x1fa0f4u;

    // 0x1fa0f4: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1fa0f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1fa0f8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa0fc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1fa0fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1fa100: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1fa104: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1FA104u;
    {
        const bool branch_taken_0x1fa104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA104u;
        // 0x1fa108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa104) {
            ctx->pc = 0x1FA3F8u;
            return;
        }
    }
    ctx->pc = 0x1FA10Cu;
}
