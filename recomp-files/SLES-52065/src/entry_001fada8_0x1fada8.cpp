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

// Function: entry_001fada8
// Address: 0x1fada8 - 0x1fadc0
void entry_001fada8_0x1fada8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fada8_0x1fada8");
#endif

    ctx->pc = 0x1fada8u;

    // 0x1fada8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fada8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fadac: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1fadacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fadb0: 0x4c2000b  bltzl       $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FADB0u;
    {
        const bool branch_taken_0x1fadb0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1fadb0) {
            ctx->pc = 0x1FADB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FADB0u;
            // 0x1fadb4: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FADE0u;
            return;
        }
    }
    ctx->pc = 0x1FADB8u;
    // 0x1fadb8: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1fadb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1fadbc: 0x0  nop
    ctx->pc = 0x1fadbcu;
    // NOP
    ctx->pc = 0x1fadc0u;
}
