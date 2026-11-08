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

// Function: entry_001fa164
// Address: 0x1fa164 - 0x1fa17c
void entry_001fa164_0x1fa164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa164_0x1fa164");
#endif

    ctx->pc = 0x1fa164u;

    // 0x1fa164: 0x46016001  sub.s       $f0, $f12, $f1
    ctx->pc = 0x1fa164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1fa168: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1fa168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1fa16c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1fa16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1fa170: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1fa170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1fa174: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1FA174u;
    {
        const bool branch_taken_0x1fa174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA174u;
        // 0x1fa178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa174) {
            ctx->pc = 0x1FA3F8u;
            return;
        }
    }
    ctx->pc = 0x1FA17Cu;
}
