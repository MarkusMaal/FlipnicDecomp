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

// Function: entry_001a6220
// Address: 0x1a6220 - 0x1a6240
void entry_001a6220_0x1a6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6220_0x1a6220");
#endif

    switch (ctx->pc) {
        case 0x1a6238u: goto label_1a6238;
        default: break;
    }

    ctx->pc = 0x1a6220u;

    // 0x1a6220: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1a6220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a6224: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a6228: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1a6228u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1a622c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1a622cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1a6230: 0xc053c2c  jal         func_14F0B0
    ctx->pc = 0x1A6230u;
    SET_GPR_U32(ctx, 31, 0x1A6238u);
    ctx->pc = 0x1A6234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6230u;
    // 0x1a6234: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F0B0u, 0x1A6230u, 0x1A6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6238u;
label_1a6238:
    // 0x1a6238: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1A6238u;
    {
        const bool branch_taken_0x1a6238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A623Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6238u;
        // 0x1a623c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6238) {
            ctx->pc = 0x1A662Cu;
            return;
        }
    }
    ctx->pc = 0x1A6240u;
}
