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

// Function: entry_001521c4
// Address: 0x1521c4 - 0x1521f4
void entry_001521c4_0x1521c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001521c4_0x1521c4");
#endif

    ctx->pc = 0x1521c4u;

    // 0x1521c4: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1521c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1521c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1521c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1521cc: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1521ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1521d0: 0x0  nop
    ctx->pc = 0x1521d0u;
    // NOP
    // 0x1521d4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1521D4u;
    {
        const bool branch_taken_0x1521d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1521D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1521D4u;
        // 0x1521d8: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521d4) {
            ctx->pc = 0x1521F4u;
            return;
        }
    }
    ctx->pc = 0x1521DCu;
    // 0x1521dc: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x1521dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1521e0: 0x0  nop
    ctx->pc = 0x1521e0u;
    // NOP
    // 0x1521e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1521E4u;
    {
        const bool branch_taken_0x1521e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1521e4) {
            ctx->pc = 0x1521F4u;
            return;
        }
    }
    ctx->pc = 0x1521ECu;
    // 0x1521ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1521ECu;
    {
        const bool branch_taken_0x1521ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521ec) {
            ctx->pc = 0x15220Cu;
            return;
        }
    }
    ctx->pc = 0x1521F4u;
}
