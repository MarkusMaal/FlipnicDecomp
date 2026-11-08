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

// Function: entry_001fb570
// Address: 0x1fb570 - 0x1fb594
void entry_001fb570_0x1fb570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb570_0x1fb570");
#endif

    ctx->pc = 0x1fb570u;

    // 0x1fb570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fb570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fb574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fb574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb578: 0x46006040  add.s       $f1, $f12, $f0
    ctx->pc = 0x1fb578u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1fb57c: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1fb57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1fb580: 0x0  nop
    ctx->pc = 0x1fb580u;
    // NOP
    // 0x1fb584: 0x0  nop
    ctx->pc = 0x1fb584u;
    // NOP
    // 0x1fb588: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x1fb588u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1fb58c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1FB58Cu;
    {
        const bool branch_taken_0x1fb58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB58Cu;
        // 0x1fb590: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb58c) {
            ctx->pc = 0x1FB5ECu;
            return;
        }
    }
    ctx->pc = 0x1FB594u;
}
