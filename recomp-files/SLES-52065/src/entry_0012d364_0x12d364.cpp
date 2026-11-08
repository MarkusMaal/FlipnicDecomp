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

// Function: entry_0012d364
// Address: 0x12d364 - 0x12d3a0
void entry_0012d364_0x12d364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d364_0x12d364");
#endif

    ctx->pc = 0x12d364u;

    // 0x12d364: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d364u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d368: 0x0  nop
    ctx->pc = 0x12d368u;
    // NOP
    // 0x12d36c: 0x46023836  c.le.s      $f7, $f2
    ctx->pc = 0x12d36cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d370: 0x0  nop
    ctx->pc = 0x12d370u;
    // NOP
    // 0x12d374: 0x450100f6  bc1t        . + 4 + (0xF6 << 2)
    ctx->pc = 0x12D374u;
    {
        const bool branch_taken_0x12d374 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d374) {
            ctx->pc = 0x12D750u;
            return;
        }
    }
    ctx->pc = 0x12D37Cu;
    // 0x12d37c: 0x3c04c3a0  lui         $a0, 0xC3A0
    ctx->pc = 0x12d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50080 << 16));
    // 0x12d380: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x12d380u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12d384: 0x0  nop
    ctx->pc = 0x12d384u;
    // NOP
    // 0x12d388: 0x46022836  c.le.s      $f5, $f2
    ctx->pc = 0x12d388u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d38c: 0x0  nop
    ctx->pc = 0x12d38cu;
    // NOP
    // 0x12d390: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12D390u;
    {
        const bool branch_taken_0x12d390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d390) {
            ctx->pc = 0x12D3A0u;
            return;
        }
    }
    ctx->pc = 0x12D398u;
    // 0x12d398: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x12D398u;
    {
        const bool branch_taken_0x12d398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D398u;
        // 0x12d39c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d398) {
            ctx->pc = 0x12D754u;
            return;
        }
    }
    ctx->pc = 0x12D3A0u;
}
