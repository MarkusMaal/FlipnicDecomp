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

// Function: entry_0016c784
// Address: 0x16c784 - 0x16c79c
void entry_0016c784_0x16c784(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c784_0x16c784");
#endif

    ctx->pc = 0x16c784u;

    // 0x16c784: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16c784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c788: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x16C788u;
    {
        const bool branch_taken_0x16c788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c788) {
            ctx->pc = 0x16C84Cu;
            return;
        }
    }
    ctx->pc = 0x16C790u;
    // 0x16c790: 0xc6200210  lwc1        $f0, 0x210($s1)
    ctx->pc = 0x16c790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16c794: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x16C794u;
    {
        const bool branch_taken_0x16c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C794u;
        // 0x16c798: 0xe620022c  swc1        $f0, 0x22C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c794) {
            ctx->pc = 0x16C84Cu;
            return;
        }
    }
    ctx->pc = 0x16C79Cu;
}
