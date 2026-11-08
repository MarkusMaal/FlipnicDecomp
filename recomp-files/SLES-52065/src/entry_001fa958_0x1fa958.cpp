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

// Function: entry_001fa958
// Address: 0x1fa958 - 0x1fa974
void entry_001fa958_0x1fa958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa958_0x1fa958");
#endif

    ctx->pc = 0x1fa958u;

    // 0x1fa958: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fa958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fa95c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fa95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa960: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1fa960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa964: 0x0  nop
    ctx->pc = 0x1fa964u;
    // NOP
    // 0x1fa968: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA968u;
    {
        const bool branch_taken_0x1fa968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA968u;
        // 0x1fa96c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa968) {
            ctx->pc = 0x1FA974u;
            return;
        }
    }
    ctx->pc = 0x1FA970u;
    // 0x1fa970: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x1fa970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
    ctx->pc = 0x1fa974u;
}
