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

// Function: entry_00166354
// Address: 0x166354 - 0x166370
void entry_00166354_0x166354(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00166354_0x166354");
#endif

    ctx->pc = 0x166354u;

    // 0x166354: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x166354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166358: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x166358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16635c: 0x0  nop
    ctx->pc = 0x16635cu;
    // NOP
    // 0x166360: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x166360u;
    {
        const bool branch_taken_0x166360 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x166364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166360u;
        // 0x166364: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166360) {
            ctx->pc = 0x166370u;
            return;
        }
    }
    ctx->pc = 0x166368u;
    // 0x166368: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x166368u;
    {
        const bool branch_taken_0x166368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166368u;
        // 0x16636c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166368) {
            ctx->pc = 0x166438u;
            return;
        }
    }
    ctx->pc = 0x166370u;
}
